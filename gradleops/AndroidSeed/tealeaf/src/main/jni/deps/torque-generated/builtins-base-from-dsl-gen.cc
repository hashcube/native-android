#include "src/code-stub-assembler.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  TNode<Oddball> t0 = UncheckedCast<Oddball>(TheHoleConstant());
  USE(implicit_cast<TNode<Oddball>>(t0));
  return implicit_cast<TNode<Oddball>>(t0);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  TNode<Oddball> t1 = UncheckedCast<Oddball>(NullConstant());
  USE(implicit_cast<TNode<Oddball>>(t1));
  return implicit_cast<TNode<Oddball>>(t1);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  TNode<Oddball> t2 = UncheckedCast<Oddball>(UndefinedConstant());
  USE(implicit_cast<TNode<Oddball>>(t2));
  return implicit_cast<TNode<Oddball>>(t2);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  TNode<Oddball> t3 = UncheckedCast<Oddball>(TrueConstant());
  USE(implicit_cast<TNode<Oddball>>(t3));
  return implicit_cast<TNode<Oddball>>(t3);
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  TNode<Oddball> t4 = UncheckedCast<Oddball>(FalseConstant());
  USE(implicit_cast<TNode<Oddball>>(t4));
  return implicit_cast<TNode<Oddball>>(t4);
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kLengthString() {
  TNode<String> t5 = UncheckedCast<String>(LengthStringConstant());
  USE(implicit_cast<TNode<String>>(t5));
  return implicit_cast<TNode<String>>(t5);
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ElementsKindNotEqual(TNode<Int32T> p_k1, TNode<Int32T> p_k2) {
  TVARIABLE(BoolT, _return_0_impl);
  auto _return_0 = &_return_0_impl;
  USE(_return_0);
  Label label_macro_end_1388_impl(this, {_return_0}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1388 = &label_macro_end_1388_impl;
  USE(label_macro_end_1388);
  // ../../src/builtins/base.tq:257:47
  {
    // ../../src/builtins/base.tq:258:3
    TNode<BoolT> t6 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_k1), implicit_cast<TNode<Int32T>>(p_k2)));
    USE(implicit_cast<TNode<BoolT>>(t6));
    TNode<BoolT> t7 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t6)));
    USE(implicit_cast<TNode<BoolT>>(t7));
    *_return_0 = implicit_cast<TNode<BoolT>>(t7);
    Goto(label_macro_end_1388);
  }
  BIND(label_macro_end_1388);
  return implicit_cast<TNode<BoolT>>((*_return_0).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Min(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_1_impl);
  auto _return_1 = &_return_1_impl;
  USE(_return_1);
  Label label_macro_end_1389_impl(this, {_return_1}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1389 = &label_macro_end_1389_impl;
  USE(label_macro_end_1389);
  // ../../src/builtins/base.tq:336:41
  {
    // ../../src/builtins/base.tq:337:3
    TNode<Number> t8 = UncheckedCast<Number>(NumberMin(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t8));
    *_return_1 = implicit_cast<TNode<Number>>(t8);
    Goto(label_macro_end_1389);
  }
  BIND(label_macro_end_1389);
  return implicit_cast<TNode<Number>>((*_return_1).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Max(TNode<Number> p_x, TNode<Number> p_y) {
  TVARIABLE(Number, _return_2_impl);
  auto _return_2 = &_return_2_impl;
  USE(_return_2);
  Label label_macro_end_1390_impl(this, {_return_2}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1390 = &label_macro_end_1390_impl;
  USE(label_macro_end_1390);
  // ../../src/builtins/base.tq:339:41
  {
    // ../../src/builtins/base.tq:340:3
    TNode<Number> t9 = UncheckedCast<Number>(NumberMax(implicit_cast<TNode<Number>>(p_x), implicit_cast<TNode<Number>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t9));
    *_return_2 = implicit_cast<TNode<Number>>(t9);
    Goto(label_macro_end_1390);
  }
  BIND(label_macro_end_1390);
  return implicit_cast<TNode<Number>>((*_return_2).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATHeapObject(TNode<HeapObject> p_o, Label* label_CastError_0) {
  TVARIABLE(HeapObject, _return_3_impl);
  auto _return_3 = &_return_3_impl;
  USE(_return_3);
  Label label_macro_end_1391_impl(this, {_return_3}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1391 = &label_macro_end_1391_impl;
  USE(label_macro_end_1391);
  // ../../src/builtins/base.tq:385:22
  {
    // ../../src/builtins/base.tq:386:3
    *_return_3 = implicit_cast<TNode<HeapObject>>(p_o);
    Goto(label_macro_end_1391);
  }
  BIND(label_macro_end_1391);
  return implicit_cast<TNode<HeapObject>>((*_return_3).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_1) {
  TVARIABLE(FixedArray, _return_4_impl);
  auto _return_4 = &_return_4_impl;
  USE(_return_4);
  Label label_macro_end_1392_impl(this, {_return_4}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1392 = &label_macro_end_1392_impl;
  USE(label_macro_end_1392);
  // ../../src/builtins/base.tq:389:22
  {
    // ../../src/builtins/base.tq:390:3
    TNode<FixedArray> t10 = UncheckedCast<FixedArray>(HeapObjectToFixedArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_1));
    USE(implicit_cast<TNode<FixedArray>>(t10));
    *_return_4 = implicit_cast<TNode<FixedArray>>(t10);
    Goto(label_macro_end_1392);
  }
  BIND(label_macro_end_1392);
  return implicit_cast<TNode<FixedArray>>((*_return_4).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::CastHeapObject18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_2) {
  TVARIABLE(FixedDoubleArray, _return_5_impl);
  auto _return_5 = &_return_5_impl;
  USE(_return_5);
  Label label_macro_end_1393_impl(this, {_return_5}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1393 = &label_macro_end_1393_impl;
  USE(label_macro_end_1393);
  // ../../src/builtins/base.tq:393:22
  {
    // ../../src/builtins/base.tq:394:3
    TNode<FixedDoubleArray> t11 = UncheckedCast<FixedDoubleArray>(HeapObjectToFixedDoubleArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_2));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t11));
    *_return_5 = implicit_cast<TNode<FixedDoubleArray>>(t11);
    Goto(label_macro_end_1393);
  }
  BIND(label_macro_end_1393);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_5).value());
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATJSDataView(TNode<HeapObject> p_o, Label* label_CastError_3) {
  TVARIABLE(JSDataView, _return_6_impl);
  auto _return_6 = &_return_6_impl;
  USE(_return_6);
  Label label_macro_end_1394_impl(this, {_return_6}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1394 = &label_macro_end_1394_impl;
  USE(label_macro_end_1394);
  // ../../src/builtins/base.tq:397:22
  {
    // ../../src/builtins/base.tq:398:3
    TNode<JSDataView> t12 = UncheckedCast<JSDataView>(HeapObjectToJSDataView(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_3));
    USE(implicit_cast<TNode<JSDataView>>(t12));
    *_return_6 = implicit_cast<TNode<JSDataView>>(t12);
    Goto(label_macro_end_1394);
  }
  BIND(label_macro_end_1394);
  return implicit_cast<TNode<JSDataView>>((*_return_6).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<HeapObject> p_o, Label* label_CastError_4) {
  TVARIABLE(JSReceiver, _return_7_impl);
  auto _return_7 = &_return_7_impl;
  USE(_return_7);
  Label label_macro_end_1395_impl(this, {_return_7}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1395 = &label_macro_end_1395_impl;
  USE(label_macro_end_1395);
  // ../../src/builtins/base.tq:401:22
  {
    // ../../src/builtins/base.tq:402:3
    TNode<JSReceiver> t13 = UncheckedCast<JSReceiver>(HeapObjectToCallable(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_4));
    USE(implicit_cast<TNode<JSReceiver>>(t13));
    *_return_7 = implicit_cast<TNode<JSReceiver>>(t13);
    Goto(label_macro_end_1395);
  }
  BIND(label_macro_end_1395);
  return implicit_cast<TNode<JSReceiver>>((*_return_7).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_5) {
  TVARIABLE(JSArray, _return_8_impl);
  auto _return_8 = &_return_8_impl;
  USE(_return_8);
  Label label_macro_end_1396_impl(this, {_return_8}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1396 = &label_macro_end_1396_impl;
  USE(label_macro_end_1396);
  // ../../src/builtins/base.tq:405:22
  {
    // ../../src/builtins/base.tq:406:3
    TNode<JSArray> t14 = UncheckedCast<JSArray>(HeapObjectToJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_5));
    USE(implicit_cast<TNode<JSArray>>(t14));
    *_return_8 = implicit_cast<TNode<JSArray>>(t14);
    Goto(label_macro_end_1396);
  }
  BIND(label_macro_end_1396);
  return implicit_cast<TNode<JSArray>>((*_return_8).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast5ATSmi(TNode<Object> p_o, Label* label_CastError_6) {
  TVARIABLE(Smi, _return_9_impl);
  auto _return_9 = &_return_9_impl;
  USE(_return_9);
  Label label_macro_end_1397_impl(this, {_return_9}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1397 = &label_macro_end_1397_impl;
  USE(label_macro_end_1397);
  // ../../src/builtins/base.tq:422:22
  {
    // ../../src/builtins/base.tq:423:3
    TNode<Smi> t15 = UncheckedCast<Smi>(TaggedToSmi(implicit_cast<TNode<Object>>(p_o), label_CastError_6));
    USE(implicit_cast<TNode<Smi>>(t15));
    *_return_9 = implicit_cast<TNode<Smi>>(t15);
    Goto(label_macro_end_1397);
  }
  BIND(label_macro_end_1397);
  return implicit_cast<TNode<Smi>>((*_return_9).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_7) {
  TVARIABLE(Number, _return_10_impl);
  auto _return_10 = &_return_10_impl;
  USE(_return_10);
  Label label_macro_end_1398_impl(this, {_return_10}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1398 = &label_macro_end_1398_impl;
  USE(label_macro_end_1398);
  // ../../src/builtins/base.tq:426:22
  {
    // ../../src/builtins/base.tq:427:3
    TNode<Number> t16 = UncheckedCast<Number>(TaggedToNumber(implicit_cast<TNode<Object>>(p_o), label_CastError_7));
    USE(implicit_cast<TNode<Number>>(t16));
    *_return_10 = implicit_cast<TNode<Number>>(t16);
    Goto(label_macro_end_1398);
  }
  BIND(label_macro_end_1398);
  return implicit_cast<TNode<Number>>((*_return_10).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_11_impl);
  auto _return_11 = &_return_11_impl;
  USE(_return_11);
  Label label_macro_end_1399_impl(this, {_return_11}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1399 = &label_macro_end_1399_impl;
  USE(label_macro_end_1399);
  // ../../src/builtins/base.tq:468:51
  {
    // ../../src/builtins/base.tq:469:3
    TNode<IntPtrT> t17 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t17));
    *_return_11 = implicit_cast<TNode<IntPtrT>>(t17);
    Goto(label_macro_end_1399);
  }
  BIND(label_macro_end_1399);
  return implicit_cast<TNode<IntPtrT>>((*_return_11).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint31(int31_t p_i) {
  TVARIABLE(Int32T, _return_12_impl);
  auto _return_12 = &_return_12_impl;
  USE(_return_12);
  Label label_macro_end_1400_impl(this, {_return_12}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1400 = &label_macro_end_1400_impl;
  USE(label_macro_end_1400);
  // ../../src/builtins/base.tq:471:49
  {
    // ../../src/builtins/base.tq:472:3
    TNode<Int32T> t18 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t18));
    *_return_12 = implicit_cast<TNode<Int32T>>(t18);
    Goto(label_macro_end_1400);
  }
  BIND(label_macro_end_1400);
  return implicit_cast<TNode<Int32T>>((*_return_12).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint32(int31_t p_i) {
  TVARIABLE(Int32T, _return_13_impl);
  auto _return_13 = &_return_13_impl;
  USE(_return_13);
  Label label_macro_end_1401_impl(this, {_return_13}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1401 = &label_macro_end_1401_impl;
  USE(label_macro_end_1401);
  // ../../src/builtins/base.tq:474:49
  {
    // ../../src/builtins/base.tq:475:3
    TNode<Int32T> t19 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t19));
    *_return_13 = implicit_cast<TNode<Int32T>>(t19);
    Goto(label_macro_end_1401);
  }
  BIND(label_macro_end_1401);
  return implicit_cast<TNode<Int32T>>((*_return_13).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_14_impl);
  auto _return_14 = &_return_14_impl;
  USE(_return_14);
  Label label_macro_end_1402_impl(this, {_return_14}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1402 = &label_macro_end_1402_impl;
  USE(label_macro_end_1402);
  // ../../src/builtins/base.tq:477:51
  {
    // ../../src/builtins/base.tq:478:3
    TNode<Int32T> t20 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t20));
    TNode<Uint32T> t21 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t20)));
    USE(implicit_cast<TNode<Uint32T>>(t21));
    *_return_14 = implicit_cast<TNode<Uint32T>>(t21);
    Goto(label_macro_end_1402);
  }
  BIND(label_macro_end_1402);
  return implicit_cast<TNode<Uint32T>>((*_return_14).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_15_impl);
  auto _return_15 = &_return_15_impl;
  USE(_return_15);
  Label label_macro_end_1403_impl(this, {_return_15}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1403 = &label_macro_end_1403_impl;
  USE(label_macro_end_1403);
  // ../../src/builtins/base.tq:480:53
  {
    // ../../src/builtins/base.tq:481:3
    TNode<Uint32T> t22 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(p_i)));
    TNode<UintPtrT> t23 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(t22)));
    USE(implicit_cast<TNode<UintPtrT>>(t23));
    *_return_15 = implicit_cast<TNode<UintPtrT>>(t23);
    Goto(label_macro_end_1403);
  }
  BIND(label_macro_end_1403);
  return implicit_cast<TNode<UintPtrT>>((*_return_15).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_16_impl);
  auto _return_16 = &_return_16_impl;
  USE(_return_16);
  Label label_macro_end_1404_impl(this, {_return_16}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1404 = &label_macro_end_1404_impl;
  USE(label_macro_end_1404);
  // ../../src/builtins/base.tq:483:45
  {
    // ../../src/builtins/base.tq:484:3
    TNode<Smi> t24 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t24));
    *_return_16 = implicit_cast<TNode<Smi>>(t24);
    Goto(label_macro_end_1404);
  }
  BIND(label_macro_end_1404);
  return implicit_cast<TNode<Smi>>((*_return_16).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_17_impl);
  auto _return_17 = &_return_17_impl;
  USE(_return_17);
  Label label_macro_end_1405_impl(this, {_return_17}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1405 = &label_macro_end_1405_impl;
  USE(label_macro_end_1405);
  // ../../src/builtins/base.tq:486:51
  {
    // ../../src/builtins/base.tq:487:3
    TNode<Smi> t25 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t25));
    *_return_17 = implicit_cast<TNode<Number>>(t25);
    Goto(label_macro_end_1405);
  }
  BIND(label_macro_end_1405);
  return implicit_cast<TNode<Number>>((*_return_17).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_18_impl);
  auto _return_18 = &_return_18_impl;
  USE(_return_18);
  Label label_macro_end_1406_impl(this, {_return_18}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1406 = &label_macro_end_1406_impl;
  USE(label_macro_end_1406);
  // ../../src/builtins/base.tq:489:53
  {
    // ../../src/builtins/base.tq:490:3
    TNode<Float64T> t26 = UncheckedCast<Float64T>(Float64Constant(implicit_cast<int31_t>(p_i)));
    USE(implicit_cast<TNode<Float64T>>(t26));
    *_return_18 = implicit_cast<TNode<Float64T>>(t26);
    Goto(label_macro_end_1406);
  }
  BIND(label_macro_end_1406);
  return implicit_cast<TNode<Float64T>>((*_return_18).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr(int32_t p_i) {
  TVARIABLE(IntPtrT, _return_19_impl);
  auto _return_19 = &_return_19_impl;
  USE(_return_19);
  Label label_macro_end_1407_impl(this, {_return_19}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1407 = &label_macro_end_1407_impl;
  USE(label_macro_end_1407);
  // ../../src/builtins/base.tq:493:51
  {
    // ../../src/builtins/base.tq:494:3
    TNode<IntPtrT> t27 = UncheckedCast<IntPtrT>(IntPtrConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t27));
    *_return_19 = implicit_cast<TNode<IntPtrT>>(t27);
    Goto(label_macro_end_1407);
  }
  BIND(label_macro_end_1407);
  return implicit_cast<TNode<IntPtrT>>((*_return_19).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint32(int32_t p_i) {
  TVARIABLE(Int32T, _return_20_impl);
  auto _return_20 = &_return_20_impl;
  USE(_return_20);
  Label label_macro_end_1408_impl(this, {_return_20}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1408 = &label_macro_end_1408_impl;
  USE(label_macro_end_1408);
  // ../../src/builtins/base.tq:496:49
  {
    // ../../src/builtins/base.tq:497:3
    TNode<Int32T> t28 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t28));
    *_return_20 = implicit_cast<TNode<Int32T>>(t28);
    Goto(label_macro_end_1408);
  }
  BIND(label_macro_end_1408);
  return implicit_cast<TNode<Int32T>>((*_return_20).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  TVARIABLE(Number, _return_21_impl);
  auto _return_21 = &_return_21_impl;
  USE(_return_21);
  Label label_macro_end_1409_impl(this, {_return_21}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1409 = &label_macro_end_1409_impl;
  USE(label_macro_end_1409);
  // ../../src/builtins/base.tq:499:51
  {
    // ../../src/builtins/base.tq:500:3
    TNode<Number> t29 = UncheckedCast<Number>(NumberConstant(implicit_cast<int32_t>(p_i)));
    USE(implicit_cast<TNode<Number>>(t29));
    *_return_21 = implicit_cast<TNode<Number>>(t29);
    Goto(label_macro_end_1409);
  }
  BIND(label_macro_end_1409);
  return implicit_cast<TNode<Number>>((*_return_21).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  TVARIABLE(Number, _return_22_impl);
  auto _return_22 = &_return_22_impl;
  USE(_return_22);
  Label label_macro_end_1410_impl(this, {_return_22}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1410 = &label_macro_end_1410_impl;
  USE(label_macro_end_1410);
  // ../../src/builtins/base.tq:503:53
  {
    // ../../src/builtins/base.tq:504:3
    TNode<Number> t30 = UncheckedCast<Number>(NumberConstant(implicit_cast<double>(p_f)));
    USE(implicit_cast<TNode<Number>>(t30));
    *_return_22 = implicit_cast<TNode<Number>>(t30);
    Goto(label_macro_end_1410);
  }
  BIND(label_macro_end_1410);
  return implicit_cast<TNode<Number>>((*_return_22).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FromConstexpr6ATbool(bool p_b) {
  TVARIABLE(BoolT, _return_23_impl);
  auto _return_23 = &_return_23_impl;
  USE(_return_23);
  Label label_macro_end_1411_impl(this, {_return_23}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1411 = &label_macro_end_1411_impl;
  USE(label_macro_end_1411);
  // ../../src/builtins/base.tq:507:46
  {
    // ../../src/builtins/base.tq:508:3
    TNode<BoolT> t31 = UncheckedCast<BoolT>(BoolConstant(implicit_cast<bool>(p_b)));
    USE(implicit_cast<TNode<BoolT>>(t31));
    *_return_23 = implicit_cast<TNode<BoolT>>(t31);
    Goto(label_macro_end_1411);
  }
  BIND(label_macro_end_1411);
  return implicit_cast<TNode<BoolT>>((*_return_23).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATLanguageMode(LanguageMode p_b) {
  TVARIABLE(Smi, _return_24_impl);
  auto _return_24 = &_return_24_impl;
  USE(_return_24);
  Label label_macro_end_1412_impl(this, {_return_24}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1412 = &label_macro_end_1412_impl;
  USE(label_macro_end_1412);
  // ../../src/builtins/base.tq:511:70
  {
    // ../../src/builtins/base.tq:512:3
    TNode<Smi> t32 = UncheckedCast<Smi>(LanguageModeConstant(implicit_cast<LanguageMode>(p_b)));
    USE(implicit_cast<TNode<Smi>>(t32));
    *_return_24 = implicit_cast<TNode<Smi>>(t32);
    Goto(label_macro_end_1412);
  }
  BIND(label_macro_end_1412);
  return implicit_cast<TNode<Smi>>((*_return_24).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATElementsKind(ElementsKind p_e) {
  TVARIABLE(Int32T, _return_25_impl);
  auto _return_25 = &_return_25_impl;
  USE(_return_25);
  Label label_macro_end_1413_impl(this, {_return_25}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1413 = &label_macro_end_1413_impl;
  USE(label_macro_end_1413);
  // ../../src/builtins/base.tq:515:70
  {
    // ../../src/builtins/base.tq:516:3
    TNode<Int32T> t33 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<ElementsKind>(p_e)));
    USE(implicit_cast<TNode<Int32T>>(t33));
    *_return_25 = implicit_cast<TNode<Int32T>>(t33);
    Goto(label_macro_end_1413);
  }
  BIND(label_macro_end_1413);
  return implicit_cast<TNode<Int32T>>((*_return_25).value());
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATString(const char* p_s) {
  TVARIABLE(String, _return_26_impl);
  auto _return_26 = &_return_26_impl;
  USE(_return_26);
  Label label_macro_end_1414_impl(this, {_return_26}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1414 = &label_macro_end_1414_impl;
  USE(label_macro_end_1414);
  // ../../src/builtins/base.tq:519:52
  {
    // ../../src/builtins/base.tq:520:3
    TNode<String> t34 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t34));
    *_return_26 = implicit_cast<TNode<String>>(t34);
    Goto(label_macro_end_1414);
  }
  BIND(label_macro_end_1414);
  return implicit_cast<TNode<String>>((*_return_26).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  TVARIABLE(Object, _return_27_impl);
  auto _return_27 = &_return_27_impl;
  USE(_return_27);
  Label label_macro_end_1415_impl(this, {_return_27}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1415 = &label_macro_end_1415_impl;
  USE(label_macro_end_1415);
  // ../../src/builtins/base.tq:522:52
  {
    // ../../src/builtins/base.tq:523:3
    TNode<String> t35 = UncheckedCast<String>(StringConstant(implicit_cast<const char*>(p_s)));
    USE(implicit_cast<TNode<String>>(t35));
    *_return_27 = implicit_cast<TNode<Object>>(t35);
    Goto(label_macro_end_1415);
  }
  BIND(label_macro_end_1415);
  return implicit_cast<TNode<Object>>((*_return_27).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<Int32T> p_elementsKind) {
  TVARIABLE(Int32T, _return_28_impl);
  auto _return_28 = &_return_28_impl;
  USE(_return_28);
  Label label_macro_end_1416_impl(this, {_return_28}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1416 = &label_macro_end_1416_impl;
  USE(label_macro_end_1416);
  // ../../src/builtins/base.tq:532:51
  {
    // ../../src/builtins/base.tq:533:3
    TNode<Int32T> t36 = UncheckedCast<Int32T>(ConvertElementsKindToInt(implicit_cast<TNode<Int32T>>(p_elementsKind)));
    USE(implicit_cast<TNode<Int32T>>(t36));
    *_return_28 = implicit_cast<TNode<Int32T>>(t36);
    Goto(label_macro_end_1416);
  }
  BIND(label_macro_end_1416);
  return implicit_cast<TNode<Int32T>>((*_return_28).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Number, _return_29_impl);
  auto _return_29 = &_return_29_impl;
  USE(_return_29);
  Label label_macro_end_1417_impl(this, {_return_29}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1417 = &label_macro_end_1417_impl;
  USE(label_macro_end_1417);
  // ../../src/builtins/base.tq:537:35
  {
    // ../../src/builtins/base.tq:538:3
    TNode<Number> t37 = UncheckedCast<Number>(ChangeInt32ToTagged(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Number>>(t37));
    *_return_29 = implicit_cast<TNode<Number>>(t37);
    Goto(label_macro_end_1417);
  }
  BIND(label_macro_end_1417);
  return implicit_cast<TNode<Number>>((*_return_29).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<Int32T> p_i) {
  TVARIABLE(IntPtrT, _return_30_impl);
  auto _return_30 = &_return_30_impl;
  USE(_return_30);
  Label label_macro_end_1418_impl(this, {_return_30}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1418 = &label_macro_end_1418_impl;
  USE(label_macro_end_1418);
  // ../../src/builtins/base.tq:540:35
  {
    // ../../src/builtins/base.tq:541:3
    TNode<IntPtrT> t38 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<IntPtrT>>(t38));
    *_return_30 = implicit_cast<TNode<IntPtrT>>(t38);
    Goto(label_macro_end_1418);
  }
  BIND(label_macro_end_1418);
  return implicit_cast<TNode<IntPtrT>>((*_return_30).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Smi, _return_31_impl);
  auto _return_31 = &_return_31_impl;
  USE(_return_31);
  Label label_macro_end_1419_impl(this, {_return_31}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1419 = &label_macro_end_1419_impl;
  USE(label_macro_end_1419);
  // ../../src/builtins/base.tq:543:29
  {
    // ../../src/builtins/base.tq:544:3
    TNode<Smi> t39 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t39));
    *_return_31 = implicit_cast<TNode<Smi>>(t39);
    Goto(label_macro_end_1419);
  }
  BIND(label_macro_end_1419);
  return implicit_cast<TNode<Smi>>((*_return_31).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Number, _return_32_impl);
  auto _return_32 = &_return_32_impl;
  USE(_return_32);
  Label label_macro_end_1420_impl(this, {_return_32}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1420 = &label_macro_end_1420_impl;
  USE(label_macro_end_1420);
  // ../../src/builtins/base.tq:547:37
  {
    // ../../src/builtins/base.tq:548:3
    TNode<Number> t40 = UncheckedCast<Number>(ChangeUint32ToTagged(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Number>>(t40));
    *_return_32 = implicit_cast<TNode<Number>>(t40);
    Goto(label_macro_end_1420);
  }
  BIND(label_macro_end_1420);
  return implicit_cast<TNode<Number>>((*_return_32).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Smi, _return_33_impl);
  auto _return_33 = &_return_33_impl;
  USE(_return_33);
  Label label_macro_end_1421_impl(this, {_return_33}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1421 = &label_macro_end_1421_impl;
  USE(label_macro_end_1421);
  // ../../src/builtins/base.tq:550:31
  {
    // ../../src/builtins/base.tq:551:3
    TNode<Int32T> t41 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<Int32T>>(t41));
    TNode<Smi> t42 = UncheckedCast<Smi>(SmiFromInt32(implicit_cast<TNode<Int32T>>(t41)));
    USE(implicit_cast<TNode<Smi>>(t42));
    *_return_33 = implicit_cast<TNode<Smi>>(t42);
    Goto(label_macro_end_1421);
  }
  BIND(label_macro_end_1421);
  return implicit_cast<TNode<Smi>>((*_return_33).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<Uint32T> p_ui) {
  TVARIABLE(UintPtrT, _return_34_impl);
  auto _return_34 = &_return_34_impl;
  USE(_return_34);
  Label label_macro_end_1422_impl(this, {_return_34}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1422 = &label_macro_end_1422_impl;
  USE(label_macro_end_1422);
  // ../../src/builtins/base.tq:553:39
  {
    // ../../src/builtins/base.tq:554:3
    TNode<UintPtrT> t43 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(implicit_cast<TNode<Uint32T>>(p_ui)));
    USE(implicit_cast<TNode<UintPtrT>>(t43));
    *_return_34 = implicit_cast<TNode<UintPtrT>>(t43);
    Goto(label_macro_end_1422);
  }
  BIND(label_macro_end_1422);
  return implicit_cast<TNode<UintPtrT>>((*_return_34).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<IntPtrT> p_i) {
  TVARIABLE(Int32T, _return_35_impl);
  auto _return_35 = &_return_35_impl;
  USE(_return_35);
  Label label_macro_end_1423_impl(this, {_return_35}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1423 = &label_macro_end_1423_impl;
  USE(label_macro_end_1423);
  // ../../src/builtins/base.tq:557:34
  {
    // ../../src/builtins/base.tq:558:3
    TNode<Int32T> t44 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Int32T>>(t44));
    *_return_35 = implicit_cast<TNode<Int32T>>(t44);
    Goto(label_macro_end_1423);
  }
  BIND(label_macro_end_1423);
  return implicit_cast<TNode<Int32T>>((*_return_35).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<IntPtrT> p_i) {
  TVARIABLE(Smi, _return_36_impl);
  auto _return_36 = &_return_36_impl;
  USE(_return_36);
  Label label_macro_end_1424_impl(this, {_return_36}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1424 = &label_macro_end_1424_impl;
  USE(label_macro_end_1424);
  // ../../src/builtins/base.tq:560:30
  {
    // ../../src/builtins/base.tq:561:3
    TNode<Smi> t45 = UncheckedCast<Smi>(SmiTag(implicit_cast<TNode<IntPtrT>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t45));
    *_return_36 = implicit_cast<TNode<Smi>>(t45);
    Goto(label_macro_end_1424);
  }
  BIND(label_macro_end_1424);
  return implicit_cast<TNode<Smi>>((*_return_36).value());
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint32(TNode<UintPtrT> p_ui) {
  TVARIABLE(Uint32T, _return_37_impl);
  auto _return_37 = &_return_37_impl;
  USE(_return_37);
  Label label_macro_end_1425_impl(this, {_return_37}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1425 = &label_macro_end_1425_impl;
  USE(label_macro_end_1425);
  // ../../src/builtins/base.tq:564:38
  {
    // ../../src/builtins/base.tq:565:3
    TNode<IntPtrT> t46 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(p_ui)));
    USE(implicit_cast<TNode<IntPtrT>>(t46));
    TNode<Int32T> t47 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(implicit_cast<TNode<IntPtrT>>(t46)));
    USE(implicit_cast<TNode<Int32T>>(t47));
    TNode<Uint32T> t48 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t47)));
    USE(implicit_cast<TNode<Uint32T>>(t48));
    *_return_37 = implicit_cast<TNode<Uint32T>>(t48);
    Goto(label_macro_end_1425);
  }
  BIND(label_macro_end_1425);
  return implicit_cast<TNode<Uint32T>>((*_return_37).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<Smi> p_s) {
  TVARIABLE(IntPtrT, _return_38_impl);
  auto _return_38 = &_return_38_impl;
  USE(_return_38);
  Label label_macro_end_1426_impl(this, {_return_38}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1426 = &label_macro_end_1426_impl;
  USE(label_macro_end_1426);
  // ../../src/builtins/base.tq:568:33
  {
    // ../../src/builtins/base.tq:569:3
    TNode<IntPtrT> t49 = UncheckedCast<IntPtrT>(SmiUntag(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<IntPtrT>>(t49));
    *_return_38 = implicit_cast<TNode<IntPtrT>>(t49);
    Goto(label_macro_end_1426);
  }
  BIND(label_macro_end_1426);
  return implicit_cast<TNode<IntPtrT>>((*_return_38).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<Smi> p_s) {
  TVARIABLE(Int32T, _return_39_impl);
  auto _return_39 = &_return_39_impl;
  USE(_return_39);
  Label label_macro_end_1427_impl(this, {_return_39}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1427 = &label_macro_end_1427_impl;
  USE(label_macro_end_1427);
  // ../../src/builtins/base.tq:571:31
  {
    // ../../src/builtins/base.tq:572:3
    TNode<Int32T> t50 = UncheckedCast<Int32T>(SmiToInt32(implicit_cast<TNode<Smi>>(p_s)));
    USE(implicit_cast<TNode<Int32T>>(t50));
    *_return_39 = implicit_cast<TNode<Int32T>>(t50);
    Goto(label_macro_end_1427);
  }
  BIND(label_macro_end_1427);
  return implicit_cast<TNode<Int32T>>((*_return_39).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<HeapNumber> p_h) {
  TVARIABLE(Float64T, _return_40_impl);
  auto _return_40 = &_return_40_impl;
  USE(_return_40);
  Label label_macro_end_1428_impl(this, {_return_40}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1428 = &label_macro_end_1428_impl;
  USE(label_macro_end_1428);
  // ../../src/builtins/base.tq:575:42
  {
    // ../../src/builtins/base.tq:576:3
    TNode<Float64T> t51 = UncheckedCast<Float64T>(LoadHeapNumberValue(implicit_cast<TNode<HeapNumber>>(p_h)));
    USE(implicit_cast<TNode<Float64T>>(t51));
    *_return_40 = implicit_cast<TNode<Float64T>>(t51);
    Goto(label_macro_end_1428);
  }
  BIND(label_macro_end_1428);
  return implicit_cast<TNode<Float64T>>((*_return_40).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<Number> p_n) {
  TVARIABLE(Float64T, _return_41_impl);
  auto _return_41 = &_return_41_impl;
  USE(_return_41);
  Label label_macro_end_1429_impl(this, {_return_41}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1429 = &label_macro_end_1429_impl;
  USE(label_macro_end_1429);
  // ../../src/builtins/base.tq:579:38
  {
    // ../../src/builtins/base.tq:580:3
    TNode<Float64T> t52 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<Float64T>>(t52));
    *_return_41 = implicit_cast<TNode<Float64T>>(t52);
    Goto(label_macro_end_1429);
  }
  BIND(label_macro_end_1429);
  return implicit_cast<TNode<Float64T>>((*_return_41).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<Float32T> p_f) {
  TVARIABLE(Float64T, _return_42_impl);
  auto _return_42 = &_return_42_impl;
  USE(_return_42);
  Label label_macro_end_1430_impl(this, {_return_42}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1430 = &label_macro_end_1430_impl;
  USE(label_macro_end_1430);
  // ../../src/builtins/base.tq:583:39
  {
    // ../../src/builtins/base.tq:584:3
    TNode<Float64T> t53 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(implicit_cast<TNode<Float32T>>(p_f)));
    USE(implicit_cast<TNode<Float64T>>(t53));
    *_return_42 = implicit_cast<TNode<Float64T>>(t53);
    Goto(label_macro_end_1430);
  }
  BIND(label_macro_end_1430);
  return implicit_cast<TNode<Float64T>>((*_return_42).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  TVARIABLE(Number, _return_43_impl);
  auto _return_43 = &_return_43_impl;
  USE(_return_43);
  Label label_macro_end_1431_impl(this, {_return_43}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1431 = &label_macro_end_1431_impl;
  USE(label_macro_end_1431);
  // ../../src/builtins/base.tq:587:37
  {
    // ../../src/builtins/base.tq:588:3
    TNode<HeapNumber> t54 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<HeapNumber>>(t54));
    *_return_43 = implicit_cast<TNode<Number>>(t54);
    Goto(label_macro_end_1431);
  }
  BIND(label_macro_end_1431);
  return implicit_cast<TNode<Number>>((*_return_43).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<UintPtrT> p_ui) {
  TVARIABLE(Float64T, _return_44_impl);
  auto _return_44 = &_return_44_impl;
  USE(_return_44);
  Label label_macro_end_1432_impl(this, {_return_44}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1432 = &label_macro_end_1432_impl;
  USE(label_macro_end_1432);
  // ../../src/builtins/base.tq:590:40
  {
    // ../../src/builtins/base.tq:591:3
    TNode<Float64T> t55 = UncheckedCast<Float64T>(ChangeUintPtrToFloat64(implicit_cast<TNode<UintPtrT>>(p_ui)));
    USE(implicit_cast<TNode<Float64T>>(t55));
    *_return_44 = implicit_cast<TNode<Float64T>>(t55);
    Goto(label_macro_end_1432);
  }
  BIND(label_macro_end_1432);
  return implicit_cast<TNode<Float64T>>((*_return_44).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<UintPtrT> p_ui) {
  TVARIABLE(Number, _return_45_impl);
  auto _return_45 = &_return_45_impl;
  USE(_return_45);
  Label label_macro_end_1433_impl(this, {_return_45}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1433 = &label_macro_end_1433_impl;
  USE(label_macro_end_1433);
  // ../../src/builtins/base.tq:593:38
  {
    // ../../src/builtins/base.tq:594:3
    TNode<Number> t56 = UncheckedCast<Number>(ChangeUintPtrToTagged(implicit_cast<TNode<UintPtrT>>(p_ui)));
    USE(implicit_cast<TNode<Number>>(t56));
    *_return_45 = implicit_cast<TNode<Number>>(t56);
    Goto(label_macro_end_1433);
  }
  BIND(label_macro_end_1433);
  return implicit_cast<TNode<Number>>((*_return_45).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<Float64T> p_d) {
  TVARIABLE(UintPtrT, _return_46_impl);
  auto _return_46 = &_return_46_impl;
  USE(_return_46);
  Label label_macro_end_1434_impl(this, {_return_46}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1434 = &label_macro_end_1434_impl;
  USE(label_macro_end_1434);
  // ../../src/builtins/base.tq:596:39
  {
    // ../../src/builtins/base.tq:597:3
    TNode<UintPtrT> t57 = UncheckedCast<UintPtrT>(ChangeFloat64ToUintPtr(implicit_cast<TNode<Float64T>>(p_d)));
    USE(implicit_cast<TNode<UintPtrT>>(t57));
    *_return_46 = implicit_cast<TNode<UintPtrT>>(t57);
    Goto(label_macro_end_1434);
  }
  BIND(label_macro_end_1434);
  return implicit_cast<TNode<UintPtrT>>((*_return_46).value());
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(UintPtrT, _return_47_impl);
  auto _return_47 = &_return_47_impl;
  USE(_return_47);
  Label label_macro_end_1435_impl(this, {_return_47}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1435 = &label_macro_end_1435_impl;
  USE(label_macro_end_1435);
  // ../../src/builtins/base.tq:600:38
  {
    // ../../src/builtins/base.tq:601:3
    TNode<UintPtrT> t58 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<UintPtrT>>(t58));
    *_return_47 = implicit_cast<TNode<UintPtrT>>(t58);
    Goto(label_macro_end_1435);
  }
  BIND(label_macro_end_1435);
  return implicit_cast<TNode<UintPtrT>>((*_return_47).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(IntPtrT, _return_48_impl);
  auto _return_48 = &_return_48_impl;
  USE(_return_48);
  Label label_macro_end_1436_impl(this, {_return_48}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1436 = &label_macro_end_1436_impl;
  USE(label_macro_end_1436);
  // ../../src/builtins/base.tq:603:36
  {
    // ../../src/builtins/base.tq:604:3
    TNode<IntPtrT> t59 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<RawPtrT>>(p_r)));
    USE(implicit_cast<TNode<IntPtrT>>(t59));
    *_return_48 = implicit_cast<TNode<IntPtrT>>(t59);
    Goto(label_macro_end_1436);
  }
  BIND(label_macro_end_1436);
  return implicit_cast<TNode<IntPtrT>>((*_return_48).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(TNode<Number> p_n) {
  TVARIABLE(HeapNumber, _return_49_impl);
  auto _return_49 = &_return_49_impl;
  USE(_return_49);
  Label label_macro_end_1437_impl(this, {_return_49}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1437 = &label_macro_end_1437_impl;
  USE(label_macro_end_1437);
  // ../../src/builtins/base.tq:624:47
  {
    // ../../src/builtins/base.tq:625:3
    TNode<HeapNumber> t60 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(implicit_cast<TNode<Number>>(p_n)));
    USE(implicit_cast<TNode<HeapNumber>>(t60));
    *_return_49 = implicit_cast<TNode<HeapNumber>>(t60);
    Goto(label_macro_end_1437);
  }
  BIND(label_macro_end_1437);
  return implicit_cast<TNode<HeapNumber>>((*_return_49).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Object, _return_50_impl);
  auto _return_50 = &_return_50_impl;
  USE(_return_50);
  Label label_macro_end_1438_impl(this, {_return_50}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1438 = &label_macro_end_1438_impl;
  USE(label_macro_end_1438);
  // ../../src/builtins/base.tq:628:39
  {
    // ../../src/builtins/base.tq:629:3
    *_return_50 = implicit_cast<TNode<Object>>(p_o);
    Goto(label_macro_end_1438);
  }
  BIND(label_macro_end_1438);
  return implicit_cast<TNode<Object>>((*_return_50).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATFixedArray(TNode<Object> p_o) {
  TVARIABLE(FixedArray, _return_51_impl);
  auto _return_51 = &_return_51_impl;
  USE(_return_51);
  Label label_macro_end_1439_impl(this, {_return_51}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1439 = &label_macro_end_1439_impl;
  USE(label_macro_end_1439);
  // ../../src/builtins/base.tq:631:47
  {
    // ../../src/builtins/base.tq:632:3
    TNode<FixedArray> t61 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArray>>(t61));
    *_return_51 = implicit_cast<TNode<FixedArray>>(t61);
    Goto(label_macro_end_1439);
  }
  BIND(label_macro_end_1439);
  return implicit_cast<TNode<FixedArray>>((*_return_51).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATFixedDoubleArray(TNode<Object> p_o) {
  TVARIABLE(FixedDoubleArray, _return_52_impl);
  auto _return_52 = &_return_52_impl;
  USE(_return_52);
  Label label_macro_end_1440_impl(this, {_return_52}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1440 = &label_macro_end_1440_impl;
  USE(label_macro_end_1440);
  // ../../src/builtins/base.tq:634:59
  {
    // ../../src/builtins/base.tq:635:3
    TNode<FixedDoubleArray> t62 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t62));
    *_return_52 = implicit_cast<TNode<FixedDoubleArray>>(t62);
    Goto(label_macro_end_1440);
  }
  BIND(label_macro_end_1440);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_52).value());
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(TNode<Object> p_o) {
  TVARIABLE(HeapNumber, _return_53_impl);
  auto _return_53 = &_return_53_impl;
  USE(_return_53);
  Label label_macro_end_1441_impl(this, {_return_53}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1441 = &label_macro_end_1441_impl;
  USE(label_macro_end_1441);
  // ../../src/builtins/base.tq:637:47
  {
    // ../../src/builtins/base.tq:638:3
    TNode<HeapNumber> t63 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapNumber>>(t63));
    *_return_53 = implicit_cast<TNode<HeapNumber>>(t63);
    Goto(label_macro_end_1441);
  }
  BIND(label_macro_end_1441);
  return implicit_cast<TNode<HeapNumber>>((*_return_53).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_54_impl);
  auto _return_54 = &_return_54_impl;
  USE(_return_54);
  Label label_macro_end_1442_impl(this, {_return_54}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1442 = &label_macro_end_1442_impl;
  USE(label_macro_end_1442);
  // ../../src/builtins/base.tq:640:43
  {
    // ../../src/builtins/base.tq:641:3
    TNode<JSReceiver> t64 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t64));
    *_return_54 = implicit_cast<TNode<JSReceiver>>(t64);
    Goto(label_macro_end_1442);
  }
  BIND(label_macro_end_1442);
  return implicit_cast<TNode<JSReceiver>>((*_return_54).value());
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Smi, _return_55_impl);
  auto _return_55 = &_return_55_impl;
  USE(_return_55);
  Label label_macro_end_1443_impl(this, {_return_55}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1443 = &label_macro_end_1443_impl;
  USE(label_macro_end_1443);
  // ../../src/builtins/base.tq:643:33
  {
    // ../../src/builtins/base.tq:644:3
    TNode<Smi> t65 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Smi>>(t65));
    *_return_55 = implicit_cast<TNode<Smi>>(t65);
    Goto(label_macro_end_1443);
  }
  BIND(label_macro_end_1443);
  return implicit_cast<TNode<Smi>>((*_return_55).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Number, _return_56_impl);
  auto _return_56 = &_return_56_impl;
  USE(_return_56);
  Label label_macro_end_1444_impl(this, {_return_56}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1444 = &label_macro_end_1444_impl;
  USE(label_macro_end_1444);
  // ../../src/builtins/base.tq:646:39
  {
    // ../../src/builtins/base.tq:647:3
    TNode<Number> t66 = UncheckedCast<Number>(UnsafeCastObjectToNumber(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Number>>(t66));
    *_return_56 = implicit_cast<TNode<Number>>(t66);
    Goto(label_macro_end_1444);
  }
  BIND(label_macro_end_1444);
  return implicit_cast<TNode<Number>>((*_return_56).value());
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapObject(TNode<Object> p_o) {
  TVARIABLE(HeapObject, _return_57_impl);
  auto _return_57 = &_return_57_impl;
  USE(_return_57);
  Label label_macro_end_1445_impl(this, {_return_57}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1445 = &label_macro_end_1445_impl;
  USE(label_macro_end_1445);
  // ../../src/builtins/base.tq:649:47
  {
    // ../../src/builtins/base.tq:650:3
    TNode<HeapObject> t67 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<HeapObject>>(t67));
    *_return_57 = implicit_cast<TNode<HeapObject>>(t67);
    Goto(label_macro_end_1445);
  }
  BIND(label_macro_end_1445);
  return implicit_cast<TNode<HeapObject>>((*_return_57).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATJSArray(TNode<Object> p_o) {
  TVARIABLE(JSArray, _return_58_impl);
  auto _return_58 = &_return_58_impl;
  USE(_return_58);
  Label label_macro_end_1446_impl(this, {_return_58}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1446 = &label_macro_end_1446_impl;
  USE(label_macro_end_1446);
  // ../../src/builtins/base.tq:652:41
  {
    // ../../src/builtins/base.tq:653:3
    TNode<JSArray> t68 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSArray>>(t68));
    *_return_58 = implicit_cast<TNode<JSArray>>(t68);
    Goto(label_macro_end_1446);
  }
  BIND(label_macro_end_1446);
  return implicit_cast<TNode<JSArray>>((*_return_58).value());
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedTypedArrayBase, _return_59_impl);
  auto _return_59 = &_return_59_impl;
  USE(_return_59);
  Label label_macro_end_1447_impl(this, {_return_59}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1447 = &label_macro_end_1447_impl;
  USE(label_macro_end_1447);
  // ../../src/builtins/base.tq:655:65
  {
    // ../../src/builtins/base.tq:656:3
    TNode<FixedTypedArrayBase> t69 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t69));
    *_return_59 = implicit_cast<TNode<FixedTypedArrayBase>>(t69);
    Goto(label_macro_end_1447);
  }
  BIND(label_macro_end_1447);
  return implicit_cast<TNode<FixedTypedArrayBase>>((*_return_59).value());
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATNumberDictionary(TNode<Object> p_o) {
  TVARIABLE(NumberDictionary, _return_60_impl);
  auto _return_60 = &_return_60_impl;
  USE(_return_60);
  Label label_macro_end_1448_impl(this, {_return_60}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1448 = &label_macro_end_1448_impl;
  USE(label_macro_end_1448);
  // ../../src/builtins/base.tq:658:59
  {
    // ../../src/builtins/base.tq:659:3
    TNode<NumberDictionary> t70 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<NumberDictionary>>(t70));
    *_return_60 = implicit_cast<TNode<NumberDictionary>>(t70);
    Goto(label_macro_end_1448);
  }
  BIND(label_macro_end_1448);
  return implicit_cast<TNode<NumberDictionary>>((*_return_60).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATJSReceiver(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_61_impl);
  auto _return_61 = &_return_61_impl;
  USE(_return_61);
  Label label_macro_end_1449_impl(this, {_return_61}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1449 = &label_macro_end_1449_impl;
  USE(label_macro_end_1449);
  // ../../src/builtins/base.tq:661:47
  {
    // ../../src/builtins/base.tq:662:3
    TNode<JSReceiver> t71 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSReceiver>>(t71));
    *_return_61 = implicit_cast<TNode<JSReceiver>>(t71);
    Goto(label_macro_end_1449);
  }
  BIND(label_macro_end_1449);
  return implicit_cast<TNode<JSReceiver>>((*_return_61).value());
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::UnsafeCast10ATJSObject(TNode<Object> p_o) {
  TVARIABLE(JSObject, _return_62_impl);
  auto _return_62 = &_return_62_impl;
  USE(_return_62);
  Label label_macro_end_1450_impl(this, {_return_62}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1450 = &label_macro_end_1450_impl;
  USE(label_macro_end_1450);
  // ../../src/builtins/base.tq:664:43
  {
    // ../../src/builtins/base.tq:665:3
    TNode<JSObject> t72 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<JSObject>>(t72));
    *_return_62 = implicit_cast<TNode<JSObject>>(t72);
    Goto(label_macro_end_1450);
  }
  BIND(label_macro_end_1450);
  return implicit_cast<TNode<JSObject>>((*_return_62).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATMap(TNode<Object> p_o) {
  TVARIABLE(Map, _return_63_impl);
  auto _return_63 = &_return_63_impl;
  USE(_return_63);
  Label label_macro_end_1451_impl(this, {_return_63}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1451 = &label_macro_end_1451_impl;
  USE(label_macro_end_1451);
  // ../../src/builtins/base.tq:667:33
  {
    // ../../src/builtins/base.tq:668:3
    TNode<Map> t73 = UncheckedCast<Map>(UnsafeCastObjectToMap(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Map>>(t73));
    *_return_63 = implicit_cast<TNode<Map>>(t73);
    Goto(label_macro_end_1451);
  }
  BIND(label_macro_end_1451);
  return implicit_cast<TNode<Map>>((*_return_63).value());
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast16ATFixedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedArrayBase, _return_64_impl);
  auto _return_64 = &_return_64_impl;
  USE(_return_64);
  Label label_macro_end_1452_impl(this, {_return_64}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1452 = &label_macro_end_1452_impl;
  USE(label_macro_end_1452);
  // ../../src/builtins/base.tq:670:55
  {
    // ../../src/builtins/base.tq:671:3
    TNode<FixedArrayBase> t74 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t74));
    *_return_64 = implicit_cast<TNode<FixedArrayBase>>(t74);
    Goto(label_macro_end_1452);
  }
  BIND(label_macro_end_1452);
  return implicit_cast<TNode<FixedArrayBase>>((*_return_64).value());
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  TNode<Object> t75 = UncheckedCast<Object>(LoadRoot(implicit_cast<RootIndex>(RootIndex::kFixedCOWArrayMap)));
  USE(implicit_cast<TNode<Object>>(t75));
  TNode<Map> t76 = UncheckedCast<Map>(UnsafeCast5ATMap(implicit_cast<TNode<Object>>(t75)));
  USE(implicit_cast<TNode<Map>>(t76));
  return implicit_cast<TNode<Map>>(t76);
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  TNode<Object> t77 = UncheckedCast<Object>(LoadRoot(implicit_cast<RootIndex>(RootIndex::kEmptyFixedArray)));
  USE(implicit_cast<TNode<Object>>(t77));
  TNode<FixedArrayBase> t78 = UncheckedCast<FixedArrayBase>(UnsafeCast16ATFixedArrayBase(implicit_cast<TNode<Object>>(t77)));
  USE(implicit_cast<TNode<FixedArrayBase>>(t78));
  return implicit_cast<TNode<FixedArrayBase>>(t78);
}

void BaseBuiltinsFromDSLAssembler::EnsureFastJSArray(TNode<Context> p_context, TNode<Object> p_object, Label* label_Bailout_8) {
  Label label_macro_end_1453_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1453 = &label_macro_end_1453_impl;
  USE(label_macro_end_1453);
  // ../../src/builtins/base.tq:683:74
  {
    // ../../src/builtins/base.tq:684:3
    {
      Label label__True_9_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_9 = &label__True_9_impl;
      USE(label__True_9);
      Label label__False_10_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_10 = &label__False_10_impl;
      USE(label__False_10);
      BranchIfNotFastJSArray(implicit_cast<TNode<Object>>(p_object), implicit_cast<TNode<Context>>(p_context), label__True_9, label__False_10);
      if (label__True_9->is_used())
      {
        BIND(label__True_9);
        // ../../src/builtins/base.tq:684:48
        Goto(label_Bailout_8);
      }
      BIND(label__False_10);
    }
  }
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayNumber(TNode<FixedDoubleArray> p_a, TNode<Smi> p_index, TNode<Number> p_value) {
  Label label_macro_end_1454_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1454 = &label_macro_end_1454_impl;
  USE(label_macro_end_1454);
  // ../../src/builtins/base.tq:722:59
  {
    // ../../src/builtins/base.tq:723:3
    TNode<Float64T> t79 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<Number>>(p_value)));
    USE(implicit_cast<TNode<Float64T>>(t79));
    StoreFixedDoubleArrayElementSmi(implicit_cast<TNode<FixedDoubleArray>>(p_a), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>(t79));
  }
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_1455_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1455 = &label_macro_end_1455_impl;
  USE(label_macro_end_1455);
  // ../../src/builtins/base.tq:737:58
  {
    // ../../src/builtins/base.tq:738:3
    StoreFixedDoubleArrayElement(implicit_cast<TNode<FixedDoubleArray>>(p_array), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Float64T>>(p_value), implicit_cast<ParameterMode>(SMI_PARAMETERS));
  }
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowDoubleElements(TNode<Int32T> p_kind) {
  TVARIABLE(Int32T, _return_65_impl);
  auto _return_65 = &_return_65_impl;
  USE(_return_65);
  Label label_macro_end_1456_impl(this, {_return_65}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1456 = &label_macro_end_1456_impl;
  USE(label_macro_end_1456);
  // ../../src/builtins/base.tq:752:61
  {
    // ../../src/builtins/base.tq:753:3
    {
      Label label__True_11_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_11 = &label__True_11_impl;
      USE(label__True_11);
      Label label__False_12_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_12 = &label__False_12_impl;
      USE(label__False_12);
      Label label_if_done_label_562_1457_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_562_1457 = &label_if_done_label_562_1457_impl;
      USE(label_if_done_label_562_1457);
      TNode<Int32T> t80 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
      TNode<BoolT> t81 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t80)));
      USE(implicit_cast<TNode<BoolT>>(t81));
      Branch(implicit_cast<TNode<BoolT>>(t81), label__True_11, label__False_12);
      if (label__True_11->is_used())
      {
        BIND(label__True_11);
        // ../../src/builtins/base.tq:753:36
        {
          // ../../src/builtins/base.tq:754:5
          TNode<Int32T> t82 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_DOUBLE_ELEMENTS)));
          *_return_65 = implicit_cast<TNode<Int32T>>(t82);
          Goto(label_macro_end_1456);
        }
      }
      if (label__False_12->is_used())
      {
        BIND(label__False_12);
        // ../../src/builtins/base.tq:755:10
        {
          Label label__True_13_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_13 = &label__True_13_impl;
          USE(label__True_13);
          Label label__False_14_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_14 = &label__False_14_impl;
          USE(label__False_14);
          TNode<Int32T> t83 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_SMI_ELEMENTS)));
          TNode<BoolT> t84 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t83)));
          USE(implicit_cast<TNode<BoolT>>(t84));
          Branch(implicit_cast<TNode<BoolT>>(t84), label__True_13, label__False_14);
          if (label__True_13->is_used())
          {
            BIND(label__True_13);
            // ../../src/builtins/base.tq:755:42
            {
              // ../../src/builtins/base.tq:756:5
              TNode<Int32T> t85 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_DOUBLE_ELEMENTS)));
              *_return_65 = implicit_cast<TNode<Int32T>>(t85);
              Goto(label_macro_end_1456);
            }
          }
          BIND(label__False_14);
        }
        Goto(label_if_done_label_562_1457);
      }
      BIND(label_if_done_label_562_1457);
    }
    // ../../src/builtins/base.tq:758:3
    *_return_65 = implicit_cast<TNode<Int32T>>(p_kind);
    Goto(label_macro_end_1456);
  }
  BIND(label_macro_end_1456);
  return implicit_cast<TNode<Int32T>>((*_return_65).value());
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowNonNumberElements(TNode<Int32T> p_kind) {
  TVARIABLE(Int32T, _return_66_impl);
  auto _return_66 = &_return_66_impl;
  USE(_return_66);
  Label label_macro_end_1458_impl(this, {_return_66}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1458 = &label_macro_end_1458_impl;
  USE(label_macro_end_1458);
  // ../../src/builtins/base.tq:761:64
  {
    // ../../src/builtins/base.tq:762:3
    {
      Label label__True_15_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_15 = &label__True_15_impl;
      USE(label__True_15);
      Label label__False_16_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_16 = &label__False_16_impl;
      USE(label__False_16);
      Label label_if_done_label_563_1459_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_563_1459 = &label_if_done_label_563_1459_impl;
      USE(label_if_done_label_563_1459);
      TNode<Int32T> t86 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
      TNode<BoolT> t87 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t86)));
      USE(implicit_cast<TNode<BoolT>>(t87));
      Branch(implicit_cast<TNode<BoolT>>(t87), label__True_15, label__False_16);
      if (label__True_15->is_used())
      {
        BIND(label__True_15);
        // ../../src/builtins/base.tq:762:36
        {
          // ../../src/builtins/base.tq:763:5
          TNode<Int32T> t88 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_ELEMENTS)));
          *_return_66 = implicit_cast<TNode<Int32T>>(t88);
          Goto(label_macro_end_1458);
        }
      }
      if (label__False_16->is_used())
      {
        BIND(label__False_16);
        // ../../src/builtins/base.tq:764:10
        {
          Label label__True_17_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_17 = &label__True_17_impl;
          USE(label__True_17);
          Label label__False_18_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_18 = &label__False_18_impl;
          USE(label__False_18);
          Label label_if_done_label_564_1460_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_if_done_label_564_1460 = &label_if_done_label_564_1460_impl;
          USE(label_if_done_label_564_1460);
          TNode<Int32T> t89 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_SMI_ELEMENTS)));
          TNode<BoolT> t90 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t89)));
          USE(implicit_cast<TNode<BoolT>>(t90));
          Branch(implicit_cast<TNode<BoolT>>(t90), label__True_17, label__False_18);
          if (label__True_17->is_used())
          {
            BIND(label__True_17);
            // ../../src/builtins/base.tq:764:42
            {
              // ../../src/builtins/base.tq:765:5
              TNode<Int32T> t91 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
              *_return_66 = implicit_cast<TNode<Int32T>>(t91);
              Goto(label_macro_end_1458);
            }
          }
          if (label__False_18->is_used())
          {
            BIND(label__False_18);
            // ../../src/builtins/base.tq:766:10
            {
              Label label__True_19_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_19 = &label__True_19_impl;
              USE(label__True_19);
              Label label__False_20_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_20 = &label__False_20_impl;
              USE(label__False_20);
              Label label_if_done_label_565_1461_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_if_done_label_565_1461 = &label_if_done_label_565_1461_impl;
              USE(label_if_done_label_565_1461);
              TNode<Int32T> t92 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_DOUBLE_ELEMENTS)));
              TNode<BoolT> t93 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t92)));
              USE(implicit_cast<TNode<BoolT>>(t93));
              Branch(implicit_cast<TNode<BoolT>>(t93), label__True_19, label__False_20);
              if (label__True_19->is_used())
              {
                BIND(label__True_19);
                // ../../src/builtins/base.tq:766:46
                {
                  // ../../src/builtins/base.tq:767:5
                  TNode<Int32T> t94 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_ELEMENTS)));
                  *_return_66 = implicit_cast<TNode<Int32T>>(t94);
                  Goto(label_macro_end_1458);
                }
              }
              if (label__False_20->is_used())
              {
                BIND(label__False_20);
                // ../../src/builtins/base.tq:768:10
                {
                  Label label__True_21_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_21 = &label__True_21_impl;
                  USE(label__True_21);
                  Label label__False_22_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_22 = &label__False_22_impl;
                  USE(label__False_22);
                  TNode<Int32T> t95 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_DOUBLE_ELEMENTS)));
                  TNode<BoolT> t96 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(p_kind), implicit_cast<TNode<Int32T>>(t95)));
                  USE(implicit_cast<TNode<BoolT>>(t96));
                  Branch(implicit_cast<TNode<BoolT>>(t96), label__True_21, label__False_22);
                  if (label__True_21->is_used())
                  {
                    BIND(label__True_21);
                    // ../../src/builtins/base.tq:768:45
                    {
                      // ../../src/builtins/base.tq:769:5
                      TNode<Int32T> t97 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
                      *_return_66 = implicit_cast<TNode<Int32T>>(t97);
                      Goto(label_macro_end_1458);
                    }
                  }
                  BIND(label__False_22);
                }
                Goto(label_if_done_label_565_1461);
              }
              BIND(label_if_done_label_565_1461);
            }
            Goto(label_if_done_label_564_1460);
          }
          BIND(label_if_done_label_564_1460);
        }
        Goto(label_if_done_label_563_1459);
      }
      BIND(label_if_done_label_563_1459);
    }
    // ../../src/builtins/base.tq:771:3
    *_return_66 = implicit_cast<TNode<Int32T>>(p_kind);
    Goto(label_macro_end_1458);
  }
  BIND(label_macro_end_1458);
  return implicit_cast<TNode<Int32T>>((*_return_66).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_23) {
  TVARIABLE(Object, _return_67_impl);
  auto _return_67 = &_return_67_impl;
  USE(_return_67);
  Label label_macro_end_1462_impl(this, {_return_67}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1462 = &label_macro_end_1462_impl;
  USE(label_macro_end_1462);
  // ../../src/builtins/base.tq:816:19
  {
    // ../../src/builtins/base.tq:817:3
    {
      Label label_try_done_566_1463_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_566_1463 = &label_try_done_566_1463_impl;
      USE(label_try_done_566_1463);
      Label label_Unexpected_24_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Unexpected_24 = &label_Unexpected_24_impl;
      USE(label_Unexpected_24);
      Label label_try_begin_567_1464_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_567_1464 = &label_try_begin_567_1464_impl;
      USE(label_try_begin_567_1464);
      Goto(label_try_begin_567_1464);
      if (label_try_begin_567_1464->is_used())
      {
        BIND(label_try_begin_567_1464);
        // ../../src/builtins/base.tq:817:7
        {
          // ../../src/builtins/base.tq:818:5
          TNode<FixedArrayBase> t98 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedArray> t99 = UncheckedCast<FixedArray>(Cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(t98), label_Unexpected_24));
          USE(implicit_cast<TNode<FixedArray>>(t99));
          TVARIABLE(FixedArray, elements_68_impl);
          auto elements_68 = &elements_68_impl;
          USE(elements_68);
          *elements_68 = implicit_cast<TNode<FixedArray>>(t99);
          // ../../src/builtins/base.tq:820:5
          TNode<Object> t100 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_68).value()), implicit_cast<TNode<Smi>>(p_index)));
          TVARIABLE(Object, e_69_impl);
          auto e_69 = &e_69_impl;
          USE(e_69);
          *e_69 = implicit_cast<TNode<Object>>(t100);
          // ../../src/builtins/base.tq:821:5
          {
            Label label__True_25_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_25 = &label__True_25_impl;
            USE(label__True_25);
            Label label__False_26_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_26 = &label__False_26_impl;
            USE(label__False_26);
            TNode<BoolT> t101 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*e_69).value()), implicit_cast<TNode<Object>>(Hole())));
            USE(implicit_cast<TNode<BoolT>>(t101));
            Branch(implicit_cast<TNode<BoolT>>(t101), label__True_25, label__False_26);
            if (label__True_25->is_used())
            {
              BIND(label__True_25);
              // ../../src/builtins/base.tq:821:20
              {
                // ../../src/builtins/base.tq:822:7
                Goto(label_IfHole_23);
              }
            }
            BIND(label__False_26);
          }
          // ../../src/builtins/base.tq:824:5
          *_return_67 = implicit_cast<TNode<Object>>((*e_69).value());
          Goto(label_macro_end_1462);
        }
      }
      if (label_Unexpected_24->is_used())
      {
        BIND(label_Unexpected_24);
        // ../../src/builtins/base.tq:826:20
        {
          // ../../src/builtins/base.tq:827:5
          Print("halting because of 'unreachable' at ../../src/builtins/base.tq:827:5");
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1462);
  return implicit_cast<TNode<Object>>((*_return_67).value());
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_27) {
  TVARIABLE(Object, _return_70_impl);
  auto _return_70 = &_return_70_impl;
  USE(_return_70);
  Label label_macro_end_1465_impl(this, {_return_70}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1465 = &label_macro_end_1465_impl;
  USE(label_macro_end_1465);
  // ../../src/builtins/base.tq:832:19
  {
    // ../../src/builtins/base.tq:833:3
    {
      Label label_try_done_568_1466_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_568_1466 = &label_try_done_568_1466_impl;
      USE(label_try_done_568_1466);
      Label label_Unexpected_28_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Unexpected_28 = &label_Unexpected_28_impl;
      USE(label_Unexpected_28);
      Label label_try_begin_569_1467_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_569_1467 = &label_try_begin_569_1467_impl;
      USE(label_try_begin_569_1467);
      Goto(label_try_begin_569_1467);
      if (label_try_begin_569_1467->is_used())
      {
        BIND(label_try_begin_569_1467);
        // ../../src/builtins/base.tq:833:7
        {
          // ../../src/builtins/base.tq:834:5
          TNode<FixedArrayBase> t102 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
          TNode<FixedDoubleArray> t103 = UncheckedCast<FixedDoubleArray>(Cast18ATFixedDoubleArray(implicit_cast<TNode<HeapObject>>(t102), label_Unexpected_28));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t103));
          TVARIABLE(FixedDoubleArray, elements_71_impl);
          auto elements_71 = &elements_71_impl;
          USE(elements_71);
          *elements_71 = implicit_cast<TNode<FixedDoubleArray>>(t103);
          // ../../src/builtins/base.tq:836:5
          TNode<Float64T> t104 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elements_71).value()), implicit_cast<TNode<Smi>>(p_index), label_IfHole_27));
          USE(implicit_cast<TNode<Float64T>>(t104));
          TVARIABLE(Float64T, e_72_impl);
          auto e_72 = &e_72_impl;
          USE(e_72);
          *e_72 = implicit_cast<TNode<Float64T>>(t104);
          // ../../src/builtins/base.tq:837:5
          TNode<HeapNumber> t105 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*e_72).value())));
          USE(implicit_cast<TNode<HeapNumber>>(t105));
          *_return_70 = implicit_cast<TNode<Object>>(t105);
          Goto(label_macro_end_1465);
        }
      }
      if (label_Unexpected_28->is_used())
      {
        BIND(label_Unexpected_28);
        // ../../src/builtins/base.tq:839:20
        {
          // ../../src/builtins/base.tq:840:5
          Print("halting because of 'unreachable' at ../../src/builtins/base.tq:840:5");
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1465);
  return implicit_cast<TNode<Object>>((*_return_70).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  TVARIABLE(BoolT, _return_73_impl);
  auto _return_73 = &_return_73_impl;
  USE(_return_73);
  Label label_macro_end_1468_impl(this, {_return_73}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1468 = &label_macro_end_1468_impl;
  USE(label_macro_end_1468);
  // ../../src/builtins/base.tq:863:41
  {
    // ../../src/builtins/base.tq:864:3
    {
      // ../../src/builtins/base.tq:864:15
      TNode<Number> _value_570_impl;
      auto _value_570 = &_value_570_impl;
      USE(_value_570);
      *_value_570 = implicit_cast<TNode<Number>>(p_number);
      // ../../src/builtins/base.tq:865:5
      {
        Label label_try_done_571_1469_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_done_571_1469 = &label_try_done_571_1469_impl;
        USE(label_try_done_571_1469);
        Label label__NextCase_29_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__NextCase_29 = &label__NextCase_29_impl;
        USE(label__NextCase_29);
        Label label_try_begin_572_1470_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_begin_572_1470 = &label_try_begin_572_1470_impl;
        USE(label_try_begin_572_1470);
        Goto(label_try_begin_572_1470);
        if (label_try_begin_572_1470->is_used())
        {
          BIND(label_try_begin_572_1470);
          // ../../src/builtins/base.tq:865:5
          {
            // ../../src/builtins/base.tq:865:5
            TNode<Smi> t106 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>((*_value_570)), label__NextCase_29));
            USE(implicit_cast<TNode<Smi>>(t106));
            TNode<Smi> _case_value_573_impl;
            auto _case_value_573 = &_case_value_573_impl;
            USE(_case_value_573);
            *_case_value_573 = implicit_cast<TNode<Smi>>(t106);
            // ../../src/builtins/base.tq:865:17
            {
              // ../../src/builtins/base.tq:866:7
              TNode<BoolT> t107 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
              *_return_73 = implicit_cast<TNode<BoolT>>(t107);
              Goto(label_macro_end_1468);
            }
          }
        }
        if (label__NextCase_29->is_used())
        {
          BIND(label__NextCase_29);
          // ../../src/builtins/base.tq:865:5
          {
            // ../../src/builtins/base.tq:868:5
            TNode<HeapNumber> hn_574_impl;
            auto hn_574 = &hn_574_impl;
            USE(hn_574);
            *hn_574 = implicit_cast<TNode<HeapNumber>>(UncheckedCast<HeapNumber>(implicit_cast<TNode<Number>>((*_value_570))));
            // ../../src/builtins/base.tq:868:28
            {
              // ../../src/builtins/base.tq:869:7
              TNode<Float64T> t108 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<HeapNumber>>((*hn_574))));
              USE(implicit_cast<TNode<Float64T>>(t108));
              TVARIABLE(Float64T, value_74_impl);
              auto value_74 = &value_74_impl;
              USE(value_74);
              *value_74 = implicit_cast<TNode<Float64T>>(t108);
              // ../../src/builtins/base.tq:870:7
              TNode<BoolT> t109 = UncheckedCast<BoolT>(Float64NotEqual(implicit_cast<TNode<Float64T>>((*value_74).value()), implicit_cast<TNode<Float64T>>((*value_74).value())));
              USE(implicit_cast<TNode<BoolT>>(t109));
              *_return_73 = implicit_cast<TNode<BoolT>>(t109);
              Goto(label_macro_end_1468);
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1468);
  return implicit_cast<TNode<BoolT>>((*_return_73).value());
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  TVARIABLE(BoolT, _return_75_impl);
  auto _return_75 = &_return_75_impl;
  USE(_return_75);
  Label label_macro_end_1471_impl(this, {_return_75}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1471 = &label_macro_end_1471_impl;
  USE(label_macro_end_1471);
  // ../../src/builtins/base.tq:878:36
  {
    // ../../src/builtins/base.tq:879:3
    {
      Label label__True_30_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_30 = &label__True_30_impl;
      USE(label__True_30);
      Label label__False_31_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_31 = &label__False_31_impl;
      USE(label__False_31);
      Label label_if_done_label_575_1472_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_575_1472 = &label_if_done_label_575_1472_impl;
      USE(label_if_done_label_575_1472);
      BranchIfToBooleanIsTrue(implicit_cast<TNode<Object>>(p_obj), label__True_30, label__False_31);
      if (label__True_30->is_used())
      {
        BIND(label__True_30);
        // ../../src/builtins/base.tq:879:37
        {
          // ../../src/builtins/base.tq:880:5
          TNode<BoolT> t110 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
          *_return_75 = implicit_cast<TNode<BoolT>>(t110);
          Goto(label_macro_end_1471);
        }
      }
      if (label__False_31->is_used())
      {
        BIND(label__False_31);
        // ../../src/builtins/base.tq:881:10
        {
          // ../../src/builtins/base.tq:882:5
          TNode<BoolT> t111 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
          *_return_75 = implicit_cast<TNode<BoolT>>(t111);
          Goto(label_macro_end_1471);
        }
      }
    }
  }
  BIND(label_macro_end_1471);
  return implicit_cast<TNode<BoolT>>((*_return_75).value());
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError_32) {
  TVARIABLE(Number, _return_76_impl);
  auto _return_76 = &_return_76_impl;
  USE(_return_76);
  Label label_macro_end_1473_impl(this, {_return_76}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1473 = &label_macro_end_1473_impl;
  USE(label_macro_end_1473);
  // ../../src/builtins/base.tq:887:23
  {
    // ../../src/builtins/base.tq:888:3
    {
      Label label__True_33_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_33 = &label__True_33_impl;
      USE(label__True_33);
      Label label__False_34_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_34 = &label__False_34_impl;
      USE(label__False_34);
      TNode<BoolT> t112 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_input), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t112));
      Branch(implicit_cast<TNode<BoolT>>(t112), label__True_33, label__False_34);
      if (label__True_33->is_used())
      {
        BIND(label__True_33);
        // ../../src/builtins/base.tq:888:27
        {
          // ../../src/builtins/base.tq:889:5
          int31_t t113 = 0;
          TNode<Number> t114 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t113)));
          *_return_76 = implicit_cast<TNode<Number>>(t114);
          Goto(label_macro_end_1473);
        }
      }
      BIND(label__False_34);
    }
    // ../../src/builtins/base.tq:892:3
    TNode<Number> t115 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_input), implicit_cast<ToIntegerTruncationMode>(ToIntegerTruncationMode::kTruncateMinusZero)));
    USE(implicit_cast<TNode<Number>>(t115));
    TVARIABLE(Number, value_77_impl);
    auto value_77 = &value_77_impl;
    USE(value_77);
    *value_77 = implicit_cast<TNode<Number>>(t115);
    // ../../src/builtins/base.tq:893:3
    {
      Label label__True_35_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_35 = &label__True_35_impl;
      USE(label__True_35);
      Label label__False_36_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_36 = &label__False_36_impl;
      USE(label__False_36);
      Label label__False_37_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_37 = &label__False_37_impl;
      USE(label__False_37);
      int31_t t116 = 0;
      TNode<Number> t117 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t116)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*value_77).value()), implicit_cast<TNode<Number>>(t117), label__True_35, label__False_37);
      BIND(label__False_37);
      TNode<Number> t118 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*value_77).value()), implicit_cast<TNode<Number>>(t118), label__True_35, label__False_36);
      if (label__True_35->is_used())
      {
        BIND(label__True_35);
        // ../../src/builtins/base.tq:893:45
        {
          // ../../src/builtins/base.tq:894:5
          Goto(label_RangeError_32);
        }
      }
      BIND(label__False_36);
    }
    // ../../src/builtins/base.tq:897:3
    *_return_76 = implicit_cast<TNode<Number>>((*value_77).value());
    Goto(label_macro_end_1473);
  }
  BIND(label_macro_end_1473);
  return implicit_cast<TNode<Number>>((*_return_76).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_401_impl);
  auto _return_401 = &_return_401_impl;
  USE(_return_401);
  Label label_macro_end_1791_impl(this, {_return_401}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1791 = &label_macro_end_1791_impl;
  USE(label_macro_end_1791);
  // ../../third_party/v8/builtins/array-sort.tq:261:61
  {
    // ../../third_party/v8/builtins/array-sort.tq:262:5
    TNode<Code> t2652 = UncheckedCast<Code>(UnsafeCastObjectToCompareBuiltinFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2652));
    *_return_401 = implicit_cast<TNode<Code>>(t2652);
    Goto(label_macro_end_1791);
  }
  BIND(label_macro_end_1791);
  return implicit_cast<TNode<Code>>((*_return_401).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_402_impl);
  auto _return_402 = &_return_402_impl;
  USE(_return_402);
  Label label_macro_end_1792_impl(this, {_return_402}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1792 = &label_macro_end_1792_impl;
  USE(label_macro_end_1792);
  // ../../third_party/v8/builtins/array-sort.tq:266:41
  {
    // ../../third_party/v8/builtins/array-sort.tq:267:5
    TNode<Code> t2653 = UncheckedCast<Code>(UnsafeCastObjectToLoadFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2653));
    *_return_402 = implicit_cast<TNode<Code>>(t2653);
    Goto(label_macro_end_1792);
  }
  BIND(label_macro_end_1792);
  return implicit_cast<TNode<Code>>((*_return_402).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Code, _return_403_impl);
  auto _return_403 = &_return_403_impl;
  USE(_return_403);
  Label label_macro_end_1793_impl(this, {_return_403}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1793 = &label_macro_end_1793_impl;
  USE(label_macro_end_1793);
  // ../../third_party/v8/builtins/array-sort.tq:271:43
  {
    // ../../third_party/v8/builtins/array-sort.tq:272:5
    TNode<Code> t2654 = UncheckedCast<Code>(UnsafeCastObjectToStoreFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2654));
    *_return_403 = implicit_cast<TNode<Code>>(t2654);
    Goto(label_macro_end_1793);
  }
  BIND(label_macro_end_1793);
  return implicit_cast<TNode<Code>>((*_return_403).value());
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(TNode<Object> p_o) {
  TVARIABLE(Code, _return_404_impl);
  auto _return_404 = &_return_404_impl;
  USE(_return_404);
  Label label_macro_end_1794_impl(this, {_return_404}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1794 = &label_macro_end_1794_impl;
  USE(label_macro_end_1794);
  // ../../third_party/v8/builtins/array-sort.tq:277:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:278:5
    TNode<Code> t2655 = UncheckedCast<Code>(UnsafeCastObjectToCanUseSameAccessorFn(implicit_cast<TNode<Object>>(p_o)));
    USE(implicit_cast<TNode<Code>>(t2655));
    *_return_404 = implicit_cast<TNode<Code>>(t2655);
    Goto(label_macro_end_1794);
  }
  BIND(label_macro_end_1794);
  return implicit_cast<TNode<Code>>((*_return_404).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_1276) {
  TVARIABLE(FixedArray, _return_508_impl);
  auto _return_508 = &_return_508_impl;
  USE(_return_508);
  Label label_macro_end_1901_impl(this, {_return_508}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1901 = &label_macro_end_1901_impl;
  USE(label_macro_end_1901);
  // ../../src/builtins/base.tq:410:22
  {
    // ../../src/builtins/base.tq:411:3
    TNode<FixedArray> t3809 = UncheckedCast<FixedArray>(CastHeapObject12ATFixedArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_1276));
    USE(implicit_cast<TNode<FixedArray>>(t3809));
    *_return_508 = implicit_cast<TNode<FixedArray>>(t3809);
    Goto(label_macro_end_1901);
  }
  BIND(label_macro_end_1901);
  return implicit_cast<TNode<FixedArray>>((*_return_508).value());
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::Cast18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_1278) {
  TVARIABLE(FixedDoubleArray, _return_510_impl);
  auto _return_510 = &_return_510_impl;
  USE(_return_510);
  Label label_macro_end_1902_impl(this, {_return_510}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1902 = &label_macro_end_1902_impl;
  USE(label_macro_end_1902);
  // ../../src/builtins/base.tq:410:22
  {
    // ../../src/builtins/base.tq:411:3
    TNode<FixedDoubleArray> t3810 = UncheckedCast<FixedDoubleArray>(CastHeapObject18ATFixedDoubleArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_1278));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t3810));
    *_return_510 = implicit_cast<TNode<FixedDoubleArray>>(t3810);
    Goto(label_macro_end_1902);
  }
  BIND(label_macro_end_1902);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_510).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_1282) {
  TVARIABLE(JSArray, _return_514_impl);
  auto _return_514 = &_return_514_impl;
  USE(_return_514);
  Label label_macro_end_1903_impl(this, {_return_514}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1903 = &label_macro_end_1903_impl;
  USE(label_macro_end_1903);
  // ../../src/builtins/base.tq:417:22
  {
    // ../../src/builtins/base.tq:418:3
    TNode<HeapObject> t3811 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1282));
    USE(implicit_cast<TNode<HeapObject>>(t3811));
    TNode<JSArray> t3812 = UncheckedCast<JSArray>(CastHeapObject9ATJSArray(implicit_cast<TNode<HeapObject>>(t3811), label_CastError_1282));
    USE(implicit_cast<TNode<JSArray>>(t3812));
    *_return_514 = implicit_cast<TNode<JSArray>>(t3812);
    Goto(label_macro_end_1903);
  }
  BIND(label_macro_end_1903);
  return implicit_cast<TNode<JSArray>>((*_return_514).value());
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_1284) {
  TVARIABLE(JSReceiver, _return_516_impl);
  auto _return_516 = &_return_516_impl;
  USE(_return_516);
  Label label_macro_end_1904_impl(this, {_return_516}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1904 = &label_macro_end_1904_impl;
  USE(label_macro_end_1904);
  // ../../src/builtins/base.tq:417:22
  {
    // ../../src/builtins/base.tq:418:3
    TNode<HeapObject> t3813 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1284));
    USE(implicit_cast<TNode<HeapObject>>(t3813));
    TNode<JSReceiver> t3814 = UncheckedCast<JSReceiver>(CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<HeapObject>>(t3813), label_CastError_1284));
    USE(implicit_cast<TNode<JSReceiver>>(t3814));
    *_return_516 = implicit_cast<TNode<JSReceiver>>(t3814);
    Goto(label_macro_end_1904);
  }
  BIND(label_macro_end_1904);
  return implicit_cast<TNode<JSReceiver>>((*_return_516).value());
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_1281) {
  TVARIABLE(JSArray, _return_513_impl);
  auto _return_513 = &_return_513_impl;
  USE(_return_513);
  Label label_macro_end_1905_impl(this, {_return_513}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1905 = &label_macro_end_1905_impl;
  USE(label_macro_end_1905);
  // ../../src/builtins/base.tq:410:22
  {
    // ../../src/builtins/base.tq:411:3
    TNode<JSArray> t3815 = UncheckedCast<JSArray>(CastHeapObject9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_CastError_1281));
    USE(implicit_cast<TNode<JSArray>>(t3815));
    *_return_513 = implicit_cast<TNode<JSArray>>(t3815);
    Goto(label_macro_end_1905);
  }
  BIND(label_macro_end_1905);
  return implicit_cast<TNode<JSArray>>((*_return_513).value());
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::Cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_1361) {
  TVARIABLE(JSDataView, _return_544_impl);
  auto _return_544 = &_return_544_impl;
  USE(_return_544);
  Label label_macro_end_1948_impl(this, {_return_544}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1948 = &label_macro_end_1948_impl;
  USE(label_macro_end_1948);
  // ../../src/builtins/base.tq:417:22
  {
    // ../../src/builtins/base.tq:418:3
    TNode<HeapObject> t4064 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1361));
    USE(implicit_cast<TNode<HeapObject>>(t4064));
    TNode<JSDataView> t4065 = UncheckedCast<JSDataView>(CastHeapObject12ATJSDataView(implicit_cast<TNode<HeapObject>>(t4064), label_CastError_1361));
    USE(implicit_cast<TNode<JSDataView>>(t4065));
    *_return_544 = implicit_cast<TNode<JSDataView>>(t4065);
    Goto(label_macro_end_1948);
  }
  BIND(label_macro_end_1948);
  return implicit_cast<TNode<JSDataView>>((*_return_544).value());
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_507_impl);
  auto _return_507 = &_return_507_impl;
  USE(_return_507);
  Label label_macro_end_1949_impl(this, {_return_507}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1949 = &label_macro_end_1949_impl;
  USE(label_macro_end_1949);
  // ../../src/builtins/base.tq:526:47
  {
    // ../../src/builtins/base.tq:527:3
    TNode<Float64T> t4066 = UncheckedCast<Float64T>(FromConstexpr9ATfloat64(implicit_cast<int31_t>(p_i)));
    *_return_507 = implicit_cast<TNode<Float64T>>(t4066);
    Goto(label_macro_end_1949);
  }
  BIND(label_macro_end_1949);
  return implicit_cast<TNode<Float64T>>((*_return_507).value());
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_532_impl);
  auto _return_532 = &_return_532_impl;
  USE(_return_532);
  Label label_macro_end_1952_impl(this, {_return_532}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1952 = &label_macro_end_1952_impl;
  USE(label_macro_end_1952);
  // ../../src/builtins/base.tq:526:47
  {
    // ../../src/builtins/base.tq:527:3
    TNode<IntPtrT> t4067 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(p_i)));
    *_return_532 = implicit_cast<TNode<IntPtrT>>(t4067);
    Goto(label_macro_end_1952);
  }
  BIND(label_macro_end_1952);
  return implicit_cast<TNode<IntPtrT>>((*_return_532).value());
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(TNode<Object> p_o, Label* label_CastError_1277) {
  TVARIABLE(FixedArray, _return_509_impl);
  auto _return_509 = &_return_509_impl;
  USE(_return_509);
  Label label_macro_end_1956_impl(this, {_return_509}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1956 = &label_macro_end_1956_impl;
  USE(label_macro_end_1956);
  // ../../src/builtins/base.tq:417:22
  {
    // ../../src/builtins/base.tq:418:3
    TNode<HeapObject> t4072 = UncheckedCast<HeapObject>(TaggedToHeapObject(implicit_cast<TNode<Object>>(p_o), label_CastError_1277));
    USE(implicit_cast<TNode<HeapObject>>(t4072));
    TNode<FixedArray> t4073 = UncheckedCast<FixedArray>(CastHeapObject12ATFixedArray(implicit_cast<TNode<HeapObject>>(t4072), label_CastError_1277));
    USE(implicit_cast<TNode<FixedArray>>(t4073));
    *_return_509 = implicit_cast<TNode<FixedArray>>(t4073);
    Goto(label_macro_end_1956);
  }
  BIND(label_macro_end_1956);
  return implicit_cast<TNode<FixedArray>>((*_return_509).value());
}

}  // namespace internal
}  // namespace v8

