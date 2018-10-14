#include "src/code-stub-assembler.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  TNode<Oddball> t0 = UncheckedCast<Oddball>(TheHoleConstant());
  USE(t0);
  return t0;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  TNode<Oddball> t1 = UncheckedCast<Oddball>(NullConstant());
  USE(t1);
  return t1;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  TNode<Oddball> t2 = UncheckedCast<Oddball>(UndefinedConstant());
  USE(t2);
  return t2;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  TNode<Oddball> t3 = UncheckedCast<Oddball>(TrueConstant());
  USE(t3);
  return t3;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  TNode<Oddball> t4 = UncheckedCast<Oddball>(FalseConstant());
  USE(t4);
  return t4;
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_0) {
  TVARIABLE(Number, _return_0_impl);
  auto _return_0 = &_return_0_impl;
  USE(_return_0);
  Label label_macro_end_520_impl(this, {_return_0});
  Label* label_macro_end_520 = &label_macro_end_520_impl;
  USE(label_macro_end_520);
  // ../../src/builtins/base.tq:323:49
  {
    // ../../src/builtins/base.tq:324:2
    TNode<Number> t5 = UncheckedCast<Number>(TaggedToNumber(p_o, label_CastError_0));
    USE(t5);
    *_return_0 = t5;
    Goto(label_macro_end_520);
  }
  BIND(label_macro_end_520);
  return (*_return_0).value();
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::cast12ATHeapObject(TNode<Object> p_o, Label* label_CastError_1) {
  TVARIABLE(HeapObject, _return_1_impl);
  auto _return_1 = &_return_1_impl;
  USE(_return_1);
  Label label_macro_end_521_impl(this, {_return_1});
  Label* label_macro_end_521 = &label_macro_end_521_impl;
  USE(label_macro_end_521);
  // ../../src/builtins/base.tq:326:57
  {
    // ../../src/builtins/base.tq:327:2
    TNode<HeapObject> t6 = UncheckedCast<HeapObject>(TaggedToHeapObject(p_o, label_CastError_1));
    USE(t6);
    *_return_1 = t6;
    Goto(label_macro_end_521);
  }
  BIND(label_macro_end_521);
  return (*_return_1).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::cast5ATSmi(TNode<Object> p_o, Label* label_CastError_2) {
  TVARIABLE(Smi, _return_2_impl);
  auto _return_2 = &_return_2_impl;
  USE(_return_2);
  Label label_macro_end_522_impl(this, {_return_2});
  Label* label_macro_end_522 = &label_macro_end_522_impl;
  USE(label_macro_end_522);
  // ../../src/builtins/base.tq:329:43
  {
    // ../../src/builtins/base.tq:330:2
    TNode<Smi> t7 = UncheckedCast<Smi>(TaggedToSmi(p_o, label_CastError_2));
    USE(t7);
    *_return_2 = t7;
    Goto(label_macro_end_522);
  }
  BIND(label_macro_end_522);
  return (*_return_2).value();
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_3) {
  TVARIABLE(JSDataView, _return_3_impl);
  auto _return_3 = &_return_3_impl;
  USE(_return_3);
  Label label_macro_end_523_impl(this, {_return_3});
  Label* label_macro_end_523 = &label_macro_end_523_impl;
  USE(label_macro_end_523);
  // ../../src/builtins/base.tq:332:57
  {
    // ../../src/builtins/base.tq:333:2
    TNode<JSDataView> t8 = UncheckedCast<JSDataView>(TaggedToJSDataView(p_o, label_CastError_3));
    USE(t8);
    *_return_3 = t8;
    Goto(label_macro_end_523);
  }
  BIND(label_macro_end_523);
  return (*_return_3).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_4) {
  TVARIABLE(JSReceiver, _return_4_impl);
  auto _return_4 = &_return_4_impl;
  USE(_return_4);
  Label label_macro_end_524_impl(this, {_return_4});
  Label* label_macro_end_524 = &label_macro_end_524_impl;
  USE(label_macro_end_524);
  // ../../src/builtins/base.tq:335:53
  {
    // ../../src/builtins/base.tq:336:2
    TNode<JSReceiver> t9 = UncheckedCast<JSReceiver>(TaggedToCallable(p_o, label_CastError_4));
    USE(t9);
    *_return_4 = t9;
    Goto(label_macro_end_524);
  }
  BIND(label_macro_end_524);
  return (*_return_4).value();
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_5) {
  TVARIABLE(JSArray, _return_5_impl);
  auto _return_5 = &_return_5_impl;
  USE(_return_5);
  Label label_macro_end_525_impl(this, {_return_5});
  Label* label_macro_end_525 = &label_macro_end_525_impl;
  USE(label_macro_end_525);
  // ../../src/builtins/base.tq:338:51
  {
    // ../../src/builtins/base.tq:339:2
    TNode<JSArray> t10 = UncheckedCast<JSArray>(TaggedToJSArray(p_o, label_CastError_5));
    USE(t10);
    *_return_5 = t10;
    Goto(label_macro_end_525);
  }
  BIND(label_macro_end_525);
  return (*_return_5).value();
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast12ATFixedArray(TNode<FixedArrayBase> p_o, Label* label_CastError_6) {
  TVARIABLE(FixedArray, _return_6_impl);
  auto _return_6 = &_return_6_impl;
  USE(_return_6);
  Label label_macro_end_526_impl(this, {_return_6});
  Label* label_macro_end_526 = &label_macro_end_526_impl;
  USE(label_macro_end_526);
  // ../../src/builtins/base.tq:342:65
  {
    // ../../src/builtins/base.tq:343:2
    TNode<FixedArray> t11 = UncheckedCast<FixedArray>(ConvertFixedArrayBaseToFixedArray(p_o, label_CastError_6));
    USE(t11);
    *_return_6 = t11;
    Goto(label_macro_end_526);
  }
  BIND(label_macro_end_526);
  return (*_return_6).value();
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::cast18ATFixedDoubleArray(TNode<FixedArrayBase> p_o, Label* label_CastError_7) {
  TVARIABLE(FixedDoubleArray, _return_7_impl);
  auto _return_7 = &_return_7_impl;
  USE(_return_7);
  Label label_macro_end_527_impl(this, {_return_7});
  Label* label_macro_end_527 = &label_macro_end_527_impl;
  USE(label_macro_end_527);
  // ../../src/builtins/base.tq:345:77
  {
    // ../../src/builtins/base.tq:346:2
    TNode<FixedDoubleArray> t12 = UncheckedCast<FixedDoubleArray>(ConvertFixedArrayBaseToFixedDoubleArray(p_o, label_CastError_7));
    USE(t12);
    *_return_7 = t12;
    Goto(label_macro_end_527);
  }
  BIND(label_macro_end_527);
  return (*_return_7).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_8_impl);
  auto _return_8 = &_return_8_impl;
  USE(_return_8);
  Label label_macro_end_528_impl(this, {_return_8});
  Label* label_macro_end_528 = &label_macro_end_528_impl;
  USE(label_macro_end_528);
  // ../../src/builtins/base.tq:385:51
  {
    // ../../src/builtins/base.tq:386:2
    TNode<IntPtrT> t13 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    USE(t13);
    *_return_8 = t13;
    Goto(label_macro_end_528);
  }
  BIND(label_macro_end_528);
  return (*_return_8).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint31(int31_t p_i) {
  TVARIABLE(Int32T, _return_9_impl);
  auto _return_9 = &_return_9_impl;
  USE(_return_9);
  Label label_macro_end_529_impl(this, {_return_9});
  Label* label_macro_end_529 = &label_macro_end_529_impl;
  USE(label_macro_end_529);
  // ../../src/builtins/base.tq:388:49
  {
    // ../../src/builtins/base.tq:389:2
    TNode<Int32T> t14 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t14);
    *_return_9 = t14;
    Goto(label_macro_end_529);
  }
  BIND(label_macro_end_529);
  return (*_return_9).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int31_t p_i) {
  TVARIABLE(Int32T, _return_10_impl);
  auto _return_10 = &_return_10_impl;
  USE(_return_10);
  Label label_macro_end_530_impl(this, {_return_10});
  Label* label_macro_end_530 = &label_macro_end_530_impl;
  USE(label_macro_end_530);
  // ../../src/builtins/base.tq:391:49
  {
    // ../../src/builtins/base.tq:392:2
    TNode<Int32T> t15 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t15);
    *_return_10 = t15;
    Goto(label_macro_end_530);
  }
  BIND(label_macro_end_530);
  return (*_return_10).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::from_constexpr8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_11_impl);
  auto _return_11 = &_return_11_impl;
  USE(_return_11);
  Label label_macro_end_531_impl(this, {_return_11});
  Label* label_macro_end_531 = &label_macro_end_531_impl;
  USE(label_macro_end_531);
  // ../../src/builtins/base.tq:394:51
  {
    // ../../src/builtins/base.tq:395:2
    TNode<Int32T> t16 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t16);
    TNode<Uint32T> t17 = UncheckedCast<Uint32T>(Unsigned(t16));
    USE(t17);
    *_return_11 = t17;
    Goto(label_macro_end_531);
  }
  BIND(label_macro_end_531);
  return (*_return_11).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_12_impl);
  auto _return_12 = &_return_12_impl;
  USE(_return_12);
  Label label_macro_end_532_impl(this, {_return_12});
  Label* label_macro_end_532 = &label_macro_end_532_impl;
  USE(label_macro_end_532);
  // ../../src/builtins/base.tq:397:53
  {
    // ../../src/builtins/base.tq:398:2
    TNode<Uint32T> t18 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(p_i));
    TNode<UintPtrT> t19 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(t18));
    USE(t19);
    *_return_12 = t19;
    Goto(label_macro_end_532);
  }
  BIND(label_macro_end_532);
  return (*_return_12).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_13_impl);
  auto _return_13 = &_return_13_impl;
  USE(_return_13);
  Label label_macro_end_533_impl(this, {_return_13});
  Label* label_macro_end_533 = &label_macro_end_533_impl;
  USE(label_macro_end_533);
  // ../../src/builtins/base.tq:400:45
  {
    // ../../src/builtins/base.tq:401:2
    TNode<Smi> t20 = UncheckedCast<Smi>(SmiConstant(p_i));
    USE(t20);
    *_return_13 = t20;
    Goto(label_macro_end_533);
  }
  BIND(label_macro_end_533);
  return (*_return_13).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_14_impl);
  auto _return_14 = &_return_14_impl;
  USE(_return_14);
  Label label_macro_end_534_impl(this, {_return_14});
  Label* label_macro_end_534 = &label_macro_end_534_impl;
  USE(label_macro_end_534);
  // ../../src/builtins/base.tq:403:51
  {
    // ../../src/builtins/base.tq:404:2
    TNode<Smi> t21 = UncheckedCast<Smi>(SmiConstant(p_i));
    USE(t21);
    *_return_14 = t21;
    Goto(label_macro_end_534);
  }
  BIND(label_macro_end_534);
  return (*_return_14).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::from_constexpr9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_15_impl);
  auto _return_15 = &_return_15_impl;
  USE(_return_15);
  Label label_macro_end_535_impl(this, {_return_15});
  Label* label_macro_end_535 = &label_macro_end_535_impl;
  USE(label_macro_end_535);
  // ../../src/builtins/base.tq:406:53
  {
    // ../../src/builtins/base.tq:407:2
    TNode<Float64T> t22 = UncheckedCast<Float64T>(Float64Constant(p_i));
    USE(t22);
    *_return_15 = t22;
    Goto(label_macro_end_535);
  }
  BIND(label_macro_end_535);
  return (*_return_15).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int32_t p_i) {
  TVARIABLE(IntPtrT, _return_16_impl);
  auto _return_16 = &_return_16_impl;
  USE(_return_16);
  Label label_macro_end_536_impl(this, {_return_16});
  Label* label_macro_end_536 = &label_macro_end_536_impl;
  USE(label_macro_end_536);
  // ../../src/builtins/base.tq:410:51
  {
    // ../../src/builtins/base.tq:411:2
    TNode<IntPtrT> t23 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    USE(t23);
    *_return_16 = t23;
    Goto(label_macro_end_536);
  }
  BIND(label_macro_end_536);
  return (*_return_16).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int32_t p_i) {
  TVARIABLE(Int32T, _return_17_impl);
  auto _return_17 = &_return_17_impl;
  USE(_return_17);
  Label label_macro_end_537_impl(this, {_return_17});
  Label* label_macro_end_537 = &label_macro_end_537_impl;
  USE(label_macro_end_537);
  // ../../src/builtins/base.tq:413:49
  {
    // ../../src/builtins/base.tq:414:2
    TNode<Int32T> t24 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t24);
    *_return_17 = t24;
    Goto(label_macro_end_537);
  }
  BIND(label_macro_end_537);
  return (*_return_17).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  TVARIABLE(Number, _return_18_impl);
  auto _return_18 = &_return_18_impl;
  USE(_return_18);
  Label label_macro_end_538_impl(this, {_return_18});
  Label* label_macro_end_538 = &label_macro_end_538_impl;
  USE(label_macro_end_538);
  // ../../src/builtins/base.tq:416:51
  {
    // ../../src/builtins/base.tq:417:2
    TNode<Number> t25 = UncheckedCast<Number>(NumberConstant(p_i));
    USE(t25);
    *_return_18 = t25;
    Goto(label_macro_end_538);
  }
  BIND(label_macro_end_538);
  return (*_return_18).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  TVARIABLE(Number, _return_19_impl);
  auto _return_19 = &_return_19_impl;
  USE(_return_19);
  Label label_macro_end_539_impl(this, {_return_19});
  Label* label_macro_end_539 = &label_macro_end_539_impl;
  USE(label_macro_end_539);
  // ../../src/builtins/base.tq:420:53
  {
    // ../../src/builtins/base.tq:421:2
    TNode<Number> t26 = UncheckedCast<Number>(NumberConstant(p_f));
    USE(t26);
    *_return_19 = t26;
    Goto(label_macro_end_539);
  }
  BIND(label_macro_end_539);
  return (*_return_19).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::from_constexpr6ATbool(bool p_b) {
  TVARIABLE(BoolT, _return_20_impl);
  auto _return_20 = &_return_20_impl;
  USE(_return_20);
  Label label_macro_end_540_impl(this, {_return_20});
  Label* label_macro_end_540 = &label_macro_end_540_impl;
  USE(label_macro_end_540);
  // ../../src/builtins/base.tq:424:46
  {
    // ../../src/builtins/base.tq:425:2
    TNode<BoolT> t27 = UncheckedCast<BoolT>(BoolConstant(p_b));
    USE(t27);
    *_return_20 = t27;
    Goto(label_macro_end_540);
  }
  BIND(label_macro_end_540);
  return (*_return_20).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr14ATLanguageMode(LanguageMode p_b) {
  TVARIABLE(Smi, _return_21_impl);
  auto _return_21 = &_return_21_impl;
  USE(_return_21);
  Label label_macro_end_541_impl(this, {_return_21});
  Label* label_macro_end_541 = &label_macro_end_541_impl;
  USE(label_macro_end_541);
  // ../../src/builtins/base.tq:428:70
  {
    // ../../src/builtins/base.tq:429:2
    TNode<Smi> t28 = UncheckedCast<Smi>(LanguageModeConstant(p_b));
    USE(t28);
    *_return_21 = t28;
    Goto(label_macro_end_541);
  }
  BIND(label_macro_end_541);
  return (*_return_21).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr14ATElementsKind(ElementsKind p_e) {
  TVARIABLE(Int32T, _return_22_impl);
  auto _return_22 = &_return_22_impl;
  USE(_return_22);
  Label label_macro_end_542_impl(this, {_return_22});
  Label* label_macro_end_542 = &label_macro_end_542_impl;
  USE(label_macro_end_542);
  // ../../src/builtins/base.tq:432:70
  {
    // ../../src/builtins/base.tq:433:2
    TNode<Int32T> t29 = UncheckedCast<Int32T>(Int32Constant(p_e));
    USE(t29);
    *_return_22 = t29;
    Goto(label_macro_end_542);
  }
  BIND(label_macro_end_542);
  return (*_return_22).value();
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::from_constexpr8ATString(const char* p_s) {
  TVARIABLE(String, _return_23_impl);
  auto _return_23 = &_return_23_impl;
  USE(_return_23);
  Label label_macro_end_543_impl(this, {_return_23});
  Label* label_macro_end_543 = &label_macro_end_543_impl;
  USE(label_macro_end_543);
  // ../../src/builtins/base.tq:436:52
  {
    // ../../src/builtins/base.tq:437:2
    TNode<String> t30 = UncheckedCast<String>(StringConstant(p_s));
    USE(t30);
    *_return_23 = t30;
    Goto(label_macro_end_543);
  }
  BIND(label_macro_end_543);
  return (*_return_23).value();
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  TVARIABLE(Object, _return_24_impl);
  auto _return_24 = &_return_24_impl;
  USE(_return_24);
  Label label_macro_end_544_impl(this, {_return_24});
  Label* label_macro_end_544 = &label_macro_end_544_impl;
  USE(label_macro_end_544);
  // ../../src/builtins/base.tq:439:52
  {
    // ../../src/builtins/base.tq:440:2
    TNode<String> t31 = UncheckedCast<String>(StringConstant(p_s));
    USE(t31);
    *_return_24 = t31;
    Goto(label_macro_end_544);
  }
  BIND(label_macro_end_544);
  return (*_return_24).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Number, _return_25_impl);
  auto _return_25 = &_return_25_impl;
  USE(_return_25);
  Label label_macro_end_545_impl(this, {_return_25});
  Label* label_macro_end_545 = &label_macro_end_545_impl;
  USE(label_macro_end_545);
  // ../../src/builtins/base.tq:447:34
  {
    // ../../src/builtins/base.tq:448:2
    TNode<Number> t32 = UncheckedCast<Number>(ChangeInt32ToTagged(p_i));
    USE(t32);
    *_return_25 = t32;
    Goto(label_macro_end_545);
  }
  BIND(label_macro_end_545);
  return (*_return_25).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Int32T> p_i) {
  TVARIABLE(IntPtrT, _return_26_impl);
  auto _return_26 = &_return_26_impl;
  USE(_return_26);
  Label label_macro_end_546_impl(this, {_return_26});
  Label* label_macro_end_546 = &label_macro_end_546_impl;
  USE(label_macro_end_546);
  // ../../src/builtins/base.tq:450:34
  {
    // ../../src/builtins/base.tq:451:2
    TNode<IntPtrT> t33 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(p_i));
    USE(t33);
    *_return_26 = t33;
    Goto(label_macro_end_546);
  }
  BIND(label_macro_end_546);
  return (*_return_26).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Smi, _return_27_impl);
  auto _return_27 = &_return_27_impl;
  USE(_return_27);
  Label label_macro_end_547_impl(this, {_return_27});
  Label* label_macro_end_547 = &label_macro_end_547_impl;
  USE(label_macro_end_547);
  // ../../src/builtins/base.tq:453:28
  {
    // ../../src/builtins/base.tq:454:2
    TNode<Smi> t34 = UncheckedCast<Smi>(SmiFromInt32(p_i));
    USE(t34);
    *_return_27 = t34;
    Goto(label_macro_end_547);
  }
  BIND(label_macro_end_547);
  return (*_return_27).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Number, _return_28_impl);
  auto _return_28 = &_return_28_impl;
  USE(_return_28);
  Label label_macro_end_548_impl(this, {_return_28});
  Label* label_macro_end_548 = &label_macro_end_548_impl;
  USE(label_macro_end_548);
  // ../../src/builtins/base.tq:457:36
  {
    // ../../src/builtins/base.tq:458:2
    TNode<Number> t35 = UncheckedCast<Number>(ChangeUint32ToTagged(p_ui));
    USE(t35);
    *_return_28 = t35;
    Goto(label_macro_end_548);
  }
  BIND(label_macro_end_548);
  return (*_return_28).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Smi, _return_29_impl);
  auto _return_29 = &_return_29_impl;
  USE(_return_29);
  Label label_macro_end_549_impl(this, {_return_29});
  Label* label_macro_end_549 = &label_macro_end_549_impl;
  USE(label_macro_end_549);
  // ../../src/builtins/base.tq:460:30
  {
    // ../../src/builtins/base.tq:461:2
    TNode<Int32T> t36 = UncheckedCast<Int32T>(Signed(p_ui));
    USE(t36);
    TNode<Smi> t37 = UncheckedCast<Smi>(SmiFromInt32(t36));
    USE(t37);
    *_return_29 = t37;
    Goto(label_macro_end_549);
  }
  BIND(label_macro_end_549);
  return (*_return_29).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Uint32T> p_ui) {
  TVARIABLE(UintPtrT, _return_30_impl);
  auto _return_30 = &_return_30_impl;
  USE(_return_30);
  Label label_macro_end_550_impl(this, {_return_30});
  Label* label_macro_end_550 = &label_macro_end_550_impl;
  USE(label_macro_end_550);
  // ../../src/builtins/base.tq:463:38
  {
    // ../../src/builtins/base.tq:464:2
    TNode<UintPtrT> t38 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(p_ui));
    USE(t38);
    *_return_30 = t38;
    Goto(label_macro_end_550);
  }
  BIND(label_macro_end_550);
  return (*_return_30).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<IntPtrT> p_i) {
  TVARIABLE(Int32T, _return_31_impl);
  auto _return_31 = &_return_31_impl;
  USE(_return_31);
  Label label_macro_end_551_impl(this, {_return_31});
  Label* label_macro_end_551 = &label_macro_end_551_impl;
  USE(label_macro_end_551);
  // ../../src/builtins/base.tq:467:33
  {
    // ../../src/builtins/base.tq:468:2
    TNode<Int32T> t39 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(p_i));
    USE(t39);
    *_return_31 = t39;
    Goto(label_macro_end_551);
  }
  BIND(label_macro_end_551);
  return (*_return_31).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<IntPtrT> p_i) {
  TVARIABLE(Smi, _return_32_impl);
  auto _return_32 = &_return_32_impl;
  USE(_return_32);
  Label label_macro_end_552_impl(this, {_return_32});
  Label* label_macro_end_552 = &label_macro_end_552_impl;
  USE(label_macro_end_552);
  // ../../src/builtins/base.tq:470:29
  {
    // ../../src/builtins/base.tq:471:2
    TNode<Smi> t40 = UncheckedCast<Smi>(SmiTag(p_i));
    USE(t40);
    *_return_32 = t40;
    Goto(label_macro_end_552);
  }
  BIND(label_macro_end_552);
  return (*_return_32).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(TNode<UintPtrT> p_ui) {
  TVARIABLE(Uint32T, _return_33_impl);
  auto _return_33 = &_return_33_impl;
  USE(_return_33);
  Label label_macro_end_553_impl(this, {_return_33});
  Label* label_macro_end_553 = &label_macro_end_553_impl;
  USE(label_macro_end_553);
  // ../../src/builtins/base.tq:474:37
  {
    // ../../src/builtins/base.tq:475:2
    TNode<IntPtrT> t41 = UncheckedCast<IntPtrT>(Signed(p_ui));
    USE(t41);
    TNode<Int32T> t42 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(t41));
    USE(t42);
    TNode<Uint32T> t43 = UncheckedCast<Uint32T>(Unsigned(t42));
    USE(t43);
    *_return_33 = t43;
    Goto(label_macro_end_553);
  }
  BIND(label_macro_end_553);
  return (*_return_33).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Smi> p_s) {
  TVARIABLE(IntPtrT, _return_34_impl);
  auto _return_34 = &_return_34_impl;
  USE(_return_34);
  Label label_macro_end_554_impl(this, {_return_34});
  Label* label_macro_end_554 = &label_macro_end_554_impl;
  USE(label_macro_end_554);
  // ../../src/builtins/base.tq:478:32
  {
    // ../../src/builtins/base.tq:479:2
    TNode<IntPtrT> t44 = UncheckedCast<IntPtrT>(SmiUntag(p_s));
    USE(t44);
    *_return_34 = t44;
    Goto(label_macro_end_554);
  }
  BIND(label_macro_end_554);
  return (*_return_34).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<Smi> p_s) {
  TVARIABLE(Int32T, _return_35_impl);
  auto _return_35 = &_return_35_impl;
  USE(_return_35);
  Label label_macro_end_555_impl(this, {_return_35});
  Label* label_macro_end_555 = &label_macro_end_555_impl;
  USE(label_macro_end_555);
  // ../../src/builtins/base.tq:481:30
  {
    // ../../src/builtins/base.tq:482:2
    TNode<Int32T> t45 = UncheckedCast<Int32T>(SmiToInt32(p_s));
    USE(t45);
    *_return_35 = t45;
    Goto(label_macro_end_555);
  }
  BIND(label_macro_end_555);
  return (*_return_35).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<HeapNumber> p_h) {
  TVARIABLE(Float64T, _return_36_impl);
  auto _return_36 = &_return_36_impl;
  USE(_return_36);
  Label label_macro_end_556_impl(this, {_return_36});
  Label* label_macro_end_556 = &label_macro_end_556_impl;
  USE(label_macro_end_556);
  // ../../src/builtins/base.tq:485:41
  {
    // ../../src/builtins/base.tq:486:2
    TNode<Float64T> t46 = UncheckedCast<Float64T>(LoadHeapNumberValue(p_h));
    USE(t46);
    *_return_36 = t46;
    Goto(label_macro_end_556);
  }
  BIND(label_macro_end_556);
  return (*_return_36).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Number> p_n) {
  TVARIABLE(Float64T, _return_37_impl);
  auto _return_37 = &_return_37_impl;
  USE(_return_37);
  Label label_macro_end_557_impl(this, {_return_37});
  Label* label_macro_end_557 = &label_macro_end_557_impl;
  USE(label_macro_end_557);
  // ../../src/builtins/base.tq:489:37
  {
    // ../../src/builtins/base.tq:490:2
    TNode<Float64T> t47 = UncheckedCast<Float64T>(ChangeNumberToFloat64(p_n));
    USE(t47);
    *_return_37 = t47;
    Goto(label_macro_end_557);
  }
  BIND(label_macro_end_557);
  return (*_return_37).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Float32T> p_f) {
  TVARIABLE(Float64T, _return_38_impl);
  auto _return_38 = &_return_38_impl;
  USE(_return_38);
  Label label_macro_end_558_impl(this, {_return_38});
  Label* label_macro_end_558 = &label_macro_end_558_impl;
  USE(label_macro_end_558);
  // ../../src/builtins/base.tq:493:38
  {
    // ../../src/builtins/base.tq:494:2
    TNode<Float64T> t48 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(p_f));
    USE(t48);
    *_return_38 = t48;
    Goto(label_macro_end_558);
  }
  BIND(label_macro_end_558);
  return (*_return_38).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  TVARIABLE(Number, _return_39_impl);
  auto _return_39 = &_return_39_impl;
  USE(_return_39);
  Label label_macro_end_559_impl(this, {_return_39});
  Label* label_macro_end_559 = &label_macro_end_559_impl;
  USE(label_macro_end_559);
  // ../../src/builtins/base.tq:497:36
  {
    // ../../src/builtins/base.tq:498:2
    TNode<HeapNumber> t49 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(p_d));
    USE(t49);
    *_return_39 = t49;
    Goto(label_macro_end_559);
  }
  BIND(label_macro_end_559);
  return (*_return_39).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Float64T> p_d) {
  TVARIABLE(UintPtrT, _return_40_impl);
  auto _return_40 = &_return_40_impl;
  USE(_return_40);
  Label label_macro_end_560_impl(this, {_return_40});
  Label* label_macro_end_560 = &label_macro_end_560_impl;
  USE(label_macro_end_560);
  // ../../src/builtins/base.tq:500:38
  {
    // ../../src/builtins/base.tq:501:2
    TNode<UintPtrT> t50 = UncheckedCast<UintPtrT>(ChangeFloat64ToUintPtr(p_d));
    USE(t50);
    *_return_40 = t50;
    Goto(label_macro_end_560);
  }
  BIND(label_macro_end_560);
  return (*_return_40).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(UintPtrT, _return_41_impl);
  auto _return_41 = &_return_41_impl;
  USE(_return_41);
  Label label_macro_end_561_impl(this, {_return_41});
  Label* label_macro_end_561 = &label_macro_end_561_impl;
  USE(label_macro_end_561);
  // ../../src/builtins/base.tq:504:37
  {
    // ../../src/builtins/base.tq:505:2
    TNode<UintPtrT> t51 = UncheckedCast<UintPtrT>(Unsigned(p_r));
    USE(t51);
    *_return_41 = t51;
    Goto(label_macro_end_561);
  }
  BIND(label_macro_end_561);
  return (*_return_41).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(IntPtrT, _return_42_impl);
  auto _return_42 = &_return_42_impl;
  USE(_return_42);
  Label label_macro_end_562_impl(this, {_return_42});
  Label* label_macro_end_562 = &label_macro_end_562_impl;
  USE(label_macro_end_562);
  // ../../src/builtins/base.tq:507:35
  {
    // ../../src/builtins/base.tq:508:2
    TNode<IntPtrT> t52 = UncheckedCast<IntPtrT>(Signed(p_r));
    USE(t52);
    *_return_42 = t52;
    Goto(label_macro_end_562);
  }
  BIND(label_macro_end_562);
  return (*_return_42).value();
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Number> p_n) {
  TVARIABLE(HeapNumber, _return_43_impl);
  auto _return_43 = &_return_43_impl;
  USE(_return_43);
  Label label_macro_end_563_impl(this, {_return_43});
  Label* label_macro_end_563 = &label_macro_end_563_impl;
  USE(label_macro_end_563);
  // ../../src/builtins/base.tq:528:47
  {
    // ../../src/builtins/base.tq:529:2
    TNode<HeapNumber> t53 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(p_n));
    USE(t53);
    *_return_43 = t53;
    Goto(label_macro_end_563);
  }
  BIND(label_macro_end_563);
  return (*_return_43).value();
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATFixedArray(TNode<Object> p_o) {
  TVARIABLE(FixedArray, _return_44_impl);
  auto _return_44 = &_return_44_impl;
  USE(_return_44);
  Label label_macro_end_564_impl(this, {_return_44});
  Label* label_macro_end_564 = &label_macro_end_564_impl;
  USE(label_macro_end_564);
  // ../../src/builtins/base.tq:532:47
  {
    // ../../src/builtins/base.tq:533:2
    TNode<FixedArray> t54 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(p_o));
    USE(t54);
    *_return_44 = t54;
    Goto(label_macro_end_564);
  }
  BIND(label_macro_end_564);
  return (*_return_44).value();
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATFixedDoubleArray(TNode<Object> p_o) {
  TVARIABLE(FixedDoubleArray, _return_45_impl);
  auto _return_45 = &_return_45_impl;
  USE(_return_45);
  Label label_macro_end_565_impl(this, {_return_45});
  Label* label_macro_end_565 = &label_macro_end_565_impl;
  USE(label_macro_end_565);
  // ../../src/builtins/base.tq:535:59
  {
    // ../../src/builtins/base.tq:536:2
    TNode<FixedDoubleArray> t55 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(p_o));
    USE(t55);
    *_return_45 = t55;
    Goto(label_macro_end_565);
  }
  BIND(label_macro_end_565);
  return (*_return_45).value();
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Object> p_o) {
  TVARIABLE(HeapNumber, _return_46_impl);
  auto _return_46 = &_return_46_impl;
  USE(_return_46);
  Label label_macro_end_566_impl(this, {_return_46});
  Label* label_macro_end_566 = &label_macro_end_566_impl;
  USE(label_macro_end_566);
  // ../../src/builtins/base.tq:538:47
  {
    // ../../src/builtins/base.tq:539:2
    TNode<HeapNumber> t56 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(p_o));
    USE(t56);
    *_return_46 = t56;
    Goto(label_macro_end_566);
  }
  BIND(label_macro_end_566);
  return (*_return_46).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_47_impl);
  auto _return_47 = &_return_47_impl;
  USE(_return_47);
  Label label_macro_end_567_impl(this, {_return_47});
  Label* label_macro_end_567 = &label_macro_end_567_impl;
  USE(label_macro_end_567);
  // ../../src/builtins/base.tq:541:43
  {
    // ../../src/builtins/base.tq:542:2
    TNode<JSReceiver> t57 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(p_o));
    USE(t57);
    *_return_47 = t57;
    Goto(label_macro_end_567);
  }
  BIND(label_macro_end_567);
  return (*_return_47).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Smi, _return_48_impl);
  auto _return_48 = &_return_48_impl;
  USE(_return_48);
  Label label_macro_end_568_impl(this, {_return_48});
  Label* label_macro_end_568 = &label_macro_end_568_impl;
  USE(label_macro_end_568);
  // ../../src/builtins/base.tq:544:33
  {
    // ../../src/builtins/base.tq:545:2
    TNode<Smi> t58 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(p_o));
    USE(t58);
    *_return_48 = t58;
    Goto(label_macro_end_568);
  }
  BIND(label_macro_end_568);
  return (*_return_48).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::unsafe_cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Number, _return_49_impl);
  auto _return_49 = &_return_49_impl;
  USE(_return_49);
  Label label_macro_end_569_impl(this, {_return_49});
  Label* label_macro_end_569 = &label_macro_end_569_impl;
  USE(label_macro_end_569);
  // ../../src/builtins/base.tq:547:39
  {
    // ../../src/builtins/base.tq:548:2
    TNode<Number> t59 = UncheckedCast<Number>(UnsafeCastObjectToNumber(p_o));
    USE(t59);
    *_return_49 = t59;
    Goto(label_macro_end_569);
  }
  BIND(label_macro_end_569);
  return (*_return_49).value();
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapObject(TNode<Object> p_o) {
  TVARIABLE(HeapObject, _return_50_impl);
  auto _return_50 = &_return_50_impl;
  USE(_return_50);
  Label label_macro_end_570_impl(this, {_return_50});
  Label* label_macro_end_570 = &label_macro_end_570_impl;
  USE(label_macro_end_570);
  // ../../src/builtins/base.tq:550:47
  {
    // ../../src/builtins/base.tq:551:2
    TNode<HeapObject> t60 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(p_o));
    USE(t60);
    *_return_50 = t60;
    Goto(label_macro_end_570);
  }
  BIND(label_macro_end_570);
  return (*_return_50).value();
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::unsafe_cast9ATJSArray(TNode<Object> p_o) {
  TVARIABLE(JSArray, _return_51_impl);
  auto _return_51 = &_return_51_impl;
  USE(_return_51);
  Label label_macro_end_571_impl(this, {_return_51});
  Label* label_macro_end_571 = &label_macro_end_571_impl;
  USE(label_macro_end_571);
  // ../../src/builtins/base.tq:553:41
  {
    // ../../src/builtins/base.tq:554:2
    TNode<JSArray> t61 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(p_o));
    USE(t61);
    *_return_51 = t61;
    Goto(label_macro_end_571);
  }
  BIND(label_macro_end_571);
  return (*_return_51).value();
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedTypedArrayBase, _return_52_impl);
  auto _return_52 = &_return_52_impl;
  USE(_return_52);
  Label label_macro_end_572_impl(this, {_return_52});
  Label* label_macro_end_572 = &label_macro_end_572_impl;
  USE(label_macro_end_572);
  // ../../src/builtins/base.tq:556:65
  {
    // ../../src/builtins/base.tq:557:2
    TNode<FixedTypedArrayBase> t62 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(p_o));
    USE(t62);
    *_return_52 = t62;
    Goto(label_macro_end_572);
  }
  BIND(label_macro_end_572);
  return (*_return_52).value();
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATNumberDictionary(TNode<Object> p_o) {
  TVARIABLE(NumberDictionary, _return_53_impl);
  auto _return_53 = &_return_53_impl;
  USE(_return_53);
  Label label_macro_end_573_impl(this, {_return_53});
  Label* label_macro_end_573 = &label_macro_end_573_impl;
  USE(label_macro_end_573);
  // ../../src/builtins/base.tq:559:59
  {
    // ../../src/builtins/base.tq:560:2
    TNode<NumberDictionary> t63 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(p_o));
    USE(t63);
    *_return_53 = t63;
    Goto(label_macro_end_573);
  }
  BIND(label_macro_end_573);
  return (*_return_53).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATJSReceiver(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_54_impl);
  auto _return_54 = &_return_54_impl;
  USE(_return_54);
  Label label_macro_end_574_impl(this, {_return_54});
  Label* label_macro_end_574 = &label_macro_end_574_impl;
  USE(label_macro_end_574);
  // ../../src/builtins/base.tq:562:47
  {
    // ../../src/builtins/base.tq:563:2
    TNode<JSReceiver> t64 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(p_o));
    USE(t64);
    *_return_54 = t64;
    Goto(label_macro_end_574);
  }
  BIND(label_macro_end_574);
  return (*_return_54).value();
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::unsafe_cast10ATJSObject(TNode<Object> p_o) {
  TVARIABLE(JSObject, _return_55_impl);
  auto _return_55 = &_return_55_impl;
  USE(_return_55);
  Label label_macro_end_575_impl(this, {_return_55});
  Label* label_macro_end_575 = &label_macro_end_575_impl;
  USE(label_macro_end_575);
  // ../../src/builtins/base.tq:565:43
  {
    // ../../src/builtins/base.tq:566:2
    TNode<JSObject> t65 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(p_o));
    USE(t65);
    *_return_55 = t65;
    Goto(label_macro_end_575);
  }
  BIND(label_macro_end_575);
  return (*_return_55).value();
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATMap(TNode<Object> p_o) {
  TVARIABLE(Map, _return_56_impl);
  auto _return_56 = &_return_56_impl;
  USE(_return_56);
  Label label_macro_end_576_impl(this, {_return_56});
  Label* label_macro_end_576 = &label_macro_end_576_impl;
  USE(label_macro_end_576);
  // ../../src/builtins/base.tq:568:33
  {
    // ../../src/builtins/base.tq:569:2
    TNode<Map> t66 = UncheckedCast<Map>(UnsafeCastObjectToMap(p_o));
    USE(t66);
    *_return_56 = t66;
    Goto(label_macro_end_576);
  }
  BIND(label_macro_end_576);
  return (*_return_56).value();
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast16ATFixedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedArrayBase, _return_57_impl);
  auto _return_57 = &_return_57_impl;
  USE(_return_57);
  Label label_macro_end_577_impl(this, {_return_57});
  Label* label_macro_end_577 = &label_macro_end_577_impl;
  USE(label_macro_end_577);
  // ../../src/builtins/base.tq:571:55
  {
    // ../../src/builtins/base.tq:572:2
    TNode<FixedArrayBase> t67 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(p_o));
    USE(t67);
    *_return_57 = t67;
    Goto(label_macro_end_577);
  }
  BIND(label_macro_end_577);
  return (*_return_57).value();
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  TNode<Object> t68 = UncheckedCast<Object>(LoadRoot(Heap::kFixedCOWArrayMapRootIndex));
  USE(t68);
  TNode<Map> t69 = UncheckedCast<Map>(unsafe_cast5ATMap(t68));
  USE(t69);
  return t69;
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  TNode<Object> t70 = UncheckedCast<Object>(LoadRoot(Heap::kEmptyFixedArrayRootIndex));
  USE(t70);
  TNode<FixedArrayBase> t71 = UncheckedCast<FixedArrayBase>(unsafe_cast16ATFixedArrayBase(t70));
  USE(t71);
  return t71;
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_578_impl(this, {});
  Label* label_macro_end_578 = &label_macro_end_578_impl;
  USE(label_macro_end_578);
  // ../../src/builtins/base.tq:627:57
  {
    // ../../src/builtins/base.tq:628:2
    StoreFixedDoubleArrayElement(p_array, p_index, p_value, SMI_PARAMETERS);
  }
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_8) {
  TVARIABLE(Object, _return_58_impl);
  auto _return_58 = &_return_58_impl;
  USE(_return_58);
  Label label_macro_end_579_impl(this, {_return_58});
  Label* label_macro_end_579 = &label_macro_end_579_impl;
  USE(label_macro_end_579);
  // ../../src/builtins/base.tq:674:14
  {
    // ../../src/builtins/base.tq:675:2
    {
      Label label_try_done_458_580_impl(this);
      Label* label_try_done_458_580 = &label_try_done_458_580_impl;
      USE(label_try_done_458_580);
      Label label_Unexpected_9_impl(this);
      Label* label_Unexpected_9 = &label_Unexpected_9_impl;
      USE(label_Unexpected_9);
      Label label_try_begin_459_581_impl(this);
      Label* label_try_begin_459_581 = &label_try_begin_459_581_impl;
      USE(label_try_begin_459_581);
      Goto(label_try_begin_459_581);
      if (label_try_begin_459_581->is_used())
      {
        BIND(label_try_begin_459_581);
        // ../../src/builtins/base.tq:675:6
        {
          // ../../src/builtins/base.tq:676:4
          TNode<FixedArrayBase> t72 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedArray> t73 = UncheckedCast<FixedArray>(cast12ATFixedArray(t72, label_Unexpected_9));
          USE(t73);
          TVARIABLE(FixedArray, elements_59_impl);
          auto elements_59 = &elements_59_impl;
          USE(elements_59);
          *elements_59 = t73;
          // ../../src/builtins/base.tq:678:4
          TNode<Object> t74 = UncheckedCast<Object>(LoadFixedArrayElement((*elements_59).value(), p_index));
          TVARIABLE(Object, e_60_impl);
          auto e_60 = &e_60_impl;
          USE(e_60);
          *e_60 = t74;
          // ../../src/builtins/base.tq:679:4
          {
            Label label__True_10_impl(this);
            Label* label__True_10 = &label__True_10_impl;
            USE(label__True_10);
            Label label__False_11_impl(this, {});
            Label* label__False_11 = &label__False_11_impl;
            USE(label__False_11);
            TNode<BoolT> t75 = UncheckedCast<BoolT>(WordEqual((*e_60).value(), Hole()));
            USE(t75);
            Branch(t75, label__True_10, label__False_11);
            if (label__True_10->is_used())
            {
              BIND(label__True_10);
              // ../../src/builtins/base.tq:679:19
              {
                // ../../src/builtins/base.tq:680:6
                Goto(label_IfHole_8);
              }
            }
            BIND(label__False_11);
          }
          // ../../src/builtins/base.tq:682:4
          *_return_58 = (*e_60).value();
          Goto(label_macro_end_579);
        }
      }
      if (label_Unexpected_9->is_used())
      {
        BIND(label_Unexpected_9);
        // ../../src/builtins/base.tq:684:19
        {
          // ../../src/builtins/base.tq:685:4
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_579);
  return (*_return_58).value();
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_12) {
  TVARIABLE(Object, _return_61_impl);
  auto _return_61 = &_return_61_impl;
  USE(_return_61);
  Label label_macro_end_582_impl(this, {_return_61});
  Label* label_macro_end_582 = &label_macro_end_582_impl;
  USE(label_macro_end_582);
  // ../../src/builtins/base.tq:690:14
  {
    // ../../src/builtins/base.tq:691:2
    {
      Label label_try_done_460_583_impl(this);
      Label* label_try_done_460_583 = &label_try_done_460_583_impl;
      USE(label_try_done_460_583);
      Label label_Unexpected_13_impl(this);
      Label* label_Unexpected_13 = &label_Unexpected_13_impl;
      USE(label_Unexpected_13);
      Label label_try_begin_461_584_impl(this);
      Label* label_try_begin_461_584 = &label_try_begin_461_584_impl;
      USE(label_try_begin_461_584);
      Goto(label_try_begin_461_584);
      if (label_try_begin_461_584->is_used())
      {
        BIND(label_try_begin_461_584);
        // ../../src/builtins/base.tq:691:6
        {
          // ../../src/builtins/base.tq:692:4
          TNode<FixedArrayBase> t76 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedDoubleArray> t77 = UncheckedCast<FixedDoubleArray>(cast18ATFixedDoubleArray(t76, label_Unexpected_13));
          USE(t77);
          TVARIABLE(FixedDoubleArray, elements_62_impl);
          auto elements_62 = &elements_62_impl;
          USE(elements_62);
          *elements_62 = t77;
          // ../../src/builtins/base.tq:694:4
          TNode<Float64T> t78 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck((*elements_62).value(), p_index, label_IfHole_12));
          USE(t78);
          TVARIABLE(Float64T, e_63_impl);
          auto e_63 = &e_63_impl;
          USE(e_63);
          *e_63 = t78;
          // ../../src/builtins/base.tq:695:4
          TNode<HeapNumber> t79 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue((*e_63).value()));
          USE(t79);
          *_return_61 = t79;
          Goto(label_macro_end_582);
        }
      }
      if (label_Unexpected_13->is_used())
      {
        BIND(label_Unexpected_13);
        // ../../src/builtins/base.tq:697:19
        {
          // ../../src/builtins/base.tq:698:4
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_582);
  return (*_return_61).value();
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::HasPropertyObject(TNode<Object> p_o, TNode<Object> p_p, TNode<Context> p_c, HasPropertyLookupMode p_f) {
  TVARIABLE(Oddball, _return_64_impl);
  auto _return_64 = &_return_64_impl;
  USE(_return_64);
  Label label_macro_end_585_impl(this, {_return_64});
  Label* label_macro_end_585 = &label_macro_end_585_impl;
  USE(label_macro_end_585);
  // ../../src/builtins/base.tq:704:49
  {
    // ../../src/builtins/base.tq:705:2
    {
      Label label_try_done_462_586_impl(this);
      Label* label_try_done_462_586 = &label_try_done_462_586_impl;
      USE(label_try_done_462_586);
      Label label_CastError_14_impl(this);
      Label* label_CastError_14 = &label_CastError_14_impl;
      USE(label_CastError_14);
      Label label_try_begin_463_587_impl(this);
      Label* label_try_begin_463_587 = &label_try_begin_463_587_impl;
      USE(label_try_begin_463_587);
      Goto(label_try_begin_463_587);
      if (label_try_begin_463_587->is_used())
      {
        BIND(label_try_begin_463_587);
        // ../../src/builtins/base.tq:705:6
        {
          // ../../src/builtins/base.tq:706:4
          TNode<HeapObject> t80 = UncheckedCast<HeapObject>(cast12ATHeapObject(p_o, label_CastError_14));
          USE(t80);
          TNode<Oddball> t81 = UncheckedCast<Oddball>(HasProperty(t80, p_p, p_c, p_f));
          USE(t81);
          *_return_64 = t81;
          Goto(label_macro_end_585);
        }
      }
      if (label_CastError_14->is_used())
      {
        BIND(label_CastError_14);
        // ../../src/builtins/base.tq:708:18
        {
          // ../../src/builtins/base.tq:709:4
          *_return_64 = False();
          Goto(label_macro_end_585);
        }
      }
    }
  }
  BIND(label_macro_end_585);
  return (*_return_64).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  TVARIABLE(BoolT, _return_65_impl);
  auto _return_65 = &_return_65_impl;
  USE(_return_65);
  Label label_macro_end_588_impl(this, {_return_65});
  Label* label_macro_end_588 = &label_macro_end_588_impl;
  USE(label_macro_end_588);
  // ../../src/builtins/base.tq:723:40
  {
    // ../../src/builtins/base.tq:724:2
    {
      Label label__True_15_impl(this);
      Label* label__True_15 = &label__True_15_impl;
      USE(label__True_15);
      Label label__False_16_impl(this, {});
      Label* label__False_16 = &label__False_16_impl;
      USE(label__False_16);
      TNode<BoolT> t82 = UncheckedCast<BoolT>(TaggedIsSmi(p_number));
      USE(t82);
      Branch(t82, label__True_15, label__False_16);
      if (label__True_15->is_used())
      {
        BIND(label__True_15);
        // ../../src/builtins/base.tq:724:27
        TNode<BoolT> t83 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
        *_return_65 = t83;
        Goto(label_macro_end_588);
      }
      BIND(label__False_16);
    }
    // ../../src/builtins/base.tq:726:2
    TNode<HeapNumber> t84 = UncheckedCast<HeapNumber>(unsafe_cast12ATHeapNumber(p_number));
    USE(t84);
    TNode<Float64T> t85 = UncheckedCast<Float64T>(convert9ATfloat64(t84));
    USE(t85);
    TVARIABLE(Float64T, value_66_impl);
    auto value_66 = &value_66_impl;
    USE(value_66);
    *value_66 = t85;
    // ../../src/builtins/base.tq:727:2
    TNode<BoolT> t86 = UncheckedCast<BoolT>(Float64NotEqual((*value_66).value(), (*value_66).value()));
    USE(t86);
    *_return_65 = t86;
    Goto(label_macro_end_588);
  }
  BIND(label_macro_end_588);
  return (*_return_65).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  TVARIABLE(BoolT, _return_67_impl);
  auto _return_67 = &_return_67_impl;
  USE(_return_67);
  Label label_macro_end_589_impl(this, {_return_67});
  Label* label_macro_end_589 = &label_macro_end_589_impl;
  USE(label_macro_end_589);
  // ../../src/builtins/base.tq:732:35
  {
    // ../../src/builtins/base.tq:733:2
    {
      Label label__True_17_impl(this);
      Label* label__True_17 = &label__True_17_impl;
      USE(label__True_17);
      Label label__False_18_impl(this);
      Label* label__False_18 = &label__False_18_impl;
      USE(label__False_18);
      Label label_if_done_label_464_590_impl(this, {});
      Label* label_if_done_label_464_590 = &label_if_done_label_464_590_impl;
      USE(label_if_done_label_464_590);
      BranchIfToBooleanIsTrue(p_obj, label__True_17, label__False_18);
      if (label__True_17->is_used())
      {
        BIND(label__True_17);
        // ../../src/builtins/base.tq:733:36
        {
          // ../../src/builtins/base.tq:734:4
          TNode<BoolT> t87 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_67 = t87;
          Goto(label_macro_end_589);
        }
      }
      if (label__False_18->is_used())
      {
        BIND(label__False_18);
        // ../../src/builtins/base.tq:735:9
        {
          // ../../src/builtins/base.tq:736:4
          TNode<BoolT> t88 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_67 = t88;
          Goto(label_macro_end_589);
        }
      }
    }
  }
  BIND(label_macro_end_589);
  return (*_return_67).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError_19) {
  TVARIABLE(Number, _return_68_impl);
  auto _return_68 = &_return_68_impl;
  USE(_return_68);
  Label label_macro_end_591_impl(this, {_return_68});
  Label* label_macro_end_591 = &label_macro_end_591_impl;
  USE(label_macro_end_591);
  // ../../src/builtins/base.tq:740:73
  {
    // ../../src/builtins/base.tq:741:2
    {
      Label label__True_20_impl(this);
      Label* label__True_20 = &label__True_20_impl;
      USE(label__True_20);
      Label label__False_21_impl(this, {});
      Label* label__False_21 = &label__False_21_impl;
      USE(label__False_21);
      TNode<BoolT> t89 = UncheckedCast<BoolT>(WordEqual(p_input, Undefined()));
      USE(t89);
      Branch(t89, label__True_20, label__False_21);
      if (label__True_20->is_used())
      {
        BIND(label__True_20);
        // ../../src/builtins/base.tq:741:26
        {
          // ../../src/builtins/base.tq:742:4
          int31_t t90 = 0;
          TNode<Number> t91 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t90));
          *_return_68 = t91;
          Goto(label_macro_end_591);
        }
      }
      BIND(label__False_21);
    }
    // ../../src/builtins/base.tq:745:2
    TNode<Number> t92 = UncheckedCast<Number>(ToInteger_Inline(p_context, p_input, ToIntegerTruncationMode::kTruncateMinusZero));
    USE(t92);
    TVARIABLE(Number, value_69_impl);
    auto value_69 = &value_69_impl;
    USE(value_69);
    *value_69 = t92;
    // ../../src/builtins/base.tq:746:2
    {
      Label label__True_22_impl(this);
      Label* label__True_22 = &label__True_22_impl;
      USE(label__True_22);
      Label label__False_23_impl(this, {});
      Label* label__False_23 = &label__False_23_impl;
      USE(label__False_23);
      Label label__False_24_impl(this);
      Label* label__False_24 = &label__False_24_impl;
      USE(label__False_24);
      int31_t t93 = 0;
      TNode<Number> t94 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t93));
      BranchIfNumberLessThan((*value_69).value(), t94, label__True_22, label__False_24);
      BIND(label__False_24);
      TNode<Number> t95 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(kMaxSafeInteger));
      BranchIfNumberGreaterThan((*value_69).value(), t95, label__True_22, label__False_23);
      if (label__True_22->is_used())
      {
        BIND(label__True_22);
        // ../../src/builtins/base.tq:746:44
        {
          // ../../src/builtins/base.tq:747:4
          Goto(label_RangeError_19);
        }
      }
      BIND(label__False_23);
    }
    // ../../src/builtins/base.tq:750:2
    *_return_68 = (*value_69).value();
    Goto(label_macro_end_591);
  }
  BIND(label_macro_end_591);
  return (*_return_68).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_431_impl);
  auto _return_431 = &_return_431_impl;
  USE(_return_431);
  Label label_macro_end_811_impl(this, {_return_431});
  Label* label_macro_end_811 = &label_macro_end_811_impl;
  USE(label_macro_end_811);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<Float64T> t1888 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(p_i));
    *_return_431 = t1888;
    Goto(label_macro_end_811);
  }
  BIND(label_macro_end_811);
  return (*_return_431).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_432_impl);
  auto _return_432 = &_return_432_impl;
  USE(_return_432);
  Label label_macro_end_812_impl(this, {_return_432});
  Label* label_macro_end_812 = &label_macro_end_812_impl;
  USE(label_macro_end_812);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<Smi> t1889 = UncheckedCast<Smi>(from_constexpr5ATSmi(p_i));
    *_return_432 = t1889;
    Goto(label_macro_end_812);
  }
  BIND(label_macro_end_812);
  return (*_return_432).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_452_impl);
  auto _return_452 = &_return_452_impl;
  USE(_return_452);
  Label label_macro_end_827_impl(this, {_return_452});
  Label* label_macro_end_827 = &label_macro_end_827_impl;
  USE(label_macro_end_827);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<Number> t1982 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(p_i));
    *_return_452 = t1982;
    Goto(label_macro_end_827);
  }
  BIND(label_macro_end_827);
  return (*_return_452).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_453_impl);
  auto _return_453 = &_return_453_impl;
  USE(_return_453);
  Label label_macro_end_828_impl(this, {_return_453});
  Label* label_macro_end_828 = &label_macro_end_828_impl;
  USE(label_macro_end_828);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<UintPtrT> t1983 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(p_i));
    *_return_453 = t1983;
    Goto(label_macro_end_828);
  }
  BIND(label_macro_end_828);
  return (*_return_453).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_454_impl);
  auto _return_454 = &_return_454_impl;
  USE(_return_454);
  Label label_macro_end_829_impl(this, {_return_454});
  Label* label_macro_end_829 = &label_macro_end_829_impl;
  USE(label_macro_end_829);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<IntPtrT> t1984 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(p_i));
    *_return_454 = t1984;
    Goto(label_macro_end_829);
  }
  BIND(label_macro_end_829);
  return (*_return_454).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_455_impl);
  auto _return_455 = &_return_455_impl;
  USE(_return_455);
  Label label_macro_end_830_impl(this, {_return_455});
  Label* label_macro_end_830 = &label_macro_end_830_impl;
  USE(label_macro_end_830);
  // ../../src/builtins/base.tq:443:47
  {
    // ../../src/builtins/base.tq:444:2
    TNode<Uint32T> t1985 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(p_i));
    *_return_455 = t1985;
    Goto(label_macro_end_830);
  }
  BIND(label_macro_end_830);
  return (*_return_455).value();
}

}  // namepsace internal
}  // namespace v8

