package com.tealeaf.util;

import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class CopyAssets {

    public static void copyJsSourcesAssets(Context context) {
        AssetManager assetManager = context.getAssets();
        String[] files = null;
        try {
            files = assetManager.list("");
        } catch (IOException e) {
            Log.e("tag", "Failed to get asset file list.", e);
        }
       // if (files != null) for (String filename : files) {
         //   if(filename.contains("resources") && filename.contains(".js")){
            InputStream in = null;
            OutputStream out = null;
            try {
                AssetFileDescriptor afd = assetManager.openFd("resources/native.js");
                in =  afd.createInputStream();
                File dir = new File(context.getFilesDir().getAbsolutePath(), "/resources/");
                dir.mkdirs();
                File outFile = new File(context.getFilesDir().getAbsolutePath(), "/resources/native.js");
                out = new FileOutputStream(outFile);
                copyFile(in, out);
            } catch (IOException e) {
                Log.e("tag", "Failed to copy asset file: native.js", e);
            } finally {
                if (in != null) {
                    try {
                        in.close();
                        in = null;
                    } catch (IOException e) {

                    }
                }
                if (out != null) {
                    try {
                        out.flush();
                        out.close();
                        out = null;
                    } catch (IOException e) {

                    }
                }
            }
     //   }
      //  }
    }

    public static void copyFile(InputStream in, OutputStream out) throws IOException {
        byte[] buffer = new byte[1024];
        int read;
        while((read = in.read(buffer)) != -1){
            out.write(buffer, 0, read);
        }
    }

}
