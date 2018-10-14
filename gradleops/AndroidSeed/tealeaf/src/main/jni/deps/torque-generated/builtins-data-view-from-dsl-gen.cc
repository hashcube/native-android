#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_189_impl);
  auto _return_189 = &_return_189_impl;
  USE(_return_189);
  Label label_macro_end_678_impl(this, {_return_189});
  Label* label_macro_end_678 = &label_macro_end_678_impl;
  USE(label_macro_end_678);
  // ../../src/builtins/data-view.tq:16:51
  {
    // ../../src/builtins/data-view.tq:17:4
    TNode<JSArrayBuffer> t534 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(p_view));
    TNode<BoolT> t535 = UncheckedCast<BoolT>(IsDetachedBuffer(t534));
    USE(t535);
    *_return_189 = t535;
    Goto(label_macro_end_678);
  }
  BIND(label_macro_end_678);
  return (*_return_189).value();
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_190_impl);
  auto _return_190 = &_return_190_impl;
  USE(_return_190);
  Label label_macro_end_679_impl(this, {_return_190});
  Label* label_macro_end_679 = &label_macro_end_679_impl;
  USE(label_macro_end_679);
  // ../../src/builtins/data-view.tq:21:45
  {
    // ../../src/builtins/data-view.tq:22:4
    {
      Label label_try_done_539_680_impl(this);
      Label* label_try_done_539_680 = &label_try_done_539_680_impl;
      USE(label_try_done_539_680);
      Label label_CastError_184_impl(this);
      Label* label_CastError_184 = &label_CastError_184_impl;
      USE(label_CastError_184);
      Label label_try_begin_540_681_impl(this);
      Label* label_try_begin_540_681 = &label_try_begin_540_681_impl;
      USE(label_try_begin_540_681);
      Goto(label_try_begin_540_681);
      if (label_try_begin_540_681->is_used())
      {
        BIND(label_try_begin_540_681);
        // ../../src/builtins/data-view.tq:22:8
        {
          // ../../src/builtins/data-view.tq:23:6
          TNode<JSDataView> t536 = UncheckedCast<JSDataView>(cast12ATJSDataView(p_o, label_CastError_184));
          USE(t536);
          *_return_190 = t536;
          Goto(label_macro_end_679);
        }
      }
      if (label_CastError_184->is_used())
      {
        BIND(label_CastError_184);
        // ../../src/builtins/data-view.tq:25:20
        {
          // ../../src/builtins/data-view.tq:26:6
          ThrowTypeError(p_context, MessageTemplate::kIncompatibleMethodReceiver, p_method);
        }
      }
    }
  }
  BIND(label_macro_end_679);
  return (*_return_190).value();
}

TF_BUILTIN(DataViewPrototypeGetBuffer, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:32:71
  {
    // ../../src/builtins/data-view.tq:33:4
    const char* t537 = "get DataView.prototype.buffer";
    TNode<String> t538 = UncheckedCast<String>(from_constexpr8ATString(t537));
    TNode<JSDataView> t539 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t538));
    USE(t539);
    TVARIABLE(JSDataView, data_view_191_impl);
    auto data_view_191 = &data_view_191_impl;
    USE(data_view_191);
    *data_view_191 = t539;
    // ../../src/builtins/data-view.tq:35:4
    TNode<JSArrayBuffer> t540 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_191).value()));
    arguments->PopAndReturn(t540);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:40:64
  {
    // ../../src/builtins/data-view.tq:41:4
    const char* t541 = "get DataView.prototype.byte_length";
    TNode<String> t542 = UncheckedCast<String>(from_constexpr8ATString(t541));
    TNode<JSDataView> t543 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t542));
    USE(t543);
    TVARIABLE(JSDataView, data_view_192_impl);
    auto data_view_192 = &data_view_192_impl;
    USE(data_view_192);
    *data_view_192 = t543;
    // ../../src/builtins/data-view.tq:43:4
    {
      Label label__True_185_impl(this);
      Label* label__True_185 = &label__True_185_impl;
      USE(label__True_185);
      Label label__False_186_impl(this, {});
      Label* label__False_186 = &label__False_186_impl;
      USE(label__False_186);
      TNode<BoolT> t544 = UncheckedCast<BoolT>(WasNeutered((*data_view_192).value()));
      USE(t544);
      Branch(t544, label__True_185, label__False_186);
      if (label__True_185->is_used())
      {
        BIND(label__True_185);
        // ../../src/builtins/data-view.tq:43:32
        {
          // ../../src/builtins/data-view.tq:46:6
          int31_t t545 = 0;
          TNode<Number> t546 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t545));
          arguments->PopAndReturn(t546);
        }
      }
      BIND(label__False_186);
    }
    // ../../src/builtins/data-view.tq:48:4
    TNode<Number> t547 = UncheckedCast<Number>(LoadDataViewByteLength((*data_view_192).value()));
    arguments->PopAndReturn(t547);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:53:64
  {
    // ../../src/builtins/data-view.tq:54:4
    const char* t548 = "get DataView.prototype.byte_offset";
    TNode<String> t549 = UncheckedCast<String>(from_constexpr8ATString(t548));
    TNode<JSDataView> t550 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t549));
    USE(t550);
    TVARIABLE(JSDataView, data_view_193_impl);
    auto data_view_193 = &data_view_193_impl;
    USE(data_view_193);
    *data_view_193 = t550;
    // ../../src/builtins/data-view.tq:56:4
    {
      Label label__True_187_impl(this);
      Label* label__True_187 = &label__True_187_impl;
      USE(label__True_187);
      Label label__False_188_impl(this, {});
      Label* label__False_188 = &label__False_188_impl;
      USE(label__False_188);
      TNode<BoolT> t551 = UncheckedCast<BoolT>(WasNeutered((*data_view_193).value()));
      USE(t551);
      Branch(t551, label__True_187, label__False_188);
      if (label__True_187->is_used())
      {
        BIND(label__True_187);
        // ../../src/builtins/data-view.tq:56:32
        {
          // ../../src/builtins/data-view.tq:59:6
          int31_t t552 = 0;
          TNode<Number> t553 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t552));
          arguments->PopAndReturn(t553);
        }
      }
      BIND(label__False_188);
    }
    // ../../src/builtins/data-view.tq:61:4
    TNode<Number> t554 = UncheckedCast<Number>(LoadDataViewByteOffset((*data_view_193).value()));
    arguments->PopAndReturn(t554);
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataViewUint8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset) {
  TVARIABLE(Smi, _return_194_impl);
  auto _return_194 = &_return_194_impl;
  USE(_return_194);
  Label label_macro_end_682_impl(this, {_return_194});
  Label* label_macro_end_682 = &label_macro_end_682_impl;
  USE(label_macro_end_682);
  // ../../src/builtins/data-view.tq:74:70
  {
    // ../../src/builtins/data-view.tq:75:4
    TNode<RawPtrT> t555 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TNode<Uint32T> t556 = UncheckedCast<Uint32T>(LoadUint8(t555, p_offset));
    USE(t556);
    TNode<Smi> t557 = UncheckedCast<Smi>(convert5ATSmi(t556));
    USE(t557);
    *_return_194 = t557;
    Goto(label_macro_end_682);
  }
  BIND(label_macro_end_682);
  return (*_return_194).value();
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataViewInt8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset) {
  TVARIABLE(Smi, _return_195_impl);
  auto _return_195 = &_return_195_impl;
  USE(_return_195);
  Label label_macro_end_683_impl(this, {_return_195});
  Label* label_macro_end_683 = &label_macro_end_683_impl;
  USE(label_macro_end_683);
  // ../../src/builtins/data-view.tq:78:69
  {
    // ../../src/builtins/data-view.tq:79:4
    TNode<RawPtrT> t558 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TNode<Int32T> t559 = UncheckedCast<Int32T>(LoadInt8(t558, p_offset));
    USE(t559);
    TNode<Smi> t560 = UncheckedCast<Smi>(convert5ATSmi(t559));
    USE(t560);
    *_return_195 = t560;
    Goto(label_macro_end_683);
  }
  BIND(label_macro_end_683);
  return (*_return_195).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_196_impl);
  auto _return_196 = &_return_196_impl;
  USE(_return_196);
  Label label_macro_end_684_impl(this, {_return_196});
  Label* label_macro_end_684 = &label_macro_end_684_impl;
  USE(label_macro_end_684);
  // ../../src/builtins/data-view.tq:84:55
  {
    // ../../src/builtins/data-view.tq:85:4
    TNode<RawPtrT> t561 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_197_impl);
    auto data_pointer_197 = &data_pointer_197_impl;
    USE(data_pointer_197);
    *data_pointer_197 = t561;
    // ../../src/builtins/data-view.tq:87:4
    TVARIABLE(Int32T, b0_198_impl);
    auto b0_198 = &b0_198_impl;
    USE(b0_198);
    // ../../src/builtins/data-view.tq:88:4
    TVARIABLE(Int32T, b1_199_impl);
    auto b1_199 = &b1_199_impl;
    USE(b1_199);
    // ../../src/builtins/data-view.tq:89:4
    TVARIABLE(Int32T, result_200_impl);
    auto result_200 = &result_200_impl;
    USE(result_200);
    // ../../src/builtins/data-view.tq:92:4
    {
      Label label__True_189_impl(this);
      Label* label__True_189 = &label__True_189_impl;
      USE(label__True_189);
      Label label__False_190_impl(this);
      Label* label__False_190 = &label__False_190_impl;
      USE(label__False_190);
      Label label_if_done_label_541_685_impl(this, {b0_198, b1_199, result_200});
      Label* label_if_done_label_541_685 = &label_if_done_label_541_685_impl;
      USE(label_if_done_label_541_685);
      Branch(p_requested_little_endian, label__True_189, label__False_190);
      if (label__True_189->is_used())
      {
        BIND(label__True_189);
        // ../../src/builtins/data-view.tq:92:33
        {
          // ../../src/builtins/data-view.tq:93:6
          TNode<Uint32T> t562 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_197).value(), p_offset));
          USE(t562);
          TNode<Int32T> t563 = UncheckedCast<Int32T>(Signed(t562));
          USE(t563);
          *b0_198 = t563;
          // ../../src/builtins/data-view.tq:94:6
          int31_t t564 = 1;
          TNode<IntPtrT> t565 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t564));
          TNode<IntPtrT> t566 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t565));
          USE(t566);
          TNode<Int32T> t567 = UncheckedCast<Int32T>(LoadInt8((*data_pointer_197).value(), t566));
          USE(t567);
          *b1_199 = t567;
          // ../../src/builtins/data-view.tq:95:6
          int31_t t568 = 8;
          TNode<Int32T> t569 = UncheckedCast<Int32T>(from_constexpr7ATint32(t568));
          TNode<Int32T> t570 = UncheckedCast<Int32T>(Word32Shl((*b1_199).value(), t569));
          USE(t570);
          TNode<Int32T> t571 = UncheckedCast<Int32T>(Int32Add(t570, (*b0_198).value()));
          USE(t571);
          *result_200 = t571;
        }
        Goto(label_if_done_label_541_685);
      }
      if (label__False_190->is_used())
      {
        BIND(label__False_190);
        // ../../src/builtins/data-view.tq:96:11
        {
          // ../../src/builtins/data-view.tq:97:6
          TNode<Int32T> t572 = UncheckedCast<Int32T>(LoadInt8((*data_pointer_197).value(), p_offset));
          USE(t572);
          *b0_198 = t572;
          // ../../src/builtins/data-view.tq:98:6
          int31_t t573 = 1;
          TNode<IntPtrT> t574 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t573));
          TNode<IntPtrT> t575 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t574));
          USE(t575);
          TNode<Uint32T> t576 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_197).value(), t575));
          USE(t576);
          TNode<Int32T> t577 = UncheckedCast<Int32T>(Signed(t576));
          USE(t577);
          *b1_199 = t577;
          // ../../src/builtins/data-view.tq:99:6
          int31_t t578 = 8;
          TNode<Int32T> t579 = UncheckedCast<Int32T>(from_constexpr7ATint32(t578));
          TNode<Int32T> t580 = UncheckedCast<Int32T>(Word32Shl((*b0_198).value(), t579));
          USE(t580);
          TNode<Int32T> t581 = UncheckedCast<Int32T>(Int32Add(t580, (*b1_199).value()));
          USE(t581);
          *result_200 = t581;
        }
        Goto(label_if_done_label_541_685);
      }
      BIND(label_if_done_label_541_685);
    }
    // ../../src/builtins/data-view.tq:101:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:101:26
        {
          // ../../src/builtins/data-view.tq:102:6
          TNode<Smi> t582 = UncheckedCast<Smi>(convert5ATSmi((*result_200).value()));
          USE(t582);
          *_return_196 = t582;
          Goto(label_macro_end_684);
        }
      } else {
        // ../../src/builtins/data-view.tq:103:11
        {
          // ../../src/builtins/data-view.tq:105:6
          int31_t t583 = 0xFFFF;
          TNode<Int32T> t584 = UncheckedCast<Int32T>(from_constexpr7ATint32(t583));
          TNode<Int32T> t585 = UncheckedCast<Int32T>(Word32And((*result_200).value(), t584));
          USE(t585);
          TNode<Smi> t586 = UncheckedCast<Smi>(convert5ATSmi(t585));
          USE(t586);
          *_return_196 = t586;
          Goto(label_macro_end_684);
        }
      }
    }
  }
  BIND(label_macro_end_684);
  return (*_return_196).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_201_impl);
  auto _return_201 = &_return_201_impl;
  USE(_return_201);
  Label label_macro_end_686_impl(this, {_return_201});
  Label* label_macro_end_686 = &label_macro_end_686_impl;
  USE(label_macro_end_686);
  // ../../src/builtins/data-view.tq:111:55
  {
    // ../../src/builtins/data-view.tq:112:4
    TNode<RawPtrT> t587 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_202_impl);
    auto data_pointer_202 = &data_pointer_202_impl;
    USE(data_pointer_202);
    *data_pointer_202 = t587;
    // ../../src/builtins/data-view.tq:114:4
    TNode<Uint32T> t588 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_202).value(), p_offset));
    USE(t588);
    TVARIABLE(Uint32T, b0_203_impl);
    auto b0_203 = &b0_203_impl;
    USE(b0_203);
    *b0_203 = t588;
    // ../../src/builtins/data-view.tq:115:4
    int31_t t589 = 1;
    TNode<IntPtrT> t590 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t589));
    TNode<IntPtrT> t591 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t590));
    USE(t591);
    TNode<Uint32T> t592 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_202).value(), t591));
    USE(t592);
    TVARIABLE(Uint32T, b1_204_impl);
    auto b1_204 = &b1_204_impl;
    USE(b1_204);
    *b1_204 = t592;
    // ../../src/builtins/data-view.tq:116:4
    int31_t t593 = 2;
    TNode<IntPtrT> t594 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t593));
    TNode<IntPtrT> t595 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t594));
    USE(t595);
    TNode<Uint32T> t596 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_202).value(), t595));
    USE(t596);
    TVARIABLE(Uint32T, b2_205_impl);
    auto b2_205 = &b2_205_impl;
    USE(b2_205);
    *b2_205 = t596;
    // ../../src/builtins/data-view.tq:117:4
    int31_t t597 = 3;
    TNode<IntPtrT> t598 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t597));
    TNode<IntPtrT> t599 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t598));
    USE(t599);
    TNode<Uint32T> t600 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_202).value(), t599));
    USE(t600);
    TVARIABLE(Uint32T, b3_206_impl);
    auto b3_206 = &b3_206_impl;
    USE(b3_206);
    *b3_206 = t600;
    // ../../src/builtins/data-view.tq:118:4
    TVARIABLE(Uint32T, result_207_impl);
    auto result_207 = &result_207_impl;
    USE(result_207);
    // ../../src/builtins/data-view.tq:120:4
    {
      Label label__True_193_impl(this);
      Label* label__True_193 = &label__True_193_impl;
      USE(label__True_193);
      Label label__False_194_impl(this);
      Label* label__False_194 = &label__False_194_impl;
      USE(label__False_194);
      Label label_if_done_label_542_687_impl(this, {result_207});
      Label* label_if_done_label_542_687 = &label_if_done_label_542_687_impl;
      USE(label_if_done_label_542_687);
      Branch(p_requested_little_endian, label__True_193, label__False_194);
      if (label__True_193->is_used())
      {
        BIND(label__True_193);
        // ../../src/builtins/data-view.tq:120:33
        {
          // ../../src/builtins/data-view.tq:121:6
          int31_t t601 = 24;
          TNode<Uint32T> t602 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t601));
          TNode<Uint32T> t603 = UncheckedCast<Uint32T>(Word32Shl((*b3_206).value(), t602));
          USE(t603);
          int31_t t604 = 16;
          TNode<Uint32T> t605 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t604));
          TNode<Uint32T> t606 = UncheckedCast<Uint32T>(Word32Shl((*b2_205).value(), t605));
          USE(t606);
          TNode<Uint32T> t607 = UncheckedCast<Uint32T>(Word32Or(t603, t606));
          USE(t607);
          int31_t t608 = 8;
          TNode<Uint32T> t609 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t608));
          TNode<Uint32T> t610 = UncheckedCast<Uint32T>(Word32Shl((*b1_204).value(), t609));
          USE(t610);
          TNode<Uint32T> t611 = UncheckedCast<Uint32T>(Word32Or(t607, t610));
          USE(t611);
          TNode<Uint32T> t612 = UncheckedCast<Uint32T>(Word32Or(t611, (*b0_203).value()));
          USE(t612);
          *result_207 = t612;
        }
        Goto(label_if_done_label_542_687);
      }
      if (label__False_194->is_used())
      {
        BIND(label__False_194);
        // ../../src/builtins/data-view.tq:122:11
        {
          // ../../src/builtins/data-view.tq:123:6
          int31_t t613 = 24;
          TNode<Uint32T> t614 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t613));
          TNode<Uint32T> t615 = UncheckedCast<Uint32T>(Word32Shl((*b0_203).value(), t614));
          USE(t615);
          int31_t t616 = 16;
          TNode<Uint32T> t617 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t616));
          TNode<Uint32T> t618 = UncheckedCast<Uint32T>(Word32Shl((*b1_204).value(), t617));
          USE(t618);
          TNode<Uint32T> t619 = UncheckedCast<Uint32T>(Word32Or(t615, t618));
          USE(t619);
          int31_t t620 = 8;
          TNode<Uint32T> t621 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t620));
          TNode<Uint32T> t622 = UncheckedCast<Uint32T>(Word32Shl((*b2_205).value(), t621));
          USE(t622);
          TNode<Uint32T> t623 = UncheckedCast<Uint32T>(Word32Or(t619, t622));
          USE(t623);
          TNode<Uint32T> t624 = UncheckedCast<Uint32T>(Word32Or(t623, (*b3_206).value()));
          USE(t624);
          *result_207 = t624;
        }
        Goto(label_if_done_label_542_687);
      }
      BIND(label_if_done_label_542_687);
    }
    // ../../src/builtins/data-view.tq:126:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:126:26
        {
          // ../../src/builtins/data-view.tq:127:6
          TNode<Int32T> t625 = UncheckedCast<Int32T>(Signed((*result_207).value()));
          USE(t625);
          TNode<Number> t626 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(t625));
          USE(t626);
          *_return_201 = t626;
          Goto(label_macro_end_686);
        }
      } else {
        // ../../src/builtins/data-view.tq:128:11
        {
          // ../../src/builtins/data-view.tq:129:6
          TNode<Number> t627 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*result_207).value()));
          USE(t627);
          *_return_201 = t627;
          Goto(label_macro_end_686);
        }
      }
    }
  }
  BIND(label_macro_end_686);
  return (*_return_201).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_208_impl);
  auto _return_208 = &_return_208_impl;
  USE(_return_208);
  Label label_macro_end_688_impl(this, {_return_208});
  Label* label_macro_end_688 = &label_macro_end_688_impl;
  USE(label_macro_end_688);
  // ../../src/builtins/data-view.tq:134:67
  {
    // ../../src/builtins/data-view.tq:135:4
    TNode<RawPtrT> t628 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_209_impl);
    auto data_pointer_209 = &data_pointer_209_impl;
    USE(data_pointer_209);
    *data_pointer_209 = t628;
    // ../../src/builtins/data-view.tq:137:4
    TNode<Uint32T> t629 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_209).value(), p_offset));
    USE(t629);
    TVARIABLE(Uint32T, b0_210_impl);
    auto b0_210 = &b0_210_impl;
    USE(b0_210);
    *b0_210 = t629;
    // ../../src/builtins/data-view.tq:138:4
    int31_t t630 = 1;
    TNode<IntPtrT> t631 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t630));
    TNode<IntPtrT> t632 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t631));
    USE(t632);
    TNode<Uint32T> t633 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_209).value(), t632));
    USE(t633);
    TVARIABLE(Uint32T, b1_211_impl);
    auto b1_211 = &b1_211_impl;
    USE(b1_211);
    *b1_211 = t633;
    // ../../src/builtins/data-view.tq:139:4
    int31_t t634 = 2;
    TNode<IntPtrT> t635 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t634));
    TNode<IntPtrT> t636 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t635));
    USE(t636);
    TNode<Uint32T> t637 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_209).value(), t636));
    USE(t637);
    TVARIABLE(Uint32T, b2_212_impl);
    auto b2_212 = &b2_212_impl;
    USE(b2_212);
    *b2_212 = t637;
    // ../../src/builtins/data-view.tq:140:4
    int31_t t638 = 3;
    TNode<IntPtrT> t639 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t638));
    TNode<IntPtrT> t640 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t639));
    USE(t640);
    TNode<Uint32T> t641 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_209).value(), t640));
    USE(t641);
    TVARIABLE(Uint32T, b3_213_impl);
    auto b3_213 = &b3_213_impl;
    USE(b3_213);
    *b3_213 = t641;
    // ../../src/builtins/data-view.tq:141:4
    TVARIABLE(Uint32T, result_214_impl);
    auto result_214 = &result_214_impl;
    USE(result_214);
    // ../../src/builtins/data-view.tq:143:4
    {
      Label label__True_197_impl(this);
      Label* label__True_197 = &label__True_197_impl;
      USE(label__True_197);
      Label label__False_198_impl(this);
      Label* label__False_198 = &label__False_198_impl;
      USE(label__False_198);
      Label label_if_done_label_543_689_impl(this, {result_214});
      Label* label_if_done_label_543_689 = &label_if_done_label_543_689_impl;
      USE(label_if_done_label_543_689);
      Branch(p_requested_little_endian, label__True_197, label__False_198);
      if (label__True_197->is_used())
      {
        BIND(label__True_197);
        // ../../src/builtins/data-view.tq:143:33
        {
          // ../../src/builtins/data-view.tq:144:6
          int31_t t642 = 24;
          TNode<Uint32T> t643 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t642));
          TNode<Uint32T> t644 = UncheckedCast<Uint32T>(Word32Shl((*b3_213).value(), t643));
          USE(t644);
          int31_t t645 = 16;
          TNode<Uint32T> t646 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t645));
          TNode<Uint32T> t647 = UncheckedCast<Uint32T>(Word32Shl((*b2_212).value(), t646));
          USE(t647);
          TNode<Uint32T> t648 = UncheckedCast<Uint32T>(Word32Or(t644, t647));
          USE(t648);
          int31_t t649 = 8;
          TNode<Uint32T> t650 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t649));
          TNode<Uint32T> t651 = UncheckedCast<Uint32T>(Word32Shl((*b1_211).value(), t650));
          USE(t651);
          TNode<Uint32T> t652 = UncheckedCast<Uint32T>(Word32Or(t648, t651));
          USE(t652);
          TNode<Uint32T> t653 = UncheckedCast<Uint32T>(Word32Or(t652, (*b0_210).value()));
          USE(t653);
          *result_214 = t653;
        }
        Goto(label_if_done_label_543_689);
      }
      if (label__False_198->is_used())
      {
        BIND(label__False_198);
        // ../../src/builtins/data-view.tq:145:11
        {
          // ../../src/builtins/data-view.tq:146:6
          int31_t t654 = 24;
          TNode<Uint32T> t655 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t654));
          TNode<Uint32T> t656 = UncheckedCast<Uint32T>(Word32Shl((*b0_210).value(), t655));
          USE(t656);
          int31_t t657 = 16;
          TNode<Uint32T> t658 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t657));
          TNode<Uint32T> t659 = UncheckedCast<Uint32T>(Word32Shl((*b1_211).value(), t658));
          USE(t659);
          TNode<Uint32T> t660 = UncheckedCast<Uint32T>(Word32Or(t656, t659));
          USE(t660);
          int31_t t661 = 8;
          TNode<Uint32T> t662 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t661));
          TNode<Uint32T> t663 = UncheckedCast<Uint32T>(Word32Shl((*b2_212).value(), t662));
          USE(t663);
          TNode<Uint32T> t664 = UncheckedCast<Uint32T>(Word32Or(t660, t663));
          USE(t664);
          TNode<Uint32T> t665 = UncheckedCast<Uint32T>(Word32Or(t664, (*b3_213).value()));
          USE(t665);
          *result_214 = t665;
        }
        Goto(label_if_done_label_543_689);
      }
      BIND(label_if_done_label_543_689);
    }
    // ../../src/builtins/data-view.tq:149:4
    TNode<Float32T> t666 = UncheckedCast<Float32T>(BitcastInt32ToFloat32((*result_214).value()));
    USE(t666);
    TNode<Float64T> t667 = UncheckedCast<Float64T>(convert9ATfloat64(t666));
    USE(t667);
    TVARIABLE(Float64T, float_res_215_impl);
    auto float_res_215 = &float_res_215_impl;
    USE(float_res_215);
    *float_res_215 = t667;
    // ../../src/builtins/data-view.tq:150:4
    TNode<Number> t668 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*float_res_215).value()));
    USE(t668);
    *_return_208 = t668;
    Goto(label_macro_end_688);
  }
  BIND(label_macro_end_688);
  return (*_return_208).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_216_impl);
  auto _return_216 = &_return_216_impl;
  USE(_return_216);
  Label label_macro_end_690_impl(this, {_return_216});
  Label* label_macro_end_690 = &label_macro_end_690_impl;
  USE(label_macro_end_690);
  // ../../src/builtins/data-view.tq:154:67
  {
    // ../../src/builtins/data-view.tq:155:4
    TNode<RawPtrT> t669 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_217_impl);
    auto data_pointer_217 = &data_pointer_217_impl;
    USE(data_pointer_217);
    *data_pointer_217 = t669;
    // ../../src/builtins/data-view.tq:157:4
    TNode<Uint32T> t670 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), p_offset));
    USE(t670);
    TVARIABLE(Uint32T, b0_218_impl);
    auto b0_218 = &b0_218_impl;
    USE(b0_218);
    *b0_218 = t670;
    // ../../src/builtins/data-view.tq:158:4
    int31_t t671 = 1;
    TNode<IntPtrT> t672 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t671));
    TNode<IntPtrT> t673 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t672));
    USE(t673);
    TNode<Uint32T> t674 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t673));
    USE(t674);
    TVARIABLE(Uint32T, b1_219_impl);
    auto b1_219 = &b1_219_impl;
    USE(b1_219);
    *b1_219 = t674;
    // ../../src/builtins/data-view.tq:159:4
    int31_t t675 = 2;
    TNode<IntPtrT> t676 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t675));
    TNode<IntPtrT> t677 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t676));
    USE(t677);
    TNode<Uint32T> t678 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t677));
    USE(t678);
    TVARIABLE(Uint32T, b2_220_impl);
    auto b2_220 = &b2_220_impl;
    USE(b2_220);
    *b2_220 = t678;
    // ../../src/builtins/data-view.tq:160:4
    int31_t t679 = 3;
    TNode<IntPtrT> t680 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t679));
    TNode<IntPtrT> t681 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t680));
    USE(t681);
    TNode<Uint32T> t682 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t681));
    USE(t682);
    TVARIABLE(Uint32T, b3_221_impl);
    auto b3_221 = &b3_221_impl;
    USE(b3_221);
    *b3_221 = t682;
    // ../../src/builtins/data-view.tq:161:4
    int31_t t683 = 4;
    TNode<IntPtrT> t684 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t683));
    TNode<IntPtrT> t685 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t684));
    USE(t685);
    TNode<Uint32T> t686 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t685));
    USE(t686);
    TVARIABLE(Uint32T, b4_222_impl);
    auto b4_222 = &b4_222_impl;
    USE(b4_222);
    *b4_222 = t686;
    // ../../src/builtins/data-view.tq:162:4
    int31_t t687 = 5;
    TNode<IntPtrT> t688 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t687));
    TNode<IntPtrT> t689 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t688));
    USE(t689);
    TNode<Uint32T> t690 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t689));
    USE(t690);
    TVARIABLE(Uint32T, b5_223_impl);
    auto b5_223 = &b5_223_impl;
    USE(b5_223);
    *b5_223 = t690;
    // ../../src/builtins/data-view.tq:163:4
    int31_t t691 = 6;
    TNode<IntPtrT> t692 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t691));
    TNode<IntPtrT> t693 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t692));
    USE(t693);
    TNode<Uint32T> t694 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t693));
    USE(t694);
    TVARIABLE(Uint32T, b6_224_impl);
    auto b6_224 = &b6_224_impl;
    USE(b6_224);
    *b6_224 = t694;
    // ../../src/builtins/data-view.tq:164:4
    int31_t t695 = 7;
    TNode<IntPtrT> t696 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t695));
    TNode<IntPtrT> t697 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t696));
    USE(t697);
    TNode<Uint32T> t698 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_217).value(), t697));
    USE(t698);
    TVARIABLE(Uint32T, b7_225_impl);
    auto b7_225 = &b7_225_impl;
    USE(b7_225);
    *b7_225 = t698;
    // ../../src/builtins/data-view.tq:165:4
    TVARIABLE(Uint32T, low_word_226_impl);
    auto low_word_226 = &low_word_226_impl;
    USE(low_word_226);
    // ../../src/builtins/data-view.tq:166:4
    TVARIABLE(Uint32T, high_word_227_impl);
    auto high_word_227 = &high_word_227_impl;
    USE(high_word_227);
    // ../../src/builtins/data-view.tq:168:4
    {
      Label label__True_199_impl(this);
      Label* label__True_199 = &label__True_199_impl;
      USE(label__True_199);
      Label label__False_200_impl(this);
      Label* label__False_200 = &label__False_200_impl;
      USE(label__False_200);
      Label label_if_done_label_544_691_impl(this, {low_word_226, high_word_227});
      Label* label_if_done_label_544_691 = &label_if_done_label_544_691_impl;
      USE(label_if_done_label_544_691);
      Branch(p_requested_little_endian, label__True_199, label__False_200);
      if (label__True_199->is_used())
      {
        BIND(label__True_199);
        // ../../src/builtins/data-view.tq:168:33
        {
          // ../../src/builtins/data-view.tq:169:6
          int31_t t699 = 24;
          TNode<Uint32T> t700 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t699));
          TNode<Uint32T> t701 = UncheckedCast<Uint32T>(Word32Shl((*b3_221).value(), t700));
          USE(t701);
          int31_t t702 = 16;
          TNode<Uint32T> t703 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t702));
          TNode<Uint32T> t704 = UncheckedCast<Uint32T>(Word32Shl((*b2_220).value(), t703));
          USE(t704);
          TNode<Uint32T> t705 = UncheckedCast<Uint32T>(Word32Or(t701, t704));
          USE(t705);
          int31_t t706 = 8;
          TNode<Uint32T> t707 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t706));
          TNode<Uint32T> t708 = UncheckedCast<Uint32T>(Word32Shl((*b1_219).value(), t707));
          USE(t708);
          TNode<Uint32T> t709 = UncheckedCast<Uint32T>(Word32Or(t705, t708));
          USE(t709);
          TNode<Uint32T> t710 = UncheckedCast<Uint32T>(Word32Or(t709, (*b0_218).value()));
          USE(t710);
          *low_word_226 = t710;
          // ../../src/builtins/data-view.tq:170:6
          int31_t t711 = 24;
          TNode<Uint32T> t712 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t711));
          TNode<Uint32T> t713 = UncheckedCast<Uint32T>(Word32Shl((*b7_225).value(), t712));
          USE(t713);
          int31_t t714 = 16;
          TNode<Uint32T> t715 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t714));
          TNode<Uint32T> t716 = UncheckedCast<Uint32T>(Word32Shl((*b6_224).value(), t715));
          USE(t716);
          TNode<Uint32T> t717 = UncheckedCast<Uint32T>(Word32Or(t713, t716));
          USE(t717);
          int31_t t718 = 8;
          TNode<Uint32T> t719 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t718));
          TNode<Uint32T> t720 = UncheckedCast<Uint32T>(Word32Shl((*b5_223).value(), t719));
          USE(t720);
          TNode<Uint32T> t721 = UncheckedCast<Uint32T>(Word32Or(t717, t720));
          USE(t721);
          TNode<Uint32T> t722 = UncheckedCast<Uint32T>(Word32Or(t721, (*b4_222).value()));
          USE(t722);
          *high_word_227 = t722;
        }
        Goto(label_if_done_label_544_691);
      }
      if (label__False_200->is_used())
      {
        BIND(label__False_200);
        // ../../src/builtins/data-view.tq:171:11
        {
          // ../../src/builtins/data-view.tq:172:6
          int31_t t723 = 24;
          TNode<Uint32T> t724 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t723));
          TNode<Uint32T> t725 = UncheckedCast<Uint32T>(Word32Shl((*b0_218).value(), t724));
          USE(t725);
          int31_t t726 = 16;
          TNode<Uint32T> t727 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t726));
          TNode<Uint32T> t728 = UncheckedCast<Uint32T>(Word32Shl((*b1_219).value(), t727));
          USE(t728);
          TNode<Uint32T> t729 = UncheckedCast<Uint32T>(Word32Or(t725, t728));
          USE(t729);
          int31_t t730 = 8;
          TNode<Uint32T> t731 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t730));
          TNode<Uint32T> t732 = UncheckedCast<Uint32T>(Word32Shl((*b2_220).value(), t731));
          USE(t732);
          TNode<Uint32T> t733 = UncheckedCast<Uint32T>(Word32Or(t729, t732));
          USE(t733);
          TNode<Uint32T> t734 = UncheckedCast<Uint32T>(Word32Or(t733, (*b3_221).value()));
          USE(t734);
          *high_word_227 = t734;
          // ../../src/builtins/data-view.tq:173:6
          int31_t t735 = 24;
          TNode<Uint32T> t736 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t735));
          TNode<Uint32T> t737 = UncheckedCast<Uint32T>(Word32Shl((*b4_222).value(), t736));
          USE(t737);
          int31_t t738 = 16;
          TNode<Uint32T> t739 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t738));
          TNode<Uint32T> t740 = UncheckedCast<Uint32T>(Word32Shl((*b5_223).value(), t739));
          USE(t740);
          TNode<Uint32T> t741 = UncheckedCast<Uint32T>(Word32Or(t737, t740));
          USE(t741);
          int31_t t742 = 8;
          TNode<Uint32T> t743 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t742));
          TNode<Uint32T> t744 = UncheckedCast<Uint32T>(Word32Shl((*b6_224).value(), t743));
          USE(t744);
          TNode<Uint32T> t745 = UncheckedCast<Uint32T>(Word32Or(t741, t744));
          USE(t745);
          TNode<Uint32T> t746 = UncheckedCast<Uint32T>(Word32Or(t745, (*b7_225).value()));
          USE(t746);
          *low_word_226 = t746;
        }
        Goto(label_if_done_label_544_691);
      }
      BIND(label_if_done_label_544_691);
    }
    // ../../src/builtins/data-view.tq:176:4
    int31_t t747 = 0;
    TVARIABLE(Float64T, result_228_impl);
    auto result_228 = &result_228_impl;
    USE(result_228);
    TNode<Float64T> t748 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(t747));
    *result_228 = t748;
    // ../../src/builtins/data-view.tq:177:4
    TNode<Float64T> t749 = UncheckedCast<Float64T>(Float64InsertLowWord32((*result_228).value(), (*low_word_226).value()));
    USE(t749);
    *result_228 = t749;
    // ../../src/builtins/data-view.tq:178:4
    TNode<Float64T> t750 = UncheckedCast<Float64T>(Float64InsertHighWord32((*result_228).value(), (*high_word_227).value()));
    USE(t750);
    *result_228 = t750;
    // ../../src/builtins/data-view.tq:180:4
    TNode<Number> t751 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*result_228).value()));
    USE(t751);
    *_return_216 = t751;
    Goto(label_macro_end_690);
  }
  BIND(label_macro_end_690);
  return (*_return_216).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_is_positive, int31_t p_length) {
  TVARIABLE(BigInt, _return_229_impl);
  auto _return_229 = &_return_229_impl;
  USE(_return_229);
  Label label_macro_end_692_impl(this, {_return_229});
  Label* label_macro_end_692 = &label_macro_end_692_impl;
  USE(label_macro_end_692);
  // ../../src/builtins/data-view.tq:195:78
  {
    // ../../src/builtins/data-view.tq:197:4
    TNode<IntPtrT> t752 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(p_length));
    TNode<BigInt> t753 = UncheckedCast<BigInt>(AllocateBigInt(t752));
    USE(t753);
    TVARIABLE(BigInt, result_230_impl);
    auto result_230 = &result_230_impl;
    USE(result_230);
    *result_230 = t753;
    // ../../src/builtins/data-view.tq:200:4
    {
      Label label__True_201_impl(this);
      Label* label__True_201 = &label__True_201_impl;
      USE(label__True_201);
      Label label__False_202_impl(this);
      Label* label__False_202 = &label__False_202_impl;
      USE(label__False_202);
      Label label_if_done_label_545_693_impl(this, {});
      Label* label_if_done_label_545_693 = &label_if_done_label_545_693_impl;
      USE(label_if_done_label_545_693);
      Branch(p_is_positive, label__True_201, label__False_202);
      if (label__True_201->is_used())
      {
        BIND(label__True_201);
        // ../../src/builtins/data-view.tq:200:21
        {
          // ../../src/builtins/data-view.tq:201:6
          TNode<IntPtrT> t754 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(false, p_length));
          USE(t754);
          StoreBigIntBitfield((*result_230).value(), t754);
        }
        Goto(label_if_done_label_545_693);
      }
      if (label__False_202->is_used())
      {
        BIND(label__False_202);
        // ../../src/builtins/data-view.tq:203:11
        {
          // ../../src/builtins/data-view.tq:204:6
          TNode<IntPtrT> t755 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(true, p_length));
          USE(t755);
          StoreBigIntBitfield((*result_230).value(), t755);
        }
        Goto(label_if_done_label_545_693);
      }
      BIND(label_if_done_label_545_693);
    }
    // ../../src/builtins/data-view.tq:208:4
    *_return_229 = (*result_230).value();
    Goto(label_macro_end_692);
  }
  BIND(label_macro_end_692);
  return (*_return_229).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_231_impl);
  auto _return_231 = &_return_231_impl;
  USE(_return_231);
  Label label_macro_end_694_impl(this, {_return_231});
  Label* label_macro_end_694 = &label_macro_end_694_impl;
  USE(label_macro_end_694);
  // ../../src/builtins/data-view.tq:213:58
  {
    // ../../src/builtins/data-view.tq:216:4
    {
      Label label__True_203_impl(this);
      Label* label__True_203 = &label__True_203_impl;
      USE(label__True_203);
      Label label__False_204_impl(this, {});
      Label* label__False_204 = &label__False_204_impl;
      USE(label__False_204);
      Label label__True_205_impl(this);
      Label* label__True_205 = &label__True_205_impl;
      USE(label__True_205);
      int31_t t756 = 0;
      TNode<Uint32T> t757 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t756));
      TNode<BoolT> t758 = UncheckedCast<BoolT>(Word32Equal(p_low_word, t757));
      USE(t758);
      GotoIfNot(t758, label__False_204);
      int31_t t759 = 0;
      TNode<Uint32T> t760 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t759));
      TNode<BoolT> t761 = UncheckedCast<BoolT>(Word32Equal(p_high_word, t760));
      USE(t761);
      Branch(t761, label__True_203, label__False_204);
      if (label__True_203->is_used())
      {
        BIND(label__True_203);
        // ../../src/builtins/data-view.tq:216:41
        {
          // ../../src/builtins/data-view.tq:217:6
          TNode<IntPtrT> t762 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(0));
          TNode<BigInt> t763 = UncheckedCast<BigInt>(AllocateBigInt(t762));
          USE(t763);
          *_return_231 = t763;
          Goto(label_macro_end_694);
        }
      }
      BIND(label__False_204);
    }
    // ../../src/builtins/data-view.tq:220:4
    TVARIABLE(BoolT, is_positive_232_impl);
    auto is_positive_232 = &is_positive_232_impl;
    USE(is_positive_232);
    TNode<BoolT> t764 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
    *is_positive_232 = t764;
    // ../../src/builtins/data-view.tq:221:4
    TNode<UintPtrT> t765 = UncheckedCast<UintPtrT>(convert9ATuintptr(p_high_word));
    USE(t765);
    TNode<IntPtrT> t766 = UncheckedCast<IntPtrT>(Signed(t765));
    USE(t766);
    TVARIABLE(IntPtrT, high_part_233_impl);
    auto high_part_233 = &high_part_233_impl;
    USE(high_part_233);
    *high_part_233 = t766;
    // ../../src/builtins/data-view.tq:222:4
    TNode<UintPtrT> t767 = UncheckedCast<UintPtrT>(convert9ATuintptr(p_low_word));
    USE(t767);
    TNode<IntPtrT> t768 = UncheckedCast<IntPtrT>(Signed(t767));
    USE(t768);
    TVARIABLE(IntPtrT, low_part_234_impl);
    auto low_part_234 = &low_part_234_impl;
    USE(low_part_234);
    *low_part_234 = t768;
    // ../../src/builtins/data-view.tq:223:4
    int31_t t769 = 32;
    TNode<IntPtrT> t770 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t769));
    TNode<IntPtrT> t771 = UncheckedCast<IntPtrT>(WordShl((*high_part_233).value(), t770));
    USE(t771);
    TNode<IntPtrT> t772 = UncheckedCast<IntPtrT>(IntPtrAdd(t771, (*low_part_234).value()));
    USE(t772);
    TVARIABLE(IntPtrT, raw_value_235_impl);
    auto raw_value_235 = &raw_value_235_impl;
    USE(raw_value_235);
    *raw_value_235 = t772;
    // ../../src/builtins/data-view.tq:225:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:225:26
        {
          // ../../src/builtins/data-view.tq:226:6
          {
            Label label__True_208_impl(this);
            Label* label__True_208 = &label__True_208_impl;
            USE(label__True_208);
            Label label__False_209_impl(this, {is_positive_232, raw_value_235});
            Label* label__False_209 = &label__False_209_impl;
            USE(label__False_209);
            int31_t t773 = 0;
            TNode<IntPtrT> t774 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t773));
            TNode<BoolT> t775 = UncheckedCast<BoolT>(IntPtrLessThan((*raw_value_235).value(), t774));
            USE(t775);
            Branch(t775, label__True_208, label__False_209);
            if (label__True_208->is_used())
            {
              BIND(label__True_208);
              // ../../src/builtins/data-view.tq:226:25
              {
                // ../../src/builtins/data-view.tq:227:8
                TNode<BoolT> t776 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                *is_positive_232 = t776;
                // ../../src/builtins/data-view.tq:229:8
                int31_t t777 = 0;
                TNode<IntPtrT> t778 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t777));
                TNode<IntPtrT> t779 = UncheckedCast<IntPtrT>(IntPtrSub(t778, (*raw_value_235).value()));
                USE(t779);
                *raw_value_235 = t779;
              }
              Goto(label__False_209);
            }
            BIND(label__False_209);
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:234:4
    TNode<BigInt> t780 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_232).value(), 1));
    USE(t780);
    TVARIABLE(BigInt, result_236_impl);
    auto result_236 = &result_236_impl;
    USE(result_236);
    *result_236 = t780;
    // ../../src/builtins/data-view.tq:236:4
    int31_t t781 = 0;
    TNode<UintPtrT> t782 = UncheckedCast<UintPtrT>(Unsigned((*raw_value_235).value()));
    USE(t782);
    StoreBigIntDigit((*result_236).value(), t781, t782);
    // ../../src/builtins/data-view.tq:238:4
    *_return_231 = (*result_236).value();
    Goto(label_macro_end_694);
  }
  BIND(label_macro_end_694);
  return (*_return_231).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_237_impl);
  auto _return_237 = &_return_237_impl;
  USE(_return_237);
  Label label_macro_end_695_impl(this, {_return_237});
  Label* label_macro_end_695 = &label_macro_end_695_impl;
  USE(label_macro_end_695);
  // ../../src/builtins/data-view.tq:243:58
  {
    // ../../src/builtins/data-view.tq:246:4
    {
      Label label__True_210_impl(this);
      Label* label__True_210 = &label__True_210_impl;
      USE(label__True_210);
      Label label__False_211_impl(this, {});
      Label* label__False_211 = &label__False_211_impl;
      USE(label__False_211);
      Label label__True_212_impl(this);
      Label* label__True_212 = &label__True_212_impl;
      USE(label__True_212);
      int31_t t783 = 0;
      TNode<Uint32T> t784 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t783));
      TNode<BoolT> t785 = UncheckedCast<BoolT>(Word32Equal(p_low_word, t784));
      USE(t785);
      GotoIfNot(t785, label__False_211);
      int31_t t786 = 0;
      TNode<Uint32T> t787 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t786));
      TNode<BoolT> t788 = UncheckedCast<BoolT>(Word32Equal(p_high_word, t787));
      USE(t788);
      Branch(t788, label__True_210, label__False_211);
      if (label__True_210->is_used())
      {
        BIND(label__True_210);
        // ../../src/builtins/data-view.tq:246:41
        {
          // ../../src/builtins/data-view.tq:247:6
          TNode<IntPtrT> t789 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(0));
          TNode<BigInt> t790 = UncheckedCast<BigInt>(AllocateBigInt(t789));
          USE(t790);
          *_return_237 = t790;
          Goto(label_macro_end_695);
        }
      }
      BIND(label__False_211);
    }
    // ../../src/builtins/data-view.tq:251:4
    TVARIABLE(BoolT, need_two_digits_238_impl);
    auto need_two_digits_238 = &need_two_digits_238_impl;
    USE(need_two_digits_238);
    TNode<BoolT> t791 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
    *need_two_digits_238 = t791;
    // ../../src/builtins/data-view.tq:252:4
    TVARIABLE(BoolT, is_positive_239_impl);
    auto is_positive_239 = &is_positive_239_impl;
    USE(is_positive_239);
    TNode<BoolT> t792 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
    *is_positive_239 = t792;
    // ../../src/builtins/data-view.tq:256:4
    TNode<Int32T> t793 = UncheckedCast<Int32T>(Signed(p_low_word));
    USE(t793);
    TVARIABLE(Int32T, low_part_240_impl);
    auto low_part_240 = &low_part_240_impl;
    USE(low_part_240);
    *low_part_240 = t793;
    // ../../src/builtins/data-view.tq:257:4
    TNode<Int32T> t794 = UncheckedCast<Int32T>(Signed(p_high_word));
    USE(t794);
    TVARIABLE(Int32T, high_part_241_impl);
    auto high_part_241 = &high_part_241_impl;
    USE(high_part_241);
    *high_part_241 = t794;
    // ../../src/builtins/data-view.tq:262:4
    {
      Label label__True_213_impl(this);
      Label* label__True_213 = &label__True_213_impl;
      USE(label__True_213);
      Label label__False_214_impl(this, {need_two_digits_238, is_positive_239, low_part_240, high_part_241});
      Label* label__False_214 = &label__False_214_impl;
      USE(label__False_214);
      int31_t t795 = 0;
      TNode<Uint32T> t796 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t795));
      TNode<BoolT> t797 = UncheckedCast<BoolT>(Word32NotEqual(p_high_word, t796));
      USE(t797);
      Branch(t797, label__True_213, label__False_214);
      if (label__True_213->is_used())
      {
        BIND(label__True_213);
        // ../../src/builtins/data-view.tq:262:24
        {
          // ../../src/builtins/data-view.tq:263:6
          {
            if ((p_signed)) {
              // ../../src/builtins/data-view.tq:263:28
              {
                // ../../src/builtins/data-view.tq:266:8
                {
                  Label label__True_217_impl(this);
                  Label* label__True_217 = &label__True_217_impl;
                  USE(label__True_217);
                  Label label__False_218_impl(this);
                  Label* label__False_218 = &label__False_218_impl;
                  USE(label__False_218);
                  Label label_if_done_label_546_696_impl(this, {need_two_digits_238, is_positive_239, low_part_240, high_part_241});
                  Label* label_if_done_label_546_696 = &label_if_done_label_546_696_impl;
                  USE(label_if_done_label_546_696);
                  int31_t t798 = 0;
                  TNode<Int32T> t799 = UncheckedCast<Int32T>(from_constexpr7ATint32(t798));
                  TNode<BoolT> t800 = UncheckedCast<BoolT>(Int32LessThan((*high_part_241).value(), t799));
                  USE(t800);
                  Branch(t800, label__True_217, label__False_218);
                  if (label__True_217->is_used())
                  {
                    BIND(label__True_217);
                    // ../../src/builtins/data-view.tq:266:27
                    {
                      // ../../src/builtins/data-view.tq:267:10
                      TNode<BoolT> t801 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                      *is_positive_239 = t801;
                      // ../../src/builtins/data-view.tq:272:10
                      int31_t t802 = 0;
                      TNode<Int32T> t803 = UncheckedCast<Int32T>(from_constexpr7ATint32(t802));
                      TNode<Int32T> t804 = UncheckedCast<Int32T>(Int32Sub(t803, (*high_part_241).value()));
                      USE(t804);
                      *high_part_241 = t804;
                      // ../../src/builtins/data-view.tq:273:10
                      {
                        Label label__True_219_impl(this);
                        Label* label__True_219 = &label__True_219_impl;
                        USE(label__True_219);
                        Label label__False_220_impl(this, {high_part_241});
                        Label* label__False_220 = &label__False_220_impl;
                        USE(label__False_220);
                        int31_t t805 = 0;
                        TNode<Int32T> t806 = UncheckedCast<Int32T>(from_constexpr7ATint32(t805));
                        TNode<BoolT> t807 = UncheckedCast<BoolT>(Word32NotEqual((*low_part_240).value(), t806));
                        USE(t807);
                        Branch(t807, label__True_219, label__False_220);
                        if (label__True_219->is_used())
                        {
                          BIND(label__True_219);
                          // ../../src/builtins/data-view.tq:273:29
                          {
                            // ../../src/builtins/data-view.tq:274:12
                            int31_t t808 = 1;
                            TNode<Int32T> t809 = UncheckedCast<Int32T>(from_constexpr7ATint32(t808));
                            TNode<Int32T> t810 = UncheckedCast<Int32T>(Int32Sub((*high_part_241).value(), t809));
                            USE(t810);
                            *high_part_241 = t810;
                          }
                          Goto(label__False_220);
                        }
                        BIND(label__False_220);
                      }
                      // ../../src/builtins/data-view.tq:276:10
                      int31_t t811 = 0;
                      TNode<Int32T> t812 = UncheckedCast<Int32T>(from_constexpr7ATint32(t811));
                      TNode<Int32T> t813 = UncheckedCast<Int32T>(Int32Sub(t812, (*low_part_240).value()));
                      USE(t813);
                      *low_part_240 = t813;
                      // ../../src/builtins/data-view.tq:279:10
                      {
                        Label label__True_221_impl(this);
                        Label* label__True_221 = &label__True_221_impl;
                        USE(label__True_221);
                        Label label__False_222_impl(this, {need_two_digits_238});
                        Label* label__False_222 = &label__False_222_impl;
                        USE(label__False_222);
                        int31_t t814 = 0;
                        TNode<Int32T> t815 = UncheckedCast<Int32T>(from_constexpr7ATint32(t814));
                        TNode<BoolT> t816 = UncheckedCast<BoolT>(Word32NotEqual((*high_part_241).value(), t815));
                        USE(t816);
                        Branch(t816, label__True_221, label__False_222);
                        if (label__True_221->is_used())
                        {
                          BIND(label__True_221);
                          // ../../src/builtins/data-view.tq:279:30
                          {
                            // ../../src/builtins/data-view.tq:280:12
                            TNode<BoolT> t817 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                            *need_two_digits_238 = t817;
                          }
                          Goto(label__False_222);
                        }
                        BIND(label__False_222);
                      }
                    }
                    Goto(label_if_done_label_546_696);
                  }
                  if (label__False_218->is_used())
                  {
                    BIND(label__False_218);
                    // ../../src/builtins/data-view.tq:283:15
                    {
                      // ../../src/builtins/data-view.tq:285:10
                      TNode<BoolT> t818 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                      *need_two_digits_238 = t818;
                    }
                    Goto(label_if_done_label_546_696);
                  }
                  BIND(label_if_done_label_546_696);
                }
              }
            } else {
              // ../../src/builtins/data-view.tq:288:13
              {
                // ../../src/builtins/data-view.tq:291:8
                TNode<BoolT> t819 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                *need_two_digits_238 = t819;
              }
            }
          }
        }
        Goto(label__False_214);
      }
      BIND(label__False_214);
    }
    // ../../src/builtins/data-view.tq:296:4
    TVARIABLE(BigInt, result_242_impl);
    auto result_242 = &result_242_impl;
    USE(result_242);
    // ../../src/builtins/data-view.tq:297:4
    {
      Label label__True_223_impl(this);
      Label* label__True_223 = &label__True_223_impl;
      USE(label__True_223);
      Label label__False_224_impl(this);
      Label* label__False_224 = &label__False_224_impl;
      USE(label__False_224);
      Label label_if_done_label_547_697_impl(this, {result_242});
      Label* label_if_done_label_547_697 = &label_if_done_label_547_697_impl;
      USE(label_if_done_label_547_697);
      Branch((*need_two_digits_238).value(), label__True_223, label__False_224);
      if (label__True_223->is_used())
      {
        BIND(label__True_223);
        // ../../src/builtins/data-view.tq:297:25
        {
          // ../../src/builtins/data-view.tq:298:6
          TNode<BigInt> t820 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_239).value(), 2));
          USE(t820);
          *result_242 = t820;
        }
        Goto(label_if_done_label_547_697);
      }
      if (label__False_224->is_used())
      {
        BIND(label__False_224);
        // ../../src/builtins/data-view.tq:299:11
        {
          // ../../src/builtins/data-view.tq:300:6
          TNode<BigInt> t821 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_239).value(), 1));
          USE(t821);
          *result_242 = t821;
        }
        Goto(label_if_done_label_547_697);
      }
      BIND(label_if_done_label_547_697);
    }
    // ../../src/builtins/data-view.tq:304:4
    int31_t t822 = 0;
    TNode<IntPtrT> t823 = UncheckedCast<IntPtrT>(convert8ATintptr((*low_part_240).value()));
    USE(t823);
    TNode<UintPtrT> t824 = UncheckedCast<UintPtrT>(Unsigned(t823));
    USE(t824);
    StoreBigIntDigit((*result_242).value(), t822, t824);
    // ../../src/builtins/data-view.tq:306:4
    {
      Label label__True_225_impl(this);
      Label* label__True_225 = &label__True_225_impl;
      USE(label__True_225);
      Label label__False_226_impl(this, {});
      Label* label__False_226 = &label__False_226_impl;
      USE(label__False_226);
      Branch((*need_two_digits_238).value(), label__True_225, label__False_226);
      if (label__True_225->is_used())
      {
        BIND(label__True_225);
        // ../../src/builtins/data-view.tq:306:25
        {
          // ../../src/builtins/data-view.tq:307:6
          int31_t t825 = 1;
          TNode<IntPtrT> t826 = UncheckedCast<IntPtrT>(convert8ATintptr((*high_part_241).value()));
          USE(t826);
          TNode<UintPtrT> t827 = UncheckedCast<UintPtrT>(Unsigned(t826));
          USE(t827);
          StoreBigIntDigit((*result_242).value(), t825, t827);
        }
        Goto(label__False_226);
      }
      BIND(label__False_226);
    }
    // ../../src/builtins/data-view.tq:310:4
    *_return_237 = (*result_242).value();
    Goto(label_macro_end_695);
  }
  BIND(label_macro_end_695);
  return (*_return_237).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_243_impl);
  auto _return_243 = &_return_243_impl;
  USE(_return_243);
  Label label_macro_end_698_impl(this, {_return_243});
  Label* label_macro_end_698 = &label_macro_end_698_impl;
  USE(label_macro_end_698);
  // ../../src/builtins/data-view.tq:314:51
  {
    // ../../src/builtins/data-view.tq:317:4
    {
      bool t828 = Is64();
      USE(t828);
      if ((t828)) {
        // ../../src/builtins/data-view.tq:317:26
        {
          // ../../src/builtins/data-view.tq:318:6
          TNode<BigInt> t829 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(p_low_word, p_high_word, p_signed));
          USE(t829);
          *_return_243 = t829;
          Goto(label_macro_end_698);
        }
      } else {
        // ../../src/builtins/data-view.tq:319:11
        {
          // ../../src/builtins/data-view.tq:320:6
          TNode<BigInt> t830 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(p_low_word, p_high_word, p_signed));
          USE(t830);
          *_return_243 = t830;
          Goto(label_macro_end_698);
        }
      }
    }
  }
  BIND(label_macro_end_698);
  return (*_return_243).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(BigInt, _return_244_impl);
  auto _return_244 = &_return_244_impl;
  USE(_return_244);
  Label label_macro_end_699_impl(this, {_return_244});
  Label* label_macro_end_699 = &label_macro_end_699_impl;
  USE(label_macro_end_699);
  // ../../src/builtins/data-view.tq:326:59
  {
    // ../../src/builtins/data-view.tq:327:4
    TNode<RawPtrT> t831 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_245_impl);
    auto data_pointer_245 = &data_pointer_245_impl;
    USE(data_pointer_245);
    *data_pointer_245 = t831;
    // ../../src/builtins/data-view.tq:329:4
    TNode<Uint32T> t832 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), p_offset));
    USE(t832);
    TVARIABLE(Uint32T, b0_246_impl);
    auto b0_246 = &b0_246_impl;
    USE(b0_246);
    *b0_246 = t832;
    // ../../src/builtins/data-view.tq:330:4
    int31_t t833 = 1;
    TNode<IntPtrT> t834 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t833));
    TNode<IntPtrT> t835 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t834));
    USE(t835);
    TNode<Uint32T> t836 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t835));
    USE(t836);
    TVARIABLE(Uint32T, b1_247_impl);
    auto b1_247 = &b1_247_impl;
    USE(b1_247);
    *b1_247 = t836;
    // ../../src/builtins/data-view.tq:331:4
    int31_t t837 = 2;
    TNode<IntPtrT> t838 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t837));
    TNode<IntPtrT> t839 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t838));
    USE(t839);
    TNode<Uint32T> t840 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t839));
    USE(t840);
    TVARIABLE(Uint32T, b2_248_impl);
    auto b2_248 = &b2_248_impl;
    USE(b2_248);
    *b2_248 = t840;
    // ../../src/builtins/data-view.tq:332:4
    int31_t t841 = 3;
    TNode<IntPtrT> t842 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t841));
    TNode<IntPtrT> t843 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t842));
    USE(t843);
    TNode<Uint32T> t844 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t843));
    USE(t844);
    TVARIABLE(Uint32T, b3_249_impl);
    auto b3_249 = &b3_249_impl;
    USE(b3_249);
    *b3_249 = t844;
    // ../../src/builtins/data-view.tq:333:4
    int31_t t845 = 4;
    TNode<IntPtrT> t846 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t845));
    TNode<IntPtrT> t847 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t846));
    USE(t847);
    TNode<Uint32T> t848 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t847));
    USE(t848);
    TVARIABLE(Uint32T, b4_250_impl);
    auto b4_250 = &b4_250_impl;
    USE(b4_250);
    *b4_250 = t848;
    // ../../src/builtins/data-view.tq:334:4
    int31_t t849 = 5;
    TNode<IntPtrT> t850 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t849));
    TNode<IntPtrT> t851 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t850));
    USE(t851);
    TNode<Uint32T> t852 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t851));
    USE(t852);
    TVARIABLE(Uint32T, b5_251_impl);
    auto b5_251 = &b5_251_impl;
    USE(b5_251);
    *b5_251 = t852;
    // ../../src/builtins/data-view.tq:335:4
    int31_t t853 = 6;
    TNode<IntPtrT> t854 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t853));
    TNode<IntPtrT> t855 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t854));
    USE(t855);
    TNode<Uint32T> t856 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t855));
    USE(t856);
    TVARIABLE(Uint32T, b6_252_impl);
    auto b6_252 = &b6_252_impl;
    USE(b6_252);
    *b6_252 = t856;
    // ../../src/builtins/data-view.tq:336:4
    int31_t t857 = 7;
    TNode<IntPtrT> t858 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t857));
    TNode<IntPtrT> t859 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t858));
    USE(t859);
    TNode<Uint32T> t860 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_245).value(), t859));
    USE(t860);
    TVARIABLE(Uint32T, b7_253_impl);
    auto b7_253 = &b7_253_impl;
    USE(b7_253);
    *b7_253 = t860;
    // ../../src/builtins/data-view.tq:337:4
    TVARIABLE(Uint32T, low_word_254_impl);
    auto low_word_254 = &low_word_254_impl;
    USE(low_word_254);
    // ../../src/builtins/data-view.tq:338:4
    TVARIABLE(Uint32T, high_word_255_impl);
    auto high_word_255 = &high_word_255_impl;
    USE(high_word_255);
    // ../../src/builtins/data-view.tq:340:4
    {
      Label label__True_229_impl(this);
      Label* label__True_229 = &label__True_229_impl;
      USE(label__True_229);
      Label label__False_230_impl(this);
      Label* label__False_230 = &label__False_230_impl;
      USE(label__False_230);
      Label label_if_done_label_548_700_impl(this, {low_word_254, high_word_255});
      Label* label_if_done_label_548_700 = &label_if_done_label_548_700_impl;
      USE(label_if_done_label_548_700);
      Branch(p_requested_little_endian, label__True_229, label__False_230);
      if (label__True_229->is_used())
      {
        BIND(label__True_229);
        // ../../src/builtins/data-view.tq:340:33
        {
          // ../../src/builtins/data-view.tq:341:6
          int31_t t861 = 24;
          TNode<Uint32T> t862 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t861));
          TNode<Uint32T> t863 = UncheckedCast<Uint32T>(Word32Shl((*b3_249).value(), t862));
          USE(t863);
          int31_t t864 = 16;
          TNode<Uint32T> t865 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t864));
          TNode<Uint32T> t866 = UncheckedCast<Uint32T>(Word32Shl((*b2_248).value(), t865));
          USE(t866);
          TNode<Uint32T> t867 = UncheckedCast<Uint32T>(Word32Or(t863, t866));
          USE(t867);
          int31_t t868 = 8;
          TNode<Uint32T> t869 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t868));
          TNode<Uint32T> t870 = UncheckedCast<Uint32T>(Word32Shl((*b1_247).value(), t869));
          USE(t870);
          TNode<Uint32T> t871 = UncheckedCast<Uint32T>(Word32Or(t867, t870));
          USE(t871);
          TNode<Uint32T> t872 = UncheckedCast<Uint32T>(Word32Or(t871, (*b0_246).value()));
          USE(t872);
          *low_word_254 = t872;
          // ../../src/builtins/data-view.tq:342:6
          int31_t t873 = 24;
          TNode<Uint32T> t874 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t873));
          TNode<Uint32T> t875 = UncheckedCast<Uint32T>(Word32Shl((*b7_253).value(), t874));
          USE(t875);
          int31_t t876 = 16;
          TNode<Uint32T> t877 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t876));
          TNode<Uint32T> t878 = UncheckedCast<Uint32T>(Word32Shl((*b6_252).value(), t877));
          USE(t878);
          TNode<Uint32T> t879 = UncheckedCast<Uint32T>(Word32Or(t875, t878));
          USE(t879);
          int31_t t880 = 8;
          TNode<Uint32T> t881 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t880));
          TNode<Uint32T> t882 = UncheckedCast<Uint32T>(Word32Shl((*b5_251).value(), t881));
          USE(t882);
          TNode<Uint32T> t883 = UncheckedCast<Uint32T>(Word32Or(t879, t882));
          USE(t883);
          TNode<Uint32T> t884 = UncheckedCast<Uint32T>(Word32Or(t883, (*b4_250).value()));
          USE(t884);
          *high_word_255 = t884;
        }
        Goto(label_if_done_label_548_700);
      }
      if (label__False_230->is_used())
      {
        BIND(label__False_230);
        // ../../src/builtins/data-view.tq:343:11
        {
          // ../../src/builtins/data-view.tq:344:6
          int31_t t885 = 24;
          TNode<Uint32T> t886 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t885));
          TNode<Uint32T> t887 = UncheckedCast<Uint32T>(Word32Shl((*b0_246).value(), t886));
          USE(t887);
          int31_t t888 = 16;
          TNode<Uint32T> t889 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t888));
          TNode<Uint32T> t890 = UncheckedCast<Uint32T>(Word32Shl((*b1_247).value(), t889));
          USE(t890);
          TNode<Uint32T> t891 = UncheckedCast<Uint32T>(Word32Or(t887, t890));
          USE(t891);
          int31_t t892 = 8;
          TNode<Uint32T> t893 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t892));
          TNode<Uint32T> t894 = UncheckedCast<Uint32T>(Word32Shl((*b2_248).value(), t893));
          USE(t894);
          TNode<Uint32T> t895 = UncheckedCast<Uint32T>(Word32Or(t891, t894));
          USE(t895);
          TNode<Uint32T> t896 = UncheckedCast<Uint32T>(Word32Or(t895, (*b3_249).value()));
          USE(t896);
          *high_word_255 = t896;
          // ../../src/builtins/data-view.tq:345:6
          int31_t t897 = 24;
          TNode<Uint32T> t898 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t897));
          TNode<Uint32T> t899 = UncheckedCast<Uint32T>(Word32Shl((*b4_250).value(), t898));
          USE(t899);
          int31_t t900 = 16;
          TNode<Uint32T> t901 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t900));
          TNode<Uint32T> t902 = UncheckedCast<Uint32T>(Word32Shl((*b5_251).value(), t901));
          USE(t902);
          TNode<Uint32T> t903 = UncheckedCast<Uint32T>(Word32Or(t899, t902));
          USE(t903);
          int31_t t904 = 8;
          TNode<Uint32T> t905 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t904));
          TNode<Uint32T> t906 = UncheckedCast<Uint32T>(Word32Shl((*b6_252).value(), t905));
          USE(t906);
          TNode<Uint32T> t907 = UncheckedCast<Uint32T>(Word32Or(t903, t906));
          USE(t907);
          TNode<Uint32T> t908 = UncheckedCast<Uint32T>(Word32Or(t907, (*b7_253).value()));
          USE(t908);
          *low_word_254 = t908;
        }
        Goto(label_if_done_label_548_700);
      }
      BIND(label_if_done_label_548_700);
    }
    // ../../src/builtins/data-view.tq:348:4
    TNode<BigInt> t909 = UncheckedCast<BigInt>(MakeBigInt((*low_word_254).value(), (*high_word_255).value(), p_signed));
    USE(t909);
    *_return_244 = t909;
    Goto(label_macro_end_699);
  }
  BIND(label_macro_end_699);
  return (*_return_244).value();
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_256_impl);
  auto _return_256 = &_return_256_impl;
  USE(_return_256);
  Label label_macro_end_701_impl(this, {_return_256});
  Label* label_macro_end_701 = &label_macro_end_701_impl;
  USE(label_macro_end_701);
  // ../../src/builtins/data-view.tq:358:59
  {
    // ../../src/builtins/data-view.tq:362:4
    const char* t910 = "get DataView.prototype.get";
    TNode<String> t911 = UncheckedCast<String>(from_constexpr8ATString(t910));
    TNode<JSDataView> t912 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t911));
    USE(t912);
    TVARIABLE(JSDataView, data_view_257_impl);
    auto data_view_257 = &data_view_257_impl;
    USE(data_view_257);
    *data_view_257 = t912;
    // ../../src/builtins/data-view.tq:365:4
    TVARIABLE(Number, getIndex_258_impl);
    auto getIndex_258 = &getIndex_258_impl;
    USE(getIndex_258);
    // ../../src/builtins/data-view.tq:366:4
    {
      Label label_try_done_549_702_impl(this);
      Label* label_try_done_549_702 = &label_try_done_549_702_impl;
      USE(label_try_done_549_702);
      Label label_RangeError_231_impl(this);
      Label* label_RangeError_231 = &label_RangeError_231_impl;
      USE(label_RangeError_231);
      Label label_try_begin_550_703_impl(this);
      Label* label_try_begin_550_703 = &label_try_begin_550_703_impl;
      USE(label_try_begin_550_703);
      Goto(label_try_begin_550_703);
      if (label_try_begin_550_703->is_used())
      {
        BIND(label_try_begin_550_703);
        // ../../src/builtins/data-view.tq:366:8
        {
          // ../../src/builtins/data-view.tq:367:6
          TNode<Number> t913 = UncheckedCast<Number>(ToIndex(p_offset, p_context, label_RangeError_231));
          USE(t913);
          *getIndex_258 = t913;
        }
        Goto(label_try_done_549_702);
      }
      if (label_RangeError_231->is_used())
      {
        BIND(label_RangeError_231);
        // ../../src/builtins/data-view.tq:369:21
        {
          // ../../src/builtins/data-view.tq:370:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label_try_done_549_702);
    }
    // ../../src/builtins/data-view.tq:373:4
    TNode<BoolT> t914 = UncheckedCast<BoolT>(ToBoolean(p_requested_little_endian));
    USE(t914);
    TVARIABLE(BoolT, littleEndian_259_impl);
    auto littleEndian_259 = &littleEndian_259_impl;
    USE(littleEndian_259);
    *littleEndian_259 = t914;
    // ../../src/builtins/data-view.tq:374:4
    TNode<JSArrayBuffer> t915 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_257).value()));
    TVARIABLE(JSArrayBuffer, buffer_260_impl);
    auto buffer_260 = &buffer_260_impl;
    USE(buffer_260);
    *buffer_260 = t915;
    // ../../src/builtins/data-view.tq:376:4
    {
      Label label__True_232_impl(this);
      Label* label__True_232 = &label__True_232_impl;
      USE(label__True_232);
      Label label__False_233_impl(this, {});
      Label* label__False_233 = &label__False_233_impl;
      USE(label__False_233);
      TNode<BoolT> t916 = UncheckedCast<BoolT>(IsDetachedBuffer((*buffer_260).value()));
      USE(t916);
      Branch(t916, label__True_232, label__False_233);
      if (label__True_232->is_used())
      {
        BIND(label__True_232);
        // ../../src/builtins/data-view.tq:376:34
        {
          // ../../src/builtins/data-view.tq:377:6
          const char* t917 = "DataView.prototype.get";
          TNode<Object> t918 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t917));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t918);
        }
      }
      BIND(label__False_233);
    }
    // ../../src/builtins/data-view.tq:380:4
    TNode<Number> t919 = UncheckedCast<Number>(LoadDataViewByteOffset((*data_view_257).value()));
    TVARIABLE(Number, viewOffset_261_impl);
    auto viewOffset_261 = &viewOffset_261_impl;
    USE(viewOffset_261);
    *viewOffset_261 = t919;
    // ../../src/builtins/data-view.tq:381:4
    TNode<Number> t920 = UncheckedCast<Number>(LoadDataViewByteLength((*data_view_257).value()));
    TVARIABLE(Number, viewSize_262_impl);
    auto viewSize_262 = &viewSize_262_impl;
    USE(viewSize_262);
    *viewSize_262 = t920;
    // ../../src/builtins/data-view.tq:382:4
    int31_t t921 = DataViewElementSize(p_kind);
    USE(t921);
    TVARIABLE(Number, elementSize_263_impl);
    auto elementSize_263 = &elementSize_263_impl;
    USE(elementSize_263);
    TNode<Number> t922 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t921));
    *elementSize_263 = t922;
    // ../../src/builtins/data-view.tq:384:4
    {
      Label label__True_234_impl(this);
      Label* label__True_234 = &label__True_234_impl;
      USE(label__True_234);
      Label label__False_235_impl(this, {});
      Label* label__False_235 = &label__False_235_impl;
      USE(label__False_235);
      TNode<Number> t923 = UncheckedCast<Number>(NumberAdd((*getIndex_258).value(), (*elementSize_263).value()));
      USE(t923);
      BranchIfNumberGreaterThan(t923, (*viewSize_262).value(), label__True_234, label__False_235);
      if (label__True_234->is_used())
      {
        BIND(label__True_234);
        // ../../src/builtins/data-view.tq:384:43
        {
          // ../../src/builtins/data-view.tq:385:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label__False_235);
    }
    // ../../src/builtins/data-view.tq:388:4
    TNode<Float64T> t924 = UncheckedCast<Float64T>(convert9ATfloat64((*getIndex_258).value()));
    USE(t924);
    TVARIABLE(Float64T, getIndexFloat_264_impl);
    auto getIndexFloat_264 = &getIndexFloat_264_impl;
    USE(getIndexFloat_264);
    *getIndexFloat_264 = t924;
    // ../../src/builtins/data-view.tq:389:4
    TNode<UintPtrT> t925 = UncheckedCast<UintPtrT>(convert9ATuintptr((*getIndexFloat_264).value()));
    USE(t925);
    TNode<IntPtrT> t926 = UncheckedCast<IntPtrT>(Signed(t925));
    USE(t926);
    TVARIABLE(IntPtrT, getIndexIntptr_265_impl);
    auto getIndexIntptr_265 = &getIndexIntptr_265_impl;
    USE(getIndexIntptr_265);
    *getIndexIntptr_265 = t926;
    // ../../src/builtins/data-view.tq:390:4
    TNode<Float64T> t927 = UncheckedCast<Float64T>(convert9ATfloat64((*viewOffset_261).value()));
    USE(t927);
    TVARIABLE(Float64T, viewOffsetFloat_266_impl);
    auto viewOffsetFloat_266 = &viewOffsetFloat_266_impl;
    USE(viewOffsetFloat_266);
    *viewOffsetFloat_266 = t927;
    // ../../src/builtins/data-view.tq:391:4
    TNode<UintPtrT> t928 = UncheckedCast<UintPtrT>(convert9ATuintptr((*viewOffsetFloat_266).value()));
    USE(t928);
    TNode<IntPtrT> t929 = UncheckedCast<IntPtrT>(Signed(t928));
    USE(t929);
    TVARIABLE(IntPtrT, viewOffsetIntptr_267_impl);
    auto viewOffsetIntptr_267 = &viewOffsetIntptr_267_impl;
    USE(viewOffsetIntptr_267);
    *viewOffsetIntptr_267 = t929;
    // ../../src/builtins/data-view.tq:393:4
    TNode<IntPtrT> t930 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndexIntptr_265).value(), (*viewOffsetIntptr_267).value()));
    USE(t930);
    TVARIABLE(IntPtrT, bufferIndex_268_impl);
    auto bufferIndex_268 = &bufferIndex_268_impl;
    USE(bufferIndex_268);
    *bufferIndex_268 = t930;
    // ../../src/builtins/data-view.tq:395:4
    {
      bool t931 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
      USE(t931);
      if ((t931)) {
        // ../../src/builtins/data-view.tq:395:42
        {
          // ../../src/builtins/data-view.tq:396:6
          TNode<Smi> t932 = UncheckedCast<Smi>(LoadDataViewUint8((*buffer_260).value(), (*bufferIndex_268).value()));
          USE(t932);
          *_return_256 = t932;
          Goto(label_macro_end_701);
        }
      } else {
        // ../../src/builtins/data-view.tq:397:11
        {
          bool t933 = ElementsKindEqual(p_kind, INT8_ELEMENTS);
          USE(t933);
          if ((t933)) {
            // ../../src/builtins/data-view.tq:397:48
            {
              // ../../src/builtins/data-view.tq:398:6
              TNode<Smi> t934 = UncheckedCast<Smi>(LoadDataViewInt8((*buffer_260).value(), (*bufferIndex_268).value()));
              USE(t934);
              *_return_256 = t934;
              Goto(label_macro_end_701);
            }
          } else {
            // ../../src/builtins/data-view.tq:399:11
            {
              bool t935 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
              USE(t935);
              if ((t935)) {
                // ../../src/builtins/data-view.tq:399:50
                {
                  // ../../src/builtins/data-view.tq:400:6
                  TNode<Number> t936 = UncheckedCast<Number>(LoadDataView16((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), false));
                  USE(t936);
                  *_return_256 = t936;
                  Goto(label_macro_end_701);
                }
              } else {
                // ../../src/builtins/data-view.tq:401:11
                {
                  bool t937 = ElementsKindEqual(p_kind, INT16_ELEMENTS);
                  USE(t937);
                  if ((t937)) {
                    // ../../src/builtins/data-view.tq:401:49
                    {
                      // ../../src/builtins/data-view.tq:402:6
                      TNode<Number> t938 = UncheckedCast<Number>(LoadDataView16((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), true));
                      USE(t938);
                      *_return_256 = t938;
                      Goto(label_macro_end_701);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:403:11
                    {
                      bool t939 = ElementsKindEqual(p_kind, UINT32_ELEMENTS);
                      USE(t939);
                      if ((t939)) {
                        // ../../src/builtins/data-view.tq:403:50
                        {
                          // ../../src/builtins/data-view.tq:404:6
                          TNode<Number> t940 = UncheckedCast<Number>(LoadDataView32((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), false));
                          USE(t940);
                          *_return_256 = t940;
                          Goto(label_macro_end_701);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:405:11
                        {
                          bool t941 = ElementsKindEqual(p_kind, INT32_ELEMENTS);
                          USE(t941);
                          if ((t941)) {
                            // ../../src/builtins/data-view.tq:405:49
                            {
                              // ../../src/builtins/data-view.tq:406:6
                              TNode<Number> t942 = UncheckedCast<Number>(LoadDataView32((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), true));
                              USE(t942);
                              *_return_256 = t942;
                              Goto(label_macro_end_701);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:407:11
                            {
                              bool t943 = ElementsKindEqual(p_kind, FLOAT32_ELEMENTS);
                              USE(t943);
                              if ((t943)) {
                                // ../../src/builtins/data-view.tq:407:51
                                {
                                  // ../../src/builtins/data-view.tq:408:6
                                  TNode<Number> t944 = UncheckedCast<Number>(LoadDataViewFloat32((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value()));
                                  USE(t944);
                                  *_return_256 = t944;
                                  Goto(label_macro_end_701);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:409:11
                                {
                                  bool t945 = ElementsKindEqual(p_kind, FLOAT64_ELEMENTS);
                                  USE(t945);
                                  if ((t945)) {
                                    // ../../src/builtins/data-view.tq:409:51
                                    {
                                      // ../../src/builtins/data-view.tq:410:6
                                      TNode<Number> t946 = UncheckedCast<Number>(LoadDataViewFloat64((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value()));
                                      USE(t946);
                                      *_return_256 = t946;
                                      Goto(label_macro_end_701);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:411:11
                                    {
                                      bool t947 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
                                      USE(t947);
                                      if ((t947)) {
                                        // ../../src/builtins/data-view.tq:411:52
                                        {
                                          // ../../src/builtins/data-view.tq:412:6
                                          TNode<BigInt> t948 = UncheckedCast<BigInt>(LoadDataViewBigInt((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), true));
                                          USE(t948);
                                          *_return_256 = t948;
                                          Goto(label_macro_end_701);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:413:11
                                        {
                                          bool t949 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
                                          USE(t949);
                                          if ((t949)) {
                                            // ../../src/builtins/data-view.tq:413:53
                                            {
                                              // ../../src/builtins/data-view.tq:414:6
                                              TNode<BigInt> t950 = UncheckedCast<BigInt>(LoadDataViewBigInt((*buffer_260).value(), (*bufferIndex_268).value(), (*littleEndian_259).value(), false));
                                              USE(t950);
                                              *_return_256 = t950;
                                              Goto(label_macro_end_701);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:415:11
                                            {
                                              // ../../src/builtins/data-view.tq:416:6
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_701);
  return (*_return_256).value();
}

TF_BUILTIN(DataViewPrototypeGetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:421:64
  {
    // ../../src/builtins/data-view.tq:422:4
    auto t951 = [=]() {
      int31_t t953 = 0;
      TNode<IntPtrT> t954 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t953));
      TNode<Object> t955 = UncheckedCast<Object>(GetArgumentValue(arguments, t954));
      return t955;
    };
    auto t952 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t956_551_impl);
    auto t956_551 = &t956_551_impl;
    USE(t956_551);
    {
      Label label__True_256_impl(this);
      Label* label__True_256 = &label__True_256_impl;
      USE(label__True_256);
      Label label__False_257_impl(this);
      Label* label__False_257 = &label__False_257_impl;
      USE(label__False_257);
      Label label__done_552_704_impl(this, {t956_551});
      Label* label__done_552_704 = &label__done_552_704_impl;
      USE(label__done_552_704);
      TNode<IntPtrT> t957 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t958 = 0;
      TNode<IntPtrT> t959 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t958));
      TNode<BoolT> t960 = UncheckedCast<BoolT>(IntPtrGreaterThan(t957, t959));
      USE(t960);
      Branch(t960, label__True_256, label__False_257);
      BIND(label__True_256);
            *t956_551 = t951();
      Goto(label__done_552_704);
      BIND(label__False_257);
            *t956_551 = t952();
      Goto(label__done_552_704);
      BIND(label__done_552_704);
    }
    TVARIABLE(Object, offset_269_impl);
    auto offset_269 = &offset_269_impl;
    USE(offset_269);
    *offset_269 = (*t956_551).value();
    // ../../src/builtins/data-view.tq:425:4
    TNode<Numeric> t961 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_269).value(), Undefined(), INT8_ELEMENTS));
    USE(t961);
    arguments->PopAndReturn(t961);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:429:62
  {
    // ../../src/builtins/data-view.tq:430:6
    auto t962 = [=]() {
      int31_t t964 = 0;
      TNode<IntPtrT> t965 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t964));
      TNode<Object> t966 = UncheckedCast<Object>(GetArgumentValue(arguments, t965));
      return t966;
    };
    auto t963 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t967_553_impl);
    auto t967_553 = &t967_553_impl;
    USE(t967_553);
    {
      Label label__True_258_impl(this);
      Label* label__True_258 = &label__True_258_impl;
      USE(label__True_258);
      Label label__False_259_impl(this);
      Label* label__False_259 = &label__False_259_impl;
      USE(label__False_259);
      Label label__done_554_705_impl(this, {t967_553});
      Label* label__done_554_705 = &label__done_554_705_impl;
      USE(label__done_554_705);
      TNode<IntPtrT> t968 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t969 = 0;
      TNode<IntPtrT> t970 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t969));
      TNode<BoolT> t971 = UncheckedCast<BoolT>(IntPtrGreaterThan(t968, t970));
      USE(t971);
      Branch(t971, label__True_258, label__False_259);
      BIND(label__True_258);
            *t967_553 = t962();
      Goto(label__done_554_705);
      BIND(label__False_259);
            *t967_553 = t963();
      Goto(label__done_554_705);
      BIND(label__done_554_705);
    }
    TVARIABLE(Object, offset_270_impl);
    auto offset_270 = &offset_270_impl;
    USE(offset_270);
    *offset_270 = (*t967_553).value();
    // ../../src/builtins/data-view.tq:433:6
    TNode<Numeric> t972 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_270).value(), Undefined(), UINT8_ELEMENTS));
    USE(t972);
    arguments->PopAndReturn(t972);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:437:62
  {
    // ../../src/builtins/data-view.tq:438:6
    auto t973 = [=]() {
      int31_t t975 = 0;
      TNode<IntPtrT> t976 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t975));
      TNode<Object> t977 = UncheckedCast<Object>(GetArgumentValue(arguments, t976));
      return t977;
    };
    auto t974 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t978_555_impl);
    auto t978_555 = &t978_555_impl;
    USE(t978_555);
    {
      Label label__True_260_impl(this);
      Label* label__True_260 = &label__True_260_impl;
      USE(label__True_260);
      Label label__False_261_impl(this);
      Label* label__False_261 = &label__False_261_impl;
      USE(label__False_261);
      Label label__done_556_706_impl(this, {t978_555});
      Label* label__done_556_706 = &label__done_556_706_impl;
      USE(label__done_556_706);
      TNode<IntPtrT> t979 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t980 = 0;
      TNode<IntPtrT> t981 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t980));
      TNode<BoolT> t982 = UncheckedCast<BoolT>(IntPtrGreaterThan(t979, t981));
      USE(t982);
      Branch(t982, label__True_260, label__False_261);
      BIND(label__True_260);
            *t978_555 = t973();
      Goto(label__done_556_706);
      BIND(label__False_261);
            *t978_555 = t974();
      Goto(label__done_556_706);
      BIND(label__done_556_706);
    }
    TVARIABLE(Object, offset_271_impl);
    auto offset_271 = &offset_271_impl;
    USE(offset_271);
    *offset_271 = (*t978_555).value();
    // ../../src/builtins/data-view.tq:441:6
    auto t983 = [=]() {
      int31_t t985 = 1;
      TNode<IntPtrT> t986 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t985));
      TNode<Object> t987 = UncheckedCast<Object>(GetArgumentValue(arguments, t986));
      return t987;
    };
    auto t984 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t988_557_impl);
    auto t988_557 = &t988_557_impl;
    USE(t988_557);
    {
      Label label__True_262_impl(this);
      Label* label__True_262 = &label__True_262_impl;
      USE(label__True_262);
      Label label__False_263_impl(this);
      Label* label__False_263 = &label__False_263_impl;
      USE(label__False_263);
      Label label__done_558_707_impl(this, {t988_557});
      Label* label__done_558_707 = &label__done_558_707_impl;
      USE(label__done_558_707);
      TNode<IntPtrT> t989 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t990 = 1;
      TNode<IntPtrT> t991 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t990));
      TNode<BoolT> t992 = UncheckedCast<BoolT>(IntPtrGreaterThan(t989, t991));
      USE(t992);
      Branch(t992, label__True_262, label__False_263);
      BIND(label__True_262);
            *t988_557 = t983();
      Goto(label__done_558_707);
      BIND(label__False_263);
            *t988_557 = t984();
      Goto(label__done_558_707);
      BIND(label__done_558_707);
    }
    TVARIABLE(Object, is_little_endian_272_impl);
    auto is_little_endian_272 = &is_little_endian_272_impl;
    USE(is_little_endian_272);
    *is_little_endian_272 = (*t988_557).value();
    // ../../src/builtins/data-view.tq:444:6
    TNode<Numeric> t993 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_271).value(), (*is_little_endian_272).value(), INT16_ELEMENTS));
    USE(t993);
    arguments->PopAndReturn(t993);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:449:62
  {
    // ../../src/builtins/data-view.tq:450:6
    auto t994 = [=]() {
      int31_t t996 = 0;
      TNode<IntPtrT> t997 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t996));
      TNode<Object> t998 = UncheckedCast<Object>(GetArgumentValue(arguments, t997));
      return t998;
    };
    auto t995 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t999_559_impl);
    auto t999_559 = &t999_559_impl;
    USE(t999_559);
    {
      Label label__True_264_impl(this);
      Label* label__True_264 = &label__True_264_impl;
      USE(label__True_264);
      Label label__False_265_impl(this);
      Label* label__False_265 = &label__False_265_impl;
      USE(label__False_265);
      Label label__done_560_708_impl(this, {t999_559});
      Label* label__done_560_708 = &label__done_560_708_impl;
      USE(label__done_560_708);
      TNode<IntPtrT> t1000 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1001 = 0;
      TNode<IntPtrT> t1002 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1001));
      TNode<BoolT> t1003 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1000, t1002));
      USE(t1003);
      Branch(t1003, label__True_264, label__False_265);
      BIND(label__True_264);
            *t999_559 = t994();
      Goto(label__done_560_708);
      BIND(label__False_265);
            *t999_559 = t995();
      Goto(label__done_560_708);
      BIND(label__done_560_708);
    }
    TVARIABLE(Object, offset_273_impl);
    auto offset_273 = &offset_273_impl;
    USE(offset_273);
    *offset_273 = (*t999_559).value();
    // ../../src/builtins/data-view.tq:453:6
    auto t1004 = [=]() {
      int31_t t1006 = 1;
      TNode<IntPtrT> t1007 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1006));
      TNode<Object> t1008 = UncheckedCast<Object>(GetArgumentValue(arguments, t1007));
      return t1008;
    };
    auto t1005 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1009_561_impl);
    auto t1009_561 = &t1009_561_impl;
    USE(t1009_561);
    {
      Label label__True_266_impl(this);
      Label* label__True_266 = &label__True_266_impl;
      USE(label__True_266);
      Label label__False_267_impl(this);
      Label* label__False_267 = &label__False_267_impl;
      USE(label__False_267);
      Label label__done_562_709_impl(this, {t1009_561});
      Label* label__done_562_709 = &label__done_562_709_impl;
      USE(label__done_562_709);
      TNode<IntPtrT> t1010 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1011 = 1;
      TNode<IntPtrT> t1012 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1011));
      TNode<BoolT> t1013 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1010, t1012));
      USE(t1013);
      Branch(t1013, label__True_266, label__False_267);
      BIND(label__True_266);
            *t1009_561 = t1004();
      Goto(label__done_562_709);
      BIND(label__False_267);
            *t1009_561 = t1005();
      Goto(label__done_562_709);
      BIND(label__done_562_709);
    }
    TVARIABLE(Object, is_little_endian_274_impl);
    auto is_little_endian_274 = &is_little_endian_274_impl;
    USE(is_little_endian_274);
    *is_little_endian_274 = (*t1009_561).value();
    // ../../src/builtins/data-view.tq:456:6
    TNode<Numeric> t1014 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_273).value(), (*is_little_endian_274).value(), UINT16_ELEMENTS));
    USE(t1014);
    arguments->PopAndReturn(t1014);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:461:62
  {
    // ../../src/builtins/data-view.tq:462:6
    auto t1015 = [=]() {
      int31_t t1017 = 0;
      TNode<IntPtrT> t1018 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1017));
      TNode<Object> t1019 = UncheckedCast<Object>(GetArgumentValue(arguments, t1018));
      return t1019;
    };
    auto t1016 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1020_563_impl);
    auto t1020_563 = &t1020_563_impl;
    USE(t1020_563);
    {
      Label label__True_268_impl(this);
      Label* label__True_268 = &label__True_268_impl;
      USE(label__True_268);
      Label label__False_269_impl(this);
      Label* label__False_269 = &label__False_269_impl;
      USE(label__False_269);
      Label label__done_564_710_impl(this, {t1020_563});
      Label* label__done_564_710 = &label__done_564_710_impl;
      USE(label__done_564_710);
      TNode<IntPtrT> t1021 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1022 = 0;
      TNode<IntPtrT> t1023 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1022));
      TNode<BoolT> t1024 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1021, t1023));
      USE(t1024);
      Branch(t1024, label__True_268, label__False_269);
      BIND(label__True_268);
            *t1020_563 = t1015();
      Goto(label__done_564_710);
      BIND(label__False_269);
            *t1020_563 = t1016();
      Goto(label__done_564_710);
      BIND(label__done_564_710);
    }
    TVARIABLE(Object, offset_275_impl);
    auto offset_275 = &offset_275_impl;
    USE(offset_275);
    *offset_275 = (*t1020_563).value();
    // ../../src/builtins/data-view.tq:465:6
    auto t1025 = [=]() {
      int31_t t1027 = 1;
      TNode<IntPtrT> t1028 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1027));
      TNode<Object> t1029 = UncheckedCast<Object>(GetArgumentValue(arguments, t1028));
      return t1029;
    };
    auto t1026 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1030_565_impl);
    auto t1030_565 = &t1030_565_impl;
    USE(t1030_565);
    {
      Label label__True_270_impl(this);
      Label* label__True_270 = &label__True_270_impl;
      USE(label__True_270);
      Label label__False_271_impl(this);
      Label* label__False_271 = &label__False_271_impl;
      USE(label__False_271);
      Label label__done_566_711_impl(this, {t1030_565});
      Label* label__done_566_711 = &label__done_566_711_impl;
      USE(label__done_566_711);
      TNode<IntPtrT> t1031 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1032 = 1;
      TNode<IntPtrT> t1033 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1032));
      TNode<BoolT> t1034 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1031, t1033));
      USE(t1034);
      Branch(t1034, label__True_270, label__False_271);
      BIND(label__True_270);
            *t1030_565 = t1025();
      Goto(label__done_566_711);
      BIND(label__False_271);
            *t1030_565 = t1026();
      Goto(label__done_566_711);
      BIND(label__done_566_711);
    }
    TVARIABLE(Object, is_little_endian_276_impl);
    auto is_little_endian_276 = &is_little_endian_276_impl;
    USE(is_little_endian_276);
    *is_little_endian_276 = (*t1030_565).value();
    // ../../src/builtins/data-view.tq:468:6
    TNode<Numeric> t1035 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_275).value(), (*is_little_endian_276).value(), INT32_ELEMENTS));
    USE(t1035);
    arguments->PopAndReturn(t1035);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:473:62
  {
    // ../../src/builtins/data-view.tq:474:6
    auto t1036 = [=]() {
      int31_t t1038 = 0;
      TNode<IntPtrT> t1039 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1038));
      TNode<Object> t1040 = UncheckedCast<Object>(GetArgumentValue(arguments, t1039));
      return t1040;
    };
    auto t1037 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1041_567_impl);
    auto t1041_567 = &t1041_567_impl;
    USE(t1041_567);
    {
      Label label__True_272_impl(this);
      Label* label__True_272 = &label__True_272_impl;
      USE(label__True_272);
      Label label__False_273_impl(this);
      Label* label__False_273 = &label__False_273_impl;
      USE(label__False_273);
      Label label__done_568_712_impl(this, {t1041_567});
      Label* label__done_568_712 = &label__done_568_712_impl;
      USE(label__done_568_712);
      TNode<IntPtrT> t1042 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1043 = 0;
      TNode<IntPtrT> t1044 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1043));
      TNode<BoolT> t1045 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1042, t1044));
      USE(t1045);
      Branch(t1045, label__True_272, label__False_273);
      BIND(label__True_272);
            *t1041_567 = t1036();
      Goto(label__done_568_712);
      BIND(label__False_273);
            *t1041_567 = t1037();
      Goto(label__done_568_712);
      BIND(label__done_568_712);
    }
    TVARIABLE(Object, offset_277_impl);
    auto offset_277 = &offset_277_impl;
    USE(offset_277);
    *offset_277 = (*t1041_567).value();
    // ../../src/builtins/data-view.tq:477:6
    auto t1046 = [=]() {
      int31_t t1048 = 1;
      TNode<IntPtrT> t1049 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1048));
      TNode<Object> t1050 = UncheckedCast<Object>(GetArgumentValue(arguments, t1049));
      return t1050;
    };
    auto t1047 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1051_569_impl);
    auto t1051_569 = &t1051_569_impl;
    USE(t1051_569);
    {
      Label label__True_274_impl(this);
      Label* label__True_274 = &label__True_274_impl;
      USE(label__True_274);
      Label label__False_275_impl(this);
      Label* label__False_275 = &label__False_275_impl;
      USE(label__False_275);
      Label label__done_570_713_impl(this, {t1051_569});
      Label* label__done_570_713 = &label__done_570_713_impl;
      USE(label__done_570_713);
      TNode<IntPtrT> t1052 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1053 = 1;
      TNode<IntPtrT> t1054 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1053));
      TNode<BoolT> t1055 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1052, t1054));
      USE(t1055);
      Branch(t1055, label__True_274, label__False_275);
      BIND(label__True_274);
            *t1051_569 = t1046();
      Goto(label__done_570_713);
      BIND(label__False_275);
            *t1051_569 = t1047();
      Goto(label__done_570_713);
      BIND(label__done_570_713);
    }
    TVARIABLE(Object, is_little_endian_278_impl);
    auto is_little_endian_278 = &is_little_endian_278_impl;
    USE(is_little_endian_278);
    *is_little_endian_278 = (*t1051_569).value();
    // ../../src/builtins/data-view.tq:480:6
    TNode<Numeric> t1056 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_277).value(), (*is_little_endian_278).value(), UINT32_ELEMENTS));
    USE(t1056);
    arguments->PopAndReturn(t1056);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:485:62
  {
    // ../../src/builtins/data-view.tq:486:6
    auto t1057 = [=]() {
      int31_t t1059 = 0;
      TNode<IntPtrT> t1060 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1059));
      TNode<Object> t1061 = UncheckedCast<Object>(GetArgumentValue(arguments, t1060));
      return t1061;
    };
    auto t1058 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1062_571_impl);
    auto t1062_571 = &t1062_571_impl;
    USE(t1062_571);
    {
      Label label__True_276_impl(this);
      Label* label__True_276 = &label__True_276_impl;
      USE(label__True_276);
      Label label__False_277_impl(this);
      Label* label__False_277 = &label__False_277_impl;
      USE(label__False_277);
      Label label__done_572_714_impl(this, {t1062_571});
      Label* label__done_572_714 = &label__done_572_714_impl;
      USE(label__done_572_714);
      TNode<IntPtrT> t1063 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1064 = 0;
      TNode<IntPtrT> t1065 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1064));
      TNode<BoolT> t1066 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1063, t1065));
      USE(t1066);
      Branch(t1066, label__True_276, label__False_277);
      BIND(label__True_276);
            *t1062_571 = t1057();
      Goto(label__done_572_714);
      BIND(label__False_277);
            *t1062_571 = t1058();
      Goto(label__done_572_714);
      BIND(label__done_572_714);
    }
    TVARIABLE(Object, offset_279_impl);
    auto offset_279 = &offset_279_impl;
    USE(offset_279);
    *offset_279 = (*t1062_571).value();
    // ../../src/builtins/data-view.tq:489:6
    auto t1067 = [=]() {
      int31_t t1069 = 1;
      TNode<IntPtrT> t1070 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1069));
      TNode<Object> t1071 = UncheckedCast<Object>(GetArgumentValue(arguments, t1070));
      return t1071;
    };
    auto t1068 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1072_573_impl);
    auto t1072_573 = &t1072_573_impl;
    USE(t1072_573);
    {
      Label label__True_278_impl(this);
      Label* label__True_278 = &label__True_278_impl;
      USE(label__True_278);
      Label label__False_279_impl(this);
      Label* label__False_279 = &label__False_279_impl;
      USE(label__False_279);
      Label label__done_574_715_impl(this, {t1072_573});
      Label* label__done_574_715 = &label__done_574_715_impl;
      USE(label__done_574_715);
      TNode<IntPtrT> t1073 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1074 = 1;
      TNode<IntPtrT> t1075 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1074));
      TNode<BoolT> t1076 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1073, t1075));
      USE(t1076);
      Branch(t1076, label__True_278, label__False_279);
      BIND(label__True_278);
            *t1072_573 = t1067();
      Goto(label__done_574_715);
      BIND(label__False_279);
            *t1072_573 = t1068();
      Goto(label__done_574_715);
      BIND(label__done_574_715);
    }
    TVARIABLE(Object, is_little_endian_280_impl);
    auto is_little_endian_280 = &is_little_endian_280_impl;
    USE(is_little_endian_280);
    *is_little_endian_280 = (*t1072_573).value();
    // ../../src/builtins/data-view.tq:492:6
    TNode<Numeric> t1077 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_279).value(), (*is_little_endian_280).value(), FLOAT32_ELEMENTS));
    USE(t1077);
    arguments->PopAndReturn(t1077);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:497:62
  {
    // ../../src/builtins/data-view.tq:498:6
    auto t1078 = [=]() {
      int31_t t1080 = 0;
      TNode<IntPtrT> t1081 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1080));
      TNode<Object> t1082 = UncheckedCast<Object>(GetArgumentValue(arguments, t1081));
      return t1082;
    };
    auto t1079 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1083_575_impl);
    auto t1083_575 = &t1083_575_impl;
    USE(t1083_575);
    {
      Label label__True_280_impl(this);
      Label* label__True_280 = &label__True_280_impl;
      USE(label__True_280);
      Label label__False_281_impl(this);
      Label* label__False_281 = &label__False_281_impl;
      USE(label__False_281);
      Label label__done_576_716_impl(this, {t1083_575});
      Label* label__done_576_716 = &label__done_576_716_impl;
      USE(label__done_576_716);
      TNode<IntPtrT> t1084 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1085 = 0;
      TNode<IntPtrT> t1086 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1085));
      TNode<BoolT> t1087 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1084, t1086));
      USE(t1087);
      Branch(t1087, label__True_280, label__False_281);
      BIND(label__True_280);
            *t1083_575 = t1078();
      Goto(label__done_576_716);
      BIND(label__False_281);
            *t1083_575 = t1079();
      Goto(label__done_576_716);
      BIND(label__done_576_716);
    }
    TVARIABLE(Object, offset_281_impl);
    auto offset_281 = &offset_281_impl;
    USE(offset_281);
    *offset_281 = (*t1083_575).value();
    // ../../src/builtins/data-view.tq:501:6
    auto t1088 = [=]() {
      int31_t t1090 = 1;
      TNode<IntPtrT> t1091 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1090));
      TNode<Object> t1092 = UncheckedCast<Object>(GetArgumentValue(arguments, t1091));
      return t1092;
    };
    auto t1089 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1093_577_impl);
    auto t1093_577 = &t1093_577_impl;
    USE(t1093_577);
    {
      Label label__True_282_impl(this);
      Label* label__True_282 = &label__True_282_impl;
      USE(label__True_282);
      Label label__False_283_impl(this);
      Label* label__False_283 = &label__False_283_impl;
      USE(label__False_283);
      Label label__done_578_717_impl(this, {t1093_577});
      Label* label__done_578_717 = &label__done_578_717_impl;
      USE(label__done_578_717);
      TNode<IntPtrT> t1094 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1095 = 1;
      TNode<IntPtrT> t1096 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1095));
      TNode<BoolT> t1097 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1094, t1096));
      USE(t1097);
      Branch(t1097, label__True_282, label__False_283);
      BIND(label__True_282);
            *t1093_577 = t1088();
      Goto(label__done_578_717);
      BIND(label__False_283);
            *t1093_577 = t1089();
      Goto(label__done_578_717);
      BIND(label__done_578_717);
    }
    TVARIABLE(Object, is_little_endian_282_impl);
    auto is_little_endian_282 = &is_little_endian_282_impl;
    USE(is_little_endian_282);
    *is_little_endian_282 = (*t1093_577).value();
    // ../../src/builtins/data-view.tq:504:6
    TNode<Numeric> t1098 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_281).value(), (*is_little_endian_282).value(), FLOAT64_ELEMENTS));
    USE(t1098);
    arguments->PopAndReturn(t1098);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:509:62
  {
    // ../../src/builtins/data-view.tq:510:6
    auto t1099 = [=]() {
      int31_t t1101 = 0;
      TNode<IntPtrT> t1102 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1101));
      TNode<Object> t1103 = UncheckedCast<Object>(GetArgumentValue(arguments, t1102));
      return t1103;
    };
    auto t1100 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1104_579_impl);
    auto t1104_579 = &t1104_579_impl;
    USE(t1104_579);
    {
      Label label__True_284_impl(this);
      Label* label__True_284 = &label__True_284_impl;
      USE(label__True_284);
      Label label__False_285_impl(this);
      Label* label__False_285 = &label__False_285_impl;
      USE(label__False_285);
      Label label__done_580_718_impl(this, {t1104_579});
      Label* label__done_580_718 = &label__done_580_718_impl;
      USE(label__done_580_718);
      TNode<IntPtrT> t1105 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1106 = 0;
      TNode<IntPtrT> t1107 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1106));
      TNode<BoolT> t1108 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1105, t1107));
      USE(t1108);
      Branch(t1108, label__True_284, label__False_285);
      BIND(label__True_284);
            *t1104_579 = t1099();
      Goto(label__done_580_718);
      BIND(label__False_285);
            *t1104_579 = t1100();
      Goto(label__done_580_718);
      BIND(label__done_580_718);
    }
    TVARIABLE(Object, offset_283_impl);
    auto offset_283 = &offset_283_impl;
    USE(offset_283);
    *offset_283 = (*t1104_579).value();
    // ../../src/builtins/data-view.tq:513:6
    auto t1109 = [=]() {
      int31_t t1111 = 1;
      TNode<IntPtrT> t1112 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1111));
      TNode<Object> t1113 = UncheckedCast<Object>(GetArgumentValue(arguments, t1112));
      return t1113;
    };
    auto t1110 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1114_581_impl);
    auto t1114_581 = &t1114_581_impl;
    USE(t1114_581);
    {
      Label label__True_286_impl(this);
      Label* label__True_286 = &label__True_286_impl;
      USE(label__True_286);
      Label label__False_287_impl(this);
      Label* label__False_287 = &label__False_287_impl;
      USE(label__False_287);
      Label label__done_582_719_impl(this, {t1114_581});
      Label* label__done_582_719 = &label__done_582_719_impl;
      USE(label__done_582_719);
      TNode<IntPtrT> t1115 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1116 = 1;
      TNode<IntPtrT> t1117 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1116));
      TNode<BoolT> t1118 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1115, t1117));
      USE(t1118);
      Branch(t1118, label__True_286, label__False_287);
      BIND(label__True_286);
            *t1114_581 = t1109();
      Goto(label__done_582_719);
      BIND(label__False_287);
            *t1114_581 = t1110();
      Goto(label__done_582_719);
      BIND(label__done_582_719);
    }
    TVARIABLE(Object, is_little_endian_284_impl);
    auto is_little_endian_284 = &is_little_endian_284_impl;
    USE(is_little_endian_284);
    *is_little_endian_284 = (*t1114_581).value();
    // ../../src/builtins/data-view.tq:516:6
    TNode<Numeric> t1119 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_283).value(), (*is_little_endian_284).value(), BIGINT64_ELEMENTS));
    USE(t1119);
    arguments->PopAndReturn(t1119);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:521:62
  {
    // ../../src/builtins/data-view.tq:522:6
    auto t1120 = [=]() {
      int31_t t1122 = 0;
      TNode<IntPtrT> t1123 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1122));
      TNode<Object> t1124 = UncheckedCast<Object>(GetArgumentValue(arguments, t1123));
      return t1124;
    };
    auto t1121 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1125_583_impl);
    auto t1125_583 = &t1125_583_impl;
    USE(t1125_583);
    {
      Label label__True_288_impl(this);
      Label* label__True_288 = &label__True_288_impl;
      USE(label__True_288);
      Label label__False_289_impl(this);
      Label* label__False_289 = &label__False_289_impl;
      USE(label__False_289);
      Label label__done_584_720_impl(this, {t1125_583});
      Label* label__done_584_720 = &label__done_584_720_impl;
      USE(label__done_584_720);
      TNode<IntPtrT> t1126 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1127 = 0;
      TNode<IntPtrT> t1128 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1127));
      TNode<BoolT> t1129 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1126, t1128));
      USE(t1129);
      Branch(t1129, label__True_288, label__False_289);
      BIND(label__True_288);
            *t1125_583 = t1120();
      Goto(label__done_584_720);
      BIND(label__False_289);
            *t1125_583 = t1121();
      Goto(label__done_584_720);
      BIND(label__done_584_720);
    }
    TVARIABLE(Object, offset_285_impl);
    auto offset_285 = &offset_285_impl;
    USE(offset_285);
    *offset_285 = (*t1125_583).value();
    // ../../src/builtins/data-view.tq:525:6
    auto t1130 = [=]() {
      int31_t t1132 = 1;
      TNode<IntPtrT> t1133 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1132));
      TNode<Object> t1134 = UncheckedCast<Object>(GetArgumentValue(arguments, t1133));
      return t1134;
    };
    auto t1131 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1135_585_impl);
    auto t1135_585 = &t1135_585_impl;
    USE(t1135_585);
    {
      Label label__True_290_impl(this);
      Label* label__True_290 = &label__True_290_impl;
      USE(label__True_290);
      Label label__False_291_impl(this);
      Label* label__False_291 = &label__False_291_impl;
      USE(label__False_291);
      Label label__done_586_721_impl(this, {t1135_585});
      Label* label__done_586_721 = &label__done_586_721_impl;
      USE(label__done_586_721);
      TNode<IntPtrT> t1136 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1137 = 1;
      TNode<IntPtrT> t1138 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1137));
      TNode<BoolT> t1139 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1136, t1138));
      USE(t1139);
      Branch(t1139, label__True_290, label__False_291);
      BIND(label__True_290);
            *t1135_585 = t1130();
      Goto(label__done_586_721);
      BIND(label__False_291);
            *t1135_585 = t1131();
      Goto(label__done_586_721);
      BIND(label__done_586_721);
    }
    TVARIABLE(Object, is_little_endian_286_impl);
    auto is_little_endian_286 = &is_little_endian_286_impl;
    USE(is_little_endian_286);
    *is_little_endian_286 = (*t1135_585).value();
    // ../../src/builtins/data-view.tq:528:6
    TNode<Numeric> t1140 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_285).value(), (*is_little_endian_286).value(), BIGUINT64_ELEMENTS));
    USE(t1140);
    arguments->PopAndReturn(t1140);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_722_impl(this, {});
  Label* label_macro_end_722 = &label_macro_end_722_impl;
  USE(label_macro_end_722);
  // ../../src/builtins/data-view.tq:540:38
  {
    // ../../src/builtins/data-view.tq:541:4
    TNode<RawPtrT> t1141 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    int31_t t1142 = 0xFF;
    TNode<Uint32T> t1143 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1142));
    TNode<Uint32T> t1144 = UncheckedCast<Uint32T>(Word32And(p_value, t1143));
    USE(t1144);
    StoreWord8(t1141, p_offset, t1144);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_723_impl(this, {});
  Label* label_macro_end_723 = &label_macro_end_723_impl;
  USE(label_macro_end_723);
  // ../../src/builtins/data-view.tq:545:55
  {
    // ../../src/builtins/data-view.tq:546:4
    TNode<RawPtrT> t1145 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_287_impl);
    auto data_pointer_287 = &data_pointer_287_impl;
    USE(data_pointer_287);
    *data_pointer_287 = t1145;
    // ../../src/builtins/data-view.tq:548:4
    int31_t t1146 = 0xFF;
    TNode<Uint32T> t1147 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1146));
    TNode<Uint32T> t1148 = UncheckedCast<Uint32T>(Word32And(p_value, t1147));
    USE(t1148);
    TVARIABLE(Uint32T, b0_288_impl);
    auto b0_288 = &b0_288_impl;
    USE(b0_288);
    *b0_288 = t1148;
    // ../../src/builtins/data-view.tq:549:4
    int31_t t1149 = 8;
    TNode<Uint32T> t1150 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1149));
    TNode<Uint32T> t1151 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1150));
    USE(t1151);
    int31_t t1152 = 0xFF;
    TNode<Uint32T> t1153 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1152));
    TNode<Uint32T> t1154 = UncheckedCast<Uint32T>(Word32And(t1151, t1153));
    USE(t1154);
    TVARIABLE(Uint32T, b1_289_impl);
    auto b1_289 = &b1_289_impl;
    USE(b1_289);
    *b1_289 = t1154;
    // ../../src/builtins/data-view.tq:551:4
    {
      Label label__True_292_impl(this);
      Label* label__True_292 = &label__True_292_impl;
      USE(label__True_292);
      Label label__False_293_impl(this);
      Label* label__False_293 = &label__False_293_impl;
      USE(label__False_293);
      Label label_if_done_label_587_724_impl(this, {});
      Label* label_if_done_label_587_724 = &label_if_done_label_587_724_impl;
      USE(label_if_done_label_587_724);
      Branch(p_requested_little_endian, label__True_292, label__False_293);
      if (label__True_292->is_used())
      {
        BIND(label__True_292);
        // ../../src/builtins/data-view.tq:551:33
        {
          // ../../src/builtins/data-view.tq:552:6
          StoreWord8((*data_pointer_287).value(), p_offset, (*b0_288).value());
          // ../../src/builtins/data-view.tq:553:6
          int31_t t1155 = 1;
          TNode<IntPtrT> t1156 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1155));
          TNode<IntPtrT> t1157 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1156));
          USE(t1157);
          StoreWord8((*data_pointer_287).value(), t1157, (*b1_289).value());
        }
        Goto(label_if_done_label_587_724);
      }
      if (label__False_293->is_used())
      {
        BIND(label__False_293);
        // ../../src/builtins/data-view.tq:554:11
        {
          // ../../src/builtins/data-view.tq:555:6
          StoreWord8((*data_pointer_287).value(), p_offset, (*b1_289).value());
          // ../../src/builtins/data-view.tq:556:6
          int31_t t1158 = 1;
          TNode<IntPtrT> t1159 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1158));
          TNode<IntPtrT> t1160 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1159));
          USE(t1160);
          StoreWord8((*data_pointer_287).value(), t1160, (*b0_288).value());
        }
        Goto(label_if_done_label_587_724);
      }
      BIND(label_if_done_label_587_724);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_725_impl(this, {});
  Label* label_macro_end_725 = &label_macro_end_725_impl;
  USE(label_macro_end_725);
  // ../../src/builtins/data-view.tq:561:55
  {
    // ../../src/builtins/data-view.tq:562:4
    TNode<RawPtrT> t1161 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_290_impl);
    auto data_pointer_290 = &data_pointer_290_impl;
    USE(data_pointer_290);
    *data_pointer_290 = t1161;
    // ../../src/builtins/data-view.tq:564:4
    int31_t t1162 = 0xFF;
    TNode<Uint32T> t1163 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1162));
    TNode<Uint32T> t1164 = UncheckedCast<Uint32T>(Word32And(p_value, t1163));
    USE(t1164);
    TVARIABLE(Uint32T, b0_291_impl);
    auto b0_291 = &b0_291_impl;
    USE(b0_291);
    *b0_291 = t1164;
    // ../../src/builtins/data-view.tq:565:4
    int31_t t1165 = 8;
    TNode<Uint32T> t1166 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1165));
    TNode<Uint32T> t1167 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1166));
    USE(t1167);
    int31_t t1168 = 0xFF;
    TNode<Uint32T> t1169 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1168));
    TNode<Uint32T> t1170 = UncheckedCast<Uint32T>(Word32And(t1167, t1169));
    USE(t1170);
    TVARIABLE(Uint32T, b1_292_impl);
    auto b1_292 = &b1_292_impl;
    USE(b1_292);
    *b1_292 = t1170;
    // ../../src/builtins/data-view.tq:566:4
    int31_t t1171 = 16;
    TNode<Uint32T> t1172 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1171));
    TNode<Uint32T> t1173 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1172));
    USE(t1173);
    int31_t t1174 = 0xFF;
    TNode<Uint32T> t1175 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1174));
    TNode<Uint32T> t1176 = UncheckedCast<Uint32T>(Word32And(t1173, t1175));
    USE(t1176);
    TVARIABLE(Uint32T, b2_293_impl);
    auto b2_293 = &b2_293_impl;
    USE(b2_293);
    *b2_293 = t1176;
    // ../../src/builtins/data-view.tq:567:4
    int31_t t1177 = 24;
    TNode<Uint32T> t1178 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1177));
    TNode<Uint32T> t1179 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1178));
    USE(t1179);
    TVARIABLE(Uint32T, b3_294_impl);
    auto b3_294 = &b3_294_impl;
    USE(b3_294);
    *b3_294 = t1179;
    // ../../src/builtins/data-view.tq:569:4
    {
      Label label__True_294_impl(this);
      Label* label__True_294 = &label__True_294_impl;
      USE(label__True_294);
      Label label__False_295_impl(this);
      Label* label__False_295 = &label__False_295_impl;
      USE(label__False_295);
      Label label_if_done_label_588_726_impl(this, {});
      Label* label_if_done_label_588_726 = &label_if_done_label_588_726_impl;
      USE(label_if_done_label_588_726);
      Branch(p_requested_little_endian, label__True_294, label__False_295);
      if (label__True_294->is_used())
      {
        BIND(label__True_294);
        // ../../src/builtins/data-view.tq:569:33
        {
          // ../../src/builtins/data-view.tq:570:6
          StoreWord8((*data_pointer_290).value(), p_offset, (*b0_291).value());
          // ../../src/builtins/data-view.tq:571:6
          int31_t t1180 = 1;
          TNode<IntPtrT> t1181 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1180));
          TNode<IntPtrT> t1182 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1181));
          USE(t1182);
          StoreWord8((*data_pointer_290).value(), t1182, (*b1_292).value());
          // ../../src/builtins/data-view.tq:572:6
          int31_t t1183 = 2;
          TNode<IntPtrT> t1184 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1183));
          TNode<IntPtrT> t1185 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1184));
          USE(t1185);
          StoreWord8((*data_pointer_290).value(), t1185, (*b2_293).value());
          // ../../src/builtins/data-view.tq:573:6
          int31_t t1186 = 3;
          TNode<IntPtrT> t1187 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1186));
          TNode<IntPtrT> t1188 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1187));
          USE(t1188);
          StoreWord8((*data_pointer_290).value(), t1188, (*b3_294).value());
        }
        Goto(label_if_done_label_588_726);
      }
      if (label__False_295->is_used())
      {
        BIND(label__False_295);
        // ../../src/builtins/data-view.tq:574:11
        {
          // ../../src/builtins/data-view.tq:575:6
          StoreWord8((*data_pointer_290).value(), p_offset, (*b3_294).value());
          // ../../src/builtins/data-view.tq:576:6
          int31_t t1189 = 1;
          TNode<IntPtrT> t1190 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1189));
          TNode<IntPtrT> t1191 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1190));
          USE(t1191);
          StoreWord8((*data_pointer_290).value(), t1191, (*b2_293).value());
          // ../../src/builtins/data-view.tq:577:6
          int31_t t1192 = 2;
          TNode<IntPtrT> t1193 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1192));
          TNode<IntPtrT> t1194 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1193));
          USE(t1194);
          StoreWord8((*data_pointer_290).value(), t1194, (*b1_292).value());
          // ../../src/builtins/data-view.tq:578:6
          int31_t t1195 = 3;
          TNode<IntPtrT> t1196 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1195));
          TNode<IntPtrT> t1197 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1196));
          USE(t1197);
          StoreWord8((*data_pointer_290).value(), t1197, (*b0_291).value());
        }
        Goto(label_if_done_label_588_726);
      }
      BIND(label_if_done_label_588_726);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_727_impl(this, {});
  Label* label_macro_end_727 = &label_macro_end_727_impl;
  USE(label_macro_end_727);
  // ../../src/builtins/data-view.tq:584:55
  {
    // ../../src/builtins/data-view.tq:585:4
    TNode<RawPtrT> t1198 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_295_impl);
    auto data_pointer_295 = &data_pointer_295_impl;
    USE(data_pointer_295);
    *data_pointer_295 = t1198;
    // ../../src/builtins/data-view.tq:587:4
    int31_t t1199 = 0xFF;
    TNode<Uint32T> t1200 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1199));
    TNode<Uint32T> t1201 = UncheckedCast<Uint32T>(Word32And(p_low_word, t1200));
    USE(t1201);
    TVARIABLE(Uint32T, b0_296_impl);
    auto b0_296 = &b0_296_impl;
    USE(b0_296);
    *b0_296 = t1201;
    // ../../src/builtins/data-view.tq:588:4
    int31_t t1202 = 8;
    TNode<Uint32T> t1203 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1202));
    TNode<Uint32T> t1204 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1203));
    USE(t1204);
    int31_t t1205 = 0xFF;
    TNode<Uint32T> t1206 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1205));
    TNode<Uint32T> t1207 = UncheckedCast<Uint32T>(Word32And(t1204, t1206));
    USE(t1207);
    TVARIABLE(Uint32T, b1_297_impl);
    auto b1_297 = &b1_297_impl;
    USE(b1_297);
    *b1_297 = t1207;
    // ../../src/builtins/data-view.tq:589:4
    int31_t t1208 = 16;
    TNode<Uint32T> t1209 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1208));
    TNode<Uint32T> t1210 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1209));
    USE(t1210);
    int31_t t1211 = 0xFF;
    TNode<Uint32T> t1212 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1211));
    TNode<Uint32T> t1213 = UncheckedCast<Uint32T>(Word32And(t1210, t1212));
    USE(t1213);
    TVARIABLE(Uint32T, b2_298_impl);
    auto b2_298 = &b2_298_impl;
    USE(b2_298);
    *b2_298 = t1213;
    // ../../src/builtins/data-view.tq:590:4
    int31_t t1214 = 24;
    TNode<Uint32T> t1215 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1214));
    TNode<Uint32T> t1216 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1215));
    USE(t1216);
    TVARIABLE(Uint32T, b3_299_impl);
    auto b3_299 = &b3_299_impl;
    USE(b3_299);
    *b3_299 = t1216;
    // ../../src/builtins/data-view.tq:592:4
    int31_t t1217 = 0xFF;
    TNode<Uint32T> t1218 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1217));
    TNode<Uint32T> t1219 = UncheckedCast<Uint32T>(Word32And(p_high_word, t1218));
    USE(t1219);
    TVARIABLE(Uint32T, b4_300_impl);
    auto b4_300 = &b4_300_impl;
    USE(b4_300);
    *b4_300 = t1219;
    // ../../src/builtins/data-view.tq:593:4
    int31_t t1220 = 8;
    TNode<Uint32T> t1221 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1220));
    TNode<Uint32T> t1222 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1221));
    USE(t1222);
    int31_t t1223 = 0xFF;
    TNode<Uint32T> t1224 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1223));
    TNode<Uint32T> t1225 = UncheckedCast<Uint32T>(Word32And(t1222, t1224));
    USE(t1225);
    TVARIABLE(Uint32T, b5_301_impl);
    auto b5_301 = &b5_301_impl;
    USE(b5_301);
    *b5_301 = t1225;
    // ../../src/builtins/data-view.tq:594:4
    int31_t t1226 = 16;
    TNode<Uint32T> t1227 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1226));
    TNode<Uint32T> t1228 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1227));
    USE(t1228);
    int31_t t1229 = 0xFF;
    TNode<Uint32T> t1230 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1229));
    TNode<Uint32T> t1231 = UncheckedCast<Uint32T>(Word32And(t1228, t1230));
    USE(t1231);
    TVARIABLE(Uint32T, b6_302_impl);
    auto b6_302 = &b6_302_impl;
    USE(b6_302);
    *b6_302 = t1231;
    // ../../src/builtins/data-view.tq:595:4
    int31_t t1232 = 24;
    TNode<Uint32T> t1233 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1232));
    TNode<Uint32T> t1234 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1233));
    USE(t1234);
    TVARIABLE(Uint32T, b7_303_impl);
    auto b7_303 = &b7_303_impl;
    USE(b7_303);
    *b7_303 = t1234;
    // ../../src/builtins/data-view.tq:598:4
    {
      Label label__True_296_impl(this);
      Label* label__True_296 = &label__True_296_impl;
      USE(label__True_296);
      Label label__False_297_impl(this);
      Label* label__False_297 = &label__False_297_impl;
      USE(label__False_297);
      Label label_if_done_label_589_728_impl(this, {});
      Label* label_if_done_label_589_728 = &label_if_done_label_589_728_impl;
      USE(label_if_done_label_589_728);
      Branch(p_requested_little_endian, label__True_296, label__False_297);
      if (label__True_296->is_used())
      {
        BIND(label__True_296);
        // ../../src/builtins/data-view.tq:598:33
        {
          // ../../src/builtins/data-view.tq:599:6
          StoreWord8((*data_pointer_295).value(), p_offset, (*b0_296).value());
          // ../../src/builtins/data-view.tq:600:6
          int31_t t1235 = 1;
          TNode<IntPtrT> t1236 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1235));
          TNode<IntPtrT> t1237 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1236));
          USE(t1237);
          StoreWord8((*data_pointer_295).value(), t1237, (*b1_297).value());
          // ../../src/builtins/data-view.tq:601:6
          int31_t t1238 = 2;
          TNode<IntPtrT> t1239 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1238));
          TNode<IntPtrT> t1240 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1239));
          USE(t1240);
          StoreWord8((*data_pointer_295).value(), t1240, (*b2_298).value());
          // ../../src/builtins/data-view.tq:602:6
          int31_t t1241 = 3;
          TNode<IntPtrT> t1242 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1241));
          TNode<IntPtrT> t1243 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1242));
          USE(t1243);
          StoreWord8((*data_pointer_295).value(), t1243, (*b3_299).value());
          // ../../src/builtins/data-view.tq:603:6
          int31_t t1244 = 4;
          TNode<IntPtrT> t1245 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1244));
          TNode<IntPtrT> t1246 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1245));
          USE(t1246);
          StoreWord8((*data_pointer_295).value(), t1246, (*b4_300).value());
          // ../../src/builtins/data-view.tq:604:6
          int31_t t1247 = 5;
          TNode<IntPtrT> t1248 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1247));
          TNode<IntPtrT> t1249 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1248));
          USE(t1249);
          StoreWord8((*data_pointer_295).value(), t1249, (*b5_301).value());
          // ../../src/builtins/data-view.tq:605:6
          int31_t t1250 = 6;
          TNode<IntPtrT> t1251 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1250));
          TNode<IntPtrT> t1252 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1251));
          USE(t1252);
          StoreWord8((*data_pointer_295).value(), t1252, (*b6_302).value());
          // ../../src/builtins/data-view.tq:606:6
          int31_t t1253 = 7;
          TNode<IntPtrT> t1254 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1253));
          TNode<IntPtrT> t1255 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1254));
          USE(t1255);
          StoreWord8((*data_pointer_295).value(), t1255, (*b7_303).value());
        }
        Goto(label_if_done_label_589_728);
      }
      if (label__False_297->is_used())
      {
        BIND(label__False_297);
        // ../../src/builtins/data-view.tq:607:11
        {
          // ../../src/builtins/data-view.tq:608:6
          StoreWord8((*data_pointer_295).value(), p_offset, (*b7_303).value());
          // ../../src/builtins/data-view.tq:609:6
          int31_t t1256 = 1;
          TNode<IntPtrT> t1257 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1256));
          TNode<IntPtrT> t1258 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1257));
          USE(t1258);
          StoreWord8((*data_pointer_295).value(), t1258, (*b6_302).value());
          // ../../src/builtins/data-view.tq:610:6
          int31_t t1259 = 2;
          TNode<IntPtrT> t1260 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1259));
          TNode<IntPtrT> t1261 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1260));
          USE(t1261);
          StoreWord8((*data_pointer_295).value(), t1261, (*b5_301).value());
          // ../../src/builtins/data-view.tq:611:6
          int31_t t1262 = 3;
          TNode<IntPtrT> t1263 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1262));
          TNode<IntPtrT> t1264 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1263));
          USE(t1264);
          StoreWord8((*data_pointer_295).value(), t1264, (*b4_300).value());
          // ../../src/builtins/data-view.tq:612:6
          int31_t t1265 = 4;
          TNode<IntPtrT> t1266 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1265));
          TNode<IntPtrT> t1267 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1266));
          USE(t1267);
          StoreWord8((*data_pointer_295).value(), t1267, (*b3_299).value());
          // ../../src/builtins/data-view.tq:613:6
          int31_t t1268 = 5;
          TNode<IntPtrT> t1269 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1268));
          TNode<IntPtrT> t1270 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1269));
          USE(t1270);
          StoreWord8((*data_pointer_295).value(), t1270, (*b2_298).value());
          // ../../src/builtins/data-view.tq:614:6
          int31_t t1271 = 6;
          TNode<IntPtrT> t1272 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1271));
          TNode<IntPtrT> t1273 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1272));
          USE(t1273);
          StoreWord8((*data_pointer_295).value(), t1273, (*b1_297).value());
          // ../../src/builtins/data-view.tq:615:6
          int31_t t1274 = 7;
          TNode<IntPtrT> t1275 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1274));
          TNode<IntPtrT> t1276 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1275));
          USE(t1276);
          StoreWord8((*data_pointer_295).value(), t1276, (*b0_296).value());
        }
        Goto(label_if_done_label_589_728);
      }
      BIND(label_if_done_label_589_728);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BigInt> p_bigint_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_729_impl(this, {});
  Label* label_macro_end_729 = &label_macro_end_729_impl;
  USE(label_macro_end_729);
  // ../../src/builtins/data-view.tq:628:59
  {
    // ../../src/builtins/data-view.tq:630:4
    TNode<UintPtrT> t1277 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(p_bigint_value));
    USE(t1277);
    TVARIABLE(UintPtrT, length_304_impl);
    auto length_304 = &length_304_impl;
    USE(length_304);
    *length_304 = t1277;
    // ../../src/builtins/data-view.tq:631:4
    TNode<UintPtrT> t1278 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(p_bigint_value));
    USE(t1278);
    TVARIABLE(UintPtrT, sign_305_impl);
    auto sign_305 = &sign_305_impl;
    USE(sign_305);
    *sign_305 = t1278;
    // ../../src/builtins/data-view.tq:635:4
    int31_t t1279 = 0;
    TVARIABLE(Uint32T, low_word_306_impl);
    auto low_word_306 = &low_word_306_impl;
    USE(low_word_306);
    TNode<Uint32T> t1280 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1279));
    *low_word_306 = t1280;
    // ../../src/builtins/data-view.tq:636:4
    int31_t t1281 = 0;
    TVARIABLE(Uint32T, high_word_307_impl);
    auto high_word_307 = &high_word_307_impl;
    USE(high_word_307);
    TNode<Uint32T> t1282 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1281));
    *high_word_307 = t1282;
    // ../../src/builtins/data-view.tq:639:4
    {
      Label label__True_298_impl(this);
      Label* label__True_298 = &label__True_298_impl;
      USE(label__True_298);
      Label label__False_299_impl(this, {low_word_306, high_word_307});
      Label* label__False_299 = &label__False_299_impl;
      USE(label__False_299);
      int31_t t1283 = 0;
      TNode<UintPtrT> t1284 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1283));
      TNode<BoolT> t1285 = UncheckedCast<BoolT>(WordNotEqual((*length_304).value(), t1284));
      USE(t1285);
      Branch(t1285, label__True_298, label__False_299);
      if (label__True_298->is_used())
      {
        BIND(label__True_298);
        // ../../src/builtins/data-view.tq:639:21
        {
          // ../../src/builtins/data-view.tq:640:6
          {
            bool t1286 = Is64();
            USE(t1286);
            if ((t1286)) {
              // ../../src/builtins/data-view.tq:640:28
              {
                // ../../src/builtins/data-view.tq:642:8
                int31_t t1287 = 0;
                TNode<UintPtrT> t1288 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1287));
                USE(t1288);
                TVARIABLE(UintPtrT, value_308_impl);
                auto value_308 = &value_308_impl;
                USE(value_308);
                *value_308 = t1288;
                // ../../src/builtins/data-view.tq:643:8
                TNode<Uint32T> t1289 = UncheckedCast<Uint32T>(convert8ATuint32((*value_308).value()));
                USE(t1289);
                *low_word_306 = t1289;
                // ../../src/builtins/data-view.tq:644:8
                int31_t t1290 = 32;
                TNode<UintPtrT> t1291 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1290));
                TNode<UintPtrT> t1292 = UncheckedCast<UintPtrT>(WordShr((*value_308).value(), t1291));
                USE(t1292);
                TNode<Uint32T> t1293 = UncheckedCast<Uint32T>(convert8ATuint32(t1292));
                USE(t1293);
                *high_word_307 = t1293;
              }
            } else {
              // ../../src/builtins/data-view.tq:646:11
              {
                // ../../src/builtins/data-view.tq:647:8
                int31_t t1294 = 0;
                TNode<UintPtrT> t1295 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1294));
                USE(t1295);
                TNode<Uint32T> t1296 = UncheckedCast<Uint32T>(convert8ATuint32(t1295));
                USE(t1296);
                *low_word_306 = t1296;
                // ../../src/builtins/data-view.tq:648:8
                {
                  Label label__True_302_impl(this);
                  Label* label__True_302 = &label__True_302_impl;
                  USE(label__True_302);
                  Label label__False_303_impl(this, {high_word_307});
                  Label* label__False_303 = &label__False_303_impl;
                  USE(label__False_303);
                  int31_t t1297 = 2;
                  TNode<UintPtrT> t1298 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1297));
                  TNode<BoolT> t1299 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual((*length_304).value(), t1298));
                  USE(t1299);
                  Branch(t1299, label__True_302, label__False_303);
                  if (label__True_302->is_used())
                  {
                    BIND(label__True_302);
                    // ../../src/builtins/data-view.tq:648:25
                    {
                      // ../../src/builtins/data-view.tq:649:10
                      int31_t t1300 = 1;
                      TNode<UintPtrT> t1301 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1300));
                      USE(t1301);
                      TNode<Uint32T> t1302 = UncheckedCast<Uint32T>(convert8ATuint32(t1301));
                      USE(t1302);
                      *high_word_307 = t1302;
                    }
                    Goto(label__False_303);
                  }
                  BIND(label__False_303);
                }
              }
            }
          }
        }
        Goto(label__False_299);
      }
      BIND(label__False_299);
    }
    // ../../src/builtins/data-view.tq:654:4
    {
      Label label__True_304_impl(this);
      Label* label__True_304 = &label__True_304_impl;
      USE(label__True_304);
      Label label__False_305_impl(this, {low_word_306, high_word_307});
      Label* label__False_305 = &label__False_305_impl;
      USE(label__False_305);
      int31_t t1303 = 0;
      TNode<UintPtrT> t1304 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1303));
      TNode<BoolT> t1305 = UncheckedCast<BoolT>(WordNotEqual((*sign_305).value(), t1304));
      USE(t1305);
      Branch(t1305, label__True_304, label__False_305);
      if (label__True_304->is_used())
      {
        BIND(label__True_304);
        // ../../src/builtins/data-view.tq:654:19
        {
          // ../../src/builtins/data-view.tq:655:6
          int31_t t1306 = 0;
          TNode<Int32T> t1307 = UncheckedCast<Int32T>(Signed((*high_word_307).value()));
          USE(t1307);
          TNode<Int32T> t1308 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1306));
          TNode<Int32T> t1309 = UncheckedCast<Int32T>(Int32Sub(t1308, t1307));
          USE(t1309);
          TNode<Uint32T> t1310 = UncheckedCast<Uint32T>(Unsigned(t1309));
          USE(t1310);
          *high_word_307 = t1310;
          // ../../src/builtins/data-view.tq:656:6
          {
            Label label__True_306_impl(this);
            Label* label__True_306 = &label__True_306_impl;
            USE(label__True_306);
            Label label__False_307_impl(this, {high_word_307});
            Label* label__False_307 = &label__False_307_impl;
            USE(label__False_307);
            int31_t t1311 = 0;
            TNode<Uint32T> t1312 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1311));
            TNode<BoolT> t1313 = UncheckedCast<BoolT>(Word32NotEqual((*low_word_306).value(), t1312));
            USE(t1313);
            Branch(t1313, label__True_306, label__False_307);
            if (label__True_306->is_used())
            {
              BIND(label__True_306);
              // ../../src/builtins/data-view.tq:656:25
              {
                // ../../src/builtins/data-view.tq:657:8
                TNode<Int32T> t1314 = UncheckedCast<Int32T>(Signed((*high_word_307).value()));
                USE(t1314);
                int31_t t1315 = 1;
                TNode<Int32T> t1316 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1315));
                TNode<Int32T> t1317 = UncheckedCast<Int32T>(Int32Sub(t1314, t1316));
                USE(t1317);
                TNode<Uint32T> t1318 = UncheckedCast<Uint32T>(Unsigned(t1317));
                USE(t1318);
                *high_word_307 = t1318;
              }
              Goto(label__False_307);
            }
            BIND(label__False_307);
          }
          // ../../src/builtins/data-view.tq:659:6
          int31_t t1319 = 0;
          TNode<Int32T> t1320 = UncheckedCast<Int32T>(Signed((*low_word_306).value()));
          USE(t1320);
          TNode<Int32T> t1321 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1319));
          TNode<Int32T> t1322 = UncheckedCast<Int32T>(Int32Sub(t1321, t1320));
          USE(t1322);
          TNode<Uint32T> t1323 = UncheckedCast<Uint32T>(Unsigned(t1322));
          USE(t1323);
          *low_word_306 = t1323;
        }
        Goto(label__False_305);
      }
      BIND(label__False_305);
    }
    // ../../src/builtins/data-view.tq:662:4
    StoreDataView64(p_buffer, p_offset, (*low_word_306).value(), (*high_word_307).value(), p_requested_little_endian);
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_309_impl);
  auto _return_309 = &_return_309_impl;
  USE(_return_309);
  Label label_macro_end_730_impl(this, {_return_309});
  Label* label_macro_end_730 = &label_macro_end_730_impl;
  USE(label_macro_end_730);
  // ../../src/builtins/data-view.tq:671:58
  {
    // ../../src/builtins/data-view.tq:675:4
    const char* t1324 = "get DataView.prototype.get";
    TNode<String> t1325 = UncheckedCast<String>(from_constexpr8ATString(t1324));
    TNode<JSDataView> t1326 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t1325));
    USE(t1326);
    TVARIABLE(JSDataView, data_view_310_impl);
    auto data_view_310 = &data_view_310_impl;
    USE(data_view_310);
    *data_view_310 = t1326;
    // ../../src/builtins/data-view.tq:678:4
    TVARIABLE(Number, getIndex_311_impl);
    auto getIndex_311 = &getIndex_311_impl;
    USE(getIndex_311);
    // ../../src/builtins/data-view.tq:679:4
    {
      Label label_try_done_590_731_impl(this);
      Label* label_try_done_590_731 = &label_try_done_590_731_impl;
      USE(label_try_done_590_731);
      Label label_RangeError_308_impl(this);
      Label* label_RangeError_308 = &label_RangeError_308_impl;
      USE(label_RangeError_308);
      Label label_try_begin_591_732_impl(this);
      Label* label_try_begin_591_732 = &label_try_begin_591_732_impl;
      USE(label_try_begin_591_732);
      Goto(label_try_begin_591_732);
      if (label_try_begin_591_732->is_used())
      {
        BIND(label_try_begin_591_732);
        // ../../src/builtins/data-view.tq:679:8
        {
          // ../../src/builtins/data-view.tq:680:6
          TNode<Number> t1327 = UncheckedCast<Number>(ToIndex(p_offset, p_context, label_RangeError_308));
          USE(t1327);
          *getIndex_311 = t1327;
        }
        Goto(label_try_done_590_731);
      }
      if (label_RangeError_308->is_used())
      {
        BIND(label_RangeError_308);
        // ../../src/builtins/data-view.tq:682:21
        {
          // ../../src/builtins/data-view.tq:683:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label_try_done_590_731);
    }
    // ../../src/builtins/data-view.tq:686:4
    TNode<BoolT> t1328 = UncheckedCast<BoolT>(ToBoolean(p_requested_little_endian));
    USE(t1328);
    TVARIABLE(BoolT, littleEndian_312_impl);
    auto littleEndian_312 = &littleEndian_312_impl;
    USE(littleEndian_312);
    *littleEndian_312 = t1328;
    // ../../src/builtins/data-view.tq:687:4
    TNode<JSArrayBuffer> t1329 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_310).value()));
    TVARIABLE(JSArrayBuffer, buffer_313_impl);
    auto buffer_313 = &buffer_313_impl;
    USE(buffer_313);
    *buffer_313 = t1329;
    // ../../src/builtins/data-view.tq:689:4
    TVARIABLE(BigInt, bigint_value_314_impl);
    auto bigint_value_314 = &bigint_value_314_impl;
    USE(bigint_value_314);
    // ../../src/builtins/data-view.tq:690:4
    TVARIABLE(Number, num_value_315_impl);
    auto num_value_315 = &num_value_315_impl;
    USE(num_value_315);
    // ../../src/builtins/data-view.tq:693:4
    {
      Label label__False_311_impl(this);
      Label* label__False_311 = &label__False_311_impl;
      USE(label__False_311);
      bool t1330 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
      USE(t1330);
      bool t1331 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
      USE(t1331);
      if (((t1330 || t1331))) {
        // ../../src/builtins/data-view.tq:693:75
        {
          // ../../src/builtins/data-view.tq:694:6
          TNode<BigInt> t1332 = UncheckedCast<BigInt>(ToBigInt(p_context, p_value));
          USE(t1332);
          *bigint_value_314 = t1332;
        }
      } else {
        // ../../src/builtins/data-view.tq:695:11
        {
          // ../../src/builtins/data-view.tq:696:6
          TNode<Number> t1333 = UncheckedCast<Number>(ToNumber(p_context, p_value));
          USE(t1333);
          *num_value_315 = t1333;
        }
      }
    }
    // ../../src/builtins/data-view.tq:699:4
    {
      Label label__True_312_impl(this);
      Label* label__True_312 = &label__True_312_impl;
      USE(label__True_312);
      Label label__False_313_impl(this, {});
      Label* label__False_313 = &label__False_313_impl;
      USE(label__False_313);
      TNode<BoolT> t1334 = UncheckedCast<BoolT>(IsDetachedBuffer((*buffer_313).value()));
      USE(t1334);
      Branch(t1334, label__True_312, label__False_313);
      if (label__True_312->is_used())
      {
        BIND(label__True_312);
        // ../../src/builtins/data-view.tq:699:34
        {
          // ../../src/builtins/data-view.tq:700:6
          const char* t1335 = "DataView.prototype.get";
          TNode<Object> t1336 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t1335));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t1336);
        }
      }
      BIND(label__False_313);
    }
    // ../../src/builtins/data-view.tq:703:4
    TNode<Number> t1337 = UncheckedCast<Number>(LoadDataViewByteOffset((*data_view_310).value()));
    TVARIABLE(Number, viewOffset_316_impl);
    auto viewOffset_316 = &viewOffset_316_impl;
    USE(viewOffset_316);
    *viewOffset_316 = t1337;
    // ../../src/builtins/data-view.tq:704:4
    TNode<Number> t1338 = UncheckedCast<Number>(LoadDataViewByteLength((*data_view_310).value()));
    TVARIABLE(Number, viewSize_317_impl);
    auto viewSize_317 = &viewSize_317_impl;
    USE(viewSize_317);
    *viewSize_317 = t1338;
    // ../../src/builtins/data-view.tq:705:4
    int31_t t1339 = DataViewElementSize(p_kind);
    USE(t1339);
    TVARIABLE(Number, elementSize_318_impl);
    auto elementSize_318 = &elementSize_318_impl;
    USE(elementSize_318);
    TNode<Number> t1340 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1339));
    *elementSize_318 = t1340;
    // ../../src/builtins/data-view.tq:707:4
    {
      Label label__True_314_impl(this);
      Label* label__True_314 = &label__True_314_impl;
      USE(label__True_314);
      Label label__False_315_impl(this, {});
      Label* label__False_315 = &label__False_315_impl;
      USE(label__False_315);
      TNode<Number> t1341 = UncheckedCast<Number>(NumberAdd((*getIndex_311).value(), (*elementSize_318).value()));
      USE(t1341);
      BranchIfNumberGreaterThan(t1341, (*viewSize_317).value(), label__True_314, label__False_315);
      if (label__True_314->is_used())
      {
        BIND(label__True_314);
        // ../../src/builtins/data-view.tq:707:43
        {
          // ../../src/builtins/data-view.tq:708:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label__False_315);
    }
    // ../../src/builtins/data-view.tq:711:4
    TNode<Float64T> t1342 = UncheckedCast<Float64T>(convert9ATfloat64((*getIndex_311).value()));
    USE(t1342);
    TVARIABLE(Float64T, getIndexFloat_319_impl);
    auto getIndexFloat_319 = &getIndexFloat_319_impl;
    USE(getIndexFloat_319);
    *getIndexFloat_319 = t1342;
    // ../../src/builtins/data-view.tq:712:4
    TNode<UintPtrT> t1343 = UncheckedCast<UintPtrT>(convert9ATuintptr((*getIndexFloat_319).value()));
    USE(t1343);
    TNode<IntPtrT> t1344 = UncheckedCast<IntPtrT>(Signed(t1343));
    USE(t1344);
    TVARIABLE(IntPtrT, getIndexIntptr_320_impl);
    auto getIndexIntptr_320 = &getIndexIntptr_320_impl;
    USE(getIndexIntptr_320);
    *getIndexIntptr_320 = t1344;
    // ../../src/builtins/data-view.tq:713:4
    TNode<Float64T> t1345 = UncheckedCast<Float64T>(convert9ATfloat64((*viewOffset_316).value()));
    USE(t1345);
    TVARIABLE(Float64T, viewOffsetFloat_321_impl);
    auto viewOffsetFloat_321 = &viewOffsetFloat_321_impl;
    USE(viewOffsetFloat_321);
    *viewOffsetFloat_321 = t1345;
    // ../../src/builtins/data-view.tq:714:4
    TNode<UintPtrT> t1346 = UncheckedCast<UintPtrT>(convert9ATuintptr((*viewOffsetFloat_321).value()));
    USE(t1346);
    TNode<IntPtrT> t1347 = UncheckedCast<IntPtrT>(Signed(t1346));
    USE(t1347);
    TVARIABLE(IntPtrT, viewOffsetIntptr_322_impl);
    auto viewOffsetIntptr_322 = &viewOffsetIntptr_322_impl;
    USE(viewOffsetIntptr_322);
    *viewOffsetIntptr_322 = t1347;
    // ../../src/builtins/data-view.tq:716:4
    TNode<IntPtrT> t1348 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndexIntptr_320).value(), (*viewOffsetIntptr_322).value()));
    USE(t1348);
    TVARIABLE(IntPtrT, bufferIndex_323_impl);
    auto bufferIndex_323 = &bufferIndex_323_impl;
    USE(bufferIndex_323);
    *bufferIndex_323 = t1348;
    // ../../src/builtins/data-view.tq:718:4
    {
      Label label__False_318_impl(this);
      Label* label__False_318 = &label__False_318_impl;
      USE(label__False_318);
      bool t1349 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
      USE(t1349);
      bool t1350 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
      USE(t1350);
      if (((t1349 || t1350))) {
        // ../../src/builtins/data-view.tq:718:75
        {
          // ../../src/builtins/data-view.tq:719:6
          StoreDataViewBigInt((*buffer_313).value(), (*bufferIndex_323).value(), (*bigint_value_314).value(), (*littleEndian_312).value());
        }
      } else {
        // ../../src/builtins/data-view.tq:722:9
        {
          // ../../src/builtins/data-view.tq:723:6
          TNode<Float64T> t1351 = UncheckedCast<Float64T>(ChangeNumberToFloat64((*num_value_315).value()));
          USE(t1351);
          TVARIABLE(Float64T, double_value_324_impl);
          auto double_value_324 = &double_value_324_impl;
          USE(double_value_324);
          *double_value_324 = t1351;
          // ../../src/builtins/data-view.tq:725:6
          {
            Label label__False_321_impl(this);
            Label* label__False_321 = &label__False_321_impl;
            USE(label__False_321);
            bool t1352 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
            USE(t1352);
            bool t1353 = ElementsKindEqual(p_kind, INT8_ELEMENTS);
            USE(t1353);
            if (((t1352 || t1353))) {
              // ../../src/builtins/data-view.tq:725:69
              {
                // ../../src/builtins/data-view.tq:726:8
                TNode<Uint32T> t1354 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_324).value()));
                USE(t1354);
                StoreDataView8((*buffer_313).value(), (*bufferIndex_323).value(), t1354);
              }
            } else {
              // ../../src/builtins/data-view.tq:729:11
              {
                Label label__False_324_impl(this);
                Label* label__False_324 = &label__False_324_impl;
                USE(label__False_324);
                bool t1355 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
                USE(t1355);
                bool t1356 = ElementsKindEqual(p_kind, INT16_ELEMENTS);
                USE(t1356);
                if (((t1355 || t1356))) {
                  // ../../src/builtins/data-view.tq:729:76
                  {
                    // ../../src/builtins/data-view.tq:730:8
                    TNode<Uint32T> t1357 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_324).value()));
                    USE(t1357);
                    StoreDataView16((*buffer_313).value(), (*bufferIndex_323).value(), t1357, (*littleEndian_312).value());
                  }
                } else {
                  // ../../src/builtins/data-view.tq:733:11
                  {
                    Label label__False_327_impl(this);
                    Label* label__False_327 = &label__False_327_impl;
                    USE(label__False_327);
                    bool t1358 = ElementsKindEqual(p_kind, UINT32_ELEMENTS);
                    USE(t1358);
                    bool t1359 = ElementsKindEqual(p_kind, INT32_ELEMENTS);
                    USE(t1359);
                    if (((t1358 || t1359))) {
                      // ../../src/builtins/data-view.tq:733:76
                      {
                        // ../../src/builtins/data-view.tq:734:8
                        TNode<Uint32T> t1360 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_324).value()));
                        USE(t1360);
                        StoreDataView32((*buffer_313).value(), (*bufferIndex_323).value(), t1360, (*littleEndian_312).value());
                      }
                    } else {
                      // ../../src/builtins/data-view.tq:737:11
                      {
                        bool t1361 = ElementsKindEqual(p_kind, FLOAT32_ELEMENTS);
                        USE(t1361);
                        if ((t1361)) {
                          // ../../src/builtins/data-view.tq:737:51
                          {
                            // ../../src/builtins/data-view.tq:738:8
                            TNode<Float32T> t1362 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32((*double_value_324).value()));
                            USE(t1362);
                            TVARIABLE(Float32T, float_value_325_impl);
                            auto float_value_325 = &float_value_325_impl;
                            USE(float_value_325);
                            *float_value_325 = t1362;
                            // ../../src/builtins/data-view.tq:739:8
                            TNode<Uint32T> t1363 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32((*float_value_325).value()));
                            USE(t1363);
                            StoreDataView32((*buffer_313).value(), (*bufferIndex_323).value(), t1363, (*littleEndian_312).value());
                          }
                        } else {
                          // ../../src/builtins/data-view.tq:742:11
                          {
                            bool t1364 = ElementsKindEqual(p_kind, FLOAT64_ELEMENTS);
                            USE(t1364);
                            if ((t1364)) {
                              // ../../src/builtins/data-view.tq:742:51
                              {
                                // ../../src/builtins/data-view.tq:743:8
                                TNode<Uint32T> t1365 = UncheckedCast<Uint32T>(Float64ExtractLowWord32((*double_value_324).value()));
                                USE(t1365);
                                TVARIABLE(Uint32T, low_word_326_impl);
                                auto low_word_326 = &low_word_326_impl;
                                USE(low_word_326);
                                *low_word_326 = t1365;
                                // ../../src/builtins/data-view.tq:744:8
                                TNode<Uint32T> t1366 = UncheckedCast<Uint32T>(Float64ExtractHighWord32((*double_value_324).value()));
                                USE(t1366);
                                TVARIABLE(Uint32T, high_word_327_impl);
                                auto high_word_327 = &high_word_327_impl;
                                USE(high_word_327);
                                *high_word_327 = t1366;
                                // ../../src/builtins/data-view.tq:745:8
                                StoreDataView64((*buffer_313).value(), (*bufferIndex_323).value(), (*low_word_326).value(), (*high_word_327).value(), (*littleEndian_312).value());
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:749:4
    *_return_309 = Undefined();
    Goto(label_macro_end_730);
  }
  BIND(label_macro_end_730);
  return (*_return_309).value();
}

TF_BUILTIN(DataViewPrototypeSetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:753:62
  {
    // ../../src/builtins/data-view.tq:754:6
    auto t1367 = [=]() {
      int31_t t1369 = 0;
      TNode<IntPtrT> t1370 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1369));
      TNode<Object> t1371 = UncheckedCast<Object>(GetArgumentValue(arguments, t1370));
      return t1371;
    };
    auto t1368 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1372_592_impl);
    auto t1372_592 = &t1372_592_impl;
    USE(t1372_592);
    {
      Label label__True_332_impl(this);
      Label* label__True_332 = &label__True_332_impl;
      USE(label__True_332);
      Label label__False_333_impl(this);
      Label* label__False_333 = &label__False_333_impl;
      USE(label__False_333);
      Label label__done_593_733_impl(this, {t1372_592});
      Label* label__done_593_733 = &label__done_593_733_impl;
      USE(label__done_593_733);
      TNode<IntPtrT> t1373 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1374 = 0;
      TNode<IntPtrT> t1375 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1374));
      TNode<BoolT> t1376 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1373, t1375));
      USE(t1376);
      Branch(t1376, label__True_332, label__False_333);
      BIND(label__True_332);
            *t1372_592 = t1367();
      Goto(label__done_593_733);
      BIND(label__False_333);
            *t1372_592 = t1368();
      Goto(label__done_593_733);
      BIND(label__done_593_733);
    }
    TVARIABLE(Object, offset_328_impl);
    auto offset_328 = &offset_328_impl;
    USE(offset_328);
    *offset_328 = (*t1372_592).value();
    // ../../src/builtins/data-view.tq:757:6
    auto t1377 = [=]() {
      int31_t t1379 = 1;
      TNode<IntPtrT> t1380 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1379));
      TNode<Object> t1381 = UncheckedCast<Object>(GetArgumentValue(arguments, t1380));
      return t1381;
    };
    auto t1378 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1382_594_impl);
    auto t1382_594 = &t1382_594_impl;
    USE(t1382_594);
    {
      Label label__True_334_impl(this);
      Label* label__True_334 = &label__True_334_impl;
      USE(label__True_334);
      Label label__False_335_impl(this);
      Label* label__False_335 = &label__False_335_impl;
      USE(label__False_335);
      Label label__done_595_734_impl(this, {t1382_594});
      Label* label__done_595_734 = &label__done_595_734_impl;
      USE(label__done_595_734);
      TNode<IntPtrT> t1383 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1384 = 1;
      TNode<IntPtrT> t1385 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1384));
      TNode<BoolT> t1386 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1383, t1385));
      USE(t1386);
      Branch(t1386, label__True_334, label__False_335);
      BIND(label__True_334);
            *t1382_594 = t1377();
      Goto(label__done_595_734);
      BIND(label__False_335);
            *t1382_594 = t1378();
      Goto(label__done_595_734);
      BIND(label__done_595_734);
    }
    TVARIABLE(Object, value_329_impl);
    auto value_329 = &value_329_impl;
    USE(value_329);
    *value_329 = (*t1382_594).value();
    // ../../src/builtins/data-view.tq:760:6
    TNode<Object> t1387 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_328).value(), (*value_329).value(), Undefined(), INT8_ELEMENTS));
    USE(t1387);
    arguments->PopAndReturn(t1387);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:765:62
  {
    // ../../src/builtins/data-view.tq:766:6
    auto t1388 = [=]() {
      int31_t t1390 = 0;
      TNode<IntPtrT> t1391 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1390));
      TNode<Object> t1392 = UncheckedCast<Object>(GetArgumentValue(arguments, t1391));
      return t1392;
    };
    auto t1389 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1393_596_impl);
    auto t1393_596 = &t1393_596_impl;
    USE(t1393_596);
    {
      Label label__True_336_impl(this);
      Label* label__True_336 = &label__True_336_impl;
      USE(label__True_336);
      Label label__False_337_impl(this);
      Label* label__False_337 = &label__False_337_impl;
      USE(label__False_337);
      Label label__done_597_735_impl(this, {t1393_596});
      Label* label__done_597_735 = &label__done_597_735_impl;
      USE(label__done_597_735);
      TNode<IntPtrT> t1394 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1395 = 0;
      TNode<IntPtrT> t1396 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1395));
      TNode<BoolT> t1397 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1394, t1396));
      USE(t1397);
      Branch(t1397, label__True_336, label__False_337);
      BIND(label__True_336);
            *t1393_596 = t1388();
      Goto(label__done_597_735);
      BIND(label__False_337);
            *t1393_596 = t1389();
      Goto(label__done_597_735);
      BIND(label__done_597_735);
    }
    TVARIABLE(Object, offset_330_impl);
    auto offset_330 = &offset_330_impl;
    USE(offset_330);
    *offset_330 = (*t1393_596).value();
    // ../../src/builtins/data-view.tq:769:6
    auto t1398 = [=]() {
      int31_t t1400 = 1;
      TNode<IntPtrT> t1401 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1400));
      TNode<Object> t1402 = UncheckedCast<Object>(GetArgumentValue(arguments, t1401));
      return t1402;
    };
    auto t1399 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1403_598_impl);
    auto t1403_598 = &t1403_598_impl;
    USE(t1403_598);
    {
      Label label__True_338_impl(this);
      Label* label__True_338 = &label__True_338_impl;
      USE(label__True_338);
      Label label__False_339_impl(this);
      Label* label__False_339 = &label__False_339_impl;
      USE(label__False_339);
      Label label__done_599_736_impl(this, {t1403_598});
      Label* label__done_599_736 = &label__done_599_736_impl;
      USE(label__done_599_736);
      TNode<IntPtrT> t1404 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1405 = 1;
      TNode<IntPtrT> t1406 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1405));
      TNode<BoolT> t1407 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1404, t1406));
      USE(t1407);
      Branch(t1407, label__True_338, label__False_339);
      BIND(label__True_338);
            *t1403_598 = t1398();
      Goto(label__done_599_736);
      BIND(label__False_339);
            *t1403_598 = t1399();
      Goto(label__done_599_736);
      BIND(label__done_599_736);
    }
    TVARIABLE(Object, value_331_impl);
    auto value_331 = &value_331_impl;
    USE(value_331);
    *value_331 = (*t1403_598).value();
    // ../../src/builtins/data-view.tq:772:6
    TNode<Object> t1408 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_330).value(), (*value_331).value(), Undefined(), UINT8_ELEMENTS));
    USE(t1408);
    arguments->PopAndReturn(t1408);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:777:62
  {
    // ../../src/builtins/data-view.tq:778:6
    auto t1409 = [=]() {
      int31_t t1411 = 0;
      TNode<IntPtrT> t1412 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1411));
      TNode<Object> t1413 = UncheckedCast<Object>(GetArgumentValue(arguments, t1412));
      return t1413;
    };
    auto t1410 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1414_600_impl);
    auto t1414_600 = &t1414_600_impl;
    USE(t1414_600);
    {
      Label label__True_340_impl(this);
      Label* label__True_340 = &label__True_340_impl;
      USE(label__True_340);
      Label label__False_341_impl(this);
      Label* label__False_341 = &label__False_341_impl;
      USE(label__False_341);
      Label label__done_601_737_impl(this, {t1414_600});
      Label* label__done_601_737 = &label__done_601_737_impl;
      USE(label__done_601_737);
      TNode<IntPtrT> t1415 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1416 = 0;
      TNode<IntPtrT> t1417 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1416));
      TNode<BoolT> t1418 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1415, t1417));
      USE(t1418);
      Branch(t1418, label__True_340, label__False_341);
      BIND(label__True_340);
            *t1414_600 = t1409();
      Goto(label__done_601_737);
      BIND(label__False_341);
            *t1414_600 = t1410();
      Goto(label__done_601_737);
      BIND(label__done_601_737);
    }
    TVARIABLE(Object, offset_332_impl);
    auto offset_332 = &offset_332_impl;
    USE(offset_332);
    *offset_332 = (*t1414_600).value();
    // ../../src/builtins/data-view.tq:781:6
    auto t1419 = [=]() {
      int31_t t1421 = 1;
      TNode<IntPtrT> t1422 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1421));
      TNode<Object> t1423 = UncheckedCast<Object>(GetArgumentValue(arguments, t1422));
      return t1423;
    };
    auto t1420 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1424_602_impl);
    auto t1424_602 = &t1424_602_impl;
    USE(t1424_602);
    {
      Label label__True_342_impl(this);
      Label* label__True_342 = &label__True_342_impl;
      USE(label__True_342);
      Label label__False_343_impl(this);
      Label* label__False_343 = &label__False_343_impl;
      USE(label__False_343);
      Label label__done_603_738_impl(this, {t1424_602});
      Label* label__done_603_738 = &label__done_603_738_impl;
      USE(label__done_603_738);
      TNode<IntPtrT> t1425 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1426 = 1;
      TNode<IntPtrT> t1427 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1426));
      TNode<BoolT> t1428 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1425, t1427));
      USE(t1428);
      Branch(t1428, label__True_342, label__False_343);
      BIND(label__True_342);
            *t1424_602 = t1419();
      Goto(label__done_603_738);
      BIND(label__False_343);
            *t1424_602 = t1420();
      Goto(label__done_603_738);
      BIND(label__done_603_738);
    }
    TVARIABLE(Object, value_333_impl);
    auto value_333 = &value_333_impl;
    USE(value_333);
    *value_333 = (*t1424_602).value();
    // ../../src/builtins/data-view.tq:784:6
    auto t1429 = [=]() {
      int31_t t1431 = 2;
      TNode<IntPtrT> t1432 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1431));
      TNode<Object> t1433 = UncheckedCast<Object>(GetArgumentValue(arguments, t1432));
      return t1433;
    };
    auto t1430 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1434_604_impl);
    auto t1434_604 = &t1434_604_impl;
    USE(t1434_604);
    {
      Label label__True_344_impl(this);
      Label* label__True_344 = &label__True_344_impl;
      USE(label__True_344);
      Label label__False_345_impl(this);
      Label* label__False_345 = &label__False_345_impl;
      USE(label__False_345);
      Label label__done_605_739_impl(this, {t1434_604});
      Label* label__done_605_739 = &label__done_605_739_impl;
      USE(label__done_605_739);
      TNode<IntPtrT> t1435 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1436 = 2;
      TNode<IntPtrT> t1437 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1436));
      TNode<BoolT> t1438 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1435, t1437));
      USE(t1438);
      Branch(t1438, label__True_344, label__False_345);
      BIND(label__True_344);
            *t1434_604 = t1429();
      Goto(label__done_605_739);
      BIND(label__False_345);
            *t1434_604 = t1430();
      Goto(label__done_605_739);
      BIND(label__done_605_739);
    }
    TVARIABLE(Object, is_little_endian_334_impl);
    auto is_little_endian_334 = &is_little_endian_334_impl;
    USE(is_little_endian_334);
    *is_little_endian_334 = (*t1434_604).value();
    // ../../src/builtins/data-view.tq:787:6
    TNode<Object> t1439 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_332).value(), (*value_333).value(), (*is_little_endian_334).value(), INT16_ELEMENTS));
    USE(t1439);
    arguments->PopAndReturn(t1439);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:792:62
  {
    // ../../src/builtins/data-view.tq:793:6
    auto t1440 = [=]() {
      int31_t t1442 = 0;
      TNode<IntPtrT> t1443 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1442));
      TNode<Object> t1444 = UncheckedCast<Object>(GetArgumentValue(arguments, t1443));
      return t1444;
    };
    auto t1441 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1445_606_impl);
    auto t1445_606 = &t1445_606_impl;
    USE(t1445_606);
    {
      Label label__True_346_impl(this);
      Label* label__True_346 = &label__True_346_impl;
      USE(label__True_346);
      Label label__False_347_impl(this);
      Label* label__False_347 = &label__False_347_impl;
      USE(label__False_347);
      Label label__done_607_740_impl(this, {t1445_606});
      Label* label__done_607_740 = &label__done_607_740_impl;
      USE(label__done_607_740);
      TNode<IntPtrT> t1446 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1447 = 0;
      TNode<IntPtrT> t1448 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1447));
      TNode<BoolT> t1449 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1446, t1448));
      USE(t1449);
      Branch(t1449, label__True_346, label__False_347);
      BIND(label__True_346);
            *t1445_606 = t1440();
      Goto(label__done_607_740);
      BIND(label__False_347);
            *t1445_606 = t1441();
      Goto(label__done_607_740);
      BIND(label__done_607_740);
    }
    TVARIABLE(Object, offset_335_impl);
    auto offset_335 = &offset_335_impl;
    USE(offset_335);
    *offset_335 = (*t1445_606).value();
    // ../../src/builtins/data-view.tq:796:6
    auto t1450 = [=]() {
      int31_t t1452 = 1;
      TNode<IntPtrT> t1453 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1452));
      TNode<Object> t1454 = UncheckedCast<Object>(GetArgumentValue(arguments, t1453));
      return t1454;
    };
    auto t1451 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1455_608_impl);
    auto t1455_608 = &t1455_608_impl;
    USE(t1455_608);
    {
      Label label__True_348_impl(this);
      Label* label__True_348 = &label__True_348_impl;
      USE(label__True_348);
      Label label__False_349_impl(this);
      Label* label__False_349 = &label__False_349_impl;
      USE(label__False_349);
      Label label__done_609_741_impl(this, {t1455_608});
      Label* label__done_609_741 = &label__done_609_741_impl;
      USE(label__done_609_741);
      TNode<IntPtrT> t1456 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1457 = 1;
      TNode<IntPtrT> t1458 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1457));
      TNode<BoolT> t1459 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1456, t1458));
      USE(t1459);
      Branch(t1459, label__True_348, label__False_349);
      BIND(label__True_348);
            *t1455_608 = t1450();
      Goto(label__done_609_741);
      BIND(label__False_349);
            *t1455_608 = t1451();
      Goto(label__done_609_741);
      BIND(label__done_609_741);
    }
    TVARIABLE(Object, value_336_impl);
    auto value_336 = &value_336_impl;
    USE(value_336);
    *value_336 = (*t1455_608).value();
    // ../../src/builtins/data-view.tq:799:6
    auto t1460 = [=]() {
      int31_t t1462 = 2;
      TNode<IntPtrT> t1463 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1462));
      TNode<Object> t1464 = UncheckedCast<Object>(GetArgumentValue(arguments, t1463));
      return t1464;
    };
    auto t1461 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1465_610_impl);
    auto t1465_610 = &t1465_610_impl;
    USE(t1465_610);
    {
      Label label__True_350_impl(this);
      Label* label__True_350 = &label__True_350_impl;
      USE(label__True_350);
      Label label__False_351_impl(this);
      Label* label__False_351 = &label__False_351_impl;
      USE(label__False_351);
      Label label__done_611_742_impl(this, {t1465_610});
      Label* label__done_611_742 = &label__done_611_742_impl;
      USE(label__done_611_742);
      TNode<IntPtrT> t1466 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1467 = 2;
      TNode<IntPtrT> t1468 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1467));
      TNode<BoolT> t1469 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1466, t1468));
      USE(t1469);
      Branch(t1469, label__True_350, label__False_351);
      BIND(label__True_350);
            *t1465_610 = t1460();
      Goto(label__done_611_742);
      BIND(label__False_351);
            *t1465_610 = t1461();
      Goto(label__done_611_742);
      BIND(label__done_611_742);
    }
    TVARIABLE(Object, is_little_endian_337_impl);
    auto is_little_endian_337 = &is_little_endian_337_impl;
    USE(is_little_endian_337);
    *is_little_endian_337 = (*t1465_610).value();
    // ../../src/builtins/data-view.tq:802:6
    TNode<Object> t1470 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_335).value(), (*value_336).value(), (*is_little_endian_337).value(), UINT16_ELEMENTS));
    USE(t1470);
    arguments->PopAndReturn(t1470);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:807:62
  {
    // ../../src/builtins/data-view.tq:808:6
    auto t1471 = [=]() {
      int31_t t1473 = 0;
      TNode<IntPtrT> t1474 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1473));
      TNode<Object> t1475 = UncheckedCast<Object>(GetArgumentValue(arguments, t1474));
      return t1475;
    };
    auto t1472 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1476_612_impl);
    auto t1476_612 = &t1476_612_impl;
    USE(t1476_612);
    {
      Label label__True_352_impl(this);
      Label* label__True_352 = &label__True_352_impl;
      USE(label__True_352);
      Label label__False_353_impl(this);
      Label* label__False_353 = &label__False_353_impl;
      USE(label__False_353);
      Label label__done_613_743_impl(this, {t1476_612});
      Label* label__done_613_743 = &label__done_613_743_impl;
      USE(label__done_613_743);
      TNode<IntPtrT> t1477 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1478 = 0;
      TNode<IntPtrT> t1479 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1478));
      TNode<BoolT> t1480 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1477, t1479));
      USE(t1480);
      Branch(t1480, label__True_352, label__False_353);
      BIND(label__True_352);
            *t1476_612 = t1471();
      Goto(label__done_613_743);
      BIND(label__False_353);
            *t1476_612 = t1472();
      Goto(label__done_613_743);
      BIND(label__done_613_743);
    }
    TVARIABLE(Object, offset_338_impl);
    auto offset_338 = &offset_338_impl;
    USE(offset_338);
    *offset_338 = (*t1476_612).value();
    // ../../src/builtins/data-view.tq:811:6
    auto t1481 = [=]() {
      int31_t t1483 = 1;
      TNode<IntPtrT> t1484 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1483));
      TNode<Object> t1485 = UncheckedCast<Object>(GetArgumentValue(arguments, t1484));
      return t1485;
    };
    auto t1482 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1486_614_impl);
    auto t1486_614 = &t1486_614_impl;
    USE(t1486_614);
    {
      Label label__True_354_impl(this);
      Label* label__True_354 = &label__True_354_impl;
      USE(label__True_354);
      Label label__False_355_impl(this);
      Label* label__False_355 = &label__False_355_impl;
      USE(label__False_355);
      Label label__done_615_744_impl(this, {t1486_614});
      Label* label__done_615_744 = &label__done_615_744_impl;
      USE(label__done_615_744);
      TNode<IntPtrT> t1487 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1488 = 1;
      TNode<IntPtrT> t1489 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1488));
      TNode<BoolT> t1490 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1487, t1489));
      USE(t1490);
      Branch(t1490, label__True_354, label__False_355);
      BIND(label__True_354);
            *t1486_614 = t1481();
      Goto(label__done_615_744);
      BIND(label__False_355);
            *t1486_614 = t1482();
      Goto(label__done_615_744);
      BIND(label__done_615_744);
    }
    TVARIABLE(Object, value_339_impl);
    auto value_339 = &value_339_impl;
    USE(value_339);
    *value_339 = (*t1486_614).value();
    // ../../src/builtins/data-view.tq:814:6
    auto t1491 = [=]() {
      int31_t t1493 = 2;
      TNode<IntPtrT> t1494 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1493));
      TNode<Object> t1495 = UncheckedCast<Object>(GetArgumentValue(arguments, t1494));
      return t1495;
    };
    auto t1492 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1496_616_impl);
    auto t1496_616 = &t1496_616_impl;
    USE(t1496_616);
    {
      Label label__True_356_impl(this);
      Label* label__True_356 = &label__True_356_impl;
      USE(label__True_356);
      Label label__False_357_impl(this);
      Label* label__False_357 = &label__False_357_impl;
      USE(label__False_357);
      Label label__done_617_745_impl(this, {t1496_616});
      Label* label__done_617_745 = &label__done_617_745_impl;
      USE(label__done_617_745);
      TNode<IntPtrT> t1497 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1498 = 2;
      TNode<IntPtrT> t1499 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1498));
      TNode<BoolT> t1500 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1497, t1499));
      USE(t1500);
      Branch(t1500, label__True_356, label__False_357);
      BIND(label__True_356);
            *t1496_616 = t1491();
      Goto(label__done_617_745);
      BIND(label__False_357);
            *t1496_616 = t1492();
      Goto(label__done_617_745);
      BIND(label__done_617_745);
    }
    TVARIABLE(Object, is_little_endian_340_impl);
    auto is_little_endian_340 = &is_little_endian_340_impl;
    USE(is_little_endian_340);
    *is_little_endian_340 = (*t1496_616).value();
    // ../../src/builtins/data-view.tq:817:6
    TNode<Object> t1501 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_338).value(), (*value_339).value(), (*is_little_endian_340).value(), INT32_ELEMENTS));
    USE(t1501);
    arguments->PopAndReturn(t1501);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:822:62
  {
    // ../../src/builtins/data-view.tq:823:6
    auto t1502 = [=]() {
      int31_t t1504 = 0;
      TNode<IntPtrT> t1505 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1504));
      TNode<Object> t1506 = UncheckedCast<Object>(GetArgumentValue(arguments, t1505));
      return t1506;
    };
    auto t1503 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1507_618_impl);
    auto t1507_618 = &t1507_618_impl;
    USE(t1507_618);
    {
      Label label__True_358_impl(this);
      Label* label__True_358 = &label__True_358_impl;
      USE(label__True_358);
      Label label__False_359_impl(this);
      Label* label__False_359 = &label__False_359_impl;
      USE(label__False_359);
      Label label__done_619_746_impl(this, {t1507_618});
      Label* label__done_619_746 = &label__done_619_746_impl;
      USE(label__done_619_746);
      TNode<IntPtrT> t1508 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1509 = 0;
      TNode<IntPtrT> t1510 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1509));
      TNode<BoolT> t1511 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1508, t1510));
      USE(t1511);
      Branch(t1511, label__True_358, label__False_359);
      BIND(label__True_358);
            *t1507_618 = t1502();
      Goto(label__done_619_746);
      BIND(label__False_359);
            *t1507_618 = t1503();
      Goto(label__done_619_746);
      BIND(label__done_619_746);
    }
    TVARIABLE(Object, offset_341_impl);
    auto offset_341 = &offset_341_impl;
    USE(offset_341);
    *offset_341 = (*t1507_618).value();
    // ../../src/builtins/data-view.tq:826:6
    auto t1512 = [=]() {
      int31_t t1514 = 1;
      TNode<IntPtrT> t1515 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1514));
      TNode<Object> t1516 = UncheckedCast<Object>(GetArgumentValue(arguments, t1515));
      return t1516;
    };
    auto t1513 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1517_620_impl);
    auto t1517_620 = &t1517_620_impl;
    USE(t1517_620);
    {
      Label label__True_360_impl(this);
      Label* label__True_360 = &label__True_360_impl;
      USE(label__True_360);
      Label label__False_361_impl(this);
      Label* label__False_361 = &label__False_361_impl;
      USE(label__False_361);
      Label label__done_621_747_impl(this, {t1517_620});
      Label* label__done_621_747 = &label__done_621_747_impl;
      USE(label__done_621_747);
      TNode<IntPtrT> t1518 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1519 = 1;
      TNode<IntPtrT> t1520 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1519));
      TNode<BoolT> t1521 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1518, t1520));
      USE(t1521);
      Branch(t1521, label__True_360, label__False_361);
      BIND(label__True_360);
            *t1517_620 = t1512();
      Goto(label__done_621_747);
      BIND(label__False_361);
            *t1517_620 = t1513();
      Goto(label__done_621_747);
      BIND(label__done_621_747);
    }
    TVARIABLE(Object, value_342_impl);
    auto value_342 = &value_342_impl;
    USE(value_342);
    *value_342 = (*t1517_620).value();
    // ../../src/builtins/data-view.tq:829:6
    auto t1522 = [=]() {
      int31_t t1524 = 2;
      TNode<IntPtrT> t1525 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1524));
      TNode<Object> t1526 = UncheckedCast<Object>(GetArgumentValue(arguments, t1525));
      return t1526;
    };
    auto t1523 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1527_622_impl);
    auto t1527_622 = &t1527_622_impl;
    USE(t1527_622);
    {
      Label label__True_362_impl(this);
      Label* label__True_362 = &label__True_362_impl;
      USE(label__True_362);
      Label label__False_363_impl(this);
      Label* label__False_363 = &label__False_363_impl;
      USE(label__False_363);
      Label label__done_623_748_impl(this, {t1527_622});
      Label* label__done_623_748 = &label__done_623_748_impl;
      USE(label__done_623_748);
      TNode<IntPtrT> t1528 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1529 = 2;
      TNode<IntPtrT> t1530 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1529));
      TNode<BoolT> t1531 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1528, t1530));
      USE(t1531);
      Branch(t1531, label__True_362, label__False_363);
      BIND(label__True_362);
            *t1527_622 = t1522();
      Goto(label__done_623_748);
      BIND(label__False_363);
            *t1527_622 = t1523();
      Goto(label__done_623_748);
      BIND(label__done_623_748);
    }
    TVARIABLE(Object, is_little_endian_343_impl);
    auto is_little_endian_343 = &is_little_endian_343_impl;
    USE(is_little_endian_343);
    *is_little_endian_343 = (*t1527_622).value();
    // ../../src/builtins/data-view.tq:832:6
    TNode<Object> t1532 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_341).value(), (*value_342).value(), (*is_little_endian_343).value(), UINT32_ELEMENTS));
    USE(t1532);
    arguments->PopAndReturn(t1532);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:837:62
  {
    // ../../src/builtins/data-view.tq:838:6
    auto t1533 = [=]() {
      int31_t t1535 = 0;
      TNode<IntPtrT> t1536 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1535));
      TNode<Object> t1537 = UncheckedCast<Object>(GetArgumentValue(arguments, t1536));
      return t1537;
    };
    auto t1534 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1538_624_impl);
    auto t1538_624 = &t1538_624_impl;
    USE(t1538_624);
    {
      Label label__True_364_impl(this);
      Label* label__True_364 = &label__True_364_impl;
      USE(label__True_364);
      Label label__False_365_impl(this);
      Label* label__False_365 = &label__False_365_impl;
      USE(label__False_365);
      Label label__done_625_749_impl(this, {t1538_624});
      Label* label__done_625_749 = &label__done_625_749_impl;
      USE(label__done_625_749);
      TNode<IntPtrT> t1539 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1540 = 0;
      TNode<IntPtrT> t1541 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1540));
      TNode<BoolT> t1542 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1539, t1541));
      USE(t1542);
      Branch(t1542, label__True_364, label__False_365);
      BIND(label__True_364);
            *t1538_624 = t1533();
      Goto(label__done_625_749);
      BIND(label__False_365);
            *t1538_624 = t1534();
      Goto(label__done_625_749);
      BIND(label__done_625_749);
    }
    TVARIABLE(Object, offset_344_impl);
    auto offset_344 = &offset_344_impl;
    USE(offset_344);
    *offset_344 = (*t1538_624).value();
    // ../../src/builtins/data-view.tq:841:6
    auto t1543 = [=]() {
      int31_t t1545 = 1;
      TNode<IntPtrT> t1546 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1545));
      TNode<Object> t1547 = UncheckedCast<Object>(GetArgumentValue(arguments, t1546));
      return t1547;
    };
    auto t1544 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1548_626_impl);
    auto t1548_626 = &t1548_626_impl;
    USE(t1548_626);
    {
      Label label__True_366_impl(this);
      Label* label__True_366 = &label__True_366_impl;
      USE(label__True_366);
      Label label__False_367_impl(this);
      Label* label__False_367 = &label__False_367_impl;
      USE(label__False_367);
      Label label__done_627_750_impl(this, {t1548_626});
      Label* label__done_627_750 = &label__done_627_750_impl;
      USE(label__done_627_750);
      TNode<IntPtrT> t1549 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1550 = 1;
      TNode<IntPtrT> t1551 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1550));
      TNode<BoolT> t1552 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1549, t1551));
      USE(t1552);
      Branch(t1552, label__True_366, label__False_367);
      BIND(label__True_366);
            *t1548_626 = t1543();
      Goto(label__done_627_750);
      BIND(label__False_367);
            *t1548_626 = t1544();
      Goto(label__done_627_750);
      BIND(label__done_627_750);
    }
    TVARIABLE(Object, value_345_impl);
    auto value_345 = &value_345_impl;
    USE(value_345);
    *value_345 = (*t1548_626).value();
    // ../../src/builtins/data-view.tq:844:6
    auto t1553 = [=]() {
      int31_t t1555 = 2;
      TNode<IntPtrT> t1556 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1555));
      TNode<Object> t1557 = UncheckedCast<Object>(GetArgumentValue(arguments, t1556));
      return t1557;
    };
    auto t1554 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1558_628_impl);
    auto t1558_628 = &t1558_628_impl;
    USE(t1558_628);
    {
      Label label__True_368_impl(this);
      Label* label__True_368 = &label__True_368_impl;
      USE(label__True_368);
      Label label__False_369_impl(this);
      Label* label__False_369 = &label__False_369_impl;
      USE(label__False_369);
      Label label__done_629_751_impl(this, {t1558_628});
      Label* label__done_629_751 = &label__done_629_751_impl;
      USE(label__done_629_751);
      TNode<IntPtrT> t1559 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1560 = 2;
      TNode<IntPtrT> t1561 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1560));
      TNode<BoolT> t1562 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1559, t1561));
      USE(t1562);
      Branch(t1562, label__True_368, label__False_369);
      BIND(label__True_368);
            *t1558_628 = t1553();
      Goto(label__done_629_751);
      BIND(label__False_369);
            *t1558_628 = t1554();
      Goto(label__done_629_751);
      BIND(label__done_629_751);
    }
    TVARIABLE(Object, is_little_endian_346_impl);
    auto is_little_endian_346 = &is_little_endian_346_impl;
    USE(is_little_endian_346);
    *is_little_endian_346 = (*t1558_628).value();
    // ../../src/builtins/data-view.tq:847:6
    TNode<Object> t1563 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_344).value(), (*value_345).value(), (*is_little_endian_346).value(), FLOAT32_ELEMENTS));
    USE(t1563);
    arguments->PopAndReturn(t1563);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:852:62
  {
    // ../../src/builtins/data-view.tq:853:6
    auto t1564 = [=]() {
      int31_t t1566 = 0;
      TNode<IntPtrT> t1567 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1566));
      TNode<Object> t1568 = UncheckedCast<Object>(GetArgumentValue(arguments, t1567));
      return t1568;
    };
    auto t1565 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1569_630_impl);
    auto t1569_630 = &t1569_630_impl;
    USE(t1569_630);
    {
      Label label__True_370_impl(this);
      Label* label__True_370 = &label__True_370_impl;
      USE(label__True_370);
      Label label__False_371_impl(this);
      Label* label__False_371 = &label__False_371_impl;
      USE(label__False_371);
      Label label__done_631_752_impl(this, {t1569_630});
      Label* label__done_631_752 = &label__done_631_752_impl;
      USE(label__done_631_752);
      TNode<IntPtrT> t1570 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1571 = 0;
      TNode<IntPtrT> t1572 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1571));
      TNode<BoolT> t1573 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1570, t1572));
      USE(t1573);
      Branch(t1573, label__True_370, label__False_371);
      BIND(label__True_370);
            *t1569_630 = t1564();
      Goto(label__done_631_752);
      BIND(label__False_371);
            *t1569_630 = t1565();
      Goto(label__done_631_752);
      BIND(label__done_631_752);
    }
    TVARIABLE(Object, offset_347_impl);
    auto offset_347 = &offset_347_impl;
    USE(offset_347);
    *offset_347 = (*t1569_630).value();
    // ../../src/builtins/data-view.tq:856:6
    auto t1574 = [=]() {
      int31_t t1576 = 1;
      TNode<IntPtrT> t1577 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1576));
      TNode<Object> t1578 = UncheckedCast<Object>(GetArgumentValue(arguments, t1577));
      return t1578;
    };
    auto t1575 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1579_632_impl);
    auto t1579_632 = &t1579_632_impl;
    USE(t1579_632);
    {
      Label label__True_372_impl(this);
      Label* label__True_372 = &label__True_372_impl;
      USE(label__True_372);
      Label label__False_373_impl(this);
      Label* label__False_373 = &label__False_373_impl;
      USE(label__False_373);
      Label label__done_633_753_impl(this, {t1579_632});
      Label* label__done_633_753 = &label__done_633_753_impl;
      USE(label__done_633_753);
      TNode<IntPtrT> t1580 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1581 = 1;
      TNode<IntPtrT> t1582 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1581));
      TNode<BoolT> t1583 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1580, t1582));
      USE(t1583);
      Branch(t1583, label__True_372, label__False_373);
      BIND(label__True_372);
            *t1579_632 = t1574();
      Goto(label__done_633_753);
      BIND(label__False_373);
            *t1579_632 = t1575();
      Goto(label__done_633_753);
      BIND(label__done_633_753);
    }
    TVARIABLE(Object, value_348_impl);
    auto value_348 = &value_348_impl;
    USE(value_348);
    *value_348 = (*t1579_632).value();
    // ../../src/builtins/data-view.tq:859:6
    auto t1584 = [=]() {
      int31_t t1586 = 2;
      TNode<IntPtrT> t1587 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1586));
      TNode<Object> t1588 = UncheckedCast<Object>(GetArgumentValue(arguments, t1587));
      return t1588;
    };
    auto t1585 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1589_634_impl);
    auto t1589_634 = &t1589_634_impl;
    USE(t1589_634);
    {
      Label label__True_374_impl(this);
      Label* label__True_374 = &label__True_374_impl;
      USE(label__True_374);
      Label label__False_375_impl(this);
      Label* label__False_375 = &label__False_375_impl;
      USE(label__False_375);
      Label label__done_635_754_impl(this, {t1589_634});
      Label* label__done_635_754 = &label__done_635_754_impl;
      USE(label__done_635_754);
      TNode<IntPtrT> t1590 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1591 = 2;
      TNode<IntPtrT> t1592 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1591));
      TNode<BoolT> t1593 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1590, t1592));
      USE(t1593);
      Branch(t1593, label__True_374, label__False_375);
      BIND(label__True_374);
            *t1589_634 = t1584();
      Goto(label__done_635_754);
      BIND(label__False_375);
            *t1589_634 = t1585();
      Goto(label__done_635_754);
      BIND(label__done_635_754);
    }
    TVARIABLE(Object, is_little_endian_349_impl);
    auto is_little_endian_349 = &is_little_endian_349_impl;
    USE(is_little_endian_349);
    *is_little_endian_349 = (*t1589_634).value();
    // ../../src/builtins/data-view.tq:862:6
    TNode<Object> t1594 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_347).value(), (*value_348).value(), (*is_little_endian_349).value(), FLOAT64_ELEMENTS));
    USE(t1594);
    arguments->PopAndReturn(t1594);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:867:62
  {
    // ../../src/builtins/data-view.tq:868:6
    auto t1595 = [=]() {
      int31_t t1597 = 0;
      TNode<IntPtrT> t1598 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1597));
      TNode<Object> t1599 = UncheckedCast<Object>(GetArgumentValue(arguments, t1598));
      return t1599;
    };
    auto t1596 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1600_636_impl);
    auto t1600_636 = &t1600_636_impl;
    USE(t1600_636);
    {
      Label label__True_376_impl(this);
      Label* label__True_376 = &label__True_376_impl;
      USE(label__True_376);
      Label label__False_377_impl(this);
      Label* label__False_377 = &label__False_377_impl;
      USE(label__False_377);
      Label label__done_637_755_impl(this, {t1600_636});
      Label* label__done_637_755 = &label__done_637_755_impl;
      USE(label__done_637_755);
      TNode<IntPtrT> t1601 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1602 = 0;
      TNode<IntPtrT> t1603 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1602));
      TNode<BoolT> t1604 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1601, t1603));
      USE(t1604);
      Branch(t1604, label__True_376, label__False_377);
      BIND(label__True_376);
            *t1600_636 = t1595();
      Goto(label__done_637_755);
      BIND(label__False_377);
            *t1600_636 = t1596();
      Goto(label__done_637_755);
      BIND(label__done_637_755);
    }
    TVARIABLE(Object, offset_350_impl);
    auto offset_350 = &offset_350_impl;
    USE(offset_350);
    *offset_350 = (*t1600_636).value();
    // ../../src/builtins/data-view.tq:871:6
    auto t1605 = [=]() {
      int31_t t1607 = 1;
      TNode<IntPtrT> t1608 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1607));
      TNode<Object> t1609 = UncheckedCast<Object>(GetArgumentValue(arguments, t1608));
      return t1609;
    };
    auto t1606 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1610_638_impl);
    auto t1610_638 = &t1610_638_impl;
    USE(t1610_638);
    {
      Label label__True_378_impl(this);
      Label* label__True_378 = &label__True_378_impl;
      USE(label__True_378);
      Label label__False_379_impl(this);
      Label* label__False_379 = &label__False_379_impl;
      USE(label__False_379);
      Label label__done_639_756_impl(this, {t1610_638});
      Label* label__done_639_756 = &label__done_639_756_impl;
      USE(label__done_639_756);
      TNode<IntPtrT> t1611 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1612 = 1;
      TNode<IntPtrT> t1613 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1612));
      TNode<BoolT> t1614 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1611, t1613));
      USE(t1614);
      Branch(t1614, label__True_378, label__False_379);
      BIND(label__True_378);
            *t1610_638 = t1605();
      Goto(label__done_639_756);
      BIND(label__False_379);
            *t1610_638 = t1606();
      Goto(label__done_639_756);
      BIND(label__done_639_756);
    }
    TVARIABLE(Object, value_351_impl);
    auto value_351 = &value_351_impl;
    USE(value_351);
    *value_351 = (*t1610_638).value();
    // ../../src/builtins/data-view.tq:874:6
    auto t1615 = [=]() {
      int31_t t1617 = 2;
      TNode<IntPtrT> t1618 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1617));
      TNode<Object> t1619 = UncheckedCast<Object>(GetArgumentValue(arguments, t1618));
      return t1619;
    };
    auto t1616 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1620_640_impl);
    auto t1620_640 = &t1620_640_impl;
    USE(t1620_640);
    {
      Label label__True_380_impl(this);
      Label* label__True_380 = &label__True_380_impl;
      USE(label__True_380);
      Label label__False_381_impl(this);
      Label* label__False_381 = &label__False_381_impl;
      USE(label__False_381);
      Label label__done_641_757_impl(this, {t1620_640});
      Label* label__done_641_757 = &label__done_641_757_impl;
      USE(label__done_641_757);
      TNode<IntPtrT> t1621 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1622 = 2;
      TNode<IntPtrT> t1623 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1622));
      TNode<BoolT> t1624 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1621, t1623));
      USE(t1624);
      Branch(t1624, label__True_380, label__False_381);
      BIND(label__True_380);
            *t1620_640 = t1615();
      Goto(label__done_641_757);
      BIND(label__False_381);
            *t1620_640 = t1616();
      Goto(label__done_641_757);
      BIND(label__done_641_757);
    }
    TVARIABLE(Object, is_little_endian_352_impl);
    auto is_little_endian_352 = &is_little_endian_352_impl;
    USE(is_little_endian_352);
    *is_little_endian_352 = (*t1620_640).value();
    // ../../src/builtins/data-view.tq:877:6
    TNode<Object> t1625 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_350).value(), (*value_351).value(), (*is_little_endian_352).value(), BIGINT64_ELEMENTS));
    USE(t1625);
    arguments->PopAndReturn(t1625);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:882:62
  {
    // ../../src/builtins/data-view.tq:883:6
    auto t1626 = [=]() {
      int31_t t1628 = 0;
      TNode<IntPtrT> t1629 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1628));
      TNode<Object> t1630 = UncheckedCast<Object>(GetArgumentValue(arguments, t1629));
      return t1630;
    };
    auto t1627 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1631_642_impl);
    auto t1631_642 = &t1631_642_impl;
    USE(t1631_642);
    {
      Label label__True_382_impl(this);
      Label* label__True_382 = &label__True_382_impl;
      USE(label__True_382);
      Label label__False_383_impl(this);
      Label* label__False_383 = &label__False_383_impl;
      USE(label__False_383);
      Label label__done_643_758_impl(this, {t1631_642});
      Label* label__done_643_758 = &label__done_643_758_impl;
      USE(label__done_643_758);
      TNode<IntPtrT> t1632 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1633 = 0;
      TNode<IntPtrT> t1634 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1633));
      TNode<BoolT> t1635 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1632, t1634));
      USE(t1635);
      Branch(t1635, label__True_382, label__False_383);
      BIND(label__True_382);
            *t1631_642 = t1626();
      Goto(label__done_643_758);
      BIND(label__False_383);
            *t1631_642 = t1627();
      Goto(label__done_643_758);
      BIND(label__done_643_758);
    }
    TVARIABLE(Object, offset_353_impl);
    auto offset_353 = &offset_353_impl;
    USE(offset_353);
    *offset_353 = (*t1631_642).value();
    // ../../src/builtins/data-view.tq:886:6
    auto t1636 = [=]() {
      int31_t t1638 = 1;
      TNode<IntPtrT> t1639 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1638));
      TNode<Object> t1640 = UncheckedCast<Object>(GetArgumentValue(arguments, t1639));
      return t1640;
    };
    auto t1637 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1641_644_impl);
    auto t1641_644 = &t1641_644_impl;
    USE(t1641_644);
    {
      Label label__True_384_impl(this);
      Label* label__True_384 = &label__True_384_impl;
      USE(label__True_384);
      Label label__False_385_impl(this);
      Label* label__False_385 = &label__False_385_impl;
      USE(label__False_385);
      Label label__done_645_759_impl(this, {t1641_644});
      Label* label__done_645_759 = &label__done_645_759_impl;
      USE(label__done_645_759);
      TNode<IntPtrT> t1642 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1643 = 1;
      TNode<IntPtrT> t1644 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1643));
      TNode<BoolT> t1645 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1642, t1644));
      USE(t1645);
      Branch(t1645, label__True_384, label__False_385);
      BIND(label__True_384);
            *t1641_644 = t1636();
      Goto(label__done_645_759);
      BIND(label__False_385);
            *t1641_644 = t1637();
      Goto(label__done_645_759);
      BIND(label__done_645_759);
    }
    TVARIABLE(Object, value_354_impl);
    auto value_354 = &value_354_impl;
    USE(value_354);
    *value_354 = (*t1641_644).value();
    // ../../src/builtins/data-view.tq:889:6
    auto t1646 = [=]() {
      int31_t t1648 = 2;
      TNode<IntPtrT> t1649 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1648));
      TNode<Object> t1650 = UncheckedCast<Object>(GetArgumentValue(arguments, t1649));
      return t1650;
    };
    auto t1647 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1651_646_impl);
    auto t1651_646 = &t1651_646_impl;
    USE(t1651_646);
    {
      Label label__True_386_impl(this);
      Label* label__True_386 = &label__True_386_impl;
      USE(label__True_386);
      Label label__False_387_impl(this);
      Label* label__False_387 = &label__False_387_impl;
      USE(label__False_387);
      Label label__done_647_760_impl(this, {t1651_646});
      Label* label__done_647_760 = &label__done_647_760_impl;
      USE(label__done_647_760);
      TNode<IntPtrT> t1652 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1653 = 2;
      TNode<IntPtrT> t1654 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1653));
      TNode<BoolT> t1655 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1652, t1654));
      USE(t1655);
      Branch(t1655, label__True_386, label__False_387);
      BIND(label__True_386);
            *t1651_646 = t1646();
      Goto(label__done_647_760);
      BIND(label__False_387);
            *t1651_646 = t1647();
      Goto(label__done_647_760);
      BIND(label__done_647_760);
    }
    TVARIABLE(Object, is_little_endian_355_impl);
    auto is_little_endian_355 = &is_little_endian_355_impl;
    USE(is_little_endian_355);
    *is_little_endian_355 = (*t1651_646).value();
    // ../../src/builtins/data-view.tq:892:6
    TNode<Object> t1656 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_353).value(), (*value_354).value(), (*is_little_endian_355).value(), BIGUINT64_ELEMENTS));
    USE(t1656);
    arguments->PopAndReturn(t1656);
  }
}

}  // namepsace internal
}  // namespace v8

