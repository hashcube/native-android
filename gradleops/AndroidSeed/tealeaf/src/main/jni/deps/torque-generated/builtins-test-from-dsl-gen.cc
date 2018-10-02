#include "src/builtins/builtins-test-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_313_impl);
  auto _return_313 = &_return_313_impl;
  USE(_return_313);
  Label label_macro_end_1693_impl(this, {_return_313}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1693 = &label_macro_end_1693_impl;
  USE(label_macro_end_1693);
  // ../../test/torque/test-torque.tq:6:69
  {
    // ../../test/torque/test-torque.tq:7:5
    {
      Label label__False_531_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_531 = &label__False_531_impl;
      USE(label__False_531);
      bool t1900 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1900));
      bool t1901 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
      USE(implicit_cast<bool>(t1901));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1900) || implicit_cast<bool>(t1901))))) {
        // ../../test/torque/test-torque.tq:7:74
        {
          // ../../test/torque/test-torque.tq:8:7
          TNode<BoolT> t1902 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
          *_return_313 = implicit_cast<TNode<BoolT>>(t1902);
          Goto(label_macro_end_1693);
        }
      } else {
        // ../../test/torque/test-torque.tq:9:12
        {
          // ../../test/torque/test-torque.tq:10:7
          TNode<BoolT> t1903 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
          *_return_313 = implicit_cast<TNode<BoolT>>(t1903);
          Goto(label_macro_end_1693);
        }
      }
    }
  }
  BIND(label_macro_end_1693);
  return implicit_cast<TNode<BoolT>>((*_return_313).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_314_impl);
  auto _return_314 = &_return_314_impl;
  USE(_return_314);
  Label label_macro_end_1694_impl(this, {_return_314}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1694 = &label_macro_end_1694_impl;
  USE(label_macro_end_1694);
  // ../../test/torque/test-torque.tq:14:69
  {
    // ../../test/torque/test-torque.tq:15:5
    Label label__False_532_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_532 = &label__False_532_impl;
    USE(label__False_532);
    bool t1904 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1904));
    bool t1905 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1905));
    TNode<BoolT> t1906 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>((implicit_cast<bool>(t1904) || implicit_cast<bool>(t1905)))));
    *_return_314 = implicit_cast<TNode<BoolT>>(t1906);
    Goto(label_macro_end_1694);
  }
  BIND(label_macro_end_1694);
  return implicit_cast<TNode<BoolT>>((*_return_314).value());
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_315_impl;
  auto _return_315 = &_return_315_impl;
  USE(_return_315);
  Label label_macro_end_1695_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1695 = &label_macro_end_1695_impl;
  USE(label_macro_end_1695);
  // ../../test/torque/test-torque.tq:18:79
  {
    // ../../test/torque/test-torque.tq:19:5
    Label label__False_533_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_533 = &label__False_533_impl;
    USE(label__False_533);
    bool t1907 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1907));
    bool t1908 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1908));
    *_return_315 = implicit_cast<bool>((implicit_cast<bool>(t1907) || implicit_cast<bool>(t1908)));
    Goto(label_macro_end_1695);
  }
  BIND(label_macro_end_1695);
  return implicit_cast<bool>((*_return_315));
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_534) {
  Label label_macro_end_1696_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1696 = &label_macro_end_1696_impl;
  USE(label_macro_end_1696);
  // ../../test/torque/test-torque.tq:23:21
  {
    // ../../test/torque/test-torque.tq:24:5
    Goto(label_Label1_534);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_535, TVariable<Smi>* Label20_316) {
  Label label_macro_end_1697_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1697 = &label_macro_end_1697_impl;
  USE(label_macro_end_1697);
  // ../../test/torque/test-torque.tq:28:26
  {
    // ../../test/torque/test-torque.tq:29:5
    int31_t t1909 = 42;
    TNode<Smi> t1910 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1909)));
    *Label20_316 = implicit_cast<TNode<Smi>>(t1910);
    Goto(label_Label2_535);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_536, TVariable<String>* Label30_317, TVariable<Smi>* Label31_318) {
  Label label_macro_end_1698_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1698 = &label_macro_end_1698_impl;
  USE(label_macro_end_1698);
  // ../../test/torque/test-torque.tq:33:34
  {
    // ../../test/torque/test-torque.tq:34:5
    const char* t1911 = "foo";
    TNode<String> t1912 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t1911)));
    *Label30_317 = implicit_cast<TNode<String>>(t1912);
    int31_t t1913 = 7;
    TNode<Smi> t1914 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1913)));
    *Label31_318 = implicit_cast<TNode<Smi>>(t1914);
    Goto(label_Label3_536);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_1699_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1699 = &label_macro_end_1699_impl;
  USE(label_macro_end_1699);
  // ../../test/torque/test-torque.tq:37:26
  {
    // ../../test/torque/test-torque.tq:38:5
    Label label__True_537_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_537 = &label__True_537_impl;
    USE(label__True_537);
    Label label__False_538_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_538 = &label__False_538_impl;
    USE(label__False_538);
    bool t1915 = IsFastElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS));
    USE(implicit_cast<bool>(t1915));
    TNode<BoolT> t1916 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t1915)));
    USE(implicit_cast<TNode<BoolT>>(t1916));
    Branch(implicit_cast<TNode<BoolT>>(t1916), label__True_537, label__False_538);
    BIND(label__False_538);
    Print("assert 'FromConstexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../../test/torque/test-torque.tq:38:5");
    Unreachable();
    BIND(label__True_537);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_1700_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1700 = &label_macro_end_1700_impl;
  USE(label_macro_end_1700);
  // ../../test/torque/test-torque.tq:41:27
  {
    // ../../test/torque/test-torque.tq:42:5
    Label label__True_539_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_539 = &label__True_539_impl;
    USE(label__True_539);
    Label label__False_540_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_540 = &label__False_540_impl;
    USE(label__False_540);
    TNode<BoolT> t1917 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1917));
    Branch(implicit_cast<TNode<BoolT>>(t1917), label__True_539, label__False_540);
    BIND(label__False_540);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../../test/torque/test-torque.tq:42:5");
    Unreachable();
    BIND(label__True_539);
    // ../../test/torque/test-torque.tq:43:5
    Label label__True_541_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_541 = &label__True_541_impl;
    USE(label__True_541);
    Label label__False_542_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_542 = &label__False_542_impl;
    USE(label__False_542);
    TNode<BoolT> t1918 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1918));
    Branch(implicit_cast<TNode<BoolT>>(t1918), label__True_541, label__False_542);
    BIND(label__False_542);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../../test/torque/test-torque.tq:43:5");
    Unreachable();
    BIND(label__True_541);
    // ../../test/torque/test-torque.tq:44:5
    Label label__True_543_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_543 = &label__True_543_impl;
    USE(label__True_543);
    Label label__False_544_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_544 = &label__False_544_impl;
    USE(label__False_544);
    TNode<BoolT> t1919 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1919));
    TNode<BoolT> t1920 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1919)));
    USE(implicit_cast<TNode<BoolT>>(t1920));
    Branch(implicit_cast<TNode<BoolT>>(t1920), label__True_543, label__False_544);
    BIND(label__False_544);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../../test/torque/test-torque.tq:44:5");
    Unreachable();
    BIND(label__True_543);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_1701_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1701 = &label_macro_end_1701_impl;
  USE(label_macro_end_1701);
  // ../../test/torque/test-torque.tq:47:31
  {
    // ../../test/torque/test-torque.tq:48:5
    Label label__True_545_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_545 = &label__True_545_impl;
    USE(label__True_545);
    Label label__False_546_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_546 = &label__False_546_impl;
    USE(label__False_546);
    bool t1921 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1921));
    TNode<BoolT> t1922 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t1921)));
    USE(implicit_cast<TNode<BoolT>>(t1922));
    Branch(implicit_cast<TNode<BoolT>>(t1922), label__True_545, label__False_546);
    BIND(label__False_546);
    Print("assert 'FromConstexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../../test/torque/test-torque.tq:48:5");
    Unreachable();
    BIND(label__True_545);
    // ../../test/torque/test-torque.tq:49:5
    Label label__True_547_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_547 = &label__True_547_impl;
    USE(label__True_547);
    Label label__False_548_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_548 = &label__False_548_impl;
    USE(label__False_548);
    bool t1923 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1923));
    TNode<BoolT> t1924 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t1923)));
    USE(implicit_cast<TNode<BoolT>>(t1924));
    Branch(implicit_cast<TNode<BoolT>>(t1924), label__True_547, label__False_548);
    BIND(label__False_548);
    Print("assert 'FromConstexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../../test/torque/test-torque.tq:49:5");
    Unreachable();
    BIND(label__True_547);
    // ../../test/torque/test-torque.tq:50:5
    Label label__True_549_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_549 = &label__True_549_impl;
    USE(label__True_549);
    Label label__False_550_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_550 = &label__False_550_impl;
    USE(label__False_550);
    bool t1925 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1925));
    TNode<BoolT> t1926 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t1925)));
    USE(implicit_cast<TNode<BoolT>>(t1926));
    TNode<BoolT> t1927 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1926)));
    USE(implicit_cast<TNode<BoolT>>(t1927));
    Branch(implicit_cast<TNode<BoolT>>(t1927), label__True_549, label__False_550);
    BIND(label__False_550);
    Print("assert '!FromConstexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:50:5");
    Unreachable();
    BIND(label__True_549);
    // ../../test/torque/test-torque.tq:51:5
    Label label__True_551_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_551 = &label__True_551_impl;
    USE(label__True_551);
    Label label__False_552_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_552 = &label__False_552_impl;
    USE(label__False_552);
    bool t1928 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1928));
    bool t1929 = ConstexprBoolNot(implicit_cast<bool>(t1928));
    USE(implicit_cast<bool>(t1929));
    TNode<BoolT> t1930 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t1929)));
    USE(implicit_cast<TNode<BoolT>>(t1930));
    Branch(implicit_cast<TNode<BoolT>>(t1930), label__True_551, label__False_552);
    BIND(label__False_552);
    Print("assert 'FromConstexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:51:5");
    Unreachable();
    BIND(label__True_551);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_319_impl);
  auto _return_319 = &_return_319_impl;
  USE(_return_319);
  Label label_macro_end_1702_impl(this, {_return_319}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1702 = &label_macro_end_1702_impl;
  USE(label_macro_end_1702);
  // ../../test/torque/test-torque.tq:54:34
  {
    // ../../test/torque/test-torque.tq:55:5
    {
      Label label_try_done_902_1703_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_902_1703 = &label_try_done_902_1703_impl;
      USE(label_try_done_902_1703);
      Label label_Label1_553_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Label1_553 = &label_Label1_553_impl;
      USE(label_Label1_553);
      Label label_try_begin_903_1704_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_903_1704 = &label_try_begin_903_1704_impl;
      USE(label_try_begin_903_1704);
      Goto(label_try_begin_903_1704);
      if (label_try_begin_903_1704->is_used())
      {
        BIND(label_try_begin_903_1704);
        // ../../test/torque/test-torque.tq:55:9
        {
          // ../../test/torque/test-torque.tq:56:7
          LabelTestHelper1(label_Label1_553);
        }
      }
      if (label_Label1_553->is_used())
      {
        BIND(label_Label1_553);
        // ../../test/torque/test-torque.tq:58:18
        {
          // ../../test/torque/test-torque.tq:59:7
          *_return_319 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1702);
        }
      }
    }
  }
  BIND(label_macro_end_1702);
  return implicit_cast<TNode<Oddball>>((*_return_319).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_320_impl);
  auto _return_320 = &_return_320_impl;
  USE(_return_320);
  Label label_macro_end_1705_impl(this, {_return_320}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1705 = &label_macro_end_1705_impl;
  USE(label_macro_end_1705);
  // ../../test/torque/test-torque.tq:63:50
  {
    // ../../test/torque/test-torque.tq:64:5
    {
      Label label_try_done_904_1706_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_904_1706 = &label_try_done_904_1706_impl;
      USE(label_try_done_904_1706);
      Label label_Label2_554_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Label2_554 = &label_Label2_554_impl;
      USE(label_Label2_554);
      TVARIABLE(Smi, smi_321_impl);
      auto smi_321 = &smi_321_impl;
      USE(smi_321);
      Label label_try_begin_905_1707_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_905_1707 = &label_try_begin_905_1707_impl;
      USE(label_try_begin_905_1707);
      Goto(label_try_begin_905_1707);
      if (label_try_begin_905_1707->is_used())
      {
        BIND(label_try_begin_905_1707);
        // ../../test/torque/test-torque.tq:64:9
        {
          // ../../test/torque/test-torque.tq:65:7
          LabelTestHelper2(label_Label2_554, smi_321);
        }
      }
      if (label_Label2_554->is_used())
      {
        BIND(label_Label2_554);
        // ../../test/torque/test-torque.tq:67:28
        {
          // ../../test/torque/test-torque.tq:68:7
          Label label__True_555_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_555 = &label__True_555_impl;
          USE(label__True_555);
          Label label__False_556_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_556 = &label__False_556_impl;
          USE(label__False_556);
          int31_t t1931 = 42;
          TNode<Smi> t1932 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1931)));
          TNode<BoolT> t1933 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_321).value()), implicit_cast<TNode<Smi>>(t1932)));
          USE(implicit_cast<TNode<BoolT>>(t1933));
          Branch(implicit_cast<TNode<BoolT>>(t1933), label__True_555, label__False_556);
          BIND(label__False_556);
          Print("assert 'smi == 42' failed at ../../test/torque/test-torque.tq:68:7");
          Unreachable();
          BIND(label__True_555);
          // ../../test/torque/test-torque.tq:69:7
          *_return_320 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1705);
        }
      }
    }
  }
  BIND(label_macro_end_1705);
  return implicit_cast<TNode<Oddball>>((*_return_320).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_322_impl);
  auto _return_322 = &_return_322_impl;
  USE(_return_322);
  Label label_macro_end_1708_impl(this, {_return_322}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1708 = &label_macro_end_1708_impl;
  USE(label_macro_end_1708);
  // ../../test/torque/test-torque.tq:73:51
  {
    // ../../test/torque/test-torque.tq:74:5
    {
      Label label_try_done_906_1709_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_906_1709 = &label_try_done_906_1709_impl;
      USE(label_try_done_906_1709);
      Label label_Label3_557_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Label3_557 = &label_Label3_557_impl;
      USE(label_Label3_557);
      TVARIABLE(String, str_323_impl);
      auto str_323 = &str_323_impl;
      USE(str_323);
      TVARIABLE(Smi, smi_324_impl);
      auto smi_324 = &smi_324_impl;
      USE(smi_324);
      Label label_try_begin_907_1710_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_907_1710 = &label_try_begin_907_1710_impl;
      USE(label_try_begin_907_1710);
      Goto(label_try_begin_907_1710);
      if (label_try_begin_907_1710->is_used())
      {
        BIND(label_try_begin_907_1710);
        // ../../test/torque/test-torque.tq:74:9
        {
          // ../../test/torque/test-torque.tq:75:7
          LabelTestHelper3(label_Label3_557, str_323, smi_324);
        }
      }
      if (label_Label3_557->is_used())
      {
        BIND(label_Label3_557);
        // ../../test/torque/test-torque.tq:77:41
        {
          // ../../test/torque/test-torque.tq:78:7
          Label label__True_558_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_558 = &label__True_558_impl;
          USE(label__True_558);
          Label label__False_559_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_559 = &label__False_559_impl;
          USE(label__False_559);
          const char* t1934 = "foo";
          TNode<Object> t1935 = UncheckedCast<Object>(FromConstexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t1934)));
          TNode<BoolT> t1936 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*str_323).value()), implicit_cast<TNode<Object>>(t1935)));
          USE(implicit_cast<TNode<BoolT>>(t1936));
          Branch(implicit_cast<TNode<BoolT>>(t1936), label__True_558, label__False_559);
          BIND(label__False_559);
          Print("assert 'str == 'foo'' failed at ../../test/torque/test-torque.tq:78:7");
          Unreachable();
          BIND(label__True_558);
          // ../../test/torque/test-torque.tq:79:7
          Label label__True_560_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_560 = &label__True_560_impl;
          USE(label__True_560);
          Label label__False_561_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_561 = &label__False_561_impl;
          USE(label__False_561);
          int31_t t1937 = 7;
          TNode<Smi> t1938 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1937)));
          TNode<BoolT> t1939 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_324).value()), implicit_cast<TNode<Smi>>(t1938)));
          USE(implicit_cast<TNode<BoolT>>(t1939));
          Branch(implicit_cast<TNode<BoolT>>(t1939), label__True_560, label__False_561);
          BIND(label__False_561);
          Print("assert 'smi == 7' failed at ../../test/torque/test-torque.tq:79:7");
          Unreachable();
          BIND(label__True_560);
          // ../../test/torque/test-torque.tq:80:7
          *_return_322 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1708);
        }
      }
    }
  }
  BIND(label_macro_end_1708);
  return implicit_cast<TNode<Oddball>>((*_return_322).value());
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:88:65
  {
    // ../../test/torque/test-torque.tq:89:5
    Return(implicit_cast<TNode<Object>>(p_param));
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_1711_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1711 = &label_macro_end_1711_impl;
  USE(label_macro_end_1711);
  // ../../test/torque/test-torque.tq:92:47
  {
    // ../../test/torque/test-torque.tq:93:5
    Label label__True_562_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_562 = &label__True_562_impl;
    USE(label__True_562);
    Label label__False_563_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_563 = &label__False_563_impl;
    USE(label__False_563);
    int31_t t1940 = 0;
    TNode<Smi> t1941 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1940)));
    TNode<Object> t1942 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1941)));
    USE(implicit_cast<TNode<Object>>(t1942));
    TNode<BoolT> t1943 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1942), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1943));
    Branch(implicit_cast<TNode<BoolT>>(t1943), label__True_562, label__False_563);
    BIND(label__False_563);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../../test/torque/test-torque.tq:93:5");
    Unreachable();
    BIND(label__True_562);
    // ../../test/torque/test-torque.tq:94:5
    Label label__True_564_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_564 = &label__True_564_impl;
    USE(label__True_564);
    Label label__False_565_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_565 = &label__False_565_impl;
    USE(label__False_565);
    int31_t t1944 = 1;
    TNode<Smi> t1945 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1944)));
    TNode<Object> t1946 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1945)));
    USE(implicit_cast<TNode<Object>>(t1946));
    TNode<BoolT> t1947 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1946), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1947));
    Branch(implicit_cast<TNode<BoolT>>(t1947), label__True_564, label__False_565);
    BIND(label__False_565);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../../test/torque/test-torque.tq:94:5");
    Unreachable();
    BIND(label__True_564);
    // ../../test/torque/test-torque.tq:95:5
    Label label__True_566_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_566 = &label__True_566_impl;
    USE(label__True_566);
    Label label__False_567_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_567 = &label__False_567_impl;
    USE(label__False_567);
    TNode<Object> t1948 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1948));
    TNode<BoolT> t1949 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1948), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1949));
    Branch(implicit_cast<TNode<BoolT>>(t1949), label__True_566, label__False_567);
    BIND(label__False_567);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:95:5");
    Unreachable();
    BIND(label__True_566);
    // ../../test/torque/test-torque.tq:96:5
    Label label__True_568_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_568 = &label__True_568_impl;
    USE(label__True_568);
    Label label__False_569_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_569 = &label__False_569_impl;
    USE(label__False_569);
    TNode<Object> t1950 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1950));
    TNode<BoolT> t1951 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1950), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1951));
    Branch(implicit_cast<TNode<BoolT>>(t1951), label__True_568, label__False_569);
    BIND(label__False_569);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:96:5");
    Unreachable();
    BIND(label__True_568);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_570, Label* label_Label5_571) {
  Label label_macro_end_1712_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1712 = &label_macro_end_1712_impl;
  USE(label_macro_end_1712);
  // ../../test/torque/test-torque.tq:100:29
  {
    // ../../test/torque/test-torque.tq:101:5
    {
      if ((implicit_cast<bool>(p_flag))) {
        // ../../test/torque/test-torque.tq:101:25
        {
          // ../../test/torque/test-torque.tq:102:7
          Goto(label_Label4_570);
        }
      } else {
        // ../../test/torque/test-torque.tq:103:12
        {
          // ../../test/torque/test-torque.tq:104:7
          Goto(label_Label5_571);
        }
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_325_impl);
  auto _return_325 = &_return_325_impl;
  USE(_return_325);
  Label label_macro_end_1713_impl(this, {_return_325}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1713 = &label_macro_end_1713_impl;
  USE(label_macro_end_1713);
  // ../../test/torque/test-torque.tq:108:58
  {
    // ../../test/torque/test-torque.tq:109:5
    {
      Label label_try_done_908_1714_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_908_1714 = &label_try_done_908_1714_impl;
      USE(label_try_done_908_1714);
      Label label_Label4_574_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Label4_574 = &label_Label4_574_impl;
      USE(label_Label4_574);
      Label label_Label5_575_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Label5_575 = &label_Label5_575_impl;
      USE(label_Label5_575);
      Label label_try_begin_909_1715_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_909_1715 = &label_try_begin_909_1715_impl;
      USE(label_try_begin_909_1715);
      Goto(label_try_begin_909_1715);
      if (label_try_begin_909_1715->is_used())
      {
        BIND(label_try_begin_909_1715);
        // ../../test/torque/test-torque.tq:109:9
        {
          // ../../test/torque/test-torque.tq:110:7
          LabelTestHelper4(implicit_cast<bool>(p_flag), label_Label4_574, label_Label5_575);
        }
      }
      if (label_Label4_574->is_used())
      {
        BIND(label_Label4_574);
        // ../../test/torque/test-torque.tq:112:18
        {
          // ../../test/torque/test-torque.tq:113:7
          TNode<BoolT> t1952 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
          *_return_325 = implicit_cast<TNode<BoolT>>(t1952);
          Goto(label_macro_end_1713);
        }
      }
      if (label_Label5_575->is_used())
      {
        BIND(label_Label5_575);
        // ../../test/torque/test-torque.tq:115:18
        {
          // ../../test/torque/test-torque.tq:116:7
          TNode<BoolT> t1953 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
          *_return_325 = implicit_cast<TNode<BoolT>>(t1953);
          Goto(label_macro_end_1713);
        }
      }
    }
  }
  BIND(label_macro_end_1713);
  return implicit_cast<TNode<BoolT>>((*_return_325).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_326_impl);
  auto _return_326 = &_return_326_impl;
  USE(_return_326);
  Label label_macro_end_1716_impl(this, {_return_326}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1716 = &label_macro_end_1716_impl;
  USE(label_macro_end_1716);
  // ../../test/torque/test-torque.tq:120:45
  {
    // ../../test/torque/test-torque.tq:121:5
    TNode<BoolT> t1954 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(true)));
    USE(implicit_cast<TNode<BoolT>>(t1954));
    TVARIABLE(BoolT, r1_327_impl);
    auto r1_327 = &r1_327_impl;
    USE(r1_327);
    *r1_327 = implicit_cast<TNode<BoolT>>(t1954);
    // ../../test/torque/test-torque.tq:122:5
    TNode<BoolT> t1955 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(false)));
    USE(implicit_cast<TNode<BoolT>>(t1955));
    TVARIABLE(BoolT, r2_328_impl);
    auto r2_328 = &r2_328_impl;
    USE(r2_328);
    *r2_328 = implicit_cast<TNode<BoolT>>(t1955);
    // ../../test/torque/test-torque.tq:124:5
    {
      Label label__True_576_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_576 = &label__True_576_impl;
      USE(label__True_576);
      Label label__False_577_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_577 = &label__False_577_impl;
      USE(label__False_577);
      Label label_if_done_label_910_1717_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_910_1717 = &label_if_done_label_910_1717_impl;
      USE(label_if_done_label_910_1717);
      Label label__True_578_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_578 = &label__True_578_impl;
      USE(label__True_578);
      GotoIfNot(implicit_cast<TNode<BoolT>>((*r1_327).value()), label__False_577);
      TNode<BoolT> t1956 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>((*r2_328).value())));
      USE(implicit_cast<TNode<BoolT>>(t1956));
Branch(implicit_cast<TNode<BoolT>>(t1956), label__True_576, label__False_577);
      if (label__True_576->is_used())
      {
        BIND(label__True_576);
        // ../../test/torque/test-torque.tq:124:20
        {
          // ../../test/torque/test-torque.tq:125:7
          *_return_326 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1716);
        }
      }
      if (label__False_577->is_used())
      {
        BIND(label__False_577);
        // ../../test/torque/test-torque.tq:126:12
        {
          // ../../test/torque/test-torque.tq:127:7
          *_return_326 = implicit_cast<TNode<Oddball>>(False());
          Goto(label_macro_end_1716);
        }
      }
    }
  }
  BIND(label_macro_end_1716);
  return implicit_cast<TNode<Oddball>>((*_return_326).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_329_impl);
  auto _return_329 = &_return_329_impl;
  USE(_return_329);
  Label label_macro_end_1718_impl(this, {_return_329}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1718 = &label_macro_end_1718_impl;
  USE(label_macro_end_1718);
  // ../../test/torque/test-torque.tq:135:52
  {
    // ../../test/torque/test-torque.tq:136:5
    *_return_329 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1718);
  }
  BIND(label_macro_end_1718);
  return implicit_cast<TNode<Object>>((*_return_329).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_579) {
  TVARIABLE(Object, _return_330_impl);
  auto _return_330 = &_return_330_impl;
  USE(_return_330);
  Label label_macro_end_1719_impl(this, {_return_330}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1719 = &label_macro_end_1719_impl;
  USE(label_macro_end_1719);
  // ../../test/torque/test-torque.tq:145:16
  {
    // ../../test/torque/test-torque.tq:146:5
    *_return_330 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1719);
  }
  BIND(label_macro_end_1719);
  return implicit_cast<TNode<Object>>((*_return_330).value());
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_1720_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1720 = &label_macro_end_1720_impl;
  USE(label_macro_end_1720);
  // ../../test/torque/test-torque.tq:149:35
  {
    // ../../test/torque/test-torque.tq:150:5
    {
      Label label_try_done_911_1721_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_911_1721 = &label_try_done_911_1721_impl;
      USE(label_try_done_911_1721);
      Label label_Fail_580_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Fail_580 = &label_Fail_580_impl;
      USE(label_Fail_580);
      Label label_try_begin_912_1722_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_912_1722 = &label_try_begin_912_1722_impl;
      USE(label_try_begin_912_1722);
      Goto(label_try_begin_912_1722);
      if (label_try_begin_912_1722->is_used())
      {
        BIND(label_try_begin_912_1722);
        // ../../test/torque/test-torque.tq:150:9
        {
          // ../../test/torque/test-torque.tq:151:7
          Label label__True_581_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_581 = &label__True_581_impl;
          USE(label__True_581);
          Label label__False_582_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_582 = &label__False_582_impl;
          USE(label__False_582);
          int31_t t1957 = 0;
          TNode<Smi> t1958 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1957)));
          TNode<Object> t1959 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1958)));
          USE(implicit_cast<TNode<Object>>(t1959));
          TNode<BoolT> t1960 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1959), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1960));
          Branch(implicit_cast<TNode<BoolT>>(t1960), label__True_581, label__False_582);
          BIND(label__False_582);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../../test/torque/test-torque.tq:151:7");
          Unreachable();
          BIND(label__True_581);
          // ../../test/torque/test-torque.tq:152:7
          Label label__True_583_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_583 = &label__True_583_impl;
          USE(label__True_583);
          Label label__False_584_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_584 = &label__False_584_impl;
          USE(label__False_584);
          int31_t t1961 = 1;
          TNode<Smi> t1962 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1961)));
          TNode<Object> t1963 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1962)));
          USE(implicit_cast<TNode<Object>>(t1963));
          TNode<BoolT> t1964 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1963), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1964));
          Branch(implicit_cast<TNode<BoolT>>(t1964), label__True_583, label__False_584);
          BIND(label__False_584);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../../test/torque/test-torque.tq:152:7");
          Unreachable();
          BIND(label__True_583);
          // ../../test/torque/test-torque.tq:153:7
          Label label__True_585_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_585 = &label__True_585_impl;
          USE(label__True_585);
          Label label__False_586_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_586 = &label__False_586_impl;
          USE(label__False_586);
          TNode<Object> t1965 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<Object>>(t1965));
          TNode<BoolT> t1966 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1965), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1966));
          Branch(implicit_cast<TNode<BoolT>>(t1966), label__True_585, label__False_586);
          BIND(label__False_586);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../../test/torque/test-torque.tq:153:7");
          Unreachable();
          BIND(label__True_585);
          // ../../test/torque/test-torque.tq:154:7
          Label label__True_587_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_587 = &label__True_587_impl;
          USE(label__True_587);
          Label label__False_588_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_588 = &label__False_588_impl;
          USE(label__False_588);
          TNode<Object> t1967 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<Object>>(t1967));
          TNode<BoolT> t1968 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1967), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1968));
          Branch(implicit_cast<TNode<BoolT>>(t1968), label__True_587, label__False_588);
          BIND(label__False_588);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../../test/torque/test-torque.tq:154:7");
          Unreachable();
          BIND(label__True_587);
          // ../../test/torque/test-torque.tq:155:7
          Label label__True_589_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_589 = &label__True_589_impl;
          USE(label__True_589);
          Label label__False_590_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_590 = &label__False_590_impl;
          USE(label__False_590);
          TNode<Object> t1969 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<Object>>(t1969));
          TNode<BoolT> t1970 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1969), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t1970));
          Branch(implicit_cast<TNode<BoolT>>(t1970), label__True_589, label__False_590);
          BIND(label__False_590);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../../test/torque/test-torque.tq:155:7");
          Unreachable();
          BIND(label__True_589);
          // ../../test/torque/test-torque.tq:156:7
          Label label__True_591_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_591 = &label__True_591_impl;
          USE(label__True_591);
          Label label__False_592_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_592 = &label__False_592_impl;
          USE(label__False_592);
          int31_t t1971 = 0;
          TNode<Smi> t1972 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1971)));
          TNode<Object> t1973 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1972), label_Fail_580));
          USE(implicit_cast<TNode<Object>>(t1973));
          TNode<BoolT> t1974 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1973), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1974));
          Branch(implicit_cast<TNode<BoolT>>(t1974), label__True_591, label__False_592);
          BIND(label__False_592);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:156:7");
          Unreachable();
          BIND(label__True_591);
          // ../../test/torque/test-torque.tq:157:7
          Label label__True_593_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_593 = &label__True_593_impl;
          USE(label__True_593);
          Label label__False_594_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_594 = &label__False_594_impl;
          USE(label__False_594);
          int31_t t1975 = 0;
          TNode<Smi> t1976 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1975)));
          TNode<Object> t1977 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1976), label_Fail_580));
          USE(implicit_cast<TNode<Object>>(t1977));
          TNode<BoolT> t1978 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1977), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1978));
          Branch(implicit_cast<TNode<BoolT>>(t1978), label__True_593, label__False_594);
          BIND(label__False_594);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:157:7");
          Unreachable();
          BIND(label__True_593);
          // ../../test/torque/test-torque.tq:158:7
          Label label__True_595_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_595 = &label__True_595_impl;
          USE(label__True_595);
          Label label__False_596_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_596 = &label__False_596_impl;
          USE(label__False_596);
          TNode<Object> t1979 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null()), label_Fail_580));
          USE(implicit_cast<TNode<Object>>(t1979));
          TNode<BoolT> t1980 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1979), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1980));
          Branch(implicit_cast<TNode<BoolT>>(t1980), label__True_595, label__False_596);
          BIND(label__False_596);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../../test/torque/test-torque.tq:158:7");
          Unreachable();
          BIND(label__True_595);
          // ../../test/torque/test-torque.tq:159:7
          Label label__True_597_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_597 = &label__True_597_impl;
          USE(label__True_597);
          Label label__False_598_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_598 = &label__False_598_impl;
          USE(label__False_598);
          TNode<Object> t1981 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False()), label_Fail_580));
          USE(implicit_cast<TNode<Object>>(t1981));
          TNode<BoolT> t1982 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1981), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1982));
          Branch(implicit_cast<TNode<BoolT>>(t1982), label__True_597, label__False_598);
          BIND(label__False_598);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../../test/torque/test-torque.tq:159:7");
          Unreachable();
          BIND(label__True_597);
        }
        Goto(label_try_done_911_1721);
      }
      if (label_Fail_580->is_used())
      {
        BIND(label_Fail_580);
        // ../../test/torque/test-torque.tq:161:16
        {
          // ../../test/torque/test-torque.tq:162:7
          Print("halting because of 'unreachable' at ../../test/torque/test-torque.tq:162:7");
          Unreachable();
        }
      }
      BIND(label_try_done_911_1721);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:166:58
  {
    // ../../test/torque/test-torque.tq:167:5
    int31_t t1983 = 1;
    TNode<Smi> t1984 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1983)));
    TNode<Smi> t1985 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1984)));
    USE(implicit_cast<TNode<Smi>>(t1985));
    Return(implicit_cast<TNode<Smi>>(t1985));
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:169:58
  {
    // ../../test/torque/test-torque.tq:170:5
    int31_t t1986 = 2;
    TNode<Smi> t1987 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1986)));
    TNode<Smi> t1988 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1987)));
    USE(implicit_cast<TNode<Smi>>(t1988));
    Return(implicit_cast<TNode<Smi>>(t1988));
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_331_impl);
  auto _return_331 = &_return_331_impl;
  USE(_return_331);
  Label label_macro_end_1723_impl(this, {_return_331}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1723 = &label_macro_end_1723_impl;
  USE(label_macro_end_1723);
  // ../../test/torque/test-torque.tq:173:57
  {
    // ../../test/torque/test-torque.tq:174:5
    TVARIABLE(Code, fptr_332_impl);
    auto fptr_332 = &fptr_332_impl;
    USE(fptr_332);
    *fptr_332 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code()));
    // ../../test/torque/test-torque.tq:175:5
    Label label__True_599_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_599 = &label__True_599_impl;
    USE(label__True_599);
    Label label__False_600_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_600 = &label__False_600_impl;
    USE(label__False_600);
    int31_t t1989 = 42;
    TNode<Smi> t1990 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1989)));
    TNode<Smi> t1991 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_332).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1990)));
    USE(implicit_cast<TNode<Smi>>(t1991));
    int31_t t1992 = 43;
    TNode<Smi> t1993 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1992)));
    TNode<BoolT> t1994 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1991), implicit_cast<TNode<Smi>>(t1993)));
    USE(implicit_cast<TNode<BoolT>>(t1994));
    Branch(implicit_cast<TNode<BoolT>>(t1994), label__True_599, label__False_600);
    BIND(label__False_600);
    Print("assert 'fptr(context, 42) == 43' failed at ../../test/torque/test-torque.tq:175:5");
    Unreachable();
    BIND(label__True_599);
    // ../../test/torque/test-torque.tq:176:5
    *fptr_332 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code()));
    // ../../test/torque/test-torque.tq:177:5
    Label label__True_601_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_601 = &label__True_601_impl;
    USE(label__True_601);
    Label label__False_602_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_602 = &label__False_602_impl;
    USE(label__False_602);
    int31_t t1995 = 42;
    TNode<Smi> t1996 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1995)));
    TNode<Smi> t1997 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_332).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1996)));
    USE(implicit_cast<TNode<Smi>>(t1997));
    int31_t t1998 = 44;
    TNode<Smi> t1999 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t1998)));
    TNode<BoolT> t2000 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1997), implicit_cast<TNode<Smi>>(t1999)));
    USE(implicit_cast<TNode<BoolT>>(t2000));
    Branch(implicit_cast<TNode<BoolT>>(t2000), label__True_601, label__False_602);
    BIND(label__False_602);
    Print("assert 'fptr(context, 42) == 44' failed at ../../test/torque/test-torque.tq:177:5");
    Unreachable();
    BIND(label__True_601);
    // ../../test/torque/test-torque.tq:178:5
    *_return_331 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1723);
  }
  BIND(label_macro_end_1723);
  return implicit_cast<TNode<Oddball>>((*_return_331).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_333_impl);
  auto _return_333 = &_return_333_impl;
  USE(_return_333);
  Label label_macro_end_1724_impl(this, {_return_333}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1724 = &label_macro_end_1724_impl;
  USE(label_macro_end_1724);
  // ../../test/torque/test-torque.tq:181:62
  {
    // ../../test/torque/test-torque.tq:182:5
    auto t2001 = [=]() {
      int31_t t2003 = 0;
      return implicit_cast<int31_t>(t2003);
    };
    auto t2002 = [=]() {
      int31_t t2004 = 1;
      return implicit_cast<int31_t>(t2004);
    };
    TVARIABLE(Int32T, t2005_913_impl);
    auto t2005_913 = &t2005_913_impl;
    USE(t2005_913);
    {
      Label label__True_603_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_603 = &label__True_603_impl;
      USE(label__True_603);
      Label label__False_604_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_604 = &label__False_604_impl;
      USE(label__False_604);
      Label label__done_914_1725_impl(this, {t2005_913}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_914_1725 = &label__done_914_1725_impl;
      USE(label__done_914_1725);
      int31_t t2006 = 42;
      int31_t t2007 = 0;
      bool t2008 = ConstexprInt31Equal(implicit_cast<int31_t>(t2006), implicit_cast<int31_t>(t2007));
      USE(implicit_cast<bool>(t2008));
      TNode<BoolT> t2009 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2008)));
      USE(implicit_cast<TNode<BoolT>>(t2009));
      Branch(implicit_cast<TNode<BoolT>>(t2009), label__True_603, label__False_604);
      BIND(label__True_603);
            TNode<Int32T> t2010 = UncheckedCast<Int32T>(FromConstexpr7ATint31(implicit_cast<int31_t>(t2001())));
      *t2005_913 = implicit_cast<TNode<Int32T>>(t2010);
      Goto(label__done_914_1725);
      BIND(label__False_604);
            TNode<Int32T> t2011 = UncheckedCast<Int32T>(FromConstexpr7ATint31(implicit_cast<int31_t>(t2002())));
      *t2005_913 = implicit_cast<TNode<Int32T>>(t2011);
      Goto(label__done_914_1725);
      BIND(label__done_914_1725);
    }
    TVARIABLE(Int32T, var1_334_impl);
    auto var1_334 = &var1_334_impl;
    USE(var1_334);
    *var1_334 = implicit_cast<TNode<Int32T>>((*t2005_913).value());
    // ../../test/torque/test-torque.tq:183:5
    auto t2012 = [=]() {
      int31_t t2014 = 1;
      return implicit_cast<int31_t>(t2014);
    };
    auto t2013 = [=]() {
      int31_t t2015 = 0;
      return implicit_cast<int31_t>(t2015);
    };
    TVARIABLE(Int32T, t2016_915_impl);
    auto t2016_915 = &t2016_915_impl;
    USE(t2016_915);
    {
      Label label__True_605_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_605 = &label__True_605_impl;
      USE(label__True_605);
      Label label__False_606_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_606 = &label__False_606_impl;
      USE(label__False_606);
      Label label__done_916_1726_impl(this, {t2016_915}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_916_1726 = &label__done_916_1726_impl;
      USE(label__done_916_1726);
      int31_t t2017 = 42;
      int31_t t2018 = 0;
      bool t2019 = ConstexprInt31Equal(implicit_cast<int31_t>(t2017), implicit_cast<int31_t>(t2018));
      USE(implicit_cast<bool>(t2019));
      TNode<BoolT> t2020 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2019)));
      USE(implicit_cast<TNode<BoolT>>(t2020));
      Branch(implicit_cast<TNode<BoolT>>(t2020), label__True_605, label__False_606);
      BIND(label__True_605);
            TNode<Int32T> t2021 = UncheckedCast<Int32T>(FromConstexpr7ATint31(implicit_cast<int31_t>(t2012())));
      *t2016_915 = implicit_cast<TNode<Int32T>>(t2021);
      Goto(label__done_916_1726);
      BIND(label__False_606);
            TNode<Int32T> t2022 = UncheckedCast<Int32T>(FromConstexpr7ATint31(implicit_cast<int31_t>(t2013())));
      *t2016_915 = implicit_cast<TNode<Int32T>>(t2022);
      Goto(label__done_916_1726);
      BIND(label__done_916_1726);
    }
    TVARIABLE(Int32T, var2_335_impl);
    auto var2_335 = &var2_335_impl;
    USE(var2_335);
    *var2_335 = implicit_cast<TNode<Int32T>>((*t2016_915).value());
    // ../../test/torque/test-torque.tq:184:5
    *_return_333 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1724);
  }
  BIND(label_macro_end_1724);
  return implicit_cast<TNode<Oddball>>((*_return_333).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_336_impl);
  auto _return_336 = &_return_336_impl;
  USE(_return_336);
  Label label_macro_end_1727_impl(this, {_return_336}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1727 = &label_macro_end_1727_impl;
  USE(label_macro_end_1727);
  // ../../test/torque/test-torque.tq:187:42
  {
    // ../../test/torque/test-torque.tq:188:5
    auto t2023 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2024 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2025_917_impl);
    auto t2025_917 = &t2025_917_impl;
    USE(t2025_917);
    {
      Label label__True_607_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_607 = &label__True_607_impl;
      USE(label__True_607);
      Label label__False_608_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_608 = &label__False_608_impl;
      USE(label__False_608);
      Label label__done_918_1728_impl(this, {t2025_917}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_918_1728 = &label__done_918_1728_impl;
      USE(label__done_918_1728);
      int31_t t2026 = 0;
      TNode<Smi> t2027 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2026)));
      TNode<BoolT> t2028 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t2027)));
      USE(implicit_cast<TNode<BoolT>>(t2028));
      Branch(implicit_cast<TNode<BoolT>>(t2028), label__True_607, label__False_608);
      BIND(label__True_607);
            TNode<BoolT> t2029 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2023())));
      *t2025_917 = implicit_cast<TNode<BoolT>>(t2029);
      Goto(label__done_918_1728);
      BIND(label__False_608);
            TNode<BoolT> t2030 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2024())));
      *t2025_917 = implicit_cast<TNode<BoolT>>(t2030);
      Goto(label__done_918_1728);
      BIND(label__done_918_1728);
    }
    TVARIABLE(BoolT, b_337_impl);
    auto b_337 = &b_337_impl;
    USE(b_337);
    *b_337 = implicit_cast<TNode<BoolT>>((*t2025_917).value());
    // ../../test/torque/test-torque.tq:189:5
    auto t2031 = [=]() {
      int31_t t2033 = 10;
      TNode<Smi> t2034 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2033)));
      TNode<Smi> t2035 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t2034)));
      USE(implicit_cast<TNode<Smi>>(t2035));
      return implicit_cast<TNode<Smi>>(t2035);
    };
    auto t2032 = [=]() {
      int31_t t2036 = 100;
      TNode<Smi> t2037 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2036)));
      TNode<Smi> t2038 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t2037)));
      USE(implicit_cast<TNode<Smi>>(t2038));
      return implicit_cast<TNode<Smi>>(t2038);
    };
    TVARIABLE(Smi, t2039_919_impl);
    auto t2039_919 = &t2039_919_impl;
    USE(t2039_919);
    {
      Label label__True_609_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_609 = &label__True_609_impl;
      USE(label__True_609);
      Label label__False_610_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_610 = &label__False_610_impl;
      USE(label__False_610);
      Label label__done_920_1729_impl(this, {t2039_919}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_920_1729 = &label__done_920_1729_impl;
      USE(label__done_920_1729);
      Branch(implicit_cast<TNode<BoolT>>((*b_337).value()), label__True_609, label__False_610);
      BIND(label__True_609);
            *t2039_919 = implicit_cast<TNode<Smi>>(t2031());
      Goto(label__done_920_1729);
      BIND(label__False_610);
            *t2039_919 = implicit_cast<TNode<Smi>>(t2032());
      Goto(label__done_920_1729);
      BIND(label__done_920_1729);
    }
    *_return_336 = implicit_cast<TNode<Smi>>((*t2039_919).value());
    Goto(label_macro_end_1727);
  }
  BIND(label_macro_end_1727);
  return implicit_cast<TNode<Smi>>((*_return_336).value());
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_1730_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1730 = &label_macro_end_1730_impl;
  USE(label_macro_end_1730);
  // ../../test/torque/test-torque.tq:192:50
  {
    // ../../test/torque/test-torque.tq:193:5
    TVARIABLE(Code, fptr1_338_impl);
    auto fptr1_338 = &fptr1_338_impl;
    USE(fptr1_338);
    *fptr1_338 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code()));
    // ../../test/torque/test-torque.tq:194:5
    TVARIABLE(Code, fptr2_339_impl);
    auto fptr2_339 = &fptr2_339_impl;
    USE(fptr2_339);
    *fptr2_339 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code()));
    // ../../test/torque/test-torque.tq:196:5
    Label label__True_611_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_611 = &label__True_611_impl;
    USE(label__True_611);
    Label label__False_612_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_612 = &label__False_612_impl;
    USE(label__False_612);
    int31_t t2040 = 0;
    TNode<Smi> t2041 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2040)));
    TNode<Object> t2042 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_338).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t2041)));
    USE(implicit_cast<TNode<Object>>(t2042));
    TNode<BoolT> t2043 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2042), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t2043));
    Branch(implicit_cast<TNode<BoolT>>(t2043), label__True_611, label__False_612);
    BIND(label__False_612);
    Print("assert 'fptr1(c, 0) == Null' failed at ../../test/torque/test-torque.tq:196:5");
    Unreachable();
    BIND(label__True_611);
    // ../../test/torque/test-torque.tq:197:5
    Label label__True_613_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_613 = &label__True_613_impl;
    USE(label__True_613);
    Label label__False_614_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_614 = &label__False_614_impl;
    USE(label__False_614);
    int31_t t2044 = 1;
    TNode<Smi> t2045 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2044)));
    TNode<Object> t2046 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_338).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t2045)));
    USE(implicit_cast<TNode<Object>>(t2046));
    TNode<BoolT> t2047 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2046), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t2047));
    Branch(implicit_cast<TNode<BoolT>>(t2047), label__True_613, label__False_614);
    BIND(label__False_614);
    Print("assert 'fptr1(c, 1) == Null' failed at ../../test/torque/test-torque.tq:197:5");
    Unreachable();
    BIND(label__True_613);
    // ../../test/torque/test-torque.tq:198:5
    Label label__True_615_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_615 = &label__True_615_impl;
    USE(label__True_615);
    Label label__False_616_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_616 = &label__False_616_impl;
    USE(label__False_616);
    TNode<Object> t2048 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_339).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t2048));
    TNode<BoolT> t2049 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2048), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2049));
    Branch(implicit_cast<TNode<BoolT>>(t2049), label__True_615, label__False_616);
    BIND(label__False_616);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:198:5");
    Unreachable();
    BIND(label__True_615);
    // ../../test/torque/test-torque.tq:199:5
    Label label__True_617_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_617 = &label__True_617_impl;
    USE(label__True_617);
    Label label__False_618_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_618 = &label__False_618_impl;
    USE(label__False_618);
    TNode<Object> t2050 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_339).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t2050));
    TNode<BoolT> t2051 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2050), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2051));
    Branch(implicit_cast<TNode<BoolT>>(t2051), label__True_617, label__False_618);
    BIND(label__False_618);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:199:5");
    Unreachable();
    BIND(label__True_617);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_340_impl);
  auto _return_340 = &_return_340_impl;
  USE(_return_340);
  Label label_macro_end_1731_impl(this, {_return_340}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1731 = &label_macro_end_1731_impl;
  USE(label_macro_end_1731);
  // ../../test/torque/test-torque.tq:203:42
  {
    // ../../test/torque/test-torque.tq:204:5
    *_return_340 = implicit_cast<TNode<Code>>(p_x);
    Goto(label_macro_end_1731);
  }
  BIND(label_macro_end_1731);
  return implicit_cast<TNode<Code>>((*_return_340).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_341_impl);
  auto _return_341 = &_return_341_impl;
  USE(_return_341);
  Label label_macro_end_1732_impl(this, {_return_341}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1732 = &label_macro_end_1732_impl;
  USE(label_macro_end_1732);
  // ../../test/torque/test-torque.tq:207:56
  {
    // ../../test/torque/test-torque.tq:208:5
    {
      Label label__True_619_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_619 = &label__True_619_impl;
      USE(label__True_619);
      Label label__False_620_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_620 = &label__False_620_impl;
      USE(label__False_620);
      TNode<BoolT> t2052 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_n)));
      USE(implicit_cast<TNode<BoolT>>(t2052));
      Branch(implicit_cast<TNode<BoolT>>(t2052), label__True_619, label__False_620);
      if (label__True_619->is_used())
      {
        BIND(label__True_619);
        // ../../test/torque/test-torque.tq:208:25
        {
          // ../../test/torque/test-torque.tq:209:7
          TNode<Smi> t2053 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_n)));
          USE(implicit_cast<TNode<Smi>>(t2053));
          TVARIABLE(Smi, m_342_impl);
          auto m_342 = &m_342_impl;
          USE(m_342);
          *m_342 = implicit_cast<TNode<Smi>>(t2053);
          // ../../test/torque/test-torque.tq:211:7
          Label label__True_621_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_621 = &label__True_621_impl;
          USE(label__True_621);
          Label label__False_622_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_622 = &label__False_622_impl;
          USE(label__False_622);
          TNode<Smi> t2054 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>((*m_342).value())));
          USE(implicit_cast<TNode<Smi>>(t2054));
          int31_t t2055 = 11;
          TNode<Smi> t2056 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2055)));
          TNode<BoolT> t2057 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2054), implicit_cast<TNode<Smi>>(t2056)));
          USE(implicit_cast<TNode<BoolT>>(t2057));
          Branch(implicit_cast<TNode<BoolT>>(t2057), label__True_621, label__False_622);
          BIND(label__False_622);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../../test/torque/test-torque.tq:211:7");
          Unreachable();
          BIND(label__True_621);
          // ../../test/torque/test-torque.tq:212:7
          *_return_341 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1732);
        }
      }
      BIND(label__False_620);
    }
    // ../../test/torque/test-torque.tq:214:5
    *_return_341 = implicit_cast<TNode<Oddball>>(False());
    Goto(label_macro_end_1732);
  }
  BIND(label_macro_end_1732);
  return implicit_cast<TNode<Oddball>>((*_return_341).value());
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_1733_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1733 = &label_macro_end_1733_impl;
  USE(label_macro_end_1733);
  // ../../test/torque/test-torque.tq:217:26
  {
    // ../../test/torque/test-torque.tq:218:5
    Label label__True_623_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_623 = &label__True_623_impl;
    USE(label__True_623);
    Label label__False_624_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_624 = &label__False_624_impl;
    USE(label__False_624);
    int31_t t2058 = 0xffff;
    TNode<IntPtrT> t2059 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<int31_t>(t2058)));
    USE(implicit_cast<TNode<IntPtrT>>(t2059));
    int31_t t2060 = 1;
    TNode<IntPtrT> t2061 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2060)));
    TNode<IntPtrT> t2062 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t2059), implicit_cast<TNode<IntPtrT>>(t2061)));
    USE(implicit_cast<TNode<IntPtrT>>(t2062));
    int31_t t2063 = 0x10000;
    TNode<IntPtrT> t2064 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2063)));
    TNode<BoolT> t2065 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t2062), implicit_cast<TNode<IntPtrT>>(t2064)));
    USE(implicit_cast<TNode<BoolT>>(t2065));
    Branch(implicit_cast<TNode<BoolT>>(t2065), label__True_623, label__False_624);
    BIND(label__False_624);
    Print("assert 'Convert<intptr>(0xffff) + 1 == 0x10000' failed at ../../test/torque/test-torque.tq:218:5");
    Unreachable();
    BIND(label__True_623);
    // ../../test/torque/test-torque.tq:219:5
    Label label__True_625_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_625 = &label__True_625_impl;
    USE(label__True_625);
    Label label__False_626_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_626 = &label__False_626_impl;
    USE(label__False_626);
    int31_t t2066 = -0xffff;
    TNode<IntPtrT> t2067 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<int31_t>(t2066)));
    USE(implicit_cast<TNode<IntPtrT>>(t2067));
    int31_t t2068 = -65535;
    TNode<IntPtrT> t2069 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2068)));
    TNode<BoolT> t2070 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t2067), implicit_cast<TNode<IntPtrT>>(t2069)));
    USE(implicit_cast<TNode<BoolT>>(t2070));
    Branch(implicit_cast<TNode<BoolT>>(t2070), label__True_625, label__False_626);
    BIND(label__False_626);
    Print("assert 'Convert<intptr>(-0xffff) == -65535' failed at ../../test/torque/test-torque.tq:219:5");
    Unreachable();
    BIND(label__True_625);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_1734_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1734 = &label_macro_end_1734_impl;
  USE(label_macro_end_1734);
  // ../../test/torque/test-torque.tq:222:46
  {
    // ../../test/torque/test-torque.tq:223:5
    int32_t t2071 = 0x40000000;
    TVARIABLE(Int32T, x_343_impl);
    auto x_343 = &x_343_impl;
    USE(x_343);
    TNode<Int32T> t2072 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int32_t>(t2071)));
    *x_343 = implicit_cast<TNode<Int32T>>(t2072);
    // ../../test/torque/test-torque.tq:224:5
    int32_t t2073 = 0x7fffffff;
    TVARIABLE(Int32T, y_344_impl);
    auto y_344 = &y_344_impl;
    USE(y_344);
    TNode<Int32T> t2074 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int32_t>(t2073)));
    *y_344 = implicit_cast<TNode<Int32T>>(t2074);
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_1735_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1735 = &label_macro_end_1735_impl;
  USE(label_macro_end_1735);
  // ../../test/torque/test-torque.tq:227:31
  {
    // ../../test/torque/test-torque.tq:228:5
    int31_t t2075 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_345_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_345 = &someVeryLongVariableNameThatWillCauseLineBreaks_345_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_345);
    TNode<Smi> t2076 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2075)));
    *someVeryLongVariableNameThatWillCauseLineBreaks_345 = implicit_cast<TNode<Smi>>(t2076);
    // ../../test/torque/test-torque.tq:229:5
    Label label__True_627_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_627 = &label__True_627_impl;
    USE(label__True_627);
    Label label__False_628_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_628 = &label__False_628_impl;
    USE(label__False_628);
    Label label__True_629_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_629 = &label__True_629_impl;
    USE(label__True_629);
    int31_t t2077 = 0;
    TNode<Smi> t2078 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2077)));
    TNode<BoolT> t2079 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_345).value()), implicit_cast<TNode<Smi>>(t2078)));
    USE(implicit_cast<TNode<BoolT>>(t2079));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t2079), label__False_628);
    int31_t t2080 = 10;
    TNode<Smi> t2081 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2080)));
    TNode<BoolT> t2082 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_345).value()), implicit_cast<TNode<Smi>>(t2081)));
    USE(implicit_cast<TNode<BoolT>>(t2082));
Branch(implicit_cast<TNode<BoolT>>(t2082), label__True_627, label__False_628);
    BIND(label__False_628);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../../test/torque/test-torque.tq:229:5");
    Unreachable();
    BIND(label__True_627);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_1736_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1736 = &label_macro_end_1736_impl;
  USE(label_macro_end_1736);
  // ../../test/torque/test-torque.tq:234:31
  {
    // ../../test/torque/test-torque.tq:235:5
    const char* t2083 = "Hello, World!\n";
    Print(implicit_cast<const char*>(t2083));
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t2084 = 5;
  return implicit_cast<int31_t>(t2084);
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t2085 = 4;
  TNode<IntPtrT> t2086 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2085)));
  return implicit_cast<TNode<IntPtrT>>(t2086);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t2087 = 3;
  TNode<Smi> t2088 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2087)));
  return implicit_cast<TNode<Smi>>(t2088);
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_1737_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1737 = &label_macro_end_1737_impl;
  USE(label_macro_end_1737);
  // ../../test/torque/test-torque.tq:242:35
  {
    // ../../test/torque/test-torque.tq:243:5
    Label label__True_630_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_630 = &label__True_630_impl;
    USE(label__True_630);
    Label label__False_631_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_631 = &label__False_631_impl;
    USE(label__False_631);
    int31_t t2089 = 5;
    TNode<Int32T> t2090 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(t2089)));
    USE(implicit_cast<TNode<Int32T>>(t2090));
    TNode<Int32T> t2091 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(kConstexprConst())));
    TNode<BoolT> t2092 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2091), implicit_cast<TNode<Int32T>>(t2090)));
    USE(implicit_cast<TNode<BoolT>>(t2092));
    Branch(implicit_cast<TNode<BoolT>>(t2092), label__True_630, label__False_631);
    BIND(label__False_631);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../../test/torque/test-torque.tq:243:5");
    Unreachable();
    BIND(label__True_630);
    // ../../test/torque/test-torque.tq:244:5
    Label label__True_632_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_632 = &label__True_632_impl;
    USE(label__True_632);
    Label label__False_633_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_633 = &label__False_633_impl;
    USE(label__False_633);
    int31_t t2093 = 4;
    TNode<IntPtrT> t2094 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2093)));
    TNode<BoolT> t2095 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(kIntptrConst()), implicit_cast<TNode<IntPtrT>>(t2094)));
    USE(implicit_cast<TNode<BoolT>>(t2095));
    Branch(implicit_cast<TNode<BoolT>>(t2095), label__True_632, label__False_633);
    BIND(label__False_633);
    Print("assert 'kIntptrConst == 4' failed at ../../test/torque/test-torque.tq:244:5");
    Unreachable();
    BIND(label__True_632);
    // ../../test/torque/test-torque.tq:245:5
    Label label__True_634_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_634 = &label__True_634_impl;
    USE(label__True_634);
    Label label__False_635_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_635 = &label__False_635_impl;
    USE(label__False_635);
    int31_t t2096 = 3;
    TNode<Smi> t2097 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2096)));
    TNode<BoolT> t2098 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(kSmiConst()), implicit_cast<TNode<Smi>>(t2097)));
    USE(implicit_cast<TNode<BoolT>>(t2098));
    Branch(implicit_cast<TNode<BoolT>>(t2098), label__True_634, label__False_635);
    BIND(label__False_635);
    Print("assert 'kSmiConst == 3' failed at ../../test/torque/test-torque.tq:245:5");
    Unreachable();
    BIND(label__True_634);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_1738_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1738 = &label_macro_end_1738_impl;
  USE(label_macro_end_1738);
  // ../../test/torque/test-torque.tq:248:34
  {
    // ../../test/torque/test-torque.tq:249:5
    int31_t t2099 = 3;
    int31_t x_921_impl;
    auto x_921 = &x_921_impl;
    USE(x_921);
    *x_921 = implicit_cast<int31_t>(t2099);
    // ../../test/torque/test-torque.tq:250:5
    TNode<Smi> xSmi_922_impl;
    auto xSmi_922 = &xSmi_922_impl;
    USE(xSmi_922);
    TNode<Smi> t2100 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>((*x_921))));
    *xSmi_922 = implicit_cast<TNode<Smi>>(t2100);
    // ../../test/torque/test-torque.tq:251:5
    {
      // ../../test/torque/test-torque.tq:252:7
      int31_t t2101 = 1;
      TNode<Smi> t2102 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2101)));
      USE(implicit_cast<TNode<Smi>>(t2102));
      TNode<Smi> t2103 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>((*x_921))));
      TNode<Smi> t2104 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2103), implicit_cast<TNode<Smi>>(t2102)));
      USE(implicit_cast<TNode<Smi>>(t2104));
      TNode<Smi> x_923_impl;
      auto x_923 = &x_923_impl;
      USE(x_923);
      *x_923 = implicit_cast<TNode<Smi>>(t2104);
      // ../../test/torque/test-torque.tq:253:7
      Label label__True_636_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_636 = &label__True_636_impl;
      USE(label__True_636);
      Label label__False_637_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_637 = &label__False_637_impl;
      USE(label__False_637);
      int31_t t2105 = 1;
      TNode<Smi> t2106 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2105)));
      TNode<Smi> t2107 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*xSmi_922)), implicit_cast<TNode<Smi>>(t2106)));
      USE(implicit_cast<TNode<Smi>>(t2107));
      TNode<BoolT> t2108 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_923)), implicit_cast<TNode<Smi>>(t2107)));
      USE(implicit_cast<TNode<BoolT>>(t2108));
      Branch(implicit_cast<TNode<BoolT>>(t2108), label__True_636, label__False_637);
      BIND(label__False_637);
      Print("assert 'x == xSmi + 1' failed at ../../test/torque/test-torque.tq:253:7");
      Unreachable();
      BIND(label__True_636);
      // ../../test/torque/test-torque.tq:254:7
      TNode<Smi> xSmi_924_impl;
      auto xSmi_924 = &xSmi_924_impl;
      USE(xSmi_924);
      *xSmi_924 = implicit_cast<TNode<Smi>>((*x_923));
      // ../../test/torque/test-torque.tq:255:7
      Label label__True_638_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_638 = &label__True_638_impl;
      USE(label__True_638);
      Label label__False_639_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_639 = &label__False_639_impl;
      USE(label__False_639);
      TNode<BoolT> t2109 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_923)), implicit_cast<TNode<Smi>>((*xSmi_924))));
      USE(implicit_cast<TNode<BoolT>>(t2109));
      Branch(implicit_cast<TNode<BoolT>>(t2109), label__True_638, label__False_639);
      BIND(label__False_639);
      Print("assert 'x == xSmi' failed at ../../test/torque/test-torque.tq:255:7");
      Unreachable();
      BIND(label__True_638);
      // ../../test/torque/test-torque.tq:256:7
      Label label__True_640_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_640 = &label__True_640_impl;
      USE(label__True_640);
      Label label__False_641_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_641 = &label__False_641_impl;
      USE(label__False_641);
      int31_t t2110 = 4;
      TNode<Smi> t2111 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2110)));
      TNode<BoolT> t2112 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_923)), implicit_cast<TNode<Smi>>(t2111)));
      USE(implicit_cast<TNode<BoolT>>(t2112));
      Branch(implicit_cast<TNode<BoolT>>(t2112), label__True_640, label__False_641);
      BIND(label__False_641);
      Print("assert 'x == 4' failed at ../../test/torque/test-torque.tq:256:7");
      Unreachable();
      BIND(label__True_640);
    }
    // ../../test/torque/test-torque.tq:258:5
    Label label__True_642_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_642 = &label__True_642_impl;
    USE(label__True_642);
    Label label__False_643_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_643 = &label__False_643_impl;
    USE(label__False_643);
    int31_t t2113 = 3;
    TNode<Smi> t2114 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2113)));
    TNode<BoolT> t2115 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*xSmi_922)), implicit_cast<TNode<Smi>>(t2114)));
    USE(implicit_cast<TNode<BoolT>>(t2115));
    Branch(implicit_cast<TNode<BoolT>>(t2115), label__True_642, label__False_643);
    BIND(label__False_643);
    Print("assert 'xSmi == 3' failed at ../../test/torque/test-torque.tq:258:5");
    Unreachable();
    BIND(label__True_642);
    // ../../test/torque/test-torque.tq:259:5
    Label label__True_644_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_644 = &label__True_644_impl;
    USE(label__True_644);
    Label label__False_645_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_645 = &label__False_645_impl;
    USE(label__False_645);
    TNode<Smi> t2116 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>((*x_921))));
    TNode<BoolT> t2117 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2116), implicit_cast<TNode<Smi>>((*xSmi_922))));
    USE(implicit_cast<TNode<BoolT>>(t2117));
    Branch(implicit_cast<TNode<BoolT>>(t2117), label__True_644, label__False_645);
    BIND(label__False_645);
    Print("assert 'x == xSmi' failed at ../../test/torque/test-torque.tq:259:5");
    Unreachable();
    BIND(label__True_644);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_346_impl);
  auto _return_346 = &_return_346_impl;
  USE(_return_346);
  Label label_macro_end_1739_impl(this, {_return_346}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1739 = &label_macro_end_1739_impl;
  USE(label_macro_end_1739);
  // ../../test/torque/test-torque.tq:273:42
  {
    // ../../test/torque/test-torque.tq:274:5
    *_return_346 = implicit_cast<TNode<Smi>>(p_i.i);
    Goto(label_macro_end_1739);
  }
  BIND(label_macro_end_1739);
  return implicit_cast<TNode<Smi>>((*_return_346).value());
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_348_impl);
  auto _return_indexes_348 = &_return_indexes_348_impl;
  USE(_return_indexes_348);
  TVARIABLE(Smi, _return_i_349_impl);
  auto _return_i_349 = &_return_i_349_impl;
  USE(_return_i_349);
  TVARIABLE(Number, _return_k_350_impl);
  auto _return_k_350 = &_return_k_350_impl;
  USE(_return_k_350);
  Label label_macro_end_1740_impl(this, {_return_i_349, _return_indexes_348, _return_k_350}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1740 = &label_macro_end_1740_impl;
  USE(label_macro_end_1740);
  // ../../test/torque/test-torque.tq:277:36
  {
    // ../../test/torque/test-torque.tq:278:5
    TNode<FixedArray> t2118 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2118));
    int31_t t2119 = 27;
    TNode<Smi> t2120 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2119)));
    int31_t t2121 = 31;
    TNode<Number> t2122 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2121)));
    TestStructA t2123 = {implicit_cast<TNode<FixedArray>>(t2118), implicit_cast<TNode<Smi>>(t2120), implicit_cast<TNode<Number>>(t2122)};
    *_return_indexes_348 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2123).indexes);
    *_return_i_349 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2123).i);
    *_return_k_350 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2123).k);
    Goto(label_macro_end_1740);
  }
  BIND(label_macro_end_1740);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_348).value()), implicit_cast<TNode<Smi>>((*_return_i_349).value()), implicit_cast<TNode<Number>>((*_return_k_350).value())};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_352_impl);
  auto _return_indexes_352 = &_return_indexes_352_impl;
  USE(_return_indexes_352);
  TVARIABLE(Smi, _return_i_353_impl);
  auto _return_i_353 = &_return_i_353_impl;
  USE(_return_i_353);
  TVARIABLE(Number, _return_k_354_impl);
  auto _return_k_354 = &_return_k_354_impl;
  USE(_return_k_354);
  Label label_macro_end_1741_impl(this, {_return_i_353, _return_indexes_352, _return_k_354}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1741 = &label_macro_end_1741_impl;
  USE(label_macro_end_1741);
  // ../../test/torque/test-torque.tq:281:36
  {
    // ../../test/torque/test-torque.tq:282:5
    TNode<FixedArray> t2124 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2124));
    int31_t t2125 = 13;
    TNode<Smi> t2126 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2125)));
    int31_t t2127 = 5;
    TNode<Number> t2128 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2127)));
    TestStructA t2129 = {implicit_cast<TNode<FixedArray>>(t2124), implicit_cast<TNode<Smi>>(t2126), implicit_cast<TNode<Number>>(t2128)};
    TVARIABLE(FixedArray, a_indexes_356_impl);
    auto a_indexes_356 = &a_indexes_356_impl;
    USE(a_indexes_356);
    TVARIABLE(Smi, a_i_357_impl);
    auto a_i_357 = &a_i_357_impl;
    USE(a_i_357);
    TVARIABLE(Number, a_k_358_impl);
    auto a_k_358 = &a_k_358_impl;
    USE(a_k_358);
    *a_indexes_356 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2129).indexes);
    *a_i_357 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2129).i);
    *a_k_358 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2129).k);
    // ../../test/torque/test-torque.tq:284:5
    TVARIABLE(FixedArray, b_indexes_360_impl);
    auto b_indexes_360 = &b_indexes_360_impl;
    USE(b_indexes_360);
    TVARIABLE(Smi, b_i_361_impl);
    auto b_i_361 = &b_i_361_impl;
    USE(b_i_361);
    TVARIABLE(Number, b_k_362_impl);
    auto b_k_362 = &b_k_362_impl;
    USE(b_k_362);
    *b_indexes_360 = implicit_cast<TNode<FixedArray>>((*a_indexes_356).value());
    *b_i_361 = implicit_cast<TNode<Smi>>((*a_i_357).value());
    *b_k_362 = implicit_cast<TNode<Number>>((*a_k_358).value());
    // ../../test/torque/test-torque.tq:285:5
    TestStructA t2130 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2130));
    TVARIABLE(FixedArray, c_indexes_364_impl);
    auto c_indexes_364 = &c_indexes_364_impl;
    USE(c_indexes_364);
    TVARIABLE(Smi, c_i_365_impl);
    auto c_i_365 = &c_i_365_impl;
    USE(c_i_365);
    TVARIABLE(Number, c_k_366_impl);
    auto c_k_366 = &c_k_366_impl;
    USE(c_k_366);
    *c_indexes_364 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2130).indexes);
    *c_i_365 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2130).i);
    *c_k_366 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2130).k);
    // ../../test/torque/test-torque.tq:286:5
    TNode<Smi> t2131 = UncheckedCast<Smi>(TestStruct1(TestStructA{implicit_cast<TNode<FixedArray>>((*c_indexes_364).value()), implicit_cast<TNode<Smi>>((*c_i_365).value()), implicit_cast<TNode<Number>>((*c_k_366).value())}));
    USE(implicit_cast<TNode<Smi>>(t2131));
    *a_i_357 = implicit_cast<TNode<Smi>>(t2131);
    // ../../test/torque/test-torque.tq:287:5
    *a_k_358 = implicit_cast<TNode<Number>>((*a_i_357).value());
    // ../../test/torque/test-torque.tq:288:5
    TVARIABLE(FixedArray, d_x_indexes_369_impl);
    auto d_x_indexes_369 = &d_x_indexes_369_impl;
    USE(d_x_indexes_369);
    TVARIABLE(Smi, d_x_i_370_impl);
    auto d_x_i_370 = &d_x_i_370_impl;
    USE(d_x_i_370);
    TVARIABLE(Number, d_x_k_371_impl);
    auto d_x_k_371 = &d_x_k_371_impl;
    USE(d_x_k_371);
    TVARIABLE(Smi, d_y_372_impl);
    auto d_y_372 = &d_y_372_impl;
    USE(d_y_372);
    // ../../test/torque/test-torque.tq:289:5
    *d_x_indexes_369 = implicit_cast<TNode<FixedArray>>((*a_indexes_356).value());
    *d_x_i_370 = implicit_cast<TNode<Smi>>((*a_i_357).value());
    *d_x_k_371 = implicit_cast<TNode<Number>>((*a_k_358).value());
    // ../../test/torque/test-torque.tq:290:5
    int31_t t2132 = 7;
    TNode<Smi> t2133 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2132)));
    TestStructB t2134 = {TestStructA{implicit_cast<TNode<FixedArray>>((*a_indexes_356).value()), implicit_cast<TNode<Smi>>((*a_i_357).value()), implicit_cast<TNode<Number>>((*a_k_358).value())}, implicit_cast<TNode<Smi>>(t2133)};
    *d_x_indexes_369 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2134).x).indexes);
    *d_x_i_370 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2134).x).i);
    *d_x_k_371 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2134).x).k);
    *d_y_372 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructB>(t2134).y);
    // ../../test/torque/test-torque.tq:291:5
    TVARIABLE(FixedArray, e_indexes_374_impl);
    auto e_indexes_374 = &e_indexes_374_impl;
    USE(e_indexes_374);
    TVARIABLE(Smi, e_i_375_impl);
    auto e_i_375 = &e_i_375_impl;
    USE(e_i_375);
    TVARIABLE(Number, e_k_376_impl);
    auto e_k_376 = &e_k_376_impl;
    USE(e_k_376);
    *e_indexes_374 = implicit_cast<TNode<FixedArray>>((*d_x_indexes_369).value());
    *e_i_375 = implicit_cast<TNode<Smi>>((*d_x_i_370).value());
    *e_k_376 = implicit_cast<TNode<Number>>((*d_x_k_371).value());
    // ../../test/torque/test-torque.tq:292:5
    TNode<FixedArray> t2135 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2135));
    int31_t t2136 = 27;
    TNode<Smi> t2137 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2136)));
    int31_t t2138 = 31;
    TNode<Number> t2139 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2138)));
    TestStructA t2140 = {implicit_cast<TNode<FixedArray>>(t2135), implicit_cast<TNode<Smi>>(t2137), implicit_cast<TNode<Number>>(t2139)};
    TVARIABLE(Smi, f_377_impl);
    auto f_377 = &f_377_impl;
    USE(f_377);
    *f_377 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2140).i);
    // ../../test/torque/test-torque.tq:294:5
    TestStructA t2141 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2141));
    *f_377 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2141).i);
    // ../../test/torque/test-torque.tq:295:5
    *_return_indexes_352 = implicit_cast<TNode<FixedArray>>((*a_indexes_356).value());
    *_return_i_353 = implicit_cast<TNode<Smi>>((*a_i_357).value());
    *_return_k_354 = implicit_cast<TNode<Number>>((*a_k_358).value());
    Goto(label_macro_end_1741);
  }
  BIND(label_macro_end_1741);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_352).value()), implicit_cast<TNode<Smi>>((*_return_i_353).value()), implicit_cast<TNode<Number>>((*_return_k_354).value())};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_380_impl);
  auto _return_x_indexes_380 = &_return_x_indexes_380_impl;
  USE(_return_x_indexes_380);
  TVARIABLE(Smi, _return_x_i_381_impl);
  auto _return_x_i_381 = &_return_x_i_381_impl;
  USE(_return_x_i_381);
  TVARIABLE(Number, _return_x_k_382_impl);
  auto _return_x_k_382 = &_return_x_k_382_impl;
  USE(_return_x_k_382);
  TVARIABLE(FixedArray, _return_y_indexes_384_impl);
  auto _return_y_indexes_384 = &_return_y_indexes_384_impl;
  USE(_return_y_indexes_384);
  TVARIABLE(Smi, _return_y_i_385_impl);
  auto _return_y_i_385 = &_return_y_i_385_impl;
  USE(_return_y_i_385);
  TVARIABLE(Number, _return_y_k_386_impl);
  auto _return_y_k_386 = &_return_y_k_386_impl;
  USE(_return_y_k_386);
  Label label_macro_end_1742_impl(this, {_return_x_i_381, _return_x_indexes_380, _return_x_k_382, _return_y_i_385, _return_y_indexes_384, _return_y_k_386}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1742 = &label_macro_end_1742_impl;
  USE(label_macro_end_1742);
  // ../../test/torque/test-torque.tq:303:36
  {
    // ../../test/torque/test-torque.tq:304:5
    TestStructA t2142 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2142));
    TestStructA t2143 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2143));
    TestStructC t2144 = {implicit_cast<TestStructA>(t2142), implicit_cast<TestStructA>(t2143)};
    *_return_x_indexes_380 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).x).indexes);
    *_return_x_i_381 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).x).i);
    *_return_x_k_382 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).x).k);
    *_return_y_indexes_384 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).y).indexes);
    *_return_y_i_385 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).y).i);
    *_return_y_k_386 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2144).y).k);
    Goto(label_macro_end_1742);
  }
  BIND(label_macro_end_1742);
  return TestStructC{TestStructA{implicit_cast<TNode<FixedArray>>((*_return_x_indexes_380).value()), implicit_cast<TNode<Smi>>((*_return_x_i_381).value()), implicit_cast<TNode<Number>>((*_return_x_k_382).value())}, TestStructA{implicit_cast<TNode<FixedArray>>((*_return_y_indexes_384).value()), implicit_cast<TNode<Smi>>((*_return_y_i_385).value()), implicit_cast<TNode<Number>>((*_return_y_k_386).value())}};
}

void TestBuiltinsFromDSLAssembler::TestForLoop() {
  Label label_macro_end_1743_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1743 = &label_macro_end_1743_impl;
  USE(label_macro_end_1743);
  // ../../test/torque/test-torque.tq:309:23
  {
    // ../../test/torque/test-torque.tq:310:5
    int31_t t2145 = 0;
    TVARIABLE(Smi, sum_387_impl);
    auto sum_387 = &sum_387_impl;
    USE(sum_387);
    TNode<Smi> t2146 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2145)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2146);
    // ../../test/torque/test-torque.tq:311:5
    int31_t t2147 = 0;
    TVARIABLE(Smi, i_388_impl);
    auto i_388 = &i_388_impl;
    USE(i_388);
    TNode<Smi> t2148 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2147)));
    *i_388 = implicit_cast<TNode<Smi>>(t2148);
    Label label__True_646_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_646 = &label__True_646_impl;
    USE(label__True_646);
    Label label__False_647_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_647 = &label__False_647_impl;
    USE(label__False_647);
    Label label_header_925_1744_impl(this, {i_388, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_925_1744 = &label_header_925_1744_impl;
    USE(label_header_925_1744);
    Goto(label_header_925_1744);
    BIND(label_header_925_1744);
    Label label_action_926_1745_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_926_1745 = &label_action_926_1745_impl;
    USE(label_action_926_1745);
    int31_t t2149 = 5;
    TNode<Smi> t2150 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2149)));
    TNode<BoolT> t2151 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_388).value()), implicit_cast<TNode<Smi>>(t2150)));
    USE(implicit_cast<TNode<BoolT>>(t2151));
    Branch(implicit_cast<TNode<BoolT>>(t2151), label__True_646, label__False_647);
    if (label__True_646->is_used())
    {
      BIND(label__True_646);
      // ../../test/torque/test-torque.tq:311:38
      TNode<Smi> t2152 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*i_388).value())));
      *sum_387 = implicit_cast<TNode<Smi>>(t2152);
      Goto(label_action_926_1745);
    }
    {
      BIND(label_action_926_1745);
      TNode<Smi> t2153 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2154 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_388).value()), implicit_cast<TNode<Smi>>(t2153)));
      *i_388 = implicit_cast<TNode<Smi>>(t2154);
      Goto(label_header_925_1744);
    }
    BIND(label__False_647);
    // ../../test/torque/test-torque.tq:312:5
    Label label__True_648_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_648 = &label__True_648_impl;
    USE(label__True_648);
    Label label__False_649_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_649 = &label__False_649_impl;
    USE(label__False_649);
    int31_t t2155 = 10;
    TNode<Smi> t2156 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2155)));
    TNode<BoolT> t2157 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2156)));
    USE(implicit_cast<TNode<BoolT>>(t2157));
    Branch(implicit_cast<TNode<BoolT>>(t2157), label__True_648, label__False_649);
    BIND(label__False_649);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:312:5");
    Unreachable();
    BIND(label__True_648);
    // ../../test/torque/test-torque.tq:314:5
    int31_t t2158 = 0;
    TNode<Smi> t2159 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2158)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2159);
    // ../../test/torque/test-torque.tq:315:5
    int31_t t2160 = 0;
    TVARIABLE(Smi, j_389_impl);
    auto j_389 = &j_389_impl;
    USE(j_389);
    TNode<Smi> t2161 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2160)));
    *j_389 = implicit_cast<TNode<Smi>>(t2161);
    // ../../test/torque/test-torque.tq:316:5
    Label label__True_650_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_650 = &label__True_650_impl;
    USE(label__True_650);
    Label label__False_651_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_651 = &label__False_651_impl;
    USE(label__False_651);
    Label label_header_927_1746_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_927_1746 = &label_header_927_1746_impl;
    USE(label_header_927_1746);
    Goto(label_header_927_1746);
    BIND(label_header_927_1746);
    Label label_action_928_1747_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_928_1747 = &label_action_928_1747_impl;
    USE(label_action_928_1747);
    int31_t t2162 = 5;
    TNode<Smi> t2163 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2162)));
    TNode<BoolT> t2164 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2163)));
    USE(implicit_cast<TNode<BoolT>>(t2164));
    Branch(implicit_cast<TNode<BoolT>>(t2164), label__True_650, label__False_651);
    if (label__True_650->is_used())
    {
      BIND(label__True_650);
      // ../../test/torque/test-torque.tq:316:24
      TNode<Smi> t2165 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*j_389).value())));
      *sum_387 = implicit_cast<TNode<Smi>>(t2165);
      Goto(label_action_928_1747);
    }
    {
      BIND(label_action_928_1747);
      TNode<Smi> t2166 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2167 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2166)));
      *j_389 = implicit_cast<TNode<Smi>>(t2167);
      Goto(label_header_927_1746);
    }
    BIND(label__False_651);
    // ../../test/torque/test-torque.tq:317:5
    Label label__True_652_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_652 = &label__True_652_impl;
    USE(label__True_652);
    Label label__False_653_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_653 = &label__False_653_impl;
    USE(label__False_653);
    int31_t t2168 = 10;
    TNode<Smi> t2169 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2168)));
    TNode<BoolT> t2170 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2169)));
    USE(implicit_cast<TNode<BoolT>>(t2170));
    Branch(implicit_cast<TNode<BoolT>>(t2170), label__True_652, label__False_653);
    BIND(label__False_653);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:317:5");
    Unreachable();
    BIND(label__True_652);
    // ../../test/torque/test-torque.tq:319:5
    int31_t t2171 = 0;
    TNode<Smi> t2172 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2171)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2172);
    // ../../test/torque/test-torque.tq:320:5
    int31_t t2173 = 0;
    TNode<Smi> t2174 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2173)));
    *j_389 = implicit_cast<TNode<Smi>>(t2174);
    // ../../test/torque/test-torque.tq:321:5
    Label label__True_654_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_654 = &label__True_654_impl;
    USE(label__True_654);
    Label label__False_655_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_655 = &label__False_655_impl;
    USE(label__False_655);
    Label label_header_929_1748_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_929_1748 = &label_header_929_1748_impl;
    USE(label_header_929_1748);
    Goto(label_header_929_1748);
    BIND(label_header_929_1748);
    int31_t t2175 = 5;
    TNode<Smi> t2176 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2175)));
    TNode<BoolT> t2177 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2176)));
    USE(implicit_cast<TNode<BoolT>>(t2177));
    Branch(implicit_cast<TNode<BoolT>>(t2177), label__True_654, label__False_655);
    if (label__True_654->is_used())
    {
      BIND(label__True_654);
      // ../../test/torque/test-torque.tq:321:20
      TNode<Smi> t2178 = implicit_cast<TNode<Smi>>((*j_389).value());
      USE(t2178);
      TNode<Smi> t2179 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2180 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2179)));
      *j_389 = implicit_cast<TNode<Smi>>(t2180);
      TNode<Smi> t2181 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2178)));
      *sum_387 = implicit_cast<TNode<Smi>>(t2181);
      Goto(label_header_929_1748);
    }
    BIND(label__False_655);
    // ../../test/torque/test-torque.tq:322:5
    Label label__True_656_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_656 = &label__True_656_impl;
    USE(label__True_656);
    Label label__False_657_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_657 = &label__False_657_impl;
    USE(label__False_657);
    int31_t t2182 = 10;
    TNode<Smi> t2183 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2182)));
    TNode<BoolT> t2184 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2183)));
    USE(implicit_cast<TNode<BoolT>>(t2184));
    Branch(implicit_cast<TNode<BoolT>>(t2184), label__True_656, label__False_657);
    BIND(label__False_657);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:322:5");
    Unreachable();
    BIND(label__True_656);
    // ../../test/torque/test-torque.tq:325:5
    int31_t t2185 = 0;
    TNode<Smi> t2186 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2185)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2186);
    // ../../test/torque/test-torque.tq:326:5
    int31_t t2187 = 0;
    TVARIABLE(Smi, i_390_impl);
    auto i_390 = &i_390_impl;
    USE(i_390);
    TNode<Smi> t2188 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2187)));
    *i_390 = implicit_cast<TNode<Smi>>(t2188);
    Label label__True_658_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_658 = &label__True_658_impl;
    USE(label__True_658);
    Label label__False_659_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_659 = &label__False_659_impl;
    USE(label__False_659);
    Label label_header_930_1749_impl(this, {i_390, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_930_1749 = &label_header_930_1749_impl;
    USE(label_header_930_1749);
    Goto(label_header_930_1749);
    BIND(label_header_930_1749);
    Label label_action_931_1750_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_931_1750 = &label_action_931_1750_impl;
    USE(label_action_931_1750);
    Goto(label__True_658);
    if (label__True_658->is_used())
    {
      BIND(label__True_658);
      // ../../test/torque/test-torque.tq:326:32
      {
        // ../../test/torque/test-torque.tq:327:7
        {
          Label label__True_660_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_660 = &label__True_660_impl;
          USE(label__True_660);
          Label label__False_661_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_661 = &label__False_661_impl;
          USE(label__False_661);
          int31_t t2189 = 5;
          TNode<Smi> t2190 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2189)));
          TNode<BoolT> t2191 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_390).value()), implicit_cast<TNode<Smi>>(t2190)));
          USE(implicit_cast<TNode<BoolT>>(t2191));
          Branch(implicit_cast<TNode<BoolT>>(t2191), label__True_660, label__False_661);
          if (label__True_660->is_used())
          {
            BIND(label__True_660);
            // ../../test/torque/test-torque.tq:327:19
            Goto(label__False_659);
          }
          BIND(label__False_661);
        }
        // ../../test/torque/test-torque.tq:328:7
        TNode<Smi> t2192 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*i_390).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2192);
      }
      Goto(label_action_931_1750);
    }
    {
      BIND(label_action_931_1750);
      TNode<Smi> t2193 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2194 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_390).value()), implicit_cast<TNode<Smi>>(t2193)));
      *i_390 = implicit_cast<TNode<Smi>>(t2194);
      Goto(label_header_930_1749);
    }
    BIND(label__False_659);
    // ../../test/torque/test-torque.tq:330:5
    Label label__True_662_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_662 = &label__True_662_impl;
    USE(label__True_662);
    Label label__False_663_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_663 = &label__False_663_impl;
    USE(label__False_663);
    int31_t t2195 = 10;
    TNode<Smi> t2196 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2195)));
    TNode<BoolT> t2197 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2196)));
    USE(implicit_cast<TNode<BoolT>>(t2197));
    Branch(implicit_cast<TNode<BoolT>>(t2197), label__True_662, label__False_663);
    BIND(label__False_663);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:330:5");
    Unreachable();
    BIND(label__True_662);
    // ../../test/torque/test-torque.tq:332:5
    int31_t t2198 = 0;
    TNode<Smi> t2199 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2198)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2199);
    // ../../test/torque/test-torque.tq:333:5
    int31_t t2200 = 0;
    TNode<Smi> t2201 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2200)));
    *j_389 = implicit_cast<TNode<Smi>>(t2201);
    // ../../test/torque/test-torque.tq:334:5
    Label label__True_664_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_664 = &label__True_664_impl;
    USE(label__True_664);
    Label label__False_665_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_665 = &label__False_665_impl;
    USE(label__False_665);
    Label label_header_932_1751_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_932_1751 = &label_header_932_1751_impl;
    USE(label_header_932_1751);
    Goto(label_header_932_1751);
    BIND(label_header_932_1751);
    Goto(label__True_664);
    if (label__True_664->is_used())
    {
      BIND(label__True_664);
      // ../../test/torque/test-torque.tq:334:14
      {
        // ../../test/torque/test-torque.tq:335:7
        {
          Label label__True_666_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_666 = &label__True_666_impl;
          USE(label__True_666);
          Label label__False_667_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_667 = &label__False_667_impl;
          USE(label__False_667);
          int31_t t2202 = 5;
          TNode<Smi> t2203 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2202)));
          TNode<BoolT> t2204 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2203)));
          USE(implicit_cast<TNode<BoolT>>(t2204));
          Branch(implicit_cast<TNode<BoolT>>(t2204), label__True_666, label__False_667);
          if (label__True_666->is_used())
          {
            BIND(label__True_666);
            // ../../test/torque/test-torque.tq:335:19
            Goto(label__False_665);
          }
          BIND(label__False_667);
        }
        // ../../test/torque/test-torque.tq:336:7
        TNode<Smi> t2205 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*j_389).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2205);
        // ../../test/torque/test-torque.tq:337:7
        TNode<Smi> t2206 = implicit_cast<TNode<Smi>>((*j_389).value());
        USE(t2206);
        TNode<Smi> t2207 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2208 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2207)));
        *j_389 = implicit_cast<TNode<Smi>>(t2208);
      }
      Goto(label_header_932_1751);
    }
    BIND(label__False_665);
    // ../../test/torque/test-torque.tq:339:5
    Label label__True_668_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_668 = &label__True_668_impl;
    USE(label__True_668);
    Label label__False_669_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_669 = &label__False_669_impl;
    USE(label__False_669);
    int31_t t2209 = 10;
    TNode<Smi> t2210 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2209)));
    TNode<BoolT> t2211 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2210)));
    USE(implicit_cast<TNode<BoolT>>(t2211));
    Branch(implicit_cast<TNode<BoolT>>(t2211), label__True_668, label__False_669);
    BIND(label__False_669);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:339:5");
    Unreachable();
    BIND(label__True_668);
    // ../../test/torque/test-torque.tq:343:5
    int31_t t2212 = 0;
    TNode<Smi> t2213 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2212)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2213);
    // ../../test/torque/test-torque.tq:344:5
    int31_t t2214 = 0;
    TVARIABLE(Smi, i_391_impl);
    auto i_391 = &i_391_impl;
    USE(i_391);
    TNode<Smi> t2215 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2214)));
    *i_391 = implicit_cast<TNode<Smi>>(t2215);
    Label label__True_670_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_670 = &label__True_670_impl;
    USE(label__True_670);
    Label label__False_671_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_671 = &label__False_671_impl;
    USE(label__False_671);
    Label label_header_933_1752_impl(this, {i_391, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_933_1752 = &label_header_933_1752_impl;
    USE(label_header_933_1752);
    Goto(label_header_933_1752);
    BIND(label_header_933_1752);
    Label label_action_934_1753_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_934_1753 = &label_action_934_1753_impl;
    USE(label_action_934_1753);
    int31_t t2216 = 5;
    TNode<Smi> t2217 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2216)));
    TNode<BoolT> t2218 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_391).value()), implicit_cast<TNode<Smi>>(t2217)));
    USE(implicit_cast<TNode<BoolT>>(t2218));
    Branch(implicit_cast<TNode<BoolT>>(t2218), label__True_670, label__False_671);
    if (label__True_670->is_used())
    {
      BIND(label__True_670);
      // ../../test/torque/test-torque.tq:344:38
      {
        // ../../test/torque/test-torque.tq:345:7
        {
          Label label__True_672_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_672 = &label__True_672_impl;
          USE(label__True_672);
          Label label__False_673_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_673 = &label__False_673_impl;
          USE(label__False_673);
          int31_t t2219 = 3;
          TNode<Smi> t2220 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2219)));
          TNode<BoolT> t2221 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_391).value()), implicit_cast<TNode<Smi>>(t2220)));
          USE(implicit_cast<TNode<BoolT>>(t2221));
          Branch(implicit_cast<TNode<BoolT>>(t2221), label__True_672, label__False_673);
          if (label__True_672->is_used())
          {
            BIND(label__True_672);
            // ../../test/torque/test-torque.tq:345:19
            Goto(label_action_934_1753);
          }
          BIND(label__False_673);
        }
        // ../../test/torque/test-torque.tq:346:7
        TNode<Smi> t2222 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*i_391).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2222);
      }
      Goto(label_action_934_1753);
    }
    {
      BIND(label_action_934_1753);
      TNode<Smi> t2223 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2224 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_391).value()), implicit_cast<TNode<Smi>>(t2223)));
      *i_391 = implicit_cast<TNode<Smi>>(t2224);
      Goto(label_header_933_1752);
    }
    BIND(label__False_671);
    // ../../test/torque/test-torque.tq:348:5
    Label label__True_674_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_674 = &label__True_674_impl;
    USE(label__True_674);
    Label label__False_675_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_675 = &label__False_675_impl;
    USE(label__False_675);
    int31_t t2225 = 7;
    TNode<Smi> t2226 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2225)));
    TNode<BoolT> t2227 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2226)));
    USE(implicit_cast<TNode<BoolT>>(t2227));
    Branch(implicit_cast<TNode<BoolT>>(t2227), label__True_674, label__False_675);
    BIND(label__False_675);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:348:5");
    Unreachable();
    BIND(label__True_674);
    // ../../test/torque/test-torque.tq:350:5
    int31_t t2228 = 0;
    TNode<Smi> t2229 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2228)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2229);
    // ../../test/torque/test-torque.tq:351:5
    int31_t t2230 = 0;
    TNode<Smi> t2231 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2230)));
    *j_389 = implicit_cast<TNode<Smi>>(t2231);
    // ../../test/torque/test-torque.tq:352:5
    Label label__True_676_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_676 = &label__True_676_impl;
    USE(label__True_676);
    Label label__False_677_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_677 = &label__False_677_impl;
    USE(label__False_677);
    Label label_header_935_1754_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_935_1754 = &label_header_935_1754_impl;
    USE(label_header_935_1754);
    Goto(label_header_935_1754);
    BIND(label_header_935_1754);
    Label label_action_936_1755_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_936_1755 = &label_action_936_1755_impl;
    USE(label_action_936_1755);
    int31_t t2232 = 5;
    TNode<Smi> t2233 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2232)));
    TNode<BoolT> t2234 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2233)));
    USE(implicit_cast<TNode<BoolT>>(t2234));
    Branch(implicit_cast<TNode<BoolT>>(t2234), label__True_676, label__False_677);
    if (label__True_676->is_used())
    {
      BIND(label__True_676);
      // ../../test/torque/test-torque.tq:352:24
      {
        // ../../test/torque/test-torque.tq:353:7
        {
          Label label__True_678_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_678 = &label__True_678_impl;
          USE(label__True_678);
          Label label__False_679_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_679 = &label__False_679_impl;
          USE(label__False_679);
          int31_t t2235 = 3;
          TNode<Smi> t2236 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2235)));
          TNode<BoolT> t2237 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2236)));
          USE(implicit_cast<TNode<BoolT>>(t2237));
          Branch(implicit_cast<TNode<BoolT>>(t2237), label__True_678, label__False_679);
          if (label__True_678->is_used())
          {
            BIND(label__True_678);
            // ../../test/torque/test-torque.tq:353:19
            Goto(label_action_936_1755);
          }
          BIND(label__False_679);
        }
        // ../../test/torque/test-torque.tq:354:7
        TNode<Smi> t2238 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*j_389).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2238);
      }
      Goto(label_action_936_1755);
    }
    {
      BIND(label_action_936_1755);
      TNode<Smi> t2239 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2240 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2239)));
      *j_389 = implicit_cast<TNode<Smi>>(t2240);
      Goto(label_header_935_1754);
    }
    BIND(label__False_677);
    // ../../test/torque/test-torque.tq:356:5
    Label label__True_680_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_680 = &label__True_680_impl;
    USE(label__True_680);
    Label label__False_681_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_681 = &label__False_681_impl;
    USE(label__False_681);
    int31_t t2241 = 7;
    TNode<Smi> t2242 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2241)));
    TNode<BoolT> t2243 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2242)));
    USE(implicit_cast<TNode<BoolT>>(t2243));
    Branch(implicit_cast<TNode<BoolT>>(t2243), label__True_680, label__False_681);
    BIND(label__False_681);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:356:5");
    Unreachable();
    BIND(label__True_680);
    // ../../test/torque/test-torque.tq:358:5
    int31_t t2244 = 0;
    TNode<Smi> t2245 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2244)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2245);
    // ../../test/torque/test-torque.tq:359:5
    int31_t t2246 = 0;
    TNode<Smi> t2247 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2246)));
    *j_389 = implicit_cast<TNode<Smi>>(t2247);
    // ../../test/torque/test-torque.tq:360:5
    Label label__True_682_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_682 = &label__True_682_impl;
    USE(label__True_682);
    Label label__False_683_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_683 = &label__False_683_impl;
    USE(label__False_683);
    Label label_header_937_1756_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_937_1756 = &label_header_937_1756_impl;
    USE(label_header_937_1756);
    Goto(label_header_937_1756);
    BIND(label_header_937_1756);
    int31_t t2248 = 5;
    TNode<Smi> t2249 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2248)));
    TNode<BoolT> t2250 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2249)));
    USE(implicit_cast<TNode<BoolT>>(t2250));
    Branch(implicit_cast<TNode<BoolT>>(t2250), label__True_682, label__False_683);
    if (label__True_682->is_used())
    {
      BIND(label__True_682);
      // ../../test/torque/test-torque.tq:360:20
      {
        // ../../test/torque/test-torque.tq:361:7
        {
          Label label__True_684_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_684 = &label__True_684_impl;
          USE(label__True_684);
          Label label__False_685_impl(this, {j_389}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_685 = &label__False_685_impl;
          USE(label__False_685);
          int31_t t2251 = 3;
          TNode<Smi> t2252 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2251)));
          TNode<BoolT> t2253 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2252)));
          USE(implicit_cast<TNode<BoolT>>(t2253));
          Branch(implicit_cast<TNode<BoolT>>(t2253), label__True_684, label__False_685);
          if (label__True_684->is_used())
          {
            BIND(label__True_684);
            // ../../test/torque/test-torque.tq:361:19
            {
              // ../../test/torque/test-torque.tq:362:9
              TNode<Smi> t2254 = implicit_cast<TNode<Smi>>((*j_389).value());
              USE(t2254);
              TNode<Smi> t2255 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2256 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2255)));
              *j_389 = implicit_cast<TNode<Smi>>(t2256);
              // ../../test/torque/test-torque.tq:363:9
              Goto(label_header_937_1756);
            }
          }
          BIND(label__False_685);
        }
        // ../../test/torque/test-torque.tq:365:7
        TNode<Smi> t2257 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*j_389).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2257);
        // ../../test/torque/test-torque.tq:366:7
        TNode<Smi> t2258 = implicit_cast<TNode<Smi>>((*j_389).value());
        USE(t2258);
        TNode<Smi> t2259 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2260 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2259)));
        *j_389 = implicit_cast<TNode<Smi>>(t2260);
      }
      Goto(label_header_937_1756);
    }
    BIND(label__False_683);
    // ../../test/torque/test-torque.tq:368:5
    Label label__True_686_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_686 = &label__True_686_impl;
    USE(label__True_686);
    Label label__False_687_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_687 = &label__False_687_impl;
    USE(label__False_687);
    int31_t t2261 = 7;
    TNode<Smi> t2262 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2261)));
    TNode<BoolT> t2263 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2262)));
    USE(implicit_cast<TNode<BoolT>>(t2263));
    Branch(implicit_cast<TNode<BoolT>>(t2263), label__True_686, label__False_687);
    BIND(label__False_687);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:368:5");
    Unreachable();
    BIND(label__True_686);
    // ../../test/torque/test-torque.tq:370:5
    int31_t t2264 = 0;
    TNode<Smi> t2265 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2264)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2265);
    // ../../test/torque/test-torque.tq:371:5
    int31_t t2266 = 0;
    TVARIABLE(Smi, i_392_impl);
    auto i_392 = &i_392_impl;
    USE(i_392);
    TNode<Smi> t2267 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2266)));
    *i_392 = implicit_cast<TNode<Smi>>(t2267);
    Label label__True_688_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_688 = &label__True_688_impl;
    USE(label__True_688);
    Label label__False_689_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_689 = &label__False_689_impl;
    USE(label__False_689);
    Label label_header_938_1757_impl(this, {i_392, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_938_1757 = &label_header_938_1757_impl;
    USE(label_header_938_1757);
    Goto(label_header_938_1757);
    BIND(label_header_938_1757);
    Label label_action_939_1758_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_939_1758 = &label_action_939_1758_impl;
    USE(label_action_939_1758);
    Goto(label__True_688);
    if (label__True_688->is_used())
    {
      BIND(label__True_688);
      // ../../test/torque/test-torque.tq:371:32
      {
        // ../../test/torque/test-torque.tq:372:7
        {
          Label label__True_690_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_690 = &label__True_690_impl;
          USE(label__True_690);
          Label label__False_691_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_691 = &label__False_691_impl;
          USE(label__False_691);
          int31_t t2268 = 3;
          TNode<Smi> t2269 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2268)));
          TNode<BoolT> t2270 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_392).value()), implicit_cast<TNode<Smi>>(t2269)));
          USE(implicit_cast<TNode<BoolT>>(t2270));
          Branch(implicit_cast<TNode<BoolT>>(t2270), label__True_690, label__False_691);
          if (label__True_690->is_used())
          {
            BIND(label__True_690);
            // ../../test/torque/test-torque.tq:372:19
            Goto(label_action_939_1758);
          }
          BIND(label__False_691);
        }
        // ../../test/torque/test-torque.tq:373:7
        {
          Label label__True_692_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_692 = &label__True_692_impl;
          USE(label__True_692);
          Label label__False_693_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_693 = &label__False_693_impl;
          USE(label__False_693);
          int31_t t2271 = 5;
          TNode<Smi> t2272 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2271)));
          TNode<BoolT> t2273 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_392).value()), implicit_cast<TNode<Smi>>(t2272)));
          USE(implicit_cast<TNode<BoolT>>(t2273));
          Branch(implicit_cast<TNode<BoolT>>(t2273), label__True_692, label__False_693);
          if (label__True_692->is_used())
          {
            BIND(label__True_692);
            // ../../test/torque/test-torque.tq:373:19
            Goto(label__False_689);
          }
          BIND(label__False_693);
        }
        // ../../test/torque/test-torque.tq:374:7
        TNode<Smi> t2274 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*i_392).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2274);
      }
      Goto(label_action_939_1758);
    }
    {
      BIND(label_action_939_1758);
      TNode<Smi> t2275 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2276 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_392).value()), implicit_cast<TNode<Smi>>(t2275)));
      *i_392 = implicit_cast<TNode<Smi>>(t2276);
      Goto(label_header_938_1757);
    }
    BIND(label__False_689);
    // ../../test/torque/test-torque.tq:376:5
    Label label__True_694_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_694 = &label__True_694_impl;
    USE(label__True_694);
    Label label__False_695_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_695 = &label__False_695_impl;
    USE(label__False_695);
    int31_t t2277 = 7;
    TNode<Smi> t2278 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2277)));
    TNode<BoolT> t2279 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2278)));
    USE(implicit_cast<TNode<BoolT>>(t2279));
    Branch(implicit_cast<TNode<BoolT>>(t2279), label__True_694, label__False_695);
    BIND(label__False_695);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:376:5");
    Unreachable();
    BIND(label__True_694);
    // ../../test/torque/test-torque.tq:378:5
    int31_t t2280 = 0;
    TNode<Smi> t2281 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2280)));
    *sum_387 = implicit_cast<TNode<Smi>>(t2281);
    // ../../test/torque/test-torque.tq:379:5
    int31_t t2282 = 0;
    TNode<Smi> t2283 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2282)));
    *j_389 = implicit_cast<TNode<Smi>>(t2283);
    // ../../test/torque/test-torque.tq:380:5
    Label label__True_696_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_696 = &label__True_696_impl;
    USE(label__True_696);
    Label label__False_697_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_697 = &label__False_697_impl;
    USE(label__False_697);
    Label label_header_940_1759_impl(this, {j_389, sum_387}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_940_1759 = &label_header_940_1759_impl;
    USE(label_header_940_1759);
    Goto(label_header_940_1759);
    BIND(label_header_940_1759);
    Goto(label__True_696);
    if (label__True_696->is_used())
    {
      BIND(label__True_696);
      // ../../test/torque/test-torque.tq:380:14
      {
        // ../../test/torque/test-torque.tq:381:7
        {
          Label label__True_698_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_698 = &label__True_698_impl;
          USE(label__True_698);
          Label label__False_699_impl(this, {j_389}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_699 = &label__False_699_impl;
          USE(label__False_699);
          int31_t t2284 = 3;
          TNode<Smi> t2285 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2284)));
          TNode<BoolT> t2286 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2285)));
          USE(implicit_cast<TNode<BoolT>>(t2286));
          Branch(implicit_cast<TNode<BoolT>>(t2286), label__True_698, label__False_699);
          if (label__True_698->is_used())
          {
            BIND(label__True_698);
            // ../../test/torque/test-torque.tq:381:19
            {
              // ../../test/torque/test-torque.tq:382:9
              TNode<Smi> t2287 = implicit_cast<TNode<Smi>>((*j_389).value());
              USE(t2287);
              TNode<Smi> t2288 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2289 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2288)));
              *j_389 = implicit_cast<TNode<Smi>>(t2289);
              // ../../test/torque/test-torque.tq:383:9
              Goto(label_header_940_1759);
            }
          }
          BIND(label__False_699);
        }
        // ../../test/torque/test-torque.tq:386:7
        {
          Label label__True_700_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_700 = &label__True_700_impl;
          USE(label__True_700);
          Label label__False_701_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_701 = &label__False_701_impl;
          USE(label__False_701);
          int31_t t2290 = 5;
          TNode<Smi> t2291 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2290)));
          TNode<BoolT> t2292 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2291)));
          USE(implicit_cast<TNode<BoolT>>(t2292));
          Branch(implicit_cast<TNode<BoolT>>(t2292), label__True_700, label__False_701);
          if (label__True_700->is_used())
          {
            BIND(label__True_700);
            // ../../test/torque/test-torque.tq:386:19
            Goto(label__False_697);
          }
          BIND(label__False_701);
        }
        // ../../test/torque/test-torque.tq:387:7
        TNode<Smi> t2293 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>((*j_389).value())));
        *sum_387 = implicit_cast<TNode<Smi>>(t2293);
        // ../../test/torque/test-torque.tq:388:7
        TNode<Smi> t2294 = implicit_cast<TNode<Smi>>((*j_389).value());
        USE(t2294);
        TNode<Smi> t2295 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2296 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_389).value()), implicit_cast<TNode<Smi>>(t2295)));
        *j_389 = implicit_cast<TNode<Smi>>(t2296);
      }
      Goto(label_header_940_1759);
    }
    BIND(label__False_697);
    // ../../test/torque/test-torque.tq:390:5
    Label label__True_702_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_702 = &label__True_702_impl;
    USE(label__True_702);
    Label label__False_703_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_703 = &label__False_703_impl;
    USE(label__False_703);
    int31_t t2297 = 7;
    TNode<Smi> t2298 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2297)));
    TNode<BoolT> t2299 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_387).value()), implicit_cast<TNode<Smi>>(t2298)));
    USE(implicit_cast<TNode<BoolT>>(t2299));
    Branch(implicit_cast<TNode<BoolT>>(t2299), label__True_702, label__False_703);
    BIND(label__False_703);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:390:5");
    Unreachable();
    BIND(label__True_702);
  }
}

void TestBuiltinsFromDSLAssembler::TestSubtyping(TNode<Smi> p_x) {
  Label label_macro_end_1760_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1760 = &label_macro_end_1760_impl;
  USE(label_macro_end_1760);
  // ../../test/torque/test-torque.tq:393:31
  {
    // ../../test/torque/test-torque.tq:394:5
    TNode<Object> foo_941_impl;
    auto foo_941 = &foo_941_impl;
    USE(foo_941);
    *foo_941 = implicit_cast<TNode<Object>>(p_x);
  }
}

compiler::TNode<Int32T> TestBuiltinsFromDSLAssembler::TypeswitchExample(TNode<Object> p_x) {
  TVARIABLE(Int32T, _return_393_impl);
  auto _return_393 = &_return_393_impl;
  USE(_return_393);
  Label label_macro_end_1761_impl(this, {_return_393}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1761 = &label_macro_end_1761_impl;
  USE(label_macro_end_1761);
  // ../../test/torque/test-torque.tq:408:58
  {
    // ../../test/torque/test-torque.tq:409:5
    int31_t t2300 = 0;
    TVARIABLE(Int32T, result_394_impl);
    auto result_394 = &result_394_impl;
    USE(result_394);
    TNode<Int32T> t2301 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2300)));
    *result_394 = implicit_cast<TNode<Int32T>>(t2301);
    // ../../test/torque/test-torque.tq:410:5
    {
      // ../../test/torque/test-torque.tq:410:17
      TNode<Object> t2302 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2302));
      TNode<Object> _value_942_impl;
      auto _value_942 = &_value_942_impl;
      USE(_value_942);
      *_value_942 = implicit_cast<TNode<Object>>(t2302);
      // ../../test/torque/test-torque.tq:411:7
      {
        Label label_try_done_943_1762_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_done_943_1762 = &label_try_done_943_1762_impl;
        USE(label_try_done_943_1762);
        Label label__NextCase_704_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__NextCase_704 = &label__NextCase_704_impl;
        USE(label__NextCase_704);
        Label label_try_begin_944_1763_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_begin_944_1763 = &label_try_begin_944_1763_impl;
        USE(label_try_begin_944_1763);
        Goto(label_try_begin_944_1763);
        if (label_try_begin_944_1763->is_used())
        {
          BIND(label_try_begin_944_1763);
          // ../../test/torque/test-torque.tq:411:7
          {
            // ../../test/torque/test-torque.tq:411:7
            TNode<FixedArray> t2303 = UncheckedCast<FixedArray>(Cast12ATFixedArray(implicit_cast<TNode<Object>>((*_value_942)), label__NextCase_704));
            USE(implicit_cast<TNode<FixedArray>>(t2303));
            TNode<FixedArray> x_945_impl;
            auto x_945 = &x_945_impl;
            USE(x_945);
            *x_945 = implicit_cast<TNode<FixedArray>>(t2303);
            // ../../test/torque/test-torque.tq:411:29
            {
              // ../../test/torque/test-torque.tq:412:9
              int31_t t2304 = 1;
              TNode<Int32T> t2305 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2304)));
              TNode<Int32T> t2306 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2305)));
              USE(implicit_cast<TNode<Int32T>>(t2306));
              *result_394 = implicit_cast<TNode<Int32T>>(t2306);
            }
          }
          Goto(label_try_done_943_1762);
        }
        if (label__NextCase_704->is_used())
        {
          BIND(label__NextCase_704);
          // ../../test/torque/test-torque.tq:411:7
          {
            // ../../test/torque/test-torque.tq:414:7
            TNode<Number> _case_value_946_impl;
            auto _case_value_946 = &_case_value_946_impl;
            USE(_case_value_946);
            *_case_value_946 = implicit_cast<TNode<Number>>(UncheckedCast<Number>(implicit_cast<TNode<Object>>((*_value_942))));
            // ../../test/torque/test-torque.tq:414:22
            {
              // ../../test/torque/test-torque.tq:415:9
              int31_t t2307 = 2;
              TNode<Int32T> t2308 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2307)));
              TNode<Int32T> t2309 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2308)));
              USE(implicit_cast<TNode<Int32T>>(t2309));
              *result_394 = implicit_cast<TNode<Int32T>>(t2309);
            }
          }
          Goto(label_try_done_943_1762);
        }
        BIND(label_try_done_943_1762);
      }
    }
    // ../../test/torque/test-torque.tq:419:5
    int31_t t2310 = 10;
    TNode<Int32T> t2311 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2310)));
    TNode<Int32T> t2312 = UncheckedCast<Int32T>(Int32Mul(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2311)));
    USE(implicit_cast<TNode<Int32T>>(t2312));
    *result_394 = implicit_cast<TNode<Int32T>>(t2312);
    // ../../test/torque/test-torque.tq:421:5
    {
      // ../../test/torque/test-torque.tq:421:17
      TNode<Object> t2313 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2313));
      TNode<Object> _value_947_impl;
      auto _value_947 = &_value_947_impl;
      USE(_value_947);
      *_value_947 = implicit_cast<TNode<Object>>(t2313);
      // ../../test/torque/test-torque.tq:422:7
      {
        Label label_try_done_948_1764_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_done_948_1764 = &label_try_done_948_1764_impl;
        USE(label_try_done_948_1764);
        Label label__NextCase_705_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__NextCase_705 = &label__NextCase_705_impl;
        USE(label__NextCase_705);
        Label label_try_begin_949_1765_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_begin_949_1765 = &label_try_begin_949_1765_impl;
        USE(label_try_begin_949_1765);
        Goto(label_try_begin_949_1765);
        if (label_try_begin_949_1765->is_used())
        {
          BIND(label_try_begin_949_1765);
          // ../../test/torque/test-torque.tq:422:7
          {
            // ../../test/torque/test-torque.tq:422:7
            TNode<Smi> t2314 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>((*_value_947)), label__NextCase_705));
            USE(implicit_cast<TNode<Smi>>(t2314));
            TNode<Smi> x_950_impl;
            auto x_950 = &x_950_impl;
            USE(x_950);
            *x_950 = implicit_cast<TNode<Smi>>(t2314);
            // ../../test/torque/test-torque.tq:422:22
            {
              // ../../test/torque/test-torque.tq:423:9
              TNode<Int32T> t2315 = UncheckedCast<Int32T>(Convert7ATint32(implicit_cast<TNode<Smi>>((*x_950))));
              USE(implicit_cast<TNode<Int32T>>(t2315));
              TNode<Int32T> t2316 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2315)));
              USE(implicit_cast<TNode<Int32T>>(t2316));
              *result_394 = implicit_cast<TNode<Int32T>>(t2316);
            }
          }
          Goto(label_try_done_948_1764);
        }
        if (label__NextCase_705->is_used())
        {
          BIND(label__NextCase_705);
          // ../../test/torque/test-torque.tq:422:7
          {
            // ../../test/torque/test-torque.tq:425:7
            {
              Label label_try_done_951_1766_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_try_done_951_1766 = &label_try_done_951_1766_impl;
              USE(label_try_done_951_1766);
              Label label__NextCase_706_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__NextCase_706 = &label__NextCase_706_impl;
              USE(label__NextCase_706);
              Label label_try_begin_952_1767_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_try_begin_952_1767 = &label_try_begin_952_1767_impl;
              USE(label_try_begin_952_1767);
              Goto(label_try_begin_952_1767);
              if (label_try_begin_952_1767->is_used())
              {
                BIND(label_try_begin_952_1767);
                // ../../test/torque/test-torque.tq:425:7
                {
                  // ../../test/torque/test-torque.tq:425:7
                  TNode<FixedArray> t2317 = UncheckedCast<FixedArray>(Cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_947)))), label__NextCase_706));
                  USE(implicit_cast<TNode<FixedArray>>(t2317));
                  TNode<FixedArray> a_953_impl;
                  auto a_953 = &a_953_impl;
                  USE(a_953);
                  *a_953 = implicit_cast<TNode<FixedArray>>(t2317);
                  // ../../test/torque/test-torque.tq:425:29
                  {
                    // ../../test/torque/test-torque.tq:426:9
                    TNode<Smi> t2318 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*a_953))));
                    TNode<Int32T> t2319 = UncheckedCast<Int32T>(Convert7ATint32(implicit_cast<TNode<Smi>>(t2318)));
                    USE(implicit_cast<TNode<Int32T>>(t2319));
                    TNode<Int32T> t2320 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2319)));
                    USE(implicit_cast<TNode<Int32T>>(t2320));
                    *result_394 = implicit_cast<TNode<Int32T>>(t2320);
                  }
                }
                Goto(label_try_done_951_1766);
              }
              if (label__NextCase_706->is_used())
              {
                BIND(label__NextCase_706);
                // ../../test/torque/test-torque.tq:425:7
                {
                  // ../../test/torque/test-torque.tq:428:7
                  TNode<HeapNumber> x_954_impl;
                  auto x_954 = &x_954_impl;
                  USE(x_954);
                  *x_954 = implicit_cast<TNode<HeapNumber>>(UncheckedCast<HeapNumber>(implicit_cast<TNode<Object>>((*_value_947))));
                  // ../../test/torque/test-torque.tq:428:29
                  {
                    // ../../test/torque/test-torque.tq:429:9
                    int31_t t2321 = 7;
                    TNode<Int32T> t2322 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2321)));
                    TNode<Int32T> t2323 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_394).value()), implicit_cast<TNode<Int32T>>(t2322)));
                    USE(implicit_cast<TNode<Int32T>>(t2323));
                    *result_394 = implicit_cast<TNode<Int32T>>(t2323);
                  }
                }
                Goto(label_try_done_951_1766);
              }
              BIND(label_try_done_951_1766);
            }
          }
          Goto(label_try_done_948_1764);
        }
        BIND(label_try_done_948_1764);
      }
    }
    // ../../test/torque/test-torque.tq:433:5
    *_return_393 = implicit_cast<TNode<Int32T>>((*result_394).value());
    Goto(label_macro_end_1761);
  }
  BIND(label_macro_end_1761);
  return implicit_cast<TNode<Int32T>>((*_return_393).value());
}

void TestBuiltinsFromDSLAssembler::TestTypeswitch() {
  Label label_macro_end_1768_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1768 = &label_macro_end_1768_impl;
  USE(label_macro_end_1768);
  // ../../test/torque/test-torque.tq:436:26
  {
    // ../../test/torque/test-torque.tq:437:5
    Label label__True_707_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_707 = &label__True_707_impl;
    USE(label__True_707);
    Label label__False_708_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_708 = &label__False_708_impl;
    USE(label__False_708);
    int31_t t2324 = 5;
    TNode<Smi> t2325 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2324)));
    USE(implicit_cast<TNode<Smi>>(t2325));
    TNode<Int32T> t2326 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2325)));
    USE(implicit_cast<TNode<Int32T>>(t2326));
    int31_t t2327 = 26;
    TNode<Int32T> t2328 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2327)));
    TNode<BoolT> t2329 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2326), implicit_cast<TNode<Int32T>>(t2328)));
    USE(implicit_cast<TNode<BoolT>>(t2329));
    Branch(implicit_cast<TNode<BoolT>>(t2329), label__True_707, label__False_708);
    BIND(label__False_708);
    Print("assert 'TypeswitchExample(FromConstexpr<Smi>(5)) == 26' failed at ../../test/torque/test-torque.tq:437:5");
    Unreachable();
    BIND(label__True_707);
    // ../../test/torque/test-torque.tq:438:5
    int31_t t2330 = 3;
    TNode<IntPtrT> t2331 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2330)));
    TNode<FixedArray> t2332 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2331)));
    USE(implicit_cast<TNode<FixedArray>>(t2332));
    TNode<FixedArray> a_955_impl;
    auto a_955 = &a_955_impl;
    USE(a_955);
    *a_955 = implicit_cast<TNode<FixedArray>>(t2332);
    // ../../test/torque/test-torque.tq:439:5
    Label label__True_709_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_709 = &label__True_709_impl;
    USE(label__True_709);
    Label label__False_710_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_710 = &label__False_710_impl;
    USE(label__False_710);
    TNode<Int32T> t2333 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>((*a_955))));
    USE(implicit_cast<TNode<Int32T>>(t2333));
    int31_t t2334 = 13;
    TNode<Int32T> t2335 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2334)));
    TNode<BoolT> t2336 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2333), implicit_cast<TNode<Int32T>>(t2335)));
    USE(implicit_cast<TNode<BoolT>>(t2336));
    Branch(implicit_cast<TNode<BoolT>>(t2336), label__True_709, label__False_710);
    BIND(label__False_710);
    Print("assert 'TypeswitchExample(a) == 13' failed at ../../test/torque/test-torque.tq:439:5");
    Unreachable();
    BIND(label__True_709);
    // ../../test/torque/test-torque.tq:440:5
    Label label__True_711_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_711 = &label__True_711_impl;
    USE(label__True_711);
    Label label__False_712_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_712 = &label__False_712_impl;
    USE(label__False_712);
    double t2337 = 0.5;
    TNode<Number> t2338 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(t2337)));
    USE(implicit_cast<TNode<Number>>(t2338));
    TNode<Int32T> t2339 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2338)));
    USE(implicit_cast<TNode<Int32T>>(t2339));
    int31_t t2340 = 27;
    TNode<Int32T> t2341 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t2340)));
    TNode<BoolT> t2342 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2339), implicit_cast<TNode<Int32T>>(t2341)));
    USE(implicit_cast<TNode<BoolT>>(t2342));
    Branch(implicit_cast<TNode<BoolT>>(t2342), label__True_711, label__False_712);
    BIND(label__False_712);
    Print("assert 'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27' failed at ../../test/torque/test-torque.tq:440:5");
    Unreachable();
    BIND(label__True_711);
  }
}

void TestBuiltinsFromDSLAssembler::TestGenericOverload() {
  Label label_macro_end_1769_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1769 = &label_macro_end_1769_impl;
  USE(label_macro_end_1769);
  // ../../test/torque/test-torque.tq:450:31
  {
    // ../../test/torque/test-torque.tq:451:5
    int31_t t2343 = 5;
    TNode<Smi> xSmi_956_impl;
    auto xSmi_956 = &xSmi_956_impl;
    USE(xSmi_956);
    TNode<Smi> t2344 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2343)));
    *xSmi_956 = implicit_cast<TNode<Smi>>(t2344);
    // ../../test/torque/test-torque.tq:452:5
    TNode<Object> xObject_957_impl;
    auto xObject_957 = &xObject_957_impl;
    USE(xObject_957);
    *xObject_957 = implicit_cast<TNode<Object>>((*xSmi_956));
    // ../../test/torque/test-torque.tq:453:5
    Label label__True_713_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_713 = &label__True_713_impl;
    USE(label__True_713);
    Label label__False_714_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_714 = &label__False_714_impl;
    USE(label__False_714);
    TNode<Smi> t2345 = UncheckedCast<Smi>(ExampleGenericOverload5ATSmi(implicit_cast<TNode<Smi>>((*xSmi_956))));
    USE(implicit_cast<TNode<Smi>>(t2345));
    int31_t t2346 = 6;
    TNode<Smi> t2347 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2346)));
    TNode<BoolT> t2348 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2345), implicit_cast<TNode<Smi>>(t2347)));
    USE(implicit_cast<TNode<BoolT>>(t2348));
    Branch(implicit_cast<TNode<BoolT>>(t2348), label__True_713, label__False_714);
    BIND(label__False_714);
    Print("assert 'ExampleGenericOverload<Smi>(xSmi) == 6' failed at ../../test/torque/test-torque.tq:453:5");
    Unreachable();
    BIND(label__True_713);
    // ../../test/torque/test-torque.tq:454:5
    Label label__True_715_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_715 = &label__True_715_impl;
    USE(label__True_715);
    Label label__False_716_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_716 = &label__False_716_impl;
    USE(label__False_716);
    TNode<Object> t2349 = UncheckedCast<Object>(ExampleGenericOverload22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>((*xObject_957))));
    USE(implicit_cast<TNode<Object>>(t2349));
    TNode<Smi> t2350 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2349)));
    USE(implicit_cast<TNode<Smi>>(t2350));
    int31_t t2351 = 5;
    TNode<Smi> t2352 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2351)));
    TNode<BoolT> t2353 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2350), implicit_cast<TNode<Smi>>(t2352)));
    USE(implicit_cast<TNode<BoolT>>(t2353));
    Branch(implicit_cast<TNode<BoolT>>(t2353), label__True_715, label__False_716);
    BIND(label__False_716);
    Print("assert 'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5' failed at ../../test/torque/test-torque.tq:454:5");
    Unreachable();
    BIND(label__True_715);
  }
}

void TestBuiltinsFromDSLAssembler::BoolToBranch(TNode<BoolT> p_x, Label* label_Taken_717, Label* label_NotTaken_718) {
  Label label_macro_end_1770_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1770 = &label_macro_end_1770_impl;
  USE(label_macro_end_1770);
  // ../../test/torque/test-torque.tq:458:30
  {
    // ../../test/torque/test-torque.tq:459:5
    {
      Label label__True_719_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_719 = &label__True_719_impl;
      USE(label__True_719);
      Label label__False_720_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_720 = &label__False_720_impl;
      USE(label__False_720);
      Label label_if_done_label_958_1771_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_958_1771 = &label_if_done_label_958_1771_impl;
      USE(label_if_done_label_958_1771);
      Branch(implicit_cast<TNode<BoolT>>(p_x), label__True_719, label__False_720);
      if (label__True_719->is_used())
      {
        BIND(label__True_719);
        // ../../test/torque/test-torque.tq:459:12
        {
          // ../../test/torque/test-torque.tq:460:7
          Goto(label_Taken_717);
        }
      }
      if (label__False_720->is_used())
      {
        BIND(label__False_720);
        // ../../test/torque/test-torque.tq:461:12
        {
          // ../../test/torque/test-torque.tq:462:7
          Goto(label_NotTaken_718);
        }
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd1(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_395_impl);
  auto _return_395 = &_return_395_impl;
  USE(_return_395);
  Label label_macro_end_1772_impl(this, {_return_395}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1772 = &label_macro_end_1772_impl;
  USE(label_macro_end_1772);
  // ../../test/torque/test-torque.tq:466:53
  {
    // ../../test/torque/test-torque.tq:467:5
    auto t2354 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2355 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2356_959_impl);
    auto t2356_959 = &t2356_959_impl;
    USE(t2356_959);
    {
      Label label__True_721_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_721 = &label__True_721_impl;
      USE(label__True_721);
      Label label__False_722_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_722 = &label__False_722_impl;
      USE(label__False_722);
      Label label__done_960_1773_impl(this, {t2356_959}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_960_1773 = &label__done_960_1773_impl;
      USE(label__done_960_1773);
      Label label__False_723_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_723 = &label__False_723_impl;
      USE(label__False_723);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_x), label__True_721, label__False_723);
      BIND(label__False_723);
      Label label__True_724_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_724 = &label__True_724_impl;
      USE(label__True_724);
      GotoIfNot(implicit_cast<TNode<BoolT>>(p_y), label__False_722);
Branch(implicit_cast<TNode<BoolT>>(p_z), label__True_721, label__False_722);
      BIND(label__True_721);
            TNode<BoolT> t2357 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2354())));
      *t2356_959 = implicit_cast<TNode<BoolT>>(t2357);
      Goto(label__done_960_1773);
      BIND(label__False_722);
            TNode<BoolT> t2358 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2355())));
      *t2356_959 = implicit_cast<TNode<BoolT>>(t2358);
      Goto(label__done_960_1773);
      BIND(label__done_960_1773);
    }
    *_return_395 = implicit_cast<TNode<BoolT>>((*t2356_959).value());
    Goto(label_macro_end_1772);
  }
  BIND(label_macro_end_1772);
  return implicit_cast<TNode<BoolT>>((*_return_395).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd2(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_396_impl);
  auto _return_396 = &_return_396_impl;
  USE(_return_396);
  Label label_macro_end_1774_impl(this, {_return_396}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1774 = &label_macro_end_1774_impl;
  USE(label_macro_end_1774);
  // ../../test/torque/test-torque.tq:470:53
  {
    // ../../test/torque/test-torque.tq:471:5
    auto t2359 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2360 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2361_961_impl);
    auto t2361_961 = &t2361_961_impl;
    USE(t2361_961);
    {
      Label label__True_725_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_725 = &label__True_725_impl;
      USE(label__True_725);
      Label label__False_726_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_726 = &label__False_726_impl;
      USE(label__False_726);
      Label label__done_962_1775_impl(this, {t2361_961}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_962_1775 = &label__done_962_1775_impl;
      USE(label__done_962_1775);
      Label label__False_727_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_727 = &label__False_727_impl;
      USE(label__False_727);
      GotoIf(implicit_cast<TNode<BoolT>>(p_x), label__True_725);
      Label label__True_728_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_728 = &label__True_728_impl;
      USE(label__True_728);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_y), label__True_728, label__False_726);
      BIND(label__True_728);
Branch(implicit_cast<TNode<BoolT>>(p_z), label__True_725, label__False_726);
      BIND(label__True_725);
            TNode<BoolT> t2362 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2359())));
      *t2361_961 = implicit_cast<TNode<BoolT>>(t2362);
      Goto(label__done_962_1775);
      BIND(label__False_726);
            TNode<BoolT> t2363 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2360())));
      *t2361_961 = implicit_cast<TNode<BoolT>>(t2363);
      Goto(label__done_962_1775);
      BIND(label__done_962_1775);
    }
    *_return_396 = implicit_cast<TNode<BoolT>>((*t2361_961).value());
    Goto(label_macro_end_1774);
  }
  BIND(label_macro_end_1774);
  return implicit_cast<TNode<BoolT>>((*_return_396).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd3(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_397_impl);
  auto _return_397 = &_return_397_impl;
  USE(_return_397);
  Label label_macro_end_1776_impl(this, {_return_397}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1776 = &label_macro_end_1776_impl;
  USE(label_macro_end_1776);
  // ../../test/torque/test-torque.tq:474:53
  {
    // ../../test/torque/test-torque.tq:475:5
    auto t2364 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2365 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2366_963_impl);
    auto t2366_963 = &t2366_963_impl;
    USE(t2366_963);
    {
      Label label__True_729_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_729 = &label__True_729_impl;
      USE(label__True_729);
      Label label__False_730_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_730 = &label__False_730_impl;
      USE(label__False_730);
      Label label__done_964_1777_impl(this, {t2366_963}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_964_1777 = &label__done_964_1777_impl;
      USE(label__done_964_1777);
      Label label__False_731_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_731 = &label__False_731_impl;
      USE(label__False_731);
      GotoIf(implicit_cast<TNode<BoolT>>(p_x), label__True_729);
      Label label__True_732_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_732 = &label__True_732_impl;
      USE(label__True_732);
      GotoIfNot(implicit_cast<TNode<BoolT>>(p_y), label__False_730);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_z), label__True_729, label__False_730);
      BIND(label__True_729);
            TNode<BoolT> t2367 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2364())));
      *t2366_963 = implicit_cast<TNode<BoolT>>(t2367);
      Goto(label__done_964_1777);
      BIND(label__False_730);
            TNode<BoolT> t2368 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2365())));
      *t2366_963 = implicit_cast<TNode<BoolT>>(t2368);
      Goto(label__done_964_1777);
      BIND(label__done_964_1777);
    }
    *_return_397 = implicit_cast<TNode<BoolT>>((*t2366_963).value());
    Goto(label_macro_end_1776);
  }
  BIND(label_macro_end_1776);
  return implicit_cast<TNode<BoolT>>((*_return_397).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr1(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_398_impl);
  auto _return_398 = &_return_398_impl;
  USE(_return_398);
  Label label_macro_end_1778_impl(this, {_return_398}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1778 = &label_macro_end_1778_impl;
  USE(label_macro_end_1778);
  // ../../test/torque/test-torque.tq:478:53
  {
    // ../../test/torque/test-torque.tq:479:5
    auto t2369 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2370 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2371_965_impl);
    auto t2371_965 = &t2371_965_impl;
    USE(t2371_965);
    {
      Label label__True_733_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_733 = &label__True_733_impl;
      USE(label__True_733);
      Label label__False_734_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_734 = &label__False_734_impl;
      USE(label__False_734);
      Label label__done_966_1779_impl(this, {t2371_965}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_966_1779 = &label__done_966_1779_impl;
      USE(label__done_966_1779);
      Label label__False_735_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_735 = &label__False_735_impl;
      USE(label__False_735);
      Label label__True_736_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_736 = &label__True_736_impl;
      USE(label__True_736);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_x), label__True_736, label__False_735);
      BIND(label__True_736);
Branch(implicit_cast<TNode<BoolT>>(p_y), label__True_733, label__False_735);
      BIND(label__False_735);
Branch(implicit_cast<TNode<BoolT>>(p_z), label__True_733, label__False_734);
      BIND(label__True_733);
            TNode<BoolT> t2372 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2369())));
      *t2371_965 = implicit_cast<TNode<BoolT>>(t2372);
      Goto(label__done_966_1779);
      BIND(label__False_734);
            TNode<BoolT> t2373 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2370())));
      *t2371_965 = implicit_cast<TNode<BoolT>>(t2373);
      Goto(label__done_966_1779);
      BIND(label__done_966_1779);
    }
    *_return_398 = implicit_cast<TNode<BoolT>>((*t2371_965).value());
    Goto(label_macro_end_1778);
  }
  BIND(label_macro_end_1778);
  return implicit_cast<TNode<BoolT>>((*_return_398).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr2(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_399_impl);
  auto _return_399 = &_return_399_impl;
  USE(_return_399);
  Label label_macro_end_1780_impl(this, {_return_399}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1780 = &label_macro_end_1780_impl;
  USE(label_macro_end_1780);
  // ../../test/torque/test-torque.tq:482:53
  {
    // ../../test/torque/test-torque.tq:483:5
    auto t2374 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2375 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2376_967_impl);
    auto t2376_967 = &t2376_967_impl;
    USE(t2376_967);
    {
      Label label__True_737_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_737 = &label__True_737_impl;
      USE(label__True_737);
      Label label__False_738_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_738 = &label__False_738_impl;
      USE(label__False_738);
      Label label__done_968_1781_impl(this, {t2376_967}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_968_1781 = &label__done_968_1781_impl;
      USE(label__done_968_1781);
      Label label__False_739_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_739 = &label__False_739_impl;
      USE(label__False_739);
      Label label__True_740_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_740 = &label__True_740_impl;
      USE(label__True_740);
      GotoIfNot(implicit_cast<TNode<BoolT>>(p_x), label__False_739);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_y), label__True_737, label__False_739);
      BIND(label__False_739);
Branch(implicit_cast<TNode<BoolT>>(p_z), label__True_737, label__False_738);
      BIND(label__True_737);
            TNode<BoolT> t2377 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2374())));
      *t2376_967 = implicit_cast<TNode<BoolT>>(t2377);
      Goto(label__done_968_1781);
      BIND(label__False_738);
            TNode<BoolT> t2378 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2375())));
      *t2376_967 = implicit_cast<TNode<BoolT>>(t2378);
      Goto(label__done_968_1781);
      BIND(label__done_968_1781);
    }
    *_return_399 = implicit_cast<TNode<BoolT>>((*t2376_967).value());
    Goto(label_macro_end_1780);
  }
  BIND(label_macro_end_1780);
  return implicit_cast<TNode<BoolT>>((*_return_399).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr3(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  TVARIABLE(BoolT, _return_400_impl);
  auto _return_400 = &_return_400_impl;
  USE(_return_400);
  Label label_macro_end_1782_impl(this, {_return_400}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1782 = &label_macro_end_1782_impl;
  USE(label_macro_end_1782);
  // ../../test/torque/test-torque.tq:486:53
  {
    // ../../test/torque/test-torque.tq:487:5
    auto t2379 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2380 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2381_969_impl);
    auto t2381_969 = &t2381_969_impl;
    USE(t2381_969);
    {
      Label label__True_741_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_741 = &label__True_741_impl;
      USE(label__True_741);
      Label label__False_742_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_742 = &label__False_742_impl;
      USE(label__False_742);
      Label label__done_970_1783_impl(this, {t2381_969}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_970_1783 = &label__done_970_1783_impl;
      USE(label__done_970_1783);
      Label label__False_743_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_743 = &label__False_743_impl;
      USE(label__False_743);
      Label label__True_744_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_744 = &label__True_744_impl;
      USE(label__True_744);
      GotoIfNot(implicit_cast<TNode<BoolT>>(p_x), label__False_743);
Branch(implicit_cast<TNode<BoolT>>(p_y), label__True_741, label__False_743);
      BIND(label__False_743);
      BoolToBranch(implicit_cast<TNode<BoolT>>(p_z), label__True_741, label__False_742);
      BIND(label__True_741);
            TNode<BoolT> t2382 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2379())));
      *t2381_969 = implicit_cast<TNode<BoolT>>(t2382);
      Goto(label__done_970_1783);
      BIND(label__False_742);
            TNode<BoolT> t2383 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2380())));
      *t2381_969 = implicit_cast<TNode<BoolT>>(t2383);
      Goto(label__done_970_1783);
      BIND(label__done_970_1783);
    }
    *_return_400 = implicit_cast<TNode<BoolT>>((*t2381_969).value());
    Goto(label_macro_end_1782);
  }
  BIND(label_macro_end_1782);
  return implicit_cast<TNode<BoolT>>((*_return_400).value());
}

void TestBuiltinsFromDSLAssembler::TestLogicalOperators() {
  Label label_macro_end_1784_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1784 = &label_macro_end_1784_impl;
  USE(label_macro_end_1784);
  // ../../test/torque/test-torque.tq:490:32
  {
    // ../../test/torque/test-torque.tq:491:5
    Label label__True_745_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_745 = &label__True_745_impl;
    USE(label__True_745);
    Label label__False_746_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_746 = &label__False_746_impl;
    USE(label__False_746);
    TNode<BoolT> t2384 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2385 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2386 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2387 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2384), implicit_cast<TNode<BoolT>>(t2385), implicit_cast<TNode<BoolT>>(t2386)));
    USE(implicit_cast<TNode<BoolT>>(t2387));
    Branch(implicit_cast<TNode<BoolT>>(t2387), label__True_745, label__False_746);
    BIND(label__False_746);
    Print("assert 'TestAndOr1(true, true, true)' failed at ../../test/torque/test-torque.tq:491:5");
    Unreachable();
    BIND(label__True_745);
    // ../../test/torque/test-torque.tq:492:5
    Label label__True_747_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_747 = &label__True_747_impl;
    USE(label__True_747);
    Label label__False_748_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_748 = &label__False_748_impl;
    USE(label__False_748);
    TNode<BoolT> t2388 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2389 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2390 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2391 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2388), implicit_cast<TNode<BoolT>>(t2389), implicit_cast<TNode<BoolT>>(t2390)));
    USE(implicit_cast<TNode<BoolT>>(t2391));
    Branch(implicit_cast<TNode<BoolT>>(t2391), label__True_747, label__False_748);
    BIND(label__False_748);
    Print("assert 'TestAndOr2(true, true, true)' failed at ../../test/torque/test-torque.tq:492:5");
    Unreachable();
    BIND(label__True_747);
    // ../../test/torque/test-torque.tq:493:5
    Label label__True_749_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_749 = &label__True_749_impl;
    USE(label__True_749);
    Label label__False_750_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_750 = &label__False_750_impl;
    USE(label__False_750);
    TNode<BoolT> t2392 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2393 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2394 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2395 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2392), implicit_cast<TNode<BoolT>>(t2393), implicit_cast<TNode<BoolT>>(t2394)));
    USE(implicit_cast<TNode<BoolT>>(t2395));
    Branch(implicit_cast<TNode<BoolT>>(t2395), label__True_749, label__False_750);
    BIND(label__False_750);
    Print("assert 'TestAndOr3(true, true, true)' failed at ../../test/torque/test-torque.tq:493:5");
    Unreachable();
    BIND(label__True_749);
    // ../../test/torque/test-torque.tq:494:5
    Label label__True_751_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_751 = &label__True_751_impl;
    USE(label__True_751);
    Label label__False_752_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_752 = &label__False_752_impl;
    USE(label__False_752);
    TNode<BoolT> t2396 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2397 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2398 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2399 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2396), implicit_cast<TNode<BoolT>>(t2397), implicit_cast<TNode<BoolT>>(t2398)));
    USE(implicit_cast<TNode<BoolT>>(t2399));
    Branch(implicit_cast<TNode<BoolT>>(t2399), label__True_751, label__False_752);
    BIND(label__False_752);
    Print("assert 'TestAndOr1(true, true, false)' failed at ../../test/torque/test-torque.tq:494:5");
    Unreachable();
    BIND(label__True_751);
    // ../../test/torque/test-torque.tq:495:5
    Label label__True_753_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_753 = &label__True_753_impl;
    USE(label__True_753);
    Label label__False_754_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_754 = &label__False_754_impl;
    USE(label__False_754);
    TNode<BoolT> t2400 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2401 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2402 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2403 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2400), implicit_cast<TNode<BoolT>>(t2401), implicit_cast<TNode<BoolT>>(t2402)));
    USE(implicit_cast<TNode<BoolT>>(t2403));
    Branch(implicit_cast<TNode<BoolT>>(t2403), label__True_753, label__False_754);
    BIND(label__False_754);
    Print("assert 'TestAndOr2(true, true, false)' failed at ../../test/torque/test-torque.tq:495:5");
    Unreachable();
    BIND(label__True_753);
    // ../../test/torque/test-torque.tq:496:5
    Label label__True_755_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_755 = &label__True_755_impl;
    USE(label__True_755);
    Label label__False_756_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_756 = &label__False_756_impl;
    USE(label__False_756);
    TNode<BoolT> t2404 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2405 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2406 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2407 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2404), implicit_cast<TNode<BoolT>>(t2405), implicit_cast<TNode<BoolT>>(t2406)));
    USE(implicit_cast<TNode<BoolT>>(t2407));
    Branch(implicit_cast<TNode<BoolT>>(t2407), label__True_755, label__False_756);
    BIND(label__False_756);
    Print("assert 'TestAndOr3(true, true, false)' failed at ../../test/torque/test-torque.tq:496:5");
    Unreachable();
    BIND(label__True_755);
    // ../../test/torque/test-torque.tq:497:5
    Label label__True_757_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_757 = &label__True_757_impl;
    USE(label__True_757);
    Label label__False_758_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_758 = &label__False_758_impl;
    USE(label__False_758);
    TNode<BoolT> t2408 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2409 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2410 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2411 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2408), implicit_cast<TNode<BoolT>>(t2409), implicit_cast<TNode<BoolT>>(t2410)));
    USE(implicit_cast<TNode<BoolT>>(t2411));
    Branch(implicit_cast<TNode<BoolT>>(t2411), label__True_757, label__False_758);
    BIND(label__False_758);
    Print("assert 'TestAndOr1(true, false, true)' failed at ../../test/torque/test-torque.tq:497:5");
    Unreachable();
    BIND(label__True_757);
    // ../../test/torque/test-torque.tq:498:5
    Label label__True_759_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_759 = &label__True_759_impl;
    USE(label__True_759);
    Label label__False_760_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_760 = &label__False_760_impl;
    USE(label__False_760);
    TNode<BoolT> t2412 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2413 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2414 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2415 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2412), implicit_cast<TNode<BoolT>>(t2413), implicit_cast<TNode<BoolT>>(t2414)));
    USE(implicit_cast<TNode<BoolT>>(t2415));
    Branch(implicit_cast<TNode<BoolT>>(t2415), label__True_759, label__False_760);
    BIND(label__False_760);
    Print("assert 'TestAndOr2(true, false, true)' failed at ../../test/torque/test-torque.tq:498:5");
    Unreachable();
    BIND(label__True_759);
    // ../../test/torque/test-torque.tq:499:5
    Label label__True_761_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_761 = &label__True_761_impl;
    USE(label__True_761);
    Label label__False_762_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_762 = &label__False_762_impl;
    USE(label__False_762);
    TNode<BoolT> t2416 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2417 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2418 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2419 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2416), implicit_cast<TNode<BoolT>>(t2417), implicit_cast<TNode<BoolT>>(t2418)));
    USE(implicit_cast<TNode<BoolT>>(t2419));
    Branch(implicit_cast<TNode<BoolT>>(t2419), label__True_761, label__False_762);
    BIND(label__False_762);
    Print("assert 'TestAndOr3(true, false, true)' failed at ../../test/torque/test-torque.tq:499:5");
    Unreachable();
    BIND(label__True_761);
    // ../../test/torque/test-torque.tq:500:5
    Label label__True_763_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_763 = &label__True_763_impl;
    USE(label__True_763);
    Label label__False_764_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_764 = &label__False_764_impl;
    USE(label__False_764);
    TNode<BoolT> t2420 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2421 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2422 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2423 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2420), implicit_cast<TNode<BoolT>>(t2421), implicit_cast<TNode<BoolT>>(t2422)));
    USE(implicit_cast<TNode<BoolT>>(t2423));
    TNode<BoolT> t2424 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2423)));
    USE(implicit_cast<TNode<BoolT>>(t2424));
    Branch(implicit_cast<TNode<BoolT>>(t2424), label__True_763, label__False_764);
    BIND(label__False_764);
    Print("assert '!TestAndOr1(true, false, false)' failed at ../../test/torque/test-torque.tq:500:5");
    Unreachable();
    BIND(label__True_763);
    // ../../test/torque/test-torque.tq:501:5
    Label label__True_765_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_765 = &label__True_765_impl;
    USE(label__True_765);
    Label label__False_766_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_766 = &label__False_766_impl;
    USE(label__False_766);
    TNode<BoolT> t2425 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2426 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2427 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2428 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2425), implicit_cast<TNode<BoolT>>(t2426), implicit_cast<TNode<BoolT>>(t2427)));
    USE(implicit_cast<TNode<BoolT>>(t2428));
    TNode<BoolT> t2429 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2428)));
    USE(implicit_cast<TNode<BoolT>>(t2429));
    Branch(implicit_cast<TNode<BoolT>>(t2429), label__True_765, label__False_766);
    BIND(label__False_766);
    Print("assert '!TestAndOr2(true, false, false)' failed at ../../test/torque/test-torque.tq:501:5");
    Unreachable();
    BIND(label__True_765);
    // ../../test/torque/test-torque.tq:502:5
    Label label__True_767_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_767 = &label__True_767_impl;
    USE(label__True_767);
    Label label__False_768_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_768 = &label__False_768_impl;
    USE(label__False_768);
    TNode<BoolT> t2430 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2431 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2432 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2433 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2430), implicit_cast<TNode<BoolT>>(t2431), implicit_cast<TNode<BoolT>>(t2432)));
    USE(implicit_cast<TNode<BoolT>>(t2433));
    TNode<BoolT> t2434 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2433)));
    USE(implicit_cast<TNode<BoolT>>(t2434));
    Branch(implicit_cast<TNode<BoolT>>(t2434), label__True_767, label__False_768);
    BIND(label__False_768);
    Print("assert '!TestAndOr3(true, false, false)' failed at ../../test/torque/test-torque.tq:502:5");
    Unreachable();
    BIND(label__True_767);
    // ../../test/torque/test-torque.tq:503:5
    Label label__True_769_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_769 = &label__True_769_impl;
    USE(label__True_769);
    Label label__False_770_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_770 = &label__False_770_impl;
    USE(label__False_770);
    TNode<BoolT> t2435 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2436 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2437 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2438 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2435), implicit_cast<TNode<BoolT>>(t2436), implicit_cast<TNode<BoolT>>(t2437)));
    USE(implicit_cast<TNode<BoolT>>(t2438));
    Branch(implicit_cast<TNode<BoolT>>(t2438), label__True_769, label__False_770);
    BIND(label__False_770);
    Print("assert 'TestAndOr1(false, true, true)' failed at ../../test/torque/test-torque.tq:503:5");
    Unreachable();
    BIND(label__True_769);
    // ../../test/torque/test-torque.tq:504:5
    Label label__True_771_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_771 = &label__True_771_impl;
    USE(label__True_771);
    Label label__False_772_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_772 = &label__False_772_impl;
    USE(label__False_772);
    TNode<BoolT> t2439 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2440 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2441 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2442 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2439), implicit_cast<TNode<BoolT>>(t2440), implicit_cast<TNode<BoolT>>(t2441)));
    USE(implicit_cast<TNode<BoolT>>(t2442));
    Branch(implicit_cast<TNode<BoolT>>(t2442), label__True_771, label__False_772);
    BIND(label__False_772);
    Print("assert 'TestAndOr2(false, true, true)' failed at ../../test/torque/test-torque.tq:504:5");
    Unreachable();
    BIND(label__True_771);
    // ../../test/torque/test-torque.tq:505:5
    Label label__True_773_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_773 = &label__True_773_impl;
    USE(label__True_773);
    Label label__False_774_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_774 = &label__False_774_impl;
    USE(label__False_774);
    TNode<BoolT> t2443 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2444 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2445 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2446 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2443), implicit_cast<TNode<BoolT>>(t2444), implicit_cast<TNode<BoolT>>(t2445)));
    USE(implicit_cast<TNode<BoolT>>(t2446));
    Branch(implicit_cast<TNode<BoolT>>(t2446), label__True_773, label__False_774);
    BIND(label__False_774);
    Print("assert 'TestAndOr3(false, true, true)' failed at ../../test/torque/test-torque.tq:505:5");
    Unreachable();
    BIND(label__True_773);
    // ../../test/torque/test-torque.tq:506:5
    Label label__True_775_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_775 = &label__True_775_impl;
    USE(label__True_775);
    Label label__False_776_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_776 = &label__False_776_impl;
    USE(label__False_776);
    TNode<BoolT> t2447 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2448 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2449 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2450 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2447), implicit_cast<TNode<BoolT>>(t2448), implicit_cast<TNode<BoolT>>(t2449)));
    USE(implicit_cast<TNode<BoolT>>(t2450));
    TNode<BoolT> t2451 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2450)));
    USE(implicit_cast<TNode<BoolT>>(t2451));
    Branch(implicit_cast<TNode<BoolT>>(t2451), label__True_775, label__False_776);
    BIND(label__False_776);
    Print("assert '!TestAndOr1(false, true, false)' failed at ../../test/torque/test-torque.tq:506:5");
    Unreachable();
    BIND(label__True_775);
    // ../../test/torque/test-torque.tq:507:5
    Label label__True_777_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_777 = &label__True_777_impl;
    USE(label__True_777);
    Label label__False_778_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_778 = &label__False_778_impl;
    USE(label__False_778);
    TNode<BoolT> t2452 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2453 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2454 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2455 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2452), implicit_cast<TNode<BoolT>>(t2453), implicit_cast<TNode<BoolT>>(t2454)));
    USE(implicit_cast<TNode<BoolT>>(t2455));
    TNode<BoolT> t2456 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2455)));
    USE(implicit_cast<TNode<BoolT>>(t2456));
    Branch(implicit_cast<TNode<BoolT>>(t2456), label__True_777, label__False_778);
    BIND(label__False_778);
    Print("assert '!TestAndOr2(false, true, false)' failed at ../../test/torque/test-torque.tq:507:5");
    Unreachable();
    BIND(label__True_777);
    // ../../test/torque/test-torque.tq:508:5
    Label label__True_779_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_779 = &label__True_779_impl;
    USE(label__True_779);
    Label label__False_780_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_780 = &label__False_780_impl;
    USE(label__False_780);
    TNode<BoolT> t2457 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2458 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2459 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2460 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2457), implicit_cast<TNode<BoolT>>(t2458), implicit_cast<TNode<BoolT>>(t2459)));
    USE(implicit_cast<TNode<BoolT>>(t2460));
    TNode<BoolT> t2461 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2460)));
    USE(implicit_cast<TNode<BoolT>>(t2461));
    Branch(implicit_cast<TNode<BoolT>>(t2461), label__True_779, label__False_780);
    BIND(label__False_780);
    Print("assert '!TestAndOr3(false, true, false)' failed at ../../test/torque/test-torque.tq:508:5");
    Unreachable();
    BIND(label__True_779);
    // ../../test/torque/test-torque.tq:509:5
    Label label__True_781_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_781 = &label__True_781_impl;
    USE(label__True_781);
    Label label__False_782_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_782 = &label__False_782_impl;
    USE(label__False_782);
    TNode<BoolT> t2462 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2463 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2464 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2465 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2462), implicit_cast<TNode<BoolT>>(t2463), implicit_cast<TNode<BoolT>>(t2464)));
    USE(implicit_cast<TNode<BoolT>>(t2465));
    Branch(implicit_cast<TNode<BoolT>>(t2465), label__True_781, label__False_782);
    BIND(label__False_782);
    Print("assert 'TestAndOr1(false, false, true)' failed at ../../test/torque/test-torque.tq:509:5");
    Unreachable();
    BIND(label__True_781);
    // ../../test/torque/test-torque.tq:510:5
    Label label__True_783_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_783 = &label__True_783_impl;
    USE(label__True_783);
    Label label__False_784_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_784 = &label__False_784_impl;
    USE(label__False_784);
    TNode<BoolT> t2466 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2467 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2468 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2469 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2466), implicit_cast<TNode<BoolT>>(t2467), implicit_cast<TNode<BoolT>>(t2468)));
    USE(implicit_cast<TNode<BoolT>>(t2469));
    Branch(implicit_cast<TNode<BoolT>>(t2469), label__True_783, label__False_784);
    BIND(label__False_784);
    Print("assert 'TestAndOr2(false, false, true)' failed at ../../test/torque/test-torque.tq:510:5");
    Unreachable();
    BIND(label__True_783);
    // ../../test/torque/test-torque.tq:511:5
    Label label__True_785_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_785 = &label__True_785_impl;
    USE(label__True_785);
    Label label__False_786_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_786 = &label__False_786_impl;
    USE(label__False_786);
    TNode<BoolT> t2470 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2471 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2472 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2473 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2470), implicit_cast<TNode<BoolT>>(t2471), implicit_cast<TNode<BoolT>>(t2472)));
    USE(implicit_cast<TNode<BoolT>>(t2473));
    Branch(implicit_cast<TNode<BoolT>>(t2473), label__True_785, label__False_786);
    BIND(label__False_786);
    Print("assert 'TestAndOr3(false, false, true)' failed at ../../test/torque/test-torque.tq:511:5");
    Unreachable();
    BIND(label__True_785);
    // ../../test/torque/test-torque.tq:512:5
    Label label__True_787_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_787 = &label__True_787_impl;
    USE(label__True_787);
    Label label__False_788_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_788 = &label__False_788_impl;
    USE(label__False_788);
    TNode<BoolT> t2474 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2475 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2476 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2477 = UncheckedCast<BoolT>(TestAndOr1(implicit_cast<TNode<BoolT>>(t2474), implicit_cast<TNode<BoolT>>(t2475), implicit_cast<TNode<BoolT>>(t2476)));
    USE(implicit_cast<TNode<BoolT>>(t2477));
    TNode<BoolT> t2478 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2477)));
    USE(implicit_cast<TNode<BoolT>>(t2478));
    Branch(implicit_cast<TNode<BoolT>>(t2478), label__True_787, label__False_788);
    BIND(label__False_788);
    Print("assert '!TestAndOr1(false, false, false)' failed at ../../test/torque/test-torque.tq:512:5");
    Unreachable();
    BIND(label__True_787);
    // ../../test/torque/test-torque.tq:513:5
    Label label__True_789_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_789 = &label__True_789_impl;
    USE(label__True_789);
    Label label__False_790_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_790 = &label__False_790_impl;
    USE(label__False_790);
    TNode<BoolT> t2479 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2480 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2481 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2482 = UncheckedCast<BoolT>(TestAndOr2(implicit_cast<TNode<BoolT>>(t2479), implicit_cast<TNode<BoolT>>(t2480), implicit_cast<TNode<BoolT>>(t2481)));
    USE(implicit_cast<TNode<BoolT>>(t2482));
    TNode<BoolT> t2483 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2482)));
    USE(implicit_cast<TNode<BoolT>>(t2483));
    Branch(implicit_cast<TNode<BoolT>>(t2483), label__True_789, label__False_790);
    BIND(label__False_790);
    Print("assert '!TestAndOr2(false, false, false)' failed at ../../test/torque/test-torque.tq:513:5");
    Unreachable();
    BIND(label__True_789);
    // ../../test/torque/test-torque.tq:514:5
    Label label__True_791_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_791 = &label__True_791_impl;
    USE(label__True_791);
    Label label__False_792_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_792 = &label__False_792_impl;
    USE(label__False_792);
    TNode<BoolT> t2484 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2485 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2486 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2487 = UncheckedCast<BoolT>(TestAndOr3(implicit_cast<TNode<BoolT>>(t2484), implicit_cast<TNode<BoolT>>(t2485), implicit_cast<TNode<BoolT>>(t2486)));
    USE(implicit_cast<TNode<BoolT>>(t2487));
    TNode<BoolT> t2488 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2487)));
    USE(implicit_cast<TNode<BoolT>>(t2488));
    Branch(implicit_cast<TNode<BoolT>>(t2488), label__True_791, label__False_792);
    BIND(label__False_792);
    Print("assert '!TestAndOr3(false, false, false)' failed at ../../test/torque/test-torque.tq:514:5");
    Unreachable();
    BIND(label__True_791);
    // ../../test/torque/test-torque.tq:515:5
    Label label__True_793_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_793 = &label__True_793_impl;
    USE(label__True_793);
    Label label__False_794_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_794 = &label__False_794_impl;
    USE(label__False_794);
    TNode<BoolT> t2489 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2490 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2491 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2492 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2489), implicit_cast<TNode<BoolT>>(t2490), implicit_cast<TNode<BoolT>>(t2491)));
    USE(implicit_cast<TNode<BoolT>>(t2492));
    Branch(implicit_cast<TNode<BoolT>>(t2492), label__True_793, label__False_794);
    BIND(label__False_794);
    Print("assert 'TestOrAnd1(true, true, true)' failed at ../../test/torque/test-torque.tq:515:5");
    Unreachable();
    BIND(label__True_793);
    // ../../test/torque/test-torque.tq:516:5
    Label label__True_795_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_795 = &label__True_795_impl;
    USE(label__True_795);
    Label label__False_796_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_796 = &label__False_796_impl;
    USE(label__False_796);
    TNode<BoolT> t2493 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2494 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2495 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2496 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2493), implicit_cast<TNode<BoolT>>(t2494), implicit_cast<TNode<BoolT>>(t2495)));
    USE(implicit_cast<TNode<BoolT>>(t2496));
    Branch(implicit_cast<TNode<BoolT>>(t2496), label__True_795, label__False_796);
    BIND(label__False_796);
    Print("assert 'TestOrAnd2(true, true, true)' failed at ../../test/torque/test-torque.tq:516:5");
    Unreachable();
    BIND(label__True_795);
    // ../../test/torque/test-torque.tq:517:5
    Label label__True_797_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_797 = &label__True_797_impl;
    USE(label__True_797);
    Label label__False_798_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_798 = &label__False_798_impl;
    USE(label__False_798);
    TNode<BoolT> t2497 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2498 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2499 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2500 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2497), implicit_cast<TNode<BoolT>>(t2498), implicit_cast<TNode<BoolT>>(t2499)));
    USE(implicit_cast<TNode<BoolT>>(t2500));
    Branch(implicit_cast<TNode<BoolT>>(t2500), label__True_797, label__False_798);
    BIND(label__False_798);
    Print("assert 'TestOrAnd3(true, true, true)' failed at ../../test/torque/test-torque.tq:517:5");
    Unreachable();
    BIND(label__True_797);
    // ../../test/torque/test-torque.tq:518:5
    Label label__True_799_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_799 = &label__True_799_impl;
    USE(label__True_799);
    Label label__False_800_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_800 = &label__False_800_impl;
    USE(label__False_800);
    TNode<BoolT> t2501 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2502 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2503 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2504 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2501), implicit_cast<TNode<BoolT>>(t2502), implicit_cast<TNode<BoolT>>(t2503)));
    USE(implicit_cast<TNode<BoolT>>(t2504));
    Branch(implicit_cast<TNode<BoolT>>(t2504), label__True_799, label__False_800);
    BIND(label__False_800);
    Print("assert 'TestOrAnd1(true, true, false)' failed at ../../test/torque/test-torque.tq:518:5");
    Unreachable();
    BIND(label__True_799);
    // ../../test/torque/test-torque.tq:519:5
    Label label__True_801_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_801 = &label__True_801_impl;
    USE(label__True_801);
    Label label__False_802_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_802 = &label__False_802_impl;
    USE(label__False_802);
    TNode<BoolT> t2505 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2506 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2507 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2508 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2505), implicit_cast<TNode<BoolT>>(t2506), implicit_cast<TNode<BoolT>>(t2507)));
    USE(implicit_cast<TNode<BoolT>>(t2508));
    Branch(implicit_cast<TNode<BoolT>>(t2508), label__True_801, label__False_802);
    BIND(label__False_802);
    Print("assert 'TestOrAnd2(true, true, false)' failed at ../../test/torque/test-torque.tq:519:5");
    Unreachable();
    BIND(label__True_801);
    // ../../test/torque/test-torque.tq:520:5
    Label label__True_803_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_803 = &label__True_803_impl;
    USE(label__True_803);
    Label label__False_804_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_804 = &label__False_804_impl;
    USE(label__False_804);
    TNode<BoolT> t2509 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2510 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2511 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2512 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2509), implicit_cast<TNode<BoolT>>(t2510), implicit_cast<TNode<BoolT>>(t2511)));
    USE(implicit_cast<TNode<BoolT>>(t2512));
    Branch(implicit_cast<TNode<BoolT>>(t2512), label__True_803, label__False_804);
    BIND(label__False_804);
    Print("assert 'TestOrAnd3(true, true, false)' failed at ../../test/torque/test-torque.tq:520:5");
    Unreachable();
    BIND(label__True_803);
    // ../../test/torque/test-torque.tq:521:5
    Label label__True_805_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_805 = &label__True_805_impl;
    USE(label__True_805);
    Label label__False_806_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_806 = &label__False_806_impl;
    USE(label__False_806);
    TNode<BoolT> t2513 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2514 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2515 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2516 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2513), implicit_cast<TNode<BoolT>>(t2514), implicit_cast<TNode<BoolT>>(t2515)));
    USE(implicit_cast<TNode<BoolT>>(t2516));
    Branch(implicit_cast<TNode<BoolT>>(t2516), label__True_805, label__False_806);
    BIND(label__False_806);
    Print("assert 'TestOrAnd1(true, false, true)' failed at ../../test/torque/test-torque.tq:521:5");
    Unreachable();
    BIND(label__True_805);
    // ../../test/torque/test-torque.tq:522:5
    Label label__True_807_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_807 = &label__True_807_impl;
    USE(label__True_807);
    Label label__False_808_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_808 = &label__False_808_impl;
    USE(label__False_808);
    TNode<BoolT> t2517 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2518 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2519 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2520 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2517), implicit_cast<TNode<BoolT>>(t2518), implicit_cast<TNode<BoolT>>(t2519)));
    USE(implicit_cast<TNode<BoolT>>(t2520));
    Branch(implicit_cast<TNode<BoolT>>(t2520), label__True_807, label__False_808);
    BIND(label__False_808);
    Print("assert 'TestOrAnd2(true, false, true)' failed at ../../test/torque/test-torque.tq:522:5");
    Unreachable();
    BIND(label__True_807);
    // ../../test/torque/test-torque.tq:523:5
    Label label__True_809_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_809 = &label__True_809_impl;
    USE(label__True_809);
    Label label__False_810_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_810 = &label__False_810_impl;
    USE(label__False_810);
    TNode<BoolT> t2521 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2522 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2523 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2524 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2521), implicit_cast<TNode<BoolT>>(t2522), implicit_cast<TNode<BoolT>>(t2523)));
    USE(implicit_cast<TNode<BoolT>>(t2524));
    Branch(implicit_cast<TNode<BoolT>>(t2524), label__True_809, label__False_810);
    BIND(label__False_810);
    Print("assert 'TestOrAnd3(true, false, true)' failed at ../../test/torque/test-torque.tq:523:5");
    Unreachable();
    BIND(label__True_809);
    // ../../test/torque/test-torque.tq:524:5
    Label label__True_811_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_811 = &label__True_811_impl;
    USE(label__True_811);
    Label label__False_812_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_812 = &label__False_812_impl;
    USE(label__False_812);
    TNode<BoolT> t2525 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2526 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2527 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2528 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2525), implicit_cast<TNode<BoolT>>(t2526), implicit_cast<TNode<BoolT>>(t2527)));
    USE(implicit_cast<TNode<BoolT>>(t2528));
    Branch(implicit_cast<TNode<BoolT>>(t2528), label__True_811, label__False_812);
    BIND(label__False_812);
    Print("assert 'TestOrAnd1(true, false, false)' failed at ../../test/torque/test-torque.tq:524:5");
    Unreachable();
    BIND(label__True_811);
    // ../../test/torque/test-torque.tq:525:5
    Label label__True_813_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_813 = &label__True_813_impl;
    USE(label__True_813);
    Label label__False_814_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_814 = &label__False_814_impl;
    USE(label__False_814);
    TNode<BoolT> t2529 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2530 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2531 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2532 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2529), implicit_cast<TNode<BoolT>>(t2530), implicit_cast<TNode<BoolT>>(t2531)));
    USE(implicit_cast<TNode<BoolT>>(t2532));
    Branch(implicit_cast<TNode<BoolT>>(t2532), label__True_813, label__False_814);
    BIND(label__False_814);
    Print("assert 'TestOrAnd2(true, false, false)' failed at ../../test/torque/test-torque.tq:525:5");
    Unreachable();
    BIND(label__True_813);
    // ../../test/torque/test-torque.tq:526:5
    Label label__True_815_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_815 = &label__True_815_impl;
    USE(label__True_815);
    Label label__False_816_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_816 = &label__False_816_impl;
    USE(label__False_816);
    TNode<BoolT> t2533 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2534 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2535 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2536 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2533), implicit_cast<TNode<BoolT>>(t2534), implicit_cast<TNode<BoolT>>(t2535)));
    USE(implicit_cast<TNode<BoolT>>(t2536));
    Branch(implicit_cast<TNode<BoolT>>(t2536), label__True_815, label__False_816);
    BIND(label__False_816);
    Print("assert 'TestOrAnd3(true, false, false)' failed at ../../test/torque/test-torque.tq:526:5");
    Unreachable();
    BIND(label__True_815);
    // ../../test/torque/test-torque.tq:527:5
    Label label__True_817_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_817 = &label__True_817_impl;
    USE(label__True_817);
    Label label__False_818_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_818 = &label__False_818_impl;
    USE(label__False_818);
    TNode<BoolT> t2537 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2538 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2539 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2540 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2537), implicit_cast<TNode<BoolT>>(t2538), implicit_cast<TNode<BoolT>>(t2539)));
    USE(implicit_cast<TNode<BoolT>>(t2540));
    Branch(implicit_cast<TNode<BoolT>>(t2540), label__True_817, label__False_818);
    BIND(label__False_818);
    Print("assert 'TestOrAnd1(false, true, true)' failed at ../../test/torque/test-torque.tq:527:5");
    Unreachable();
    BIND(label__True_817);
    // ../../test/torque/test-torque.tq:528:5
    Label label__True_819_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_819 = &label__True_819_impl;
    USE(label__True_819);
    Label label__False_820_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_820 = &label__False_820_impl;
    USE(label__False_820);
    TNode<BoolT> t2541 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2542 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2543 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2544 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2541), implicit_cast<TNode<BoolT>>(t2542), implicit_cast<TNode<BoolT>>(t2543)));
    USE(implicit_cast<TNode<BoolT>>(t2544));
    Branch(implicit_cast<TNode<BoolT>>(t2544), label__True_819, label__False_820);
    BIND(label__False_820);
    Print("assert 'TestOrAnd2(false, true, true)' failed at ../../test/torque/test-torque.tq:528:5");
    Unreachable();
    BIND(label__True_819);
    // ../../test/torque/test-torque.tq:529:5
    Label label__True_821_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_821 = &label__True_821_impl;
    USE(label__True_821);
    Label label__False_822_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_822 = &label__False_822_impl;
    USE(label__False_822);
    TNode<BoolT> t2545 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2546 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2547 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2548 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2545), implicit_cast<TNode<BoolT>>(t2546), implicit_cast<TNode<BoolT>>(t2547)));
    USE(implicit_cast<TNode<BoolT>>(t2548));
    Branch(implicit_cast<TNode<BoolT>>(t2548), label__True_821, label__False_822);
    BIND(label__False_822);
    Print("assert 'TestOrAnd3(false, true, true)' failed at ../../test/torque/test-torque.tq:529:5");
    Unreachable();
    BIND(label__True_821);
    // ../../test/torque/test-torque.tq:530:5
    Label label__True_823_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_823 = &label__True_823_impl;
    USE(label__True_823);
    Label label__False_824_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_824 = &label__False_824_impl;
    USE(label__False_824);
    TNode<BoolT> t2549 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2550 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2551 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2552 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2549), implicit_cast<TNode<BoolT>>(t2550), implicit_cast<TNode<BoolT>>(t2551)));
    USE(implicit_cast<TNode<BoolT>>(t2552));
    TNode<BoolT> t2553 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2552)));
    USE(implicit_cast<TNode<BoolT>>(t2553));
    Branch(implicit_cast<TNode<BoolT>>(t2553), label__True_823, label__False_824);
    BIND(label__False_824);
    Print("assert '!TestOrAnd1(false, true, false)' failed at ../../test/torque/test-torque.tq:530:5");
    Unreachable();
    BIND(label__True_823);
    // ../../test/torque/test-torque.tq:531:5
    Label label__True_825_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_825 = &label__True_825_impl;
    USE(label__True_825);
    Label label__False_826_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_826 = &label__False_826_impl;
    USE(label__False_826);
    TNode<BoolT> t2554 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2555 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2556 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2557 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2554), implicit_cast<TNode<BoolT>>(t2555), implicit_cast<TNode<BoolT>>(t2556)));
    USE(implicit_cast<TNode<BoolT>>(t2557));
    TNode<BoolT> t2558 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2557)));
    USE(implicit_cast<TNode<BoolT>>(t2558));
    Branch(implicit_cast<TNode<BoolT>>(t2558), label__True_825, label__False_826);
    BIND(label__False_826);
    Print("assert '!TestOrAnd2(false, true, false)' failed at ../../test/torque/test-torque.tq:531:5");
    Unreachable();
    BIND(label__True_825);
    // ../../test/torque/test-torque.tq:532:5
    Label label__True_827_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_827 = &label__True_827_impl;
    USE(label__True_827);
    Label label__False_828_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_828 = &label__False_828_impl;
    USE(label__False_828);
    TNode<BoolT> t2559 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2560 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2561 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2562 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2559), implicit_cast<TNode<BoolT>>(t2560), implicit_cast<TNode<BoolT>>(t2561)));
    USE(implicit_cast<TNode<BoolT>>(t2562));
    TNode<BoolT> t2563 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2562)));
    USE(implicit_cast<TNode<BoolT>>(t2563));
    Branch(implicit_cast<TNode<BoolT>>(t2563), label__True_827, label__False_828);
    BIND(label__False_828);
    Print("assert '!TestOrAnd3(false, true, false)' failed at ../../test/torque/test-torque.tq:532:5");
    Unreachable();
    BIND(label__True_827);
    // ../../test/torque/test-torque.tq:533:5
    Label label__True_829_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_829 = &label__True_829_impl;
    USE(label__True_829);
    Label label__False_830_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_830 = &label__False_830_impl;
    USE(label__False_830);
    TNode<BoolT> t2564 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2565 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2566 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2567 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2564), implicit_cast<TNode<BoolT>>(t2565), implicit_cast<TNode<BoolT>>(t2566)));
    USE(implicit_cast<TNode<BoolT>>(t2567));
    TNode<BoolT> t2568 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2567)));
    USE(implicit_cast<TNode<BoolT>>(t2568));
    Branch(implicit_cast<TNode<BoolT>>(t2568), label__True_829, label__False_830);
    BIND(label__False_830);
    Print("assert '!TestOrAnd1(false, false, true)' failed at ../../test/torque/test-torque.tq:533:5");
    Unreachable();
    BIND(label__True_829);
    // ../../test/torque/test-torque.tq:534:5
    Label label__True_831_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_831 = &label__True_831_impl;
    USE(label__True_831);
    Label label__False_832_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_832 = &label__False_832_impl;
    USE(label__False_832);
    TNode<BoolT> t2569 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2570 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2571 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2572 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2569), implicit_cast<TNode<BoolT>>(t2570), implicit_cast<TNode<BoolT>>(t2571)));
    USE(implicit_cast<TNode<BoolT>>(t2572));
    TNode<BoolT> t2573 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2572)));
    USE(implicit_cast<TNode<BoolT>>(t2573));
    Branch(implicit_cast<TNode<BoolT>>(t2573), label__True_831, label__False_832);
    BIND(label__False_832);
    Print("assert '!TestOrAnd2(false, false, true)' failed at ../../test/torque/test-torque.tq:534:5");
    Unreachable();
    BIND(label__True_831);
    // ../../test/torque/test-torque.tq:535:5
    Label label__True_833_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_833 = &label__True_833_impl;
    USE(label__True_833);
    Label label__False_834_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_834 = &label__False_834_impl;
    USE(label__False_834);
    TNode<BoolT> t2574 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2575 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2576 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    TNode<BoolT> t2577 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2574), implicit_cast<TNode<BoolT>>(t2575), implicit_cast<TNode<BoolT>>(t2576)));
    USE(implicit_cast<TNode<BoolT>>(t2577));
    TNode<BoolT> t2578 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2577)));
    USE(implicit_cast<TNode<BoolT>>(t2578));
    Branch(implicit_cast<TNode<BoolT>>(t2578), label__True_833, label__False_834);
    BIND(label__False_834);
    Print("assert '!TestOrAnd3(false, false, true)' failed at ../../test/torque/test-torque.tq:535:5");
    Unreachable();
    BIND(label__True_833);
    // ../../test/torque/test-torque.tq:536:5
    Label label__True_835_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_835 = &label__True_835_impl;
    USE(label__True_835);
    Label label__False_836_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_836 = &label__False_836_impl;
    USE(label__False_836);
    TNode<BoolT> t2579 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2580 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2581 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2582 = UncheckedCast<BoolT>(TestOrAnd1(implicit_cast<TNode<BoolT>>(t2579), implicit_cast<TNode<BoolT>>(t2580), implicit_cast<TNode<BoolT>>(t2581)));
    USE(implicit_cast<TNode<BoolT>>(t2582));
    TNode<BoolT> t2583 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2582)));
    USE(implicit_cast<TNode<BoolT>>(t2583));
    Branch(implicit_cast<TNode<BoolT>>(t2583), label__True_835, label__False_836);
    BIND(label__False_836);
    Print("assert '!TestOrAnd1(false, false, false)' failed at ../../test/torque/test-torque.tq:536:5");
    Unreachable();
    BIND(label__True_835);
    // ../../test/torque/test-torque.tq:537:5
    Label label__True_837_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_837 = &label__True_837_impl;
    USE(label__True_837);
    Label label__False_838_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_838 = &label__False_838_impl;
    USE(label__False_838);
    TNode<BoolT> t2584 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2585 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2586 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2587 = UncheckedCast<BoolT>(TestOrAnd2(implicit_cast<TNode<BoolT>>(t2584), implicit_cast<TNode<BoolT>>(t2585), implicit_cast<TNode<BoolT>>(t2586)));
    USE(implicit_cast<TNode<BoolT>>(t2587));
    TNode<BoolT> t2588 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2587)));
    USE(implicit_cast<TNode<BoolT>>(t2588));
    Branch(implicit_cast<TNode<BoolT>>(t2588), label__True_837, label__False_838);
    BIND(label__False_838);
    Print("assert '!TestOrAnd2(false, false, false)' failed at ../../test/torque/test-torque.tq:537:5");
    Unreachable();
    BIND(label__True_837);
    // ../../test/torque/test-torque.tq:538:5
    Label label__True_839_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_839 = &label__True_839_impl;
    USE(label__True_839);
    Label label__False_840_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_840 = &label__False_840_impl;
    USE(label__False_840);
    TNode<BoolT> t2589 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2590 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2591 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    TNode<BoolT> t2592 = UncheckedCast<BoolT>(TestOrAnd3(implicit_cast<TNode<BoolT>>(t2589), implicit_cast<TNode<BoolT>>(t2590), implicit_cast<TNode<BoolT>>(t2591)));
    USE(implicit_cast<TNode<BoolT>>(t2592));
    TNode<BoolT> t2593 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t2592)));
    USE(implicit_cast<TNode<BoolT>>(t2593));
    Branch(implicit_cast<TNode<BoolT>>(t2593), label__True_839, label__False_840);
    BIND(label__False_840);
    Print("assert '!TestOrAnd3(false, false, false)' failed at ../../test/torque/test-torque.tq:538:5");
    Unreachable();
    BIND(label__True_839);
  }
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:84:69
  {
    // ../../test/torque/test-torque.tq:85:5
    Return(implicit_cast<TNode<Object>>(Null()));
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_548_impl);
  auto _return_548 = &_return_548_impl;
  USE(_return_548);
  Label label_macro_end_1950_impl(this, {_return_548}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1950 = &label_macro_end_1950_impl;
  USE(label_macro_end_1950);
  // ../../test/torque/test-torque.tq:131:53
  {
    // ../../test/torque/test-torque.tq:132:5
    *_return_548 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1950);
  }
  BIND(label_macro_end_1950);
  return implicit_cast<TNode<Object>>((*_return_548).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_1362) {
  TVARIABLE(Object, _return_549_impl);
  auto _return_549 = &_return_549_impl;
  USE(_return_549);
  Label label_macro_end_1951_impl(this, {_return_549}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1951 = &label_macro_end_1951_impl;
  USE(label_macro_end_1951);
  // ../../test/torque/test-torque.tq:140:16
  {
    // ../../test/torque/test-torque.tq:141:5
    *_return_549 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1951);
  }
  BIND(label_macro_end_1951);
  return implicit_cast<TNode<Object>>((*_return_549).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object> p_x) {
  TVARIABLE(Object, _return_550_impl);
  auto _return_550 = &_return_550_impl;
  USE(_return_550);
  Label label_macro_end_1953_impl(this, {_return_550}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1953 = &label_macro_end_1953_impl;
  USE(label_macro_end_1953);
  // ../../test/torque/test-torque.tq:397:42
  {
    // ../../test/torque/test-torque.tq:398:5
    {
      // ../../test/torque/test-torque.tq:398:17
      TNode<Object> _value_1226_impl;
      auto _value_1226 = &_value_1226_impl;
      USE(_value_1226);
      *_value_1226 = implicit_cast<TNode<Object>>(p_x);
      // ../../test/torque/test-torque.tq:399:7
      {
        Label label_try_done_1227_1954_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_done_1227_1954 = &label_try_done_1227_1954_impl;
        USE(label_try_done_1227_1954);
        Label label__NextCase_1363_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__NextCase_1363 = &label__NextCase_1363_impl;
        USE(label__NextCase_1363);
        Label label_try_begin_1228_1955_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_try_begin_1228_1955 = &label_try_begin_1228_1955_impl;
        USE(label_try_begin_1228_1955);
        Goto(label_try_begin_1228_1955);
        if (label_try_begin_1228_1955->is_used())
        {
          BIND(label_try_begin_1228_1955);
          // ../../test/torque/test-torque.tq:399:7
          {
            // ../../test/torque/test-torque.tq:399:7
            TNode<Smi> t4068 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>((*_value_1226)), label__NextCase_1363));
            USE(implicit_cast<TNode<Smi>>(t4068));
            TNode<Smi> x_1229_impl;
            auto x_1229 = &x_1229_impl;
            USE(x_1229);
            *x_1229 = implicit_cast<TNode<Smi>>(t4068);
            // ../../test/torque/test-torque.tq:399:22
            {
              // ../../test/torque/test-torque.tq:400:9
              int31_t t4069 = 1;
              TNode<Smi> t4070 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t4069)));
              TNode<Smi> t4071 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_1229)), implicit_cast<TNode<Smi>>(t4070)));
              USE(implicit_cast<TNode<Smi>>(t4071));
              *_return_550 = implicit_cast<TNode<Object>>(t4071);
              Goto(label_macro_end_1953);
            }
          }
        }
        if (label__NextCase_1363->is_used())
        {
          BIND(label__NextCase_1363);
          // ../../test/torque/test-torque.tq:399:7
          {
            // ../../test/torque/test-torque.tq:402:7
            TNode<Object> o_1230_impl;
            auto o_1230 = &o_1230_impl;
            USE(o_1230);
            *o_1230 = implicit_cast<TNode<Object>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_1226))));
            // ../../test/torque/test-torque.tq:402:20
            {
              // ../../test/torque/test-torque.tq:403:9
              *_return_550 = implicit_cast<TNode<Object>>((*o_1230));
              Goto(label_macro_end_1953);
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1953);
  return implicit_cast<TNode<Object>>((*_return_550).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::ExampleGenericOverload5ATSmi(TNode<Smi> p_o) {
  TVARIABLE(Smi, _return_552_impl);
  auto _return_552 = &_return_552_impl;
  USE(_return_552);
  Label label_macro_end_1957_impl(this, {_return_552}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1957 = &label_macro_end_1957_impl;
  USE(label_macro_end_1957);
  // ../../test/torque/test-torque.tq:446:52
  {
    // ../../test/torque/test-torque.tq:447:5
    int31_t t4074 = 1;
    TNode<Smi> t4075 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t4074)));
    TNode<Smi> t4076 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_o), implicit_cast<TNode<Smi>>(t4075)));
    USE(implicit_cast<TNode<Smi>>(t4076));
    *_return_552 = implicit_cast<TNode<Smi>>(t4076);
    Goto(label_macro_end_1957);
  }
  BIND(label_macro_end_1957);
  return implicit_cast<TNode<Smi>>((*_return_552).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Object, _return_553_impl);
  auto _return_553 = &_return_553_impl;
  USE(_return_553);
  Label label_macro_end_1958_impl(this, {_return_553}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1958 = &label_macro_end_1958_impl;
  USE(label_macro_end_1958);
  // ../../test/torque/test-torque.tq:443:55
  {
    // ../../test/torque/test-torque.tq:444:5
    *_return_553 = implicit_cast<TNode<Object>>(p_o);
    Goto(label_macro_end_1958);
  }
  BIND(label_macro_end_1958);
  return implicit_cast<TNode<Object>>((*_return_553).value());
}

}  // namespace internal
}  // namespace v8

