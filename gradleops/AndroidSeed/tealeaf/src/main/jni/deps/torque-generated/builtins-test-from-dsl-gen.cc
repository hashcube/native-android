#include "src/builtins/builtins-test-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_356_impl);
  auto _return_356 = &_return_356_impl;
  USE(_return_356);
  Label label_macro_end_761_impl(this, {_return_356});
  Label* label_macro_end_761 = &label_macro_end_761_impl;
  USE(label_macro_end_761);
  // ../../test/torque/test-torque.tq:6:68
  {
    // ../../test/torque/test-torque.tq:7:4
    {
      Label label__False_390_impl(this);
      Label* label__False_390 = &label__False_390_impl;
      USE(label__False_390);
      bool t1657 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
      USE(t1657);
      bool t1658 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
      USE(t1658);
      if (((t1657 || t1658))) {
        // ../../test/torque/test-torque.tq:7:72
        {
          // ../../test/torque/test-torque.tq:8:8
          TNode<BoolT> t1659 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_356 = t1659;
          Goto(label_macro_end_761);
        }
      } else {
        // ../../test/torque/test-torque.tq:10:9
        {
          // ../../test/torque/test-torque.tq:11:6
          TNode<BoolT> t1660 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_356 = t1660;
          Goto(label_macro_end_761);
        }
      }
    }
  }
  BIND(label_macro_end_761);
  return (*_return_356).value();
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_357_impl);
  auto _return_357 = &_return_357_impl;
  USE(_return_357);
  Label label_macro_end_762_impl(this, {_return_357});
  Label* label_macro_end_762 = &label_macro_end_762_impl;
  USE(label_macro_end_762);
  // ../../test/torque/test-torque.tq:15:68
  {
    // ../../test/torque/test-torque.tq:16:4
    Label label__False_391_impl(this);
    Label* label__False_391 = &label__False_391_impl;
    USE(label__False_391);
    bool t1661 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    USE(t1661);
    bool t1662 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    USE(t1662);
    TNode<BoolT> t1663 = UncheckedCast<BoolT>(from_constexpr6ATbool((t1661 || t1662)));
    *_return_357 = t1663;
    Goto(label_macro_end_762);
  }
  BIND(label_macro_end_762);
  return (*_return_357).value();
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_358_impl;
  auto _return_358 = &_return_358_impl;
  USE(_return_358);
  Label label_macro_end_763_impl(this, {});
  Label* label_macro_end_763 = &label_macro_end_763_impl;
  USE(label_macro_end_763);
  // ../../test/torque/test-torque.tq:19:78
  {
    // ../../test/torque/test-torque.tq:20:4
    Label label__False_392_impl(this);
    Label* label__False_392 = &label__False_392_impl;
    USE(label__False_392);
    bool t1664 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    USE(t1664);
    bool t1665 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    USE(t1665);
    *_return_358 = (t1664 || t1665);
    Goto(label_macro_end_763);
  }
  BIND(label_macro_end_763);
  return (*_return_358);
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_393) {
  Label label_macro_end_764_impl(this, {});
  Label* label_macro_end_764 = &label_macro_end_764_impl;
  USE(label_macro_end_764);
  // ../../test/torque/test-torque.tq:24:16
  {
    // ../../test/torque/test-torque.tq:25:4
    Goto(label_Label1_393);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_394, TVariable<Smi>* Label20_359) {
  Label label_macro_end_765_impl(this, {});
  Label* label_macro_end_765 = &label_macro_end_765_impl;
  USE(label_macro_end_765);
  // ../../test/torque/test-torque.tq:29:21
  {
    // ../../test/torque/test-torque.tq:30:4
    int31_t t1666 = 42;
    TNode<Smi> t1667 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1666));
    *Label20_359 = t1667;
    Goto(label_Label2_394);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_395, TVariable<String>* Label30_360, TVariable<Smi>* Label31_361) {
  Label label_macro_end_766_impl(this, {});
  Label* label_macro_end_766 = &label_macro_end_766_impl;
  USE(label_macro_end_766);
  // ../../test/torque/test-torque.tq:34:29
  {
    // ../../test/torque/test-torque.tq:35:4
    const char* t1668 = "foo";
    TNode<String> t1669 = UncheckedCast<String>(from_constexpr8ATString(t1668));
    *Label30_360 = t1669;
    int31_t t1670 = 7;
    TNode<Smi> t1671 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1670));
    *Label31_361 = t1671;
    Goto(label_Label3_395);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_767_impl(this, {});
  Label* label_macro_end_767 = &label_macro_end_767_impl;
  USE(label_macro_end_767);
  // ../../test/torque/test-torque.tq:38:25
  {
    // ../../test/torque/test-torque.tq:39:4
    Label label__True_396_impl(this);
    Label* label__True_396 = &label__True_396_impl;
    USE(label__True_396);
    Label label__False_397_impl(this);
    Label* label__False_397 = &label__False_397_impl;
    USE(label__False_397);
    bool t1672 = IsFastElementsKind(PACKED_SMI_ELEMENTS);
    USE(t1672);
    TNode<BoolT> t1673 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1672));
    USE(t1673);
    Branch(t1673, label__True_396, label__False_397);
    BIND(label__False_397);
    Print("assert 'from_constexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../../test/torque/test-torque.tq:39:4");
    Unreachable();
    BIND(label__True_396);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_768_impl(this, {});
  Label* label_macro_end_768 = &label_macro_end_768_impl;
  USE(label_macro_end_768);
  // ../../test/torque/test-torque.tq:42:26
  {
    // ../../test/torque/test-torque.tq:43:4
    Label label__True_398_impl(this);
    Label* label__True_398 = &label__True_398_impl;
    USE(label__True_398);
    Label label__False_399_impl(this);
    Label* label__False_399 = &label__False_399_impl;
    USE(label__False_399);
    TNode<BoolT> t1674 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT8_ELEMENTS));
    USE(t1674);
    Branch(t1674, label__True_398, label__False_399);
    BIND(label__False_399);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../../test/torque/test-torque.tq:43:4");
    Unreachable();
    BIND(label__True_398);
    // ../../test/torque/test-torque.tq:44:4
    Label label__True_400_impl(this);
    Label* label__True_400 = &label__True_400_impl;
    USE(label__True_400);
    Label label__False_401_impl(this);
    Label* label__False_401 = &label__False_401_impl;
    USE(label__False_401);
    TNode<BoolT> t1675 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT16_ELEMENTS));
    USE(t1675);
    Branch(t1675, label__True_400, label__False_401);
    BIND(label__False_401);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../../test/torque/test-torque.tq:44:4");
    Unreachable();
    BIND(label__True_400);
    // ../../test/torque/test-torque.tq:45:4
    Label label__True_402_impl(this);
    Label* label__True_402 = &label__True_402_impl;
    USE(label__True_402);
    Label label__False_403_impl(this);
    Label* label__False_403 = &label__False_403_impl;
    USE(label__False_403);
    TNode<BoolT> t1676 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT32_ELEMENTS));
    USE(t1676);
    TNode<BoolT> t1677 = UncheckedCast<BoolT>(Word32BinaryNot(t1676));
    USE(t1677);
    Branch(t1677, label__True_402, label__False_403);
    BIND(label__False_403);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../../test/torque/test-torque.tq:45:4");
    Unreachable();
    BIND(label__True_402);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_769_impl(this, {});
  Label* label_macro_end_769 = &label_macro_end_769_impl;
  USE(label_macro_end_769);
  // ../../test/torque/test-torque.tq:48:30
  {
    // ../../test/torque/test-torque.tq:49:4
    Label label__True_404_impl(this);
    Label* label__True_404 = &label__True_404_impl;
    USE(label__True_404);
    Label label__False_405_impl(this);
    Label* label__False_405 = &label__False_405_impl;
    USE(label__False_405);
    bool t1678 = ElementsKindTestHelper3(UINT8_ELEMENTS);
    USE(t1678);
    TNode<BoolT> t1679 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1678));
    USE(t1679);
    Branch(t1679, label__True_404, label__False_405);
    BIND(label__False_405);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../../test/torque/test-torque.tq:49:4");
    Unreachable();
    BIND(label__True_404);
    // ../../test/torque/test-torque.tq:50:4
    Label label__True_406_impl(this);
    Label* label__True_406 = &label__True_406_impl;
    USE(label__True_406);
    Label label__False_407_impl(this);
    Label* label__False_407 = &label__False_407_impl;
    USE(label__False_407);
    bool t1680 = ElementsKindTestHelper3(UINT16_ELEMENTS);
    USE(t1680);
    TNode<BoolT> t1681 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1680));
    USE(t1681);
    Branch(t1681, label__True_406, label__False_407);
    BIND(label__False_407);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../../test/torque/test-torque.tq:50:4");
    Unreachable();
    BIND(label__True_406);
    // ../../test/torque/test-torque.tq:51:4
    Label label__True_408_impl(this);
    Label* label__True_408 = &label__True_408_impl;
    USE(label__True_408);
    Label label__False_409_impl(this);
    Label* label__False_409 = &label__False_409_impl;
    USE(label__False_409);
    bool t1682 = ElementsKindTestHelper3(UINT32_ELEMENTS);
    USE(t1682);
    TNode<BoolT> t1683 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1682));
    USE(t1683);
    TNode<BoolT> t1684 = UncheckedCast<BoolT>(Word32BinaryNot(t1683));
    USE(t1684);
    Branch(t1684, label__True_408, label__False_409);
    BIND(label__False_409);
    Print("assert '!from_constexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:51:4");
    Unreachable();
    BIND(label__True_408);
    // ../../test/torque/test-torque.tq:52:4
    Label label__True_410_impl(this);
    Label* label__True_410 = &label__True_410_impl;
    USE(label__True_410);
    Label label__False_411_impl(this);
    Label* label__False_411 = &label__False_411_impl;
    USE(label__False_411);
    bool t1685 = ElementsKindTestHelper3(UINT32_ELEMENTS);
    USE(t1685);
    bool t1686 = ConstexprBoolNot(t1685);
    USE(t1686);
    TNode<BoolT> t1687 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1686));
    USE(t1687);
    Branch(t1687, label__True_410, label__False_411);
    BIND(label__False_411);
    Print("assert 'from_constexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:52:4");
    Unreachable();
    BIND(label__True_410);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_362_impl);
  auto _return_362 = &_return_362_impl;
  USE(_return_362);
  Label label_macro_end_770_impl(this, {_return_362});
  Label* label_macro_end_770 = &label_macro_end_770_impl;
  USE(label_macro_end_770);
  // ../../test/torque/test-torque.tq:55:33
  {
    // ../../test/torque/test-torque.tq:56:4
    {
      Label label_try_done_648_771_impl(this);
      Label* label_try_done_648_771 = &label_try_done_648_771_impl;
      USE(label_try_done_648_771);
      Label label_Label1_412_impl(this);
      Label* label_Label1_412 = &label_Label1_412_impl;
      USE(label_Label1_412);
      Label label_try_begin_649_772_impl(this);
      Label* label_try_begin_649_772 = &label_try_begin_649_772_impl;
      USE(label_try_begin_649_772);
      Goto(label_try_begin_649_772);
      if (label_try_begin_649_772->is_used())
      {
        BIND(label_try_begin_649_772);
        // ../../test/torque/test-torque.tq:56:8
        {
          // ../../test/torque/test-torque.tq:57:6
          LabelTestHelper1(label_Label1_412);
        }
      }
      if (label_Label1_412->is_used())
      {
        BIND(label_Label1_412);
        // ../../test/torque/test-torque.tq:59:17
        {
          // ../../test/torque/test-torque.tq:60:6
          *_return_362 = True();
          Goto(label_macro_end_770);
        }
      }
    }
  }
  BIND(label_macro_end_770);
  return (*_return_362).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_363_impl);
  auto _return_363 = &_return_363_impl;
  USE(_return_363);
  Label label_macro_end_773_impl(this, {_return_363});
  Label* label_macro_end_773 = &label_macro_end_773_impl;
  USE(label_macro_end_773);
  // ../../test/torque/test-torque.tq:64:49
  {
    // ../../test/torque/test-torque.tq:65:4
    {
      Label label_try_done_650_774_impl(this);
      Label* label_try_done_650_774 = &label_try_done_650_774_impl;
      USE(label_try_done_650_774);
      Label label_Label2_413_impl(this);
      Label* label_Label2_413 = &label_Label2_413_impl;
      USE(label_Label2_413);
      TVARIABLE(Smi, smi_364_impl);
      auto smi_364 = &smi_364_impl;
      USE(smi_364);
      Label label_try_begin_651_775_impl(this);
      Label* label_try_begin_651_775 = &label_try_begin_651_775_impl;
      USE(label_try_begin_651_775);
      Goto(label_try_begin_651_775);
      if (label_try_begin_651_775->is_used())
      {
        BIND(label_try_begin_651_775);
        // ../../test/torque/test-torque.tq:65:8
        {
          // ../../test/torque/test-torque.tq:66:6
          LabelTestHelper2(label_Label2_413, smi_364);
        }
      }
      if (label_Label2_413->is_used())
      {
        BIND(label_Label2_413);
        // ../../test/torque/test-torque.tq:68:27
        {
          // ../../test/torque/test-torque.tq:69:6
          Label label__True_414_impl(this);
          Label* label__True_414 = &label__True_414_impl;
          USE(label__True_414);
          Label label__False_415_impl(this);
          Label* label__False_415 = &label__False_415_impl;
          USE(label__False_415);
          int31_t t1688 = 42;
          TNode<Smi> t1689 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1688));
          TNode<BoolT> t1690 = UncheckedCast<BoolT>(SmiEqual((*smi_364).value(), t1689));
          USE(t1690);
          Branch(t1690, label__True_414, label__False_415);
          BIND(label__False_415);
          Print("assert 'smi == 42' failed at ../../test/torque/test-torque.tq:69:6");
          Unreachable();
          BIND(label__True_414);
          // ../../test/torque/test-torque.tq:70:6
          *_return_363 = True();
          Goto(label_macro_end_773);
        }
      }
    }
  }
  BIND(label_macro_end_773);
  return (*_return_363).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_365_impl);
  auto _return_365 = &_return_365_impl;
  USE(_return_365);
  Label label_macro_end_776_impl(this, {_return_365});
  Label* label_macro_end_776 = &label_macro_end_776_impl;
  USE(label_macro_end_776);
  // ../../test/torque/test-torque.tq:74:50
  {
    // ../../test/torque/test-torque.tq:75:4
    {
      Label label_try_done_652_777_impl(this);
      Label* label_try_done_652_777 = &label_try_done_652_777_impl;
      USE(label_try_done_652_777);
      Label label_Label3_416_impl(this);
      Label* label_Label3_416 = &label_Label3_416_impl;
      USE(label_Label3_416);
      TVARIABLE(String, str_366_impl);
      auto str_366 = &str_366_impl;
      USE(str_366);
      TVARIABLE(Smi, smi_367_impl);
      auto smi_367 = &smi_367_impl;
      USE(smi_367);
      Label label_try_begin_653_778_impl(this);
      Label* label_try_begin_653_778 = &label_try_begin_653_778_impl;
      USE(label_try_begin_653_778);
      Goto(label_try_begin_653_778);
      if (label_try_begin_653_778->is_used())
      {
        BIND(label_try_begin_653_778);
        // ../../test/torque/test-torque.tq:75:8
        {
          // ../../test/torque/test-torque.tq:76:6
          LabelTestHelper3(label_Label3_416, str_366, smi_367);
        }
      }
      if (label_Label3_416->is_used())
      {
        BIND(label_Label3_416);
        // ../../test/torque/test-torque.tq:78:40
        {
          // ../../test/torque/test-torque.tq:79:6
          Label label__True_417_impl(this);
          Label* label__True_417 = &label__True_417_impl;
          USE(label__True_417);
          Label label__False_418_impl(this);
          Label* label__False_418 = &label__False_418_impl;
          USE(label__False_418);
          const char* t1691 = "foo";
          TNode<Object> t1692 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t1691));
          TNode<BoolT> t1693 = UncheckedCast<BoolT>(WordEqual((*str_366).value(), t1692));
          USE(t1693);
          Branch(t1693, label__True_417, label__False_418);
          BIND(label__False_418);
          Print("assert 'str == 'foo'' failed at ../../test/torque/test-torque.tq:79:6");
          Unreachable();
          BIND(label__True_417);
          // ../../test/torque/test-torque.tq:80:6
          Label label__True_419_impl(this);
          Label* label__True_419 = &label__True_419_impl;
          USE(label__True_419);
          Label label__False_420_impl(this);
          Label* label__False_420 = &label__False_420_impl;
          USE(label__False_420);
          int31_t t1694 = 7;
          TNode<Smi> t1695 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1694));
          TNode<BoolT> t1696 = UncheckedCast<BoolT>(SmiEqual((*smi_367).value(), t1695));
          USE(t1696);
          Branch(t1696, label__True_419, label__False_420);
          BIND(label__False_420);
          Print("assert 'smi == 7' failed at ../../test/torque/test-torque.tq:80:6");
          Unreachable();
          BIND(label__True_419);
          // ../../test/torque/test-torque.tq:81:6
          *_return_365 = True();
          Goto(label_macro_end_776);
        }
      }
    }
  }
  BIND(label_macro_end_776);
  return (*_return_365).value();
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:89:64
  {
    // ../../test/torque/test-torque.tq:90:4
    Return(p_param);
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_779_impl(this, {});
  Label* label_macro_end_779 = &label_macro_end_779_impl;
  USE(label_macro_end_779);
  // ../../test/torque/test-torque.tq:93:46
  {
    // ../../test/torque/test-torque.tq:94:4
    Label label__True_421_impl(this);
    Label* label__True_421 = &label__True_421_impl;
    USE(label__True_421);
    Label label__False_422_impl(this);
    Label* label__False_422 = &label__False_422_impl;
    USE(label__False_422);
    int31_t t1697 = 0;
    TNode<Smi> t1698 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1697));
    TNode<Object> t1699 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, p_c, t1698));
    USE(t1699);
    TNode<BoolT> t1700 = UncheckedCast<BoolT>(WordEqual(t1699, Null()));
    USE(t1700);
    Branch(t1700, label__True_421, label__False_422);
    BIND(label__False_422);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../../test/torque/test-torque.tq:94:4");
    Unreachable();
    BIND(label__True_421);
    // ../../test/torque/test-torque.tq:95:4
    Label label__True_423_impl(this);
    Label* label__True_423 = &label__True_423_impl;
    USE(label__True_423);
    Label label__False_424_impl(this);
    Label* label__False_424 = &label__False_424_impl;
    USE(label__False_424);
    int31_t t1701 = 1;
    TNode<Smi> t1702 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1701));
    TNode<Object> t1703 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, p_c, t1702));
    USE(t1703);
    TNode<BoolT> t1704 = UncheckedCast<BoolT>(WordEqual(t1703, Null()));
    USE(t1704);
    Branch(t1704, label__True_423, label__False_424);
    BIND(label__False_424);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../../test/torque/test-torque.tq:95:4");
    Unreachable();
    BIND(label__True_423);
    // ../../test/torque/test-torque.tq:96:4
    Label label__True_425_impl(this);
    Label* label__True_425 = &label__True_425_impl;
    USE(label__True_425);
    Label label__False_426_impl(this);
    Label* label__False_426 = &label__False_426_impl;
    USE(label__False_426);
    TNode<Object> t1705 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, p_c, Undefined()));
    USE(t1705);
    TNode<BoolT> t1706 = UncheckedCast<BoolT>(WordEqual(t1705, Undefined()));
    USE(t1706);
    Branch(t1706, label__True_425, label__False_426);
    BIND(label__False_426);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:96:4");
    Unreachable();
    BIND(label__True_425);
    // ../../test/torque/test-torque.tq:97:4
    Label label__True_427_impl(this);
    Label* label__True_427 = &label__True_427_impl;
    USE(label__True_427);
    Label label__False_428_impl(this);
    Label* label__False_428 = &label__False_428_impl;
    USE(label__False_428);
    TNode<Object> t1707 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, p_c, Undefined()));
    USE(t1707);
    TNode<BoolT> t1708 = UncheckedCast<BoolT>(WordEqual(t1707, Undefined()));
    USE(t1708);
    Branch(t1708, label__True_427, label__False_428);
    BIND(label__False_428);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:97:4");
    Unreachable();
    BIND(label__True_427);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_429, Label* label_Label5_430) {
  Label label_macro_end_780_impl(this, {});
  Label* label_macro_end_780 = &label_macro_end_780_impl;
  USE(label_macro_end_780);
  // ../../test/torque/test-torque.tq:100:76
  {
    // ../../test/torque/test-torque.tq:101:4
    {
      if ((p_flag)) {
        // ../../test/torque/test-torque.tq:102:22
        Goto(label_Label4_429);
      } else {
        // ../../test/torque/test-torque.tq:104:6
        Goto(label_Label5_430);
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_368_impl);
  auto _return_368 = &_return_368_impl;
  USE(_return_368);
  Label label_macro_end_781_impl(this, {_return_368});
  Label* label_macro_end_781 = &label_macro_end_781_impl;
  USE(label_macro_end_781);
  // ../../test/torque/test-torque.tq:107:57
  {
    // ../../test/torque/test-torque.tq:108:4
    {
      Label label_try_done_654_782_impl(this);
      Label* label_try_done_654_782 = &label_try_done_654_782_impl;
      USE(label_try_done_654_782);
      Label label_Label4_433_impl(this);
      Label* label_Label4_433 = &label_Label4_433_impl;
      USE(label_Label4_433);
      Label label_Label5_434_impl(this);
      Label* label_Label5_434 = &label_Label5_434_impl;
      USE(label_Label5_434);
      Label label_try_begin_655_783_impl(this);
      Label* label_try_begin_655_783 = &label_try_begin_655_783_impl;
      USE(label_try_begin_655_783);
      Goto(label_try_begin_655_783);
      if (label_try_begin_655_783->is_used())
      {
        BIND(label_try_begin_655_783);
        // ../../test/torque/test-torque.tq:108:8
        {
          // ../../test/torque/test-torque.tq:109:6
          LabelTestHelper4(p_flag, label_Label4_433, label_Label5_434);
        }
      }
      if (label_Label4_433->is_used())
      {
        BIND(label_Label4_433);
        // ../../test/torque/test-torque.tq:111:17
        {
          // ../../test/torque/test-torque.tq:112:6
          TNode<BoolT> t1709 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_368 = t1709;
          Goto(label_macro_end_781);
        }
      }
      if (label_Label5_434->is_used())
      {
        BIND(label_Label5_434);
        // ../../test/torque/test-torque.tq:114:17
        {
          // ../../test/torque/test-torque.tq:115:6
          TNode<BoolT> t1710 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_368 = t1710;
          Goto(label_macro_end_781);
        }
      }
    }
  }
  BIND(label_macro_end_781);
  return (*_return_368).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_369_impl);
  auto _return_369 = &_return_369_impl;
  USE(_return_369);
  Label label_macro_end_784_impl(this, {_return_369});
  Label* label_macro_end_784 = &label_macro_end_784_impl;
  USE(label_macro_end_784);
  // ../../test/torque/test-torque.tq:119:44
  {
    // ../../test/torque/test-torque.tq:120:4
    TNode<BoolT> t1711 = UncheckedCast<BoolT>(CallLabelTestHelper4(true));
    USE(t1711);
    TVARIABLE(BoolT, r1_370_impl);
    auto r1_370 = &r1_370_impl;
    USE(r1_370);
    *r1_370 = t1711;
    // ../../test/torque/test-torque.tq:121:4
    TNode<BoolT> t1712 = UncheckedCast<BoolT>(CallLabelTestHelper4(false));
    USE(t1712);
    TVARIABLE(BoolT, r2_371_impl);
    auto r2_371 = &r2_371_impl;
    USE(r2_371);
    *r2_371 = t1712;
    // ../../test/torque/test-torque.tq:123:4
    {
      Label label__True_435_impl(this);
      Label* label__True_435 = &label__True_435_impl;
      USE(label__True_435);
      Label label__False_436_impl(this);
      Label* label__False_436 = &label__False_436_impl;
      USE(label__False_436);
      Label label_if_done_label_656_785_impl(this, {});
      Label* label_if_done_label_656_785 = &label_if_done_label_656_785_impl;
      USE(label_if_done_label_656_785);
      Label label__True_437_impl(this);
      Label* label__True_437 = &label__True_437_impl;
      USE(label__True_437);
      GotoIfNot((*r1_370).value(), label__False_436);
      TNode<BoolT> t1713 = UncheckedCast<BoolT>(Word32BinaryNot((*r2_371).value()));
      USE(t1713);
      Branch(t1713, label__True_435, label__False_436);
      if (label__True_435->is_used())
      {
        BIND(label__True_435);
        // ../../test/torque/test-torque.tq:124:6
        *_return_369 = True();
        Goto(label_macro_end_784);
      }
      if (label__False_436->is_used())
      {
        BIND(label__False_436);
        // ../../test/torque/test-torque.tq:126:6
        *_return_369 = False();
        Goto(label_macro_end_784);
      }
    }
  }
  BIND(label_macro_end_784);
  return (*_return_369).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_372_impl);
  auto _return_372 = &_return_372_impl;
  USE(_return_372);
  Label label_macro_end_786_impl(this, {_return_372});
  Label* label_macro_end_786 = &label_macro_end_786_impl;
  USE(label_macro_end_786);
  // ../../test/torque/test-torque.tq:133:51
  {
    // ../../test/torque/test-torque.tq:134:4
    *_return_372 = p_param2;
    Goto(label_macro_end_786);
  }
  BIND(label_macro_end_786);
  return (*_return_372).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_438) {
  TVARIABLE(Object, _return_373_impl);
  auto _return_373 = &_return_373_impl;
  USE(_return_373);
  Label label_macro_end_787_impl(this, {_return_373});
  Label* label_macro_end_787 = &label_macro_end_787_impl;
  USE(label_macro_end_787);
  // ../../test/torque/test-torque.tq:141:70
  {
    // ../../test/torque/test-torque.tq:142:4
    *_return_373 = p_param2;
    Goto(label_macro_end_787);
  }
  BIND(label_macro_end_787);
  return (*_return_373).value();
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_788_impl(this, {});
  Label* label_macro_end_788 = &label_macro_end_788_impl;
  USE(label_macro_end_788);
  // ../../test/torque/test-torque.tq:145:34
  {
    // ../../test/torque/test-torque.tq:146:4
    {
      Label label_try_done_657_789_impl(this);
      Label* label_try_done_657_789 = &label_try_done_657_789_impl;
      USE(label_try_done_657_789);
      Label label_Fail_439_impl(this);
      Label* label_Fail_439 = &label_Fail_439_impl;
      USE(label_Fail_439);
      Label label_try_begin_658_790_impl(this);
      Label* label_try_begin_658_790 = &label_try_begin_658_790_impl;
      USE(label_try_begin_658_790);
      Goto(label_try_begin_658_790);
      if (label_try_begin_658_790->is_used())
      {
        BIND(label_try_begin_658_790);
        // ../../test/torque/test-torque.tq:146:8
        {
          // ../../test/torque/test-torque.tq:147:6
          Label label__True_440_impl(this);
          Label* label__True_440 = &label__True_440_impl;
          USE(label__True_440);
          Label label__False_441_impl(this);
          Label* label__False_441 = &label__False_441_impl;
          USE(label__False_441);
          int31_t t1714 = 0;
          TNode<Smi> t1715 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1714));
          TNode<Object> t1716 = UncheckedCast<Object>(GenericMacroTest5ATSmi(t1715));
          USE(t1716);
          TNode<BoolT> t1717 = UncheckedCast<BoolT>(WordEqual(t1716, Undefined()));
          USE(t1717);
          Branch(t1717, label__True_440, label__False_441);
          BIND(label__False_441);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../../test/torque/test-torque.tq:147:6");
          Unreachable();
          BIND(label__True_440);
          // ../../test/torque/test-torque.tq:148:6
          Label label__True_442_impl(this);
          Label* label__True_442 = &label__True_442_impl;
          USE(label__True_442);
          Label label__False_443_impl(this);
          Label* label__False_443 = &label__False_443_impl;
          USE(label__False_443);
          int31_t t1718 = 1;
          TNode<Smi> t1719 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1718));
          TNode<Object> t1720 = UncheckedCast<Object>(GenericMacroTest5ATSmi(t1719));
          USE(t1720);
          TNode<BoolT> t1721 = UncheckedCast<BoolT>(WordEqual(t1720, Undefined()));
          USE(t1721);
          Branch(t1721, label__True_442, label__False_443);
          BIND(label__False_443);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../../test/torque/test-torque.tq:148:6");
          Unreachable();
          BIND(label__True_442);
          // ../../test/torque/test-torque.tq:149:6
          Label label__True_444_impl(this);
          Label* label__True_444 = &label__True_444_impl;
          USE(label__True_444);
          Label label__False_445_impl(this);
          Label* label__False_445 = &label__False_445_impl;
          USE(label__False_445);
          TNode<Object> t1722 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(Null()));
          USE(t1722);
          TNode<BoolT> t1723 = UncheckedCast<BoolT>(WordEqual(t1722, Null()));
          USE(t1723);
          Branch(t1723, label__True_444, label__False_445);
          BIND(label__False_445);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../../test/torque/test-torque.tq:149:6");
          Unreachable();
          BIND(label__True_444);
          // ../../test/torque/test-torque.tq:150:6
          Label label__True_446_impl(this);
          Label* label__True_446 = &label__True_446_impl;
          USE(label__True_446);
          Label label__False_447_impl(this);
          Label* label__False_447 = &label__False_447_impl;
          USE(label__False_447);
          TNode<Object> t1724 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(False()));
          USE(t1724);
          TNode<BoolT> t1725 = UncheckedCast<BoolT>(WordEqual(t1724, False()));
          USE(t1725);
          Branch(t1725, label__True_446, label__False_447);
          BIND(label__False_447);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../../test/torque/test-torque.tq:150:6");
          Unreachable();
          BIND(label__True_446);
          // ../../test/torque/test-torque.tq:151:6
          Label label__True_448_impl(this);
          Label* label__True_448 = &label__True_448_impl;
          USE(label__True_448);
          Label label__False_449_impl(this);
          Label* label__False_449 = &label__False_449_impl;
          USE(label__False_449);
          TNode<Object> t1726 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(True()));
          USE(t1726);
          TNode<BoolT> t1727 = UncheckedCast<BoolT>(WordEqual(t1726, True()));
          USE(t1727);
          Branch(t1727, label__True_448, label__False_449);
          BIND(label__False_449);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../../test/torque/test-torque.tq:151:6");
          Unreachable();
          BIND(label__True_448);
          // ../../test/torque/test-torque.tq:152:6
          Label label__True_450_impl(this);
          Label* label__True_450 = &label__True_450_impl;
          USE(label__True_450);
          Label label__False_451_impl(this);
          Label* label__False_451 = &label__False_451_impl;
          USE(label__False_451);
          int31_t t1728 = 0;
          TNode<Smi> t1729 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1728));
          TNode<Object> t1730 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(t1729, label_Fail_439));
          USE(t1730);
          TNode<BoolT> t1731 = UncheckedCast<BoolT>(WordEqual(t1730, Undefined()));
          USE(t1731);
          Branch(t1731, label__True_450, label__False_451);
          BIND(label__False_451);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:152:6");
          Unreachable();
          BIND(label__True_450);
          // ../../test/torque/test-torque.tq:153:6
          Label label__True_452_impl(this);
          Label* label__True_452 = &label__True_452_impl;
          USE(label__True_452);
          Label label__False_453_impl(this);
          Label* label__False_453 = &label__False_453_impl;
          USE(label__False_453);
          int31_t t1732 = 0;
          TNode<Smi> t1733 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1732));
          TNode<Object> t1734 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(t1733, label_Fail_439));
          USE(t1734);
          TNode<BoolT> t1735 = UncheckedCast<BoolT>(WordEqual(t1734, Undefined()));
          USE(t1735);
          Branch(t1735, label__True_452, label__False_453);
          BIND(label__False_453);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:153:6");
          Unreachable();
          BIND(label__True_452);
          // ../../test/torque/test-torque.tq:154:6
          Label label__True_454_impl(this);
          Label* label__True_454 = &label__True_454_impl;
          USE(label__True_454);
          Label label__False_455_impl(this);
          Label* label__False_455 = &label__False_455_impl;
          USE(label__False_455);
          TNode<Object> t1736 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(Null(), label_Fail_439));
          USE(t1736);
          TNode<BoolT> t1737 = UncheckedCast<BoolT>(WordEqual(t1736, Null()));
          USE(t1737);
          Branch(t1737, label__True_454, label__False_455);
          BIND(label__False_455);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../../test/torque/test-torque.tq:154:6");
          Unreachable();
          BIND(label__True_454);
          // ../../test/torque/test-torque.tq:155:6
          Label label__True_456_impl(this);
          Label* label__True_456 = &label__True_456_impl;
          USE(label__True_456);
          Label label__False_457_impl(this);
          Label* label__False_457 = &label__False_457_impl;
          USE(label__False_457);
          TNode<Object> t1738 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(False(), label_Fail_439));
          USE(t1738);
          TNode<BoolT> t1739 = UncheckedCast<BoolT>(WordEqual(t1738, False()));
          USE(t1739);
          Branch(t1739, label__True_456, label__False_457);
          BIND(label__False_457);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../../test/torque/test-torque.tq:155:6");
          Unreachable();
          BIND(label__True_456);
        }
        Goto(label_try_done_657_789);
      }
      if (label_Fail_439->is_used())
      {
        BIND(label_Fail_439);
        // ../../test/torque/test-torque.tq:157:15
        {
          // ../../test/torque/test-torque.tq:158:6
          Unreachable();
        }
      }
      BIND(label_try_done_657_789);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:162:57
  {
    // ../../test/torque/test-torque.tq:163:4
    int31_t t1740 = 1;
    TNode<Smi> t1741 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1740));
    TNode<Smi> t1742 = UncheckedCast<Smi>(SmiAdd(p_x, t1741));
    USE(t1742);
    Return(t1742);
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:165:57
  {
    // ../../test/torque/test-torque.tq:166:4
    int31_t t1743 = 2;
    TNode<Smi> t1744 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1743));
    TNode<Smi> t1745 = UncheckedCast<Smi>(SmiAdd(p_x, t1744));
    USE(t1745);
    Return(t1745);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_374_impl);
  auto _return_374 = &_return_374_impl;
  USE(_return_374);
  Label label_macro_end_791_impl(this, {_return_374});
  Label* label_macro_end_791 = &label_macro_end_791_impl;
  USE(label_macro_end_791);
  // ../../test/torque/test-torque.tq:169:56
  {
    // ../../test/torque/test-torque.tq:170:4
    TVARIABLE(Code, fptr_375_impl);
    auto fptr_375 = &fptr_375_impl;
    USE(fptr_375);
    *fptr_375 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code());
    // ../../test/torque/test-torque.tq:171:4
    Label label__True_458_impl(this);
    Label* label__True_458 = &label__True_458_impl;
    USE(label__True_458);
    Label label__False_459_impl(this);
    Label* label__False_459 = &label__False_459_impl;
    USE(label__False_459);
    int31_t t1746 = 42;
    TNode<Smi> t1747 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1746));
    TNode<Smi> t1748 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), (*fptr_375).value(), p_context, t1747));
    USE(t1748);
    int31_t t1749 = 43;
    TNode<Smi> t1750 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1749));
    TNode<BoolT> t1751 = UncheckedCast<BoolT>(SmiEqual(t1748, t1750));
    USE(t1751);
    Branch(t1751, label__True_458, label__False_459);
    BIND(label__False_459);
    Print("assert 'fptr(context, 42) == 43' failed at ../../test/torque/test-torque.tq:171:4");
    Unreachable();
    BIND(label__True_458);
    // ../../test/torque/test-torque.tq:172:4
    *fptr_375 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code());
    // ../../test/torque/test-torque.tq:173:4
    Label label__True_460_impl(this);
    Label* label__True_460 = &label__True_460_impl;
    USE(label__True_460);
    Label label__False_461_impl(this);
    Label* label__False_461 = &label__False_461_impl;
    USE(label__False_461);
    int31_t t1752 = 42;
    TNode<Smi> t1753 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1752));
    TNode<Smi> t1754 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), (*fptr_375).value(), p_context, t1753));
    USE(t1754);
    int31_t t1755 = 44;
    TNode<Smi> t1756 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1755));
    TNode<BoolT> t1757 = UncheckedCast<BoolT>(SmiEqual(t1754, t1756));
    USE(t1757);
    Branch(t1757, label__True_460, label__False_461);
    BIND(label__False_461);
    Print("assert 'fptr(context, 42) == 44' failed at ../../test/torque/test-torque.tq:173:4");
    Unreachable();
    BIND(label__True_460);
    // ../../test/torque/test-torque.tq:174:4
    *_return_374 = True();
    Goto(label_macro_end_791);
  }
  BIND(label_macro_end_791);
  return (*_return_374).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_376_impl);
  auto _return_376 = &_return_376_impl;
  USE(_return_376);
  Label label_macro_end_792_impl(this, {_return_376});
  Label* label_macro_end_792 = &label_macro_end_792_impl;
  USE(label_macro_end_792);
  // ../../test/torque/test-torque.tq:177:61
  {
    // ../../test/torque/test-torque.tq:178:4
    auto t1758 = [=]() {
      int31_t t1760 = 0;
      return t1760;
    };
    auto t1759 = [=]() {
      int31_t t1761 = 1;
      return t1761;
    };
    TVARIABLE(Int32T, t1762_659_impl);
    auto t1762_659 = &t1762_659_impl;
    USE(t1762_659);
    {
      Label label__True_462_impl(this);
      Label* label__True_462 = &label__True_462_impl;
      USE(label__True_462);
      Label label__False_463_impl(this);
      Label* label__False_463 = &label__False_463_impl;
      USE(label__False_463);
      Label label__done_660_793_impl(this, {t1762_659});
      Label* label__done_660_793 = &label__done_660_793_impl;
      USE(label__done_660_793);
      int31_t t1763 = 42;
      int31_t t1764 = 0;
      bool t1765 = ConstexprInt31Equal(t1763, t1764);
      USE(t1765);
      TNode<BoolT> t1766 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1765));
      USE(t1766);
      Branch(t1766, label__True_462, label__False_463);
      BIND(label__True_462);
            TNode<Int32T> t1767 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1758()));
      *t1762_659 = t1767;
      Goto(label__done_660_793);
      BIND(label__False_463);
            TNode<Int32T> t1768 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1759()));
      *t1762_659 = t1768;
      Goto(label__done_660_793);
      BIND(label__done_660_793);
    }
    TVARIABLE(Int32T, var1_377_impl);
    auto var1_377 = &var1_377_impl;
    USE(var1_377);
    *var1_377 = (*t1762_659).value();
    // ../../test/torque/test-torque.tq:179:4
    auto t1769 = [=]() {
      int31_t t1771 = 1;
      return t1771;
    };
    auto t1770 = [=]() {
      int31_t t1772 = 0;
      return t1772;
    };
    TVARIABLE(Int32T, t1773_661_impl);
    auto t1773_661 = &t1773_661_impl;
    USE(t1773_661);
    {
      Label label__True_464_impl(this);
      Label* label__True_464 = &label__True_464_impl;
      USE(label__True_464);
      Label label__False_465_impl(this);
      Label* label__False_465 = &label__False_465_impl;
      USE(label__False_465);
      Label label__done_662_794_impl(this, {t1773_661});
      Label* label__done_662_794 = &label__done_662_794_impl;
      USE(label__done_662_794);
      int31_t t1774 = 42;
      int31_t t1775 = 0;
      bool t1776 = ConstexprInt31Equal(t1774, t1775);
      USE(t1776);
      TNode<BoolT> t1777 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1776));
      USE(t1777);
      Branch(t1777, label__True_464, label__False_465);
      BIND(label__True_464);
            TNode<Int32T> t1778 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1769()));
      *t1773_661 = t1778;
      Goto(label__done_662_794);
      BIND(label__False_465);
            TNode<Int32T> t1779 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1770()));
      *t1773_661 = t1779;
      Goto(label__done_662_794);
      BIND(label__done_662_794);
    }
    TVARIABLE(Int32T, var2_378_impl);
    auto var2_378 = &var2_378_impl;
    USE(var2_378);
    *var2_378 = (*t1773_661).value();
    // ../../test/torque/test-torque.tq:180:4
    *_return_376 = True();
    Goto(label_macro_end_792);
  }
  BIND(label_macro_end_792);
  return (*_return_376).value();
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_379_impl);
  auto _return_379 = &_return_379_impl;
  USE(_return_379);
  Label label_macro_end_795_impl(this, {_return_379});
  Label* label_macro_end_795 = &label_macro_end_795_impl;
  USE(label_macro_end_795);
  // ../../test/torque/test-torque.tq:183:41
  {
    // ../../test/torque/test-torque.tq:184:4
    auto t1780 = [=]() {
      return true;
    };
    auto t1781 = [=]() {
      return false;
    };
    TVARIABLE(BoolT, t1782_663_impl);
    auto t1782_663 = &t1782_663_impl;
    USE(t1782_663);
    {
      Label label__True_466_impl(this);
      Label* label__True_466 = &label__True_466_impl;
      USE(label__True_466);
      Label label__False_467_impl(this);
      Label* label__False_467 = &label__False_467_impl;
      USE(label__False_467);
      Label label__done_664_796_impl(this, {t1782_663});
      Label* label__done_664_796 = &label__done_664_796_impl;
      USE(label__done_664_796);
      int31_t t1783 = 0;
      TNode<Smi> t1784 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1783));
      TNode<BoolT> t1785 = UncheckedCast<BoolT>(SmiLessThan(p_x, t1784));
      USE(t1785);
      Branch(t1785, label__True_466, label__False_467);
      BIND(label__True_466);
            TNode<BoolT> t1786 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1780()));
      *t1782_663 = t1786;
      Goto(label__done_664_796);
      BIND(label__False_467);
            TNode<BoolT> t1787 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1781()));
      *t1782_663 = t1787;
      Goto(label__done_664_796);
      BIND(label__done_664_796);
    }
    TVARIABLE(BoolT, b_380_impl);
    auto b_380 = &b_380_impl;
    USE(b_380);
    *b_380 = (*t1782_663).value();
    // ../../test/torque/test-torque.tq:185:4
    auto t1788 = [=]() {
      int31_t t1790 = 10;
      TNode<Smi> t1791 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1790));
      TNode<Smi> t1792 = UncheckedCast<Smi>(SmiSub(p_x, t1791));
      USE(t1792);
      return t1792;
    };
    auto t1789 = [=]() {
      int31_t t1793 = 100;
      TNode<Smi> t1794 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1793));
      TNode<Smi> t1795 = UncheckedCast<Smi>(SmiAdd(p_x, t1794));
      USE(t1795);
      return t1795;
    };
    TVARIABLE(Smi, t1796_665_impl);
    auto t1796_665 = &t1796_665_impl;
    USE(t1796_665);
    {
      Label label__True_468_impl(this);
      Label* label__True_468 = &label__True_468_impl;
      USE(label__True_468);
      Label label__False_469_impl(this);
      Label* label__False_469 = &label__False_469_impl;
      USE(label__False_469);
      Label label__done_666_797_impl(this, {t1796_665});
      Label* label__done_666_797 = &label__done_666_797_impl;
      USE(label__done_666_797);
      Branch((*b_380).value(), label__True_468, label__False_469);
      BIND(label__True_468);
            *t1796_665 = t1788();
      Goto(label__done_666_797);
      BIND(label__False_469);
            *t1796_665 = t1789();
      Goto(label__done_666_797);
      BIND(label__done_666_797);
    }
    *_return_379 = (*t1796_665).value();
    Goto(label_macro_end_795);
  }
  BIND(label_macro_end_795);
  return (*_return_379).value();
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_798_impl(this, {});
  Label* label_macro_end_798 = &label_macro_end_798_impl;
  USE(label_macro_end_798);
  // ../../test/torque/test-torque.tq:188:49
  {
    // ../../test/torque/test-torque.tq:189:4
    TVARIABLE(Code, fptr1_381_impl);
    auto fptr1_381 = &fptr1_381_impl;
    USE(fptr1_381);
    *fptr1_381 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code());
    // ../../test/torque/test-torque.tq:190:4
    TVARIABLE(Code, fptr2_382_impl);
    auto fptr2_382 = &fptr2_382_impl;
    USE(fptr2_382);
    *fptr2_382 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code());
    // ../../test/torque/test-torque.tq:192:4
    Label label__True_470_impl(this);
    Label* label__True_470 = &label__True_470_impl;
    USE(label__True_470);
    Label label__False_471_impl(this);
    Label* label__False_471 = &label__False_471_impl;
    USE(label__False_471);
    int31_t t1797 = 0;
    TNode<Smi> t1798 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1797));
    TNode<Object> t1799 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), (*fptr1_381).value(), p_c, t1798));
    USE(t1799);
    TNode<BoolT> t1800 = UncheckedCast<BoolT>(WordEqual(t1799, Null()));
    USE(t1800);
    Branch(t1800, label__True_470, label__False_471);
    BIND(label__False_471);
    Print("assert 'fptr1(c, 0) == Null' failed at ../../test/torque/test-torque.tq:192:4");
    Unreachable();
    BIND(label__True_470);
    // ../../test/torque/test-torque.tq:193:4
    Label label__True_472_impl(this);
    Label* label__True_472 = &label__True_472_impl;
    USE(label__True_472);
    Label label__False_473_impl(this);
    Label* label__False_473 = &label__False_473_impl;
    USE(label__False_473);
    int31_t t1801 = 1;
    TNode<Smi> t1802 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1801));
    TNode<Object> t1803 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), (*fptr1_381).value(), p_c, t1802));
    USE(t1803);
    TNode<BoolT> t1804 = UncheckedCast<BoolT>(WordEqual(t1803, Null()));
    USE(t1804);
    Branch(t1804, label__True_472, label__False_473);
    BIND(label__False_473);
    Print("assert 'fptr1(c, 1) == Null' failed at ../../test/torque/test-torque.tq:193:4");
    Unreachable();
    BIND(label__True_472);
    // ../../test/torque/test-torque.tq:194:4
    Label label__True_474_impl(this);
    Label* label__True_474 = &label__True_474_impl;
    USE(label__True_474);
    Label label__False_475_impl(this);
    Label* label__False_475 = &label__False_475_impl;
    USE(label__False_475);
    TNode<Object> t1805 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), (*fptr2_382).value(), p_c, Undefined()));
    USE(t1805);
    TNode<BoolT> t1806 = UncheckedCast<BoolT>(WordEqual(t1805, Undefined()));
    USE(t1806);
    Branch(t1806, label__True_474, label__False_475);
    BIND(label__False_475);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:194:4");
    Unreachable();
    BIND(label__True_474);
    // ../../test/torque/test-torque.tq:195:4
    Label label__True_476_impl(this);
    Label* label__True_476 = &label__True_476_impl;
    USE(label__True_476);
    Label label__False_477_impl(this);
    Label* label__False_477 = &label__False_477_impl;
    USE(label__False_477);
    TNode<Object> t1807 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), (*fptr2_382).value(), p_c, Undefined()));
    USE(t1807);
    TNode<BoolT> t1808 = UncheckedCast<BoolT>(WordEqual(t1807, Undefined()));
    USE(t1808);
    Branch(t1808, label__True_476, label__False_477);
    BIND(label__False_477);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:195:4");
    Unreachable();
    BIND(label__True_476);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_383_impl);
  auto _return_383 = &_return_383_impl;
  USE(_return_383);
  Label label_macro_end_799_impl(this, {_return_383});
  Label* label_macro_end_799 = &label_macro_end_799_impl;
  USE(label_macro_end_799);
  // ../../test/torque/test-torque.tq:199:41
  {
    // ../../test/torque/test-torque.tq:200:4
    *_return_383 = p_x;
    Goto(label_macro_end_799);
  }
  BIND(label_macro_end_799);
  return (*_return_383).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_384_impl);
  auto _return_384 = &_return_384_impl;
  USE(_return_384);
  Label label_macro_end_800_impl(this, {_return_384});
  Label* label_macro_end_800 = &label_macro_end_800_impl;
  USE(label_macro_end_800);
  // ../../test/torque/test-torque.tq:203:55
  {
    // ../../test/torque/test-torque.tq:204:4
    {
      Label label__True_478_impl(this);
      Label* label__True_478 = &label__True_478_impl;
      USE(label__True_478);
      Label label__False_479_impl(this, {});
      Label* label__False_479 = &label__False_479_impl;
      USE(label__False_479);
      TNode<BoolT> t1809 = UncheckedCast<BoolT>(TaggedIsSmi(p_n));
      USE(t1809);
      Branch(t1809, label__True_478, label__False_479);
      if (label__True_478->is_used())
      {
        BIND(label__True_478);
        // ../../test/torque/test-torque.tq:204:24
        {
          // ../../test/torque/test-torque.tq:205:6
          TNode<Smi> t1810 = UncheckedCast<Smi>(unsafe_cast5ATSmi(p_n));
          USE(t1810);
          TVARIABLE(Smi, m_385_impl);
          auto m_385 = &m_385_impl;
          USE(m_385);
          *m_385 = t1810;
          // ../../test/torque/test-torque.tq:207:6
          Label label__True_480_impl(this);
          Label* label__True_480 = &label__True_480_impl;
          USE(label__True_480);
          Label label__False_481_impl(this);
          Label* label__False_481 = &label__False_481_impl;
          USE(label__False_481);
          TNode<Smi> t1811 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, p_c, (*m_385).value()));
          USE(t1811);
          int31_t t1812 = 11;
          TNode<Smi> t1813 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1812));
          TNode<BoolT> t1814 = UncheckedCast<BoolT>(SmiEqual(t1811, t1813));
          USE(t1814);
          Branch(t1814, label__True_480, label__False_481);
          BIND(label__False_481);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../../test/torque/test-torque.tq:207:6");
          Unreachable();
          BIND(label__True_480);
          // ../../test/torque/test-torque.tq:208:6
          *_return_384 = True();
          Goto(label_macro_end_800);
        }
      }
      BIND(label__False_479);
    }
    // ../../test/torque/test-torque.tq:210:4
    *_return_384 = False();
    Goto(label_macro_end_800);
  }
  BIND(label_macro_end_800);
  return (*_return_384).value();
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_801_impl(this, {});
  Label* label_macro_end_801 = &label_macro_end_801_impl;
  USE(label_macro_end_801);
  // ../../test/torque/test-torque.tq:213:25
  {
    // ../../test/torque/test-torque.tq:214:4
    Label label__True_482_impl(this);
    Label* label__True_482 = &label__True_482_impl;
    USE(label__True_482);
    Label label__False_483_impl(this);
    Label* label__False_483 = &label__False_483_impl;
    USE(label__False_483);
    int31_t t1815 = 0xffff;
    TNode<IntPtrT> t1816 = UncheckedCast<IntPtrT>(convert8ATintptr(t1815));
    USE(t1816);
    int31_t t1817 = 1;
    TNode<IntPtrT> t1818 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1817));
    TNode<IntPtrT> t1819 = UncheckedCast<IntPtrT>(IntPtrAdd(t1816, t1818));
    USE(t1819);
    int31_t t1820 = 0x10000;
    TNode<IntPtrT> t1821 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1820));
    TNode<BoolT> t1822 = UncheckedCast<BoolT>(WordEqual(t1819, t1821));
    USE(t1822);
    Branch(t1822, label__True_482, label__False_483);
    BIND(label__False_483);
    Print("assert 'convert<intptr>(0xffff) + 1 == 0x10000' failed at ../../test/torque/test-torque.tq:214:4");
    Unreachable();
    BIND(label__True_482);
    // ../../test/torque/test-torque.tq:215:4
    Label label__True_484_impl(this);
    Label* label__True_484 = &label__True_484_impl;
    USE(label__True_484);
    Label label__False_485_impl(this);
    Label* label__False_485 = &label__False_485_impl;
    USE(label__False_485);
    int31_t t1823 = -0xffff;
    TNode<IntPtrT> t1824 = UncheckedCast<IntPtrT>(convert8ATintptr(t1823));
    USE(t1824);
    int31_t t1825 = -65535;
    TNode<IntPtrT> t1826 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1825));
    TNode<BoolT> t1827 = UncheckedCast<BoolT>(WordEqual(t1824, t1826));
    USE(t1827);
    Branch(t1827, label__True_484, label__False_485);
    BIND(label__False_485);
    Print("assert 'convert<intptr>(-0xffff) == -65535' failed at ../../test/torque/test-torque.tq:215:4");
    Unreachable();
    BIND(label__True_484);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_802_impl(this, {});
  Label* label_macro_end_802 = &label_macro_end_802_impl;
  USE(label_macro_end_802);
  // ../../test/torque/test-torque.tq:218:45
  {
    // ../../test/torque/test-torque.tq:219:4
    int32_t t1828 = 0x40000000;
    TVARIABLE(Int32T, x_386_impl);
    auto x_386 = &x_386_impl;
    USE(x_386);
    TNode<Int32T> t1829 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1828));
    *x_386 = t1829;
    // ../../test/torque/test-torque.tq:220:4
    int32_t t1830 = 0x7fffffff;
    TVARIABLE(Int32T, y_387_impl);
    auto y_387 = &y_387_impl;
    USE(y_387);
    TNode<Int32T> t1831 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1830));
    *y_387 = t1831;
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_803_impl(this, {});
  Label* label_macro_end_803 = &label_macro_end_803_impl;
  USE(label_macro_end_803);
  // ../../test/torque/test-torque.tq:223:30
  {
    // ../../test/torque/test-torque.tq:224:4
    int31_t t1832 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_388_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_388 = &someVeryLongVariableNameThatWillCauseLineBreaks_388_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_388);
    TNode<Smi> t1833 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1832));
    *someVeryLongVariableNameThatWillCauseLineBreaks_388 = t1833;
    // ../../test/torque/test-torque.tq:225:4
    Label label__True_486_impl(this);
    Label* label__True_486 = &label__True_486_impl;
    USE(label__True_486);
    Label label__False_487_impl(this);
    Label* label__False_487 = &label__False_487_impl;
    USE(label__False_487);
    Label label__True_488_impl(this);
    Label* label__True_488 = &label__True_488_impl;
    USE(label__True_488);
    int31_t t1834 = 0;
    TNode<Smi> t1835 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1834));
    TNode<BoolT> t1836 = UncheckedCast<BoolT>(SmiGreaterThan((*someVeryLongVariableNameThatWillCauseLineBreaks_388).value(), t1835));
    USE(t1836);
    GotoIfNot(t1836, label__False_487);
    int31_t t1837 = 10;
    TNode<Smi> t1838 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1837));
    TNode<BoolT> t1839 = UncheckedCast<BoolT>(SmiLessThan((*someVeryLongVariableNameThatWillCauseLineBreaks_388).value(), t1838));
    USE(t1839);
    Branch(t1839, label__True_486, label__False_487);
    BIND(label__False_487);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../../test/torque/test-torque.tq:225:4");
    Unreachable();
    BIND(label__True_486);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_804_impl(this, {});
  Label* label_macro_end_804 = &label_macro_end_804_impl;
  USE(label_macro_end_804);
  // ../../test/torque/test-torque.tq:230:30
  {
    // ../../test/torque/test-torque.tq:231:4
    const char* t1840 = "Hello, World!\n";
    Print(t1840);
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t1841 = 5;
  return t1841;
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t1842 = 4;
  TNode<IntPtrT> t1843 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1842));
  return t1843;
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t1844 = 3;
  TNode<Smi> t1845 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1844));
  return t1845;
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_805_impl(this, {});
  Label* label_macro_end_805 = &label_macro_end_805_impl;
  USE(label_macro_end_805);
  // ../../test/torque/test-torque.tq:238:34
  {
    // ../../test/torque/test-torque.tq:239:4
    Label label__True_489_impl(this);
    Label* label__True_489 = &label__True_489_impl;
    USE(label__True_489);
    Label label__False_490_impl(this);
    Label* label__False_490 = &label__False_490_impl;
    USE(label__False_490);
    int31_t t1846 = 5;
    TNode<Int32T> t1847 = UncheckedCast<Int32T>(Int32Constant(t1846));
    USE(t1847);
    TNode<Int32T> t1848 = UncheckedCast<Int32T>(from_constexpr7ATint32(kConstexprConst()));
    TNode<BoolT> t1849 = UncheckedCast<BoolT>(Word32Equal(t1848, t1847));
    USE(t1849);
    Branch(t1849, label__True_489, label__False_490);
    BIND(label__False_490);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../../test/torque/test-torque.tq:239:4");
    Unreachable();
    BIND(label__True_489);
    // ../../test/torque/test-torque.tq:240:4
    Label label__True_491_impl(this);
    Label* label__True_491 = &label__True_491_impl;
    USE(label__True_491);
    Label label__False_492_impl(this);
    Label* label__False_492 = &label__False_492_impl;
    USE(label__False_492);
    int31_t t1850 = 4;
    TNode<IntPtrT> t1851 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1850));
    TNode<BoolT> t1852 = UncheckedCast<BoolT>(WordEqual(kIntptrConst(), t1851));
    USE(t1852);
    Branch(t1852, label__True_491, label__False_492);
    BIND(label__False_492);
    Print("assert 'kIntptrConst == 4' failed at ../../test/torque/test-torque.tq:240:4");
    Unreachable();
    BIND(label__True_491);
    // ../../test/torque/test-torque.tq:241:4
    Label label__True_493_impl(this);
    Label* label__True_493 = &label__True_493_impl;
    USE(label__True_493);
    Label label__False_494_impl(this);
    Label* label__False_494 = &label__False_494_impl;
    USE(label__False_494);
    int31_t t1853 = 3;
    TNode<Smi> t1854 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1853));
    TNode<BoolT> t1855 = UncheckedCast<BoolT>(SmiEqual(kSmiConst(), t1854));
    USE(t1855);
    Branch(t1855, label__True_493, label__False_494);
    BIND(label__False_494);
    Print("assert 'kSmiConst == 3' failed at ../../test/torque/test-torque.tq:241:4");
    Unreachable();
    BIND(label__True_493);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_806_impl(this, {});
  Label* label_macro_end_806 = &label_macro_end_806_impl;
  USE(label_macro_end_806);
  // ../../test/torque/test-torque.tq:244:33
  {
    // ../../test/torque/test-torque.tq:245:4
    int31_t t1856 = 3;
    TNode<Smi> kSmi_389_impl;
    auto kSmi_389 = &kSmi_389_impl;
    USE(kSmi_389);
    TNode<Smi> t1857 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1856));
    *kSmi_389 = t1857;
    // ../../test/torque/test-torque.tq:246:4
    Label label__True_495_impl(this);
    Label* label__True_495 = &label__True_495_impl;
    USE(label__True_495);
    Label label__False_496_impl(this);
    Label* label__False_496 = &label__False_496_impl;
    USE(label__False_496);
    int31_t t1858 = 3;
    TNode<Smi> t1859 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1858));
    TNode<BoolT> t1860 = UncheckedCast<BoolT>(SmiEqual((*kSmi_389), t1859));
    USE(t1860);
    Branch(t1860, label__True_495, label__False_496);
    BIND(label__False_496);
    Print("assert 'kSmi == 3' failed at ../../test/torque/test-torque.tq:246:4");
    Unreachable();
    BIND(label__True_495);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_390_impl);
  auto _return_390 = &_return_390_impl;
  USE(_return_390);
  Label label_macro_end_807_impl(this, {_return_390});
  Label* label_macro_end_807 = &label_macro_end_807_impl;
  USE(label_macro_end_807);
  // ../../test/torque/test-torque.tq:260:41
  {
    // ../../test/torque/test-torque.tq:261:4
    *_return_390 = p_i.i;
    Goto(label_macro_end_807);
  }
  BIND(label_macro_end_807);
  return (*_return_390).value();
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_392_impl);
  auto _return_indexes_392 = &_return_indexes_392_impl;
  USE(_return_indexes_392);
  TVARIABLE(Smi, _return_i_393_impl);
  auto _return_i_393 = &_return_i_393_impl;
  USE(_return_i_393);
  TVARIABLE(Number, _return_k_394_impl);
  auto _return_k_394 = &_return_k_394_impl;
  USE(_return_k_394);
  Label label_macro_end_808_impl(this, {_return_indexes_392, _return_i_393, _return_k_394});
  Label* label_macro_end_808 = &label_macro_end_808_impl;
  USE(label_macro_end_808);
  // ../../test/torque/test-torque.tq:264:35
  {
    // ../../test/torque/test-torque.tq:265:4
    TNode<FixedArray> t1861 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1861);
    int31_t t1862 = 27;
    TNode<Smi> t1863 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1862));
    int31_t t1864 = 31;
    TNode<Number> t1865 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1864));
    TestStructA t1866 = {t1861, t1863, t1865};
    *_return_indexes_392 = t1866.indexes;
    *_return_i_393 = t1866.i;
    *_return_k_394 = t1866.k;
    Goto(label_macro_end_808);
  }
  BIND(label_macro_end_808);
  return TestStructA{(*_return_indexes_392).value(), (*_return_i_393).value(), (*_return_k_394).value()};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_396_impl);
  auto _return_indexes_396 = &_return_indexes_396_impl;
  USE(_return_indexes_396);
  TVARIABLE(Smi, _return_i_397_impl);
  auto _return_i_397 = &_return_i_397_impl;
  USE(_return_i_397);
  TVARIABLE(Number, _return_k_398_impl);
  auto _return_k_398 = &_return_k_398_impl;
  USE(_return_k_398);
  Label label_macro_end_809_impl(this, {_return_indexes_396, _return_i_397, _return_k_398});
  Label* label_macro_end_809 = &label_macro_end_809_impl;
  USE(label_macro_end_809);
  // ../../test/torque/test-torque.tq:268:35
  {
    // ../../test/torque/test-torque.tq:269:4
    TNode<FixedArray> t1867 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1867);
    int31_t t1868 = 13;
    TNode<Smi> t1869 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1868));
    int31_t t1870 = 5;
    TNode<Number> t1871 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1870));
    TestStructA t1872 = {t1867, t1869, t1871};
    TVARIABLE(FixedArray, a_indexes_400_impl);
    auto a_indexes_400 = &a_indexes_400_impl;
    USE(a_indexes_400);
    TVARIABLE(Smi, a_i_401_impl);
    auto a_i_401 = &a_i_401_impl;
    USE(a_i_401);
    TVARIABLE(Number, a_k_402_impl);
    auto a_k_402 = &a_k_402_impl;
    USE(a_k_402);
    *a_indexes_400 = t1872.indexes;
    *a_i_401 = t1872.i;
    *a_k_402 = t1872.k;
    // ../../test/torque/test-torque.tq:271:4
    TVARIABLE(FixedArray, b_indexes_404_impl);
    auto b_indexes_404 = &b_indexes_404_impl;
    USE(b_indexes_404);
    TVARIABLE(Smi, b_i_405_impl);
    auto b_i_405 = &b_i_405_impl;
    USE(b_i_405);
    TVARIABLE(Number, b_k_406_impl);
    auto b_k_406 = &b_k_406_impl;
    USE(b_k_406);
    *b_indexes_404 = (*a_indexes_400).value();
    *b_i_405 = (*a_i_401).value();
    *b_k_406 = (*a_k_402).value();
    // ../../test/torque/test-torque.tq:272:4
    TestStructA t1873 = (TestStruct2());
    USE(t1873);
    TVARIABLE(FixedArray, c_indexes_408_impl);
    auto c_indexes_408 = &c_indexes_408_impl;
    USE(c_indexes_408);
    TVARIABLE(Smi, c_i_409_impl);
    auto c_i_409 = &c_i_409_impl;
    USE(c_i_409);
    TVARIABLE(Number, c_k_410_impl);
    auto c_k_410 = &c_k_410_impl;
    USE(c_k_410);
    *c_indexes_408 = t1873.indexes;
    *c_i_409 = t1873.i;
    *c_k_410 = t1873.k;
    // ../../test/torque/test-torque.tq:273:4
    TNode<Smi> t1874 = UncheckedCast<Smi>(TestStruct1(TestStructA{(*c_indexes_408).value(), (*c_i_409).value(), (*c_k_410).value()}));
    USE(t1874);
    *a_i_401 = t1874;
    // ../../test/torque/test-torque.tq:274:4
    *a_k_402 = (*a_i_401).value();
    // ../../test/torque/test-torque.tq:275:4
    TVARIABLE(FixedArray, d_x_indexes_413_impl);
    auto d_x_indexes_413 = &d_x_indexes_413_impl;
    USE(d_x_indexes_413);
    TVARIABLE(Smi, d_x_i_414_impl);
    auto d_x_i_414 = &d_x_i_414_impl;
    USE(d_x_i_414);
    TVARIABLE(Number, d_x_k_415_impl);
    auto d_x_k_415 = &d_x_k_415_impl;
    USE(d_x_k_415);
    TVARIABLE(Smi, d_y_416_impl);
    auto d_y_416 = &d_y_416_impl;
    USE(d_y_416);
    // ../../test/torque/test-torque.tq:276:4
    *d_x_indexes_413 = (*a_indexes_400).value();
    *d_x_i_414 = (*a_i_401).value();
    *d_x_k_415 = (*a_k_402).value();
    // ../../test/torque/test-torque.tq:277:4
    int31_t t1875 = 7;
    TNode<Smi> t1876 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1875));
    TestStructB t1877 = {TestStructA{(*a_indexes_400).value(), (*a_i_401).value(), (*a_k_402).value()}, t1876};
    *d_x_indexes_413 = t1877.x.indexes;
    *d_x_i_414 = t1877.x.i;
    *d_x_k_415 = t1877.x.k;
    *d_y_416 = t1877.y;
    // ../../test/torque/test-torque.tq:278:4
    TVARIABLE(FixedArray, e_indexes_418_impl);
    auto e_indexes_418 = &e_indexes_418_impl;
    USE(e_indexes_418);
    TVARIABLE(Smi, e_i_419_impl);
    auto e_i_419 = &e_i_419_impl;
    USE(e_i_419);
    TVARIABLE(Number, e_k_420_impl);
    auto e_k_420 = &e_k_420_impl;
    USE(e_k_420);
    *e_indexes_418 = (*d_x_indexes_413).value();
    *e_i_419 = (*d_x_i_414).value();
    *e_k_420 = (*d_x_k_415).value();
    // ../../test/torque/test-torque.tq:279:4
    TNode<FixedArray> t1878 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1878);
    int31_t t1879 = 27;
    TNode<Smi> t1880 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1879));
    int31_t t1881 = 31;
    TNode<Number> t1882 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1881));
    TestStructA t1883 = {t1878, t1880, t1882};
    TVARIABLE(Smi, f_421_impl);
    auto f_421 = &f_421_impl;
    USE(f_421);
    *f_421 = t1883.i;
    // ../../test/torque/test-torque.tq:280:4
    TestStructA t1884 = (TestStruct2());
    USE(t1884);
    *f_421 = t1884.i;
    // ../../test/torque/test-torque.tq:281:4
    *_return_indexes_396 = (*a_indexes_400).value();
    *_return_i_397 = (*a_i_401).value();
    *_return_k_398 = (*a_k_402).value();
    Goto(label_macro_end_809);
  }
  BIND(label_macro_end_809);
  return TestStructA{(*_return_indexes_396).value(), (*_return_i_397).value(), (*_return_k_398).value()};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_424_impl);
  auto _return_x_indexes_424 = &_return_x_indexes_424_impl;
  USE(_return_x_indexes_424);
  TVARIABLE(Smi, _return_x_i_425_impl);
  auto _return_x_i_425 = &_return_x_i_425_impl;
  USE(_return_x_i_425);
  TVARIABLE(Number, _return_x_k_426_impl);
  auto _return_x_k_426 = &_return_x_k_426_impl;
  USE(_return_x_k_426);
  TVARIABLE(FixedArray, _return_y_indexes_428_impl);
  auto _return_y_indexes_428 = &_return_y_indexes_428_impl;
  USE(_return_y_indexes_428);
  TVARIABLE(Smi, _return_y_i_429_impl);
  auto _return_y_i_429 = &_return_y_i_429_impl;
  USE(_return_y_i_429);
  TVARIABLE(Number, _return_y_k_430_impl);
  auto _return_y_k_430 = &_return_y_k_430_impl;
  USE(_return_y_k_430);
  Label label_macro_end_810_impl(this, {_return_x_indexes_424, _return_x_i_425, _return_x_k_426, _return_y_indexes_428, _return_y_i_429, _return_y_k_430});
  Label* label_macro_end_810 = &label_macro_end_810_impl;
  USE(label_macro_end_810);
  // ../../test/torque/test-torque.tq:289:35
  {
    // ../../test/torque/test-torque.tq:290:4
    TestStructA t1885 = (TestStruct2());
    USE(t1885);
    TestStructA t1886 = (TestStruct2());
    USE(t1886);
    TestStructC t1887 = {t1885, t1886};
    *_return_x_indexes_424 = t1887.x.indexes;
    *_return_x_i_425 = t1887.x.i;
    *_return_x_k_426 = t1887.x.k;
    *_return_y_indexes_428 = t1887.y.indexes;
    *_return_y_i_429 = t1887.y.i;
    *_return_y_k_430 = t1887.y.k;
    Goto(label_macro_end_810);
  }
  BIND(label_macro_end_810);
  return TestStructC{TestStructA{(*_return_x_indexes_424).value(), (*_return_x_i_425).value(), (*_return_x_k_426).value()}, TestStructA{(*_return_y_indexes_428).value(), (*_return_y_i_429).value(), (*_return_y_k_430).value()}};
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:85:69
  {
    // ../../test/torque/test-torque.tq:86:4
    Return(Null());
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_456_impl);
  auto _return_456 = &_return_456_impl;
  USE(_return_456);
  Label label_macro_end_831_impl(this, {_return_456});
  Label* label_macro_end_831 = &label_macro_end_831_impl;
  USE(label_macro_end_831);
  // ../../test/torque/test-torque.tq:129:53
  {
    // ../../test/torque/test-torque.tq:130:4
    *_return_456 = Undefined();
    Goto(label_macro_end_831);
  }
  BIND(label_macro_end_831);
  return (*_return_456).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_519) {
  TVARIABLE(Object, _return_457_impl);
  auto _return_457 = &_return_457_impl;
  USE(_return_457);
  Label label_macro_end_832_impl(this, {_return_457});
  Label* label_macro_end_832 = &label_macro_end_832_impl;
  USE(label_macro_end_832);
  // ../../test/torque/test-torque.tq:137:72
  {
    // ../../test/torque/test-torque.tq:138:4
    *_return_457 = Undefined();
    Goto(label_macro_end_832);
  }
  BIND(label_macro_end_832);
  return (*_return_457).value();
}

}  // namepsace internal
}  // namespace v8

