#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_70_impl);
  auto _return_70 = &_return_70_impl;
  USE(_return_70);
  Label label_macro_end_592_impl(this, {_return_70});
  Label* label_macro_end_592 = &label_macro_end_592_impl;
  USE(label_macro_end_592);
  // ../../src/builtins/array.tq:6:63
  {
    // ../../src/builtins/array.tq:7:4
    {
      Label label__True_25_impl(this);
      Label* label__True_25 = &label__True_25_impl;
      USE(label__True_25);
      Label label__False_26_impl(this);
      Label* label__False_26 = &label__False_26_impl;
      USE(label__False_26);
      Label label_if_done_label_465_593_impl(this, {});
      Label* label_if_done_label_465_593 = &label_if_done_label_465_593_impl;
      USE(label_if_done_label_465_593);
      BranchIfFastJSArray(p_o, p_context, label__True_25, label__False_26);
      if (label__True_25->is_used())
      {
        BIND(label__True_25);
        // ../../src/builtins/array.tq:7:41
        {
          // ../../src/builtins/array.tq:8:6
          TNode<JSArray> t96 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(p_o));
          USE(t96);
          TVARIABLE(JSArray, a_71_impl);
          auto a_71 = &a_71_impl;
          USE(a_71);
          *a_71 = t96;
          // ../../src/builtins/array.tq:9:6
          TNode<Smi> t97 = UncheckedCast<Smi>(LoadFastJSArrayLength((*a_71).value()));
          *_return_70 = t97;
          Goto(label_macro_end_592);
        }
      }
      if (label__False_26->is_used())
      {
        BIND(label__False_26);
        // ../../src/builtins/array.tq:11:6
        {
          // ../../src/builtins/array.tq:12:8
          const char* t98 = "length";
          TNode<Object> t99 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t98));
          TNode<Object> t100 = UncheckedCast<Object>(GetProperty(p_context, p_o, t99));
          USE(t100);
          TNode<Number> t101 = UncheckedCast<Number>(ToLength_Inline(p_context, t100));
          USE(t101);
          *_return_70 = t101;
          Goto(label_macro_end_592);
        }
      }
    }
  }
  BIND(label_macro_end_592);
  return (*_return_70).value();
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_27) {
  TVARIABLE(Object, _return_72_impl);
  auto _return_72 = &_return_72_impl;
  USE(_return_72);
  Label label_macro_end_594_impl(this, {_return_72});
  Label* label_macro_end_594 = &label_macro_end_594_impl;
  USE(label_macro_end_594);
  // ../../src/builtins/array.tq:20:17
  {
    // ../../src/builtins/array.tq:21:4
    TNode<Smi> t102 = UncheckedCast<Smi>(cast5ATSmi(p_originalLengthNumber, label_Bailout_27));
    USE(t102);
    TVARIABLE(Smi, originalLength_73_impl);
    auto originalLength_73 = &originalLength_73_impl;
    USE(originalLength_73);
    *originalLength_73 = t102;
    // ../../src/builtins/array.tq:22:4
    TNode<Smi> t103 = UncheckedCast<Smi>(cast5ATSmi(p_actualStartNumber, label_Bailout_27));
    USE(t103);
    TVARIABLE(Smi, actualStart_74_impl);
    auto actualStart_74 = &actualStart_74_impl;
    USE(actualStart_74);
    *actualStart_74 = t103;
    // ../../src/builtins/array.tq:23:4
    TNode<Smi> t104 = UncheckedCast<Smi>(cast5ATSmi(p_actualDeleteCountNumber, label_Bailout_27));
    USE(t104);
    TVARIABLE(Smi, actualDeleteCount_75_impl);
    auto actualDeleteCount_75 = &actualDeleteCount_75_impl;
    USE(actualDeleteCount_75);
    *actualDeleteCount_75 = t104;
    // ../../src/builtins/array.tq:25:4
    TNode<Smi> t105 = UncheckedCast<Smi>(SmiSub(p_insertCount, (*actualDeleteCount_75).value()));
    USE(t105);
    TVARIABLE(Smi, lengthDelta_76_impl);
    auto lengthDelta_76 = &lengthDelta_76_impl;
    USE(lengthDelta_76);
    *lengthDelta_76 = t105;
    // ../../src/builtins/array.tq:26:4
    TNode<Smi> t106 = UncheckedCast<Smi>(SmiAdd((*originalLength_73).value(), (*lengthDelta_76).value()));
    USE(t106);
    TVARIABLE(Smi, newLength_77_impl);
    auto newLength_77 = &newLength_77_impl;
    USE(newLength_77);
    *newLength_77 = t106;
    // ../../src/builtins/array.tq:28:4
    TNode<JSArray> t107 = UncheckedCast<JSArray>(cast9ATJSArray(p_o, label_Bailout_27));
    USE(t107);
    TVARIABLE(JSArray, a_78_impl);
    auto a_78 = &a_78_impl;
    USE(a_78);
    *a_78 = t107;
    // ../../src/builtins/array.tq:30:4
    TNode<Map> t108 = UncheckedCast<Map>(LoadMap((*a_78).value()));
    TVARIABLE(Map, map_79_impl);
    auto map_79 = &map_79_impl;
    USE(map_79);
    *map_79 = t108;
    // ../../src/builtins/array.tq:31:4
    {
      Label label__True_28_impl(this);
      Label* label__True_28 = &label__True_28_impl;
      USE(label__True_28);
      Label label__False_29_impl(this, {});
      Label* label__False_29 = &label__False_29_impl;
      USE(label__False_29);
      TNode<BoolT> t109 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, (*map_79).value()));
      USE(t109);
      TNode<BoolT> t110 = UncheckedCast<BoolT>(Word32BinaryNot(t109));
      USE(t110);
      Branch(t110, label__True_28, label__False_29);
      if (label__True_28->is_used())
      {
        BIND(label__True_28);
        // ../../src/builtins/array.tq:31:57
        Goto(label_Bailout_27);
      }
      BIND(label__False_29);
    }
    // ../../src/builtins/array.tq:32:4
    {
      Label label__True_30_impl(this);
      Label* label__True_30 = &label__True_30_impl;
      USE(label__True_30);
      Label label__False_31_impl(this, {});
      Label* label__False_31 = &label__False_31_impl;
      USE(label__False_31);
      TNode<BoolT> t111 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(t111);
      Branch(t111, label__True_30, label__False_31);
      if (label__True_30->is_used())
      {
        BIND(label__True_30);
        // ../../src/builtins/array.tq:32:44
        Goto(label_Bailout_27);
      }
      BIND(label__False_31);
    }
    // ../../src/builtins/array.tq:33:4
    {
      Label label__True_32_impl(this);
      Label* label__True_32 = &label__True_32_impl;
      USE(label__True_32);
      Label label__False_33_impl(this, {});
      Label* label__False_33 = &label__False_33_impl;
      USE(label__False_33);
      TNode<BoolT> t112 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(t112);
      Branch(t112, label__True_32, label__False_33);
      if (label__True_32->is_used())
      {
        BIND(label__True_32);
        // ../../src/builtins/array.tq:33:46
        Goto(label_Bailout_27);
      }
      BIND(label__False_33);
    }
    // ../../src/builtins/array.tq:36:4
    TNode<Int32T> t113 = UncheckedCast<Int32T>(EnsureArrayPushable((*map_79).value(), label_Bailout_27));
    USE(t113);
    TVARIABLE(Int32T, elementsKind_80_impl);
    auto elementsKind_80 = &elementsKind_80_impl;
    USE(elementsKind_80);
    *elementsKind_80 = t113;
    // ../../src/builtins/array.tq:37:4
    {
      Label label__True_34_impl(this);
      Label* label__True_34 = &label__True_34_impl;
      USE(label__True_34);
      Label label__False_35_impl(this, {});
      Label* label__False_35 = &label__False_35_impl;
      USE(label__False_35);
      TNode<BoolT> t114 = UncheckedCast<BoolT>(IsFastElementsKind((*elementsKind_80).value()));
      USE(t114);
      TNode<BoolT> t115 = UncheckedCast<BoolT>(Word32BinaryNot(t114));
      USE(t115);
      Branch(t115, label__True_34, label__False_35);
      if (label__True_34->is_used())
      {
        BIND(label__True_34);
        // ../../src/builtins/array.tq:37:43
        Goto(label_Bailout_27);
      }
      BIND(label__False_35);
    }
    // ../../src/builtins/array.tq:40:4
    {
      Label label__True_36_impl(this);
      Label* label__True_36 = &label__True_36_impl;
      USE(label__True_36);
      Label label__False_37_impl(this, {});
      Label* label__False_37 = &label__False_37_impl;
      USE(label__False_37);
      TNode<BoolT> t116 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind((*elementsKind_80).value()));
      USE(t116);
      TNode<BoolT> t117 = UncheckedCast<BoolT>(Word32BinaryNot(t116));
      USE(t117);
      Branch(t117, label__True_36, label__False_37);
      if (label__True_36->is_used())
      {
        BIND(label__True_36);
        // ../../src/builtins/array.tq:40:54
        Goto(label_Bailout_27);
      }
      BIND(label__False_37);
    }
    // ../../src/builtins/array.tq:42:4
    {
      Label label__True_38_impl(this);
      Label* label__True_38 = &label__True_38_impl;
      USE(label__True_38);
      Label label__False_39_impl(this, {});
      Label* label__False_39 = &label__False_39_impl;
      USE(label__False_39);
      TNode<BoolT> t118 = UncheckedCast<BoolT>(IsFastSmiElementsKind((*elementsKind_80).value()));
      USE(t118);
      Branch(t118, label__True_38, label__False_39);
      if (label__True_38->is_used())
      {
        BIND(label__True_38);
        // ../../src/builtins/array.tq:42:45
        {
          // ../../src/builtins/array.tq:43:6
          int31_t t119 = 2;
          TNode<IntPtrT> t120 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_466_595_impl(this);
          Label* label_body_466_595 = &label_body_466_595_impl;
          USE(label_body_466_595);
          Label label_increment_467_596_impl(this);
          Label* label_increment_467_596 = &label_increment_467_596_impl;
          USE(label_increment_467_596);
          Label label_exit_468_597_impl(this);
          Label* label_exit_468_597 = &label_exit_468_597_impl;
          USE(label_exit_468_597);
          TVARIABLE(IntPtrT, _for_index_t121_469_impl);
          auto _for_index_t121_469 = &_for_index_t121_469_impl;
          USE(_for_index_t121_469);
          TNode<IntPtrT> t122 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t119));
          *_for_index_t121_469 = t122;
          Label label_header_470_598_impl(this, {_for_index_t121_469});
          Label* label_header_470_598 = &label_header_470_598_impl;
          USE(label_header_470_598);
          Goto(label_header_470_598);
          BIND(label_header_470_598);
          TNode<BoolT> t123 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t121_469).value(), t120));
          Branch(t123, label_body_466_595, label_exit_468_597);
          BIND(label_body_466_595);
          TNode<Object> t124 = UncheckedCast<Object>(GetArgumentValue(p_args, (*_for_index_t121_469).value()));
          TVARIABLE(Object, e_81_impl);
          auto e_81 = &e_81_impl;
          USE(e_81);
          *e_81 = t124;
          // ../../src/builtins/array.tq:43:40
          {
            // ../../src/builtins/array.tq:44:8
            {
              Label label__True_40_impl(this);
              Label* label__True_40 = &label__True_40_impl;
              USE(label__True_40);
              Label label__False_41_impl(this, {});
              Label* label__False_41 = &label__False_41_impl;
              USE(label__False_41);
              TNode<BoolT> t125 = UncheckedCast<BoolT>(TaggedIsNotSmi((*e_81).value()));
              USE(t125);
              Branch(t125, label__True_40, label__False_41);
              if (label__True_40->is_used())
              {
                BIND(label__True_40);
                // ../../src/builtins/array.tq:44:31
                Goto(label_Bailout_27);
              }
              BIND(label__False_41);
            }
          }
          Goto(label_increment_467_596);
          BIND(label_increment_467_596);
          TNode<IntPtrT> t126 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t127 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t121_469).value(), t126));
          *_for_index_t121_469 = t127;
          Goto(label_header_470_598);
          BIND(label_exit_468_597);
        }
        Goto(label__False_39);
      }
      BIND(label__False_39);
    }
    // ../../src/builtins/array.tq:49:4
    TNode<Number> t128 = UncheckedCast<Number>(LoadJSArrayLength((*a_78).value()));
    TNode<Smi> t129 = UncheckedCast<Smi>(cast5ATSmi(t128, label_Bailout_27));
    USE(t129);
    TVARIABLE(Smi, length_82_impl);
    auto length_82 = &length_82_impl;
    USE(length_82);
    *length_82 = t129;
    // ../../src/builtins/array.tq:50:4
    {
      Label label__True_42_impl(this);
      Label* label__True_42 = &label__True_42_impl;
      USE(label__True_42);
      Label label__False_43_impl(this, {});
      Label* label__False_43 = &label__False_43_impl;
      USE(label__False_43);
      TNode<BoolT> t130 = UncheckedCast<BoolT>(SmiNotEqual((*originalLength_73).value(), (*length_82).value()));
      USE(t130);
      Branch(t130, label__True_42, label__False_43);
      if (label__True_42->is_used())
      {
        BIND(label__True_42);
        // ../../src/builtins/array.tq:50:34
        Goto(label_Bailout_27);
      }
      BIND(label__False_43);
    }
    // ../../src/builtins/array.tq:52:4
    TNode<JSArray> t131 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, p_context, (*a_78).value(), (*actualStart_74).value(), (*actualDeleteCount_75).value()));
    USE(t131);
    TVARIABLE(JSArray, deletedResult_83_impl);
    auto deletedResult_83 = &deletedResult_83_impl;
    USE(deletedResult_83);
    *deletedResult_83 = t131;
    // ../../src/builtins/array.tq:55:4
    {
      Label label__True_44_impl(this);
      Label* label__True_44 = &label__True_44_impl;
      USE(label__True_44);
      Label label__False_45_impl(this, {});
      Label* label__False_45 = &label__False_45_impl;
      USE(label__False_45);
      int31_t t132 = 0;
      TNode<Smi> t133 = UncheckedCast<Smi>(from_constexpr5ATSmi(t132));
      TNode<BoolT> t134 = UncheckedCast<BoolT>(SmiEqual((*newLength_77).value(), t133));
      USE(t134);
      Branch(t134, label__True_44, label__False_45);
      if (label__True_44->is_used())
      {
        BIND(label__True_44);
        // ../../src/builtins/array.tq:55:24
        {
          // ../../src/builtins/array.tq:56:6
          StoreElements((*a_78).value(), kEmptyFixedArray());
          // ../../src/builtins/array.tq:57:6
          int31_t t135 = 0;
          TNode<Smi> t136 = UncheckedCast<Smi>(from_constexpr5ATSmi(t135));
          StoreJSArrayLength((*a_78).value(), t136);
          // ../../src/builtins/array.tq:58:6
          *_return_72 = (*deletedResult_83).value();
          Goto(label_macro_end_594);
        }
      }
      BIND(label__False_45);
    }
    // ../../src/builtins/array.tq:61:4
    TNode<FixedArrayBase> t137 = UncheckedCast<FixedArrayBase>(LoadElements((*a_78).value()));
    TNode<FixedArray> t138 = UncheckedCast<FixedArray>(cast12ATFixedArray(t137, label_Bailout_27));
    USE(t138);
    TVARIABLE(FixedArray, elements_84_impl);
    auto elements_84 = &elements_84_impl;
    USE(elements_84);
    *elements_84 = t138;
    // ../../src/builtins/array.tq:62:4
    TNode<Map> t139 = UncheckedCast<Map>(LoadMap((*elements_84).value()));
    TVARIABLE(Map, elementsMap_85_impl);
    auto elementsMap_85 = &elementsMap_85_impl;
    USE(elementsMap_85);
    *elementsMap_85 = t139;
    // ../../src/builtins/array.tq:66:4
    TVARIABLE(FixedArray, newElements_86_impl);
    auto newElements_86 = &newElements_86_impl;
    USE(newElements_86);
    *newElements_86 = (*elements_84).value();
    // ../../src/builtins/array.tq:67:4
    {
      Label label__True_46_impl(this);
      Label* label__True_46 = &label__True_46_impl;
      USE(label__True_46);
      Label label__False_47_impl(this, {newElements_86});
      Label* label__False_47 = &label__False_47_impl;
      USE(label__False_47);
      Label label__False_48_impl(this);
      Label* label__False_48 = &label__False_48_impl;
      USE(label__False_48);
      TNode<BoolT> t140 = UncheckedCast<BoolT>(WordEqual((*elementsMap_85).value(), kCOWMap()));
      USE(t140);
      GotoIf(t140, label__True_46);
      int31_t t141 = 0;
      TNode<Smi> t142 = UncheckedCast<Smi>(from_constexpr5ATSmi(t141));
      TNode<BoolT> t143 = UncheckedCast<BoolT>(SmiGreaterThan((*lengthDelta_76).value(), t142));
      USE(t143);
      Branch(t143, label__True_46, label__False_47);
      if (label__True_46->is_used())
      {
        BIND(label__True_46);
        // ../../src/builtins/array.tq:67:55
        {
          // ../../src/builtins/array.tq:68:6
          int31_t t144 = 0;
          TNode<Smi> t145 = UncheckedCast<Smi>(from_constexpr5ATSmi(t144));
          TNode<FixedArray> t146 = UncheckedCast<FixedArray>(ExtractFixedArray((*elements_84).value(), t145, (*actualStart_74).value(), (*newLength_77).value(), ExtractFixedArrayFlag::kAllFixedArrays));
          USE(t146);
          *newElements_86 = t146;
          // ../../src/builtins/array.tq:70:6
          StoreMap((*newElements_86).value(), (*elementsMap_85).value());
          // ../../src/builtins/array.tq:71:6
          StoreElements((*a_78).value(), (*newElements_86).value());
        }
        Goto(label__False_47);
      }
      BIND(label__False_47);
    }
    // ../../src/builtins/array.tq:75:4
    // ../../src/builtins/array.tq:78:4
    TVARIABLE(Smi, k_87_impl);
    auto k_87 = &k_87_impl;
    USE(k_87);
    *k_87 = (*actualStart_74).value();
    // ../../src/builtins/array.tq:79:4
    {
      Label label__True_49_impl(this);
      Label* label__True_49 = &label__True_49_impl;
      USE(label__True_49);
      Label label__False_50_impl(this, {k_87});
      Label* label__False_50 = &label__False_50_impl;
      USE(label__False_50);
      int31_t t147 = 0;
      TNode<Smi> t148 = UncheckedCast<Smi>(from_constexpr5ATSmi(t147));
      TNode<BoolT> t149 = UncheckedCast<BoolT>(SmiGreaterThan(p_insertCount, t148));
      USE(t149);
      Branch(t149, label__True_49, label__False_50);
      if (label__True_49->is_used())
      {
        BIND(label__True_49);
        // ../../src/builtins/array.tq:79:25
        {
          // ../../src/builtins/array.tq:80:6
          int31_t t150 = 2;
          TNode<IntPtrT> t151 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_471_599_impl(this);
          Label* label_body_471_599 = &label_body_471_599_impl;
          USE(label_body_471_599);
          Label label_increment_472_600_impl(this);
          Label* label_increment_472_600 = &label_increment_472_600_impl;
          USE(label_increment_472_600);
          Label label_exit_473_601_impl(this);
          Label* label_exit_473_601 = &label_exit_473_601_impl;
          USE(label_exit_473_601);
          TVARIABLE(IntPtrT, _for_index_t152_474_impl);
          auto _for_index_t152_474 = &_for_index_t152_474_impl;
          USE(_for_index_t152_474);
          TNode<IntPtrT> t153 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t150));
          *_for_index_t152_474 = t153;
          Label label_header_475_602_impl(this, {_for_index_t152_474, k_87});
          Label* label_header_475_602 = &label_header_475_602_impl;
          USE(label_header_475_602);
          Goto(label_header_475_602);
          BIND(label_header_475_602);
          TNode<BoolT> t154 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t152_474).value(), t151));
          Branch(t154, label_body_471_599, label_exit_473_601);
          BIND(label_body_471_599);
          TNode<Object> t155 = UncheckedCast<Object>(GetArgumentValue(p_args, (*_for_index_t152_474).value()));
          TVARIABLE(Object, e_88_impl);
          auto e_88 = &e_88_impl;
          USE(e_88);
          *e_88 = t155;
          // ../../src/builtins/array.tq:80:40
          {
            // ../../src/builtins/array.tq:81:8
            TNode<Smi> t156 = (*k_87).value();
            USE(t156);
            TNode<Smi> t157 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
            TNode<Smi> t158 = UncheckedCast<Smi>(SmiAdd((*k_87).value(), t157));
            *k_87 = t158;
            StoreFixedArrayElementSmi((*newElements_86).value(), t156, (*e_88).value());
          }
          Goto(label_increment_472_600);
          BIND(label_increment_472_600);
          TNode<IntPtrT> t159 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t160 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t152_474).value(), t159));
          *_for_index_t152_474 = t160;
          Goto(label_header_475_602);
          BIND(label_exit_473_601);
        }
        Goto(label__False_50);
      }
      BIND(label__False_50);
    }
    // ../../src/builtins/array.tq:86:4
    TNode<Smi> t161 = UncheckedCast<Smi>(SmiSub((*length_82).value(), (*actualStart_74).value()));
    USE(t161);
    TNode<Smi> t162 = UncheckedCast<Smi>(SmiSub(t161, (*actualDeleteCount_75).value()));
    USE(t162);
    TVARIABLE(Smi, count_89_impl);
    auto count_89 = &count_89_impl;
    USE(count_89);
    *count_89 = t162;
    // ../../src/builtins/array.tq:87:4
    {
      Label label__True_51_impl(this);
      Label* label__True_51 = &label__True_51_impl;
      USE(label__True_51);
      Label label__False_52_impl(this);
      Label* label__False_52 = &label__False_52_impl;
      USE(label__False_52);
      Label label_header_476_603_impl(this, {count_89, k_87});
      Label* label_header_476_603 = &label_header_476_603_impl;
      USE(label_header_476_603);
      Goto(label_header_476_603);
      BIND(label_header_476_603);
      int31_t t163 = 0;
      TNode<Smi> t164 = UncheckedCast<Smi>(from_constexpr5ATSmi(t163));
      TNode<BoolT> t165 = UncheckedCast<BoolT>(SmiGreaterThan((*count_89).value(), t164));
      USE(t165);
      Branch(t165, label__True_51, label__False_52);
      if (label__True_51->is_used())
      {
        BIND(label__True_51);
        // ../../src/builtins/array.tq:87:22
        {
          // ../../src/builtins/array.tq:88:6
          TNode<Smi> t166 = UncheckedCast<Smi>(SmiSub((*k_87).value(), (*lengthDelta_76).value()));
          USE(t166);
          TNode<Object> t167 = UncheckedCast<Object>(LoadFixedArrayElement((*elements_84).value(), t166));
          TVARIABLE(Object, e_90_impl);
          auto e_90 = &e_90_impl;
          USE(e_90);
          *e_90 = t167;
          // ../../src/builtins/array.tq:89:6
          TNode<Smi> t168 = (*k_87).value();
          USE(t168);
          TNode<Smi> t169 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t170 = UncheckedCast<Smi>(SmiAdd((*k_87).value(), t169));
          *k_87 = t170;
          StoreFixedArrayElementSmi((*newElements_86).value(), t168, (*e_90).value());
          // ../../src/builtins/array.tq:90:6
          TNode<Smi> t171 = (*count_89).value();
          USE(t171);
          TNode<Smi> t172 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t173 = UncheckedCast<Smi>(SmiSub((*count_89).value(), t172));
          *count_89 = t173;
        }
        Goto(label_header_476_603);
      }
      BIND(label__False_52);
    }
    // ../../src/builtins/array.tq:96:4
    {
      Label label__True_53_impl(this);
      Label* label__True_53 = &label__True_53_impl;
      USE(label__True_53);
      Label label__False_54_impl(this, {k_87});
      Label* label__False_54 = &label__False_54_impl;
      USE(label__False_54);
      TNode<BoolT> t174 = UncheckedCast<BoolT>(WordEqual((*elements_84).value(), (*newElements_86).value()));
      USE(t174);
      Branch(t174, label__True_53, label__False_54);
      if (label__True_53->is_used())
      {
        BIND(label__True_53);
        // ../../src/builtins/array.tq:96:33
        {
          // ../../src/builtins/array.tq:97:6
          TNode<Smi> t175 = UncheckedCast<Smi>(LoadFixedArrayBaseLength((*elements_84).value()));
          TVARIABLE(Smi, limit_91_impl);
          auto limit_91 = &limit_91_impl;
          USE(limit_91);
          *limit_91 = t175;
          // ../../src/builtins/array.tq:98:6
          {
            Label label__True_55_impl(this);
            Label* label__True_55 = &label__True_55_impl;
            USE(label__True_55);
            Label label__False_56_impl(this);
            Label* label__False_56 = &label__False_56_impl;
            USE(label__False_56);
            Label label_header_477_604_impl(this, {k_87});
            Label* label_header_477_604 = &label_header_477_604_impl;
            USE(label_header_477_604);
            Goto(label_header_477_604);
            BIND(label_header_477_604);
            TNode<BoolT> t176 = UncheckedCast<BoolT>(SmiLessThan((*k_87).value(), (*limit_91).value()));
            USE(t176);
            Branch(t176, label__True_55, label__False_56);
            if (label__True_55->is_used())
            {
              BIND(label__True_55);
              // ../../src/builtins/array.tq:98:24
              {
                // ../../src/builtins/array.tq:99:8
                TNode<Smi> t177 = (*k_87).value();
                USE(t177);
                TNode<Smi> t178 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                TNode<Smi> t179 = UncheckedCast<Smi>(SmiAdd((*k_87).value(), t178));
                *k_87 = t179;
                StoreFixedArrayElementSmi((*newElements_86).value(), t177, Hole());
              }
              Goto(label_header_477_604);
            }
            BIND(label__False_56);
          }
        }
        Goto(label__False_54);
      }
      BIND(label__False_54);
    }
    // ../../src/builtins/array.tq:104:4
    StoreJSArrayLength((*a_78).value(), (*newLength_77).value());
    // ../../src/builtins/array.tq:106:4
    *_return_72 = (*deletedResult_83).value();
    Goto(label_macro_end_594);
  }
  BIND(label_macro_end_594);
  return (*_return_72).value();
}

TF_BUILTIN(ArraySpliceTorque, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array.tq:111:64
  {
    // ../../src/builtins/array.tq:113:4
    TNode<JSReceiver> t180 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
    USE(t180);
    TVARIABLE(Object, o_92_impl);
    auto o_92 = &o_92_impl;
    USE(o_92);
    *o_92 = t180;
    // ../../src/builtins/array.tq:116:4
    TNode<Number> t181 = UncheckedCast<Number>(GetLengthProperty(p_context, (*o_92).value()));
    USE(t181);
    TVARIABLE(Number, len_93_impl);
    auto len_93 = &len_93_impl;
    USE(len_93);
    *len_93 = t181;
    // ../../src/builtins/array.tq:119:4
    int31_t t182 = 0;
    TNode<IntPtrT> t183 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t182));
    TNode<Object> t184 = UncheckedCast<Object>(GetArgumentValue(arguments, t183));
    TVARIABLE(Object, start_94_impl);
    auto start_94 = &start_94_impl;
    USE(start_94);
    *start_94 = t184;
    // ../../src/builtins/array.tq:120:4
    TNode<Number> t185 = UncheckedCast<Number>(ToInteger_Inline(p_context, (*start_94).value()));
    USE(t185);
    TVARIABLE(Number, relativeStart_95_impl);
    auto relativeStart_95 = &relativeStart_95_impl;
    USE(relativeStart_95);
    *relativeStart_95 = t185;
    // ../../src/builtins/array.tq:125:4
    auto t186 = [=]() {
      TNode<Number> t188 = UncheckedCast<Number>(NumberAdd((*len_93).value(), (*relativeStart_95).value()));
      USE(t188);
      int31_t t189 = 0;
      TNode<Number> t190 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t189));
      TNode<Number> t191 = UncheckedCast<Number>(NumberMax(t188, t190));
      USE(t191);
      return t191;
    };
    auto t187 = [=]() {
      TNode<Number> t192 = UncheckedCast<Number>(NumberMin((*relativeStart_95).value(), (*len_93).value()));
      USE(t192);
      return t192;
    };
    TVARIABLE(Number, t193_478_impl);
    auto t193_478 = &t193_478_impl;
    USE(t193_478);
    {
      Label label__True_57_impl(this);
      Label* label__True_57 = &label__True_57_impl;
      USE(label__True_57);
      Label label__False_58_impl(this);
      Label* label__False_58 = &label__False_58_impl;
      USE(label__False_58);
      Label label__done_479_605_impl(this, {t193_478});
      Label* label__done_479_605 = &label__done_479_605_impl;
      USE(label__done_479_605);
      int31_t t194 = 0;
      TNode<Number> t195 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t194));
      BranchIfNumberLessThan((*relativeStart_95).value(), t195, label__True_57, label__False_58);
      BIND(label__True_57);
            *t193_478 = t186();
      Goto(label__done_479_605);
      BIND(label__False_58);
            *t193_478 = t187();
      Goto(label__done_479_605);
      BIND(label__done_479_605);
    }
    TVARIABLE(Number, actualStart_96_impl);
    auto actualStart_96 = &actualStart_96_impl;
    USE(actualStart_96);
    *actualStart_96 = (*t193_478).value();
    // ../../src/builtins/array.tq:129:4
    TVARIABLE(Smi, insertCount_97_impl);
    auto insertCount_97 = &insertCount_97_impl;
    USE(insertCount_97);
    // ../../src/builtins/array.tq:130:4
    TVARIABLE(Number, actualDeleteCount_98_impl);
    auto actualDeleteCount_98 = &actualDeleteCount_98_impl;
    USE(actualDeleteCount_98);
    // ../../src/builtins/array.tq:132:4
    {
      Label label__True_59_impl(this);
      Label* label__True_59 = &label__True_59_impl;
      USE(label__True_59);
      Label label__False_60_impl(this);
      Label* label__False_60 = &label__False_60_impl;
      USE(label__False_60);
      Label label_if_done_label_480_606_impl(this, {insertCount_97, actualDeleteCount_98});
      Label* label_if_done_label_480_606 = &label_if_done_label_480_606_impl;
      USE(label_if_done_label_480_606);
      TNode<IntPtrT> t196 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t197 = 0;
      TNode<IntPtrT> t198 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t197));
      TNode<BoolT> t199 = UncheckedCast<BoolT>(WordEqual(t196, t198));
      USE(t199);
      Branch(t199, label__True_59, label__False_60);
      if (label__True_59->is_used())
      {
        BIND(label__True_59);
        // ../../src/builtins/array.tq:132:31
        {
          // ../../src/builtins/array.tq:134:6
          int31_t t200 = 0;
          TNode<Smi> t201 = UncheckedCast<Smi>(from_constexpr5ATSmi(t200));
          *insertCount_97 = t201;
          // ../../src/builtins/array.tq:136:6
          int31_t t202 = 0;
          TNode<Number> t203 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t202));
          *actualDeleteCount_98 = t203;
        }
        Goto(label_if_done_label_480_606);
      }
      if (label__False_60->is_used())
      {
        BIND(label__False_60);
        // ../../src/builtins/array.tq:138:11
        {
          Label label__True_61_impl(this);
          Label* label__True_61 = &label__True_61_impl;
          USE(label__True_61);
          Label label__False_62_impl(this);
          Label* label__False_62 = &label__False_62_impl;
          USE(label__False_62);
          Label label_if_done_label_481_607_impl(this, {insertCount_97, actualDeleteCount_98});
          Label* label_if_done_label_481_607 = &label_if_done_label_481_607_impl;
          USE(label_if_done_label_481_607);
          TNode<IntPtrT> t204 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          int31_t t205 = 1;
          TNode<IntPtrT> t206 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t205));
          TNode<BoolT> t207 = UncheckedCast<BoolT>(WordEqual(t204, t206));
          USE(t207);
          Branch(t207, label__True_61, label__False_62);
          if (label__True_61->is_used())
          {
            BIND(label__True_61);
            // ../../src/builtins/array.tq:138:38
            {
              // ../../src/builtins/array.tq:140:6
              int31_t t208 = 0;
              TNode<Smi> t209 = UncheckedCast<Smi>(from_constexpr5ATSmi(t208));
              *insertCount_97 = t209;
              // ../../src/builtins/array.tq:142:6
              TNode<Number> t210 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualStart_96).value()));
              USE(t210);
              *actualDeleteCount_98 = t210;
            }
            Goto(label_if_done_label_481_607);
          }
          if (label__False_62->is_used())
          {
            BIND(label__False_62);
            // ../../src/builtins/array.tq:144:11
            {
              // ../../src/builtins/array.tq:146:6
              TNode<IntPtrT> t211 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
              TNode<Smi> t212 = UncheckedCast<Smi>(convert5ATSmi(t211));
              USE(t212);
              int31_t t213 = 2;
              TNode<Smi> t214 = UncheckedCast<Smi>(from_constexpr5ATSmi(t213));
              TNode<Smi> t215 = UncheckedCast<Smi>(SmiSub(t212, t214));
              USE(t215);
              *insertCount_97 = t215;
              // ../../src/builtins/array.tq:148:6
              int31_t t216 = 1;
              TNode<IntPtrT> t217 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t216));
              TNode<Object> t218 = UncheckedCast<Object>(GetArgumentValue(arguments, t217));
              TVARIABLE(Object, deleteCount_99_impl);
              auto deleteCount_99 = &deleteCount_99_impl;
              USE(deleteCount_99);
              *deleteCount_99 = t218;
              // ../../src/builtins/array.tq:149:6
              TNode<Number> t219 = UncheckedCast<Number>(ToInteger_Inline(p_context, (*deleteCount_99).value()));
              USE(t219);
              TVARIABLE(Number, dc_100_impl);
              auto dc_100 = &dc_100_impl;
              USE(dc_100);
              *dc_100 = t219;
              // ../../src/builtins/array.tq:151:6
              int31_t t220 = 0;
              TNode<Number> t221 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t220));
              TNode<Number> t222 = UncheckedCast<Number>(NumberMax((*dc_100).value(), t221));
              USE(t222);
              TNode<Number> t223 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualStart_96).value()));
              USE(t223);
              TNode<Number> t224 = UncheckedCast<Number>(NumberMin(t222, t223));
              USE(t224);
              *actualDeleteCount_98 = t224;
            }
            Goto(label_if_done_label_481_607);
          }
          BIND(label_if_done_label_481_607);
        }
        Goto(label_if_done_label_480_606);
      }
      BIND(label_if_done_label_480_606);
    }
    // ../../src/builtins/array.tq:156:4
    {
      Label label__True_63_impl(this);
      Label* label__True_63 = &label__True_63_impl;
      USE(label__True_63);
      Label label__False_64_impl(this, {});
      Label* label__False_64 = &label__False_64_impl;
      USE(label__False_64);
      TNode<Number> t225 = UncheckedCast<Number>(NumberAdd((*len_93).value(), (*insertCount_97).value()));
      USE(t225);
      TNode<Number> t226 = UncheckedCast<Number>(NumberSub(t225, (*actualDeleteCount_98).value()));
      USE(t226);
      TNode<Number> t227 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(kMaxSafeInteger));
      BranchIfNumberGreaterThan(t226, t227, label__True_63, label__False_64);
      if (label__True_63->is_used())
      {
        BIND(label__True_63);
        // ../../src/builtins/array.tq:156:65
        {
          // ../../src/builtins/array.tq:157:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidArrayLength);
        }
      }
      BIND(label__False_64);
    }
    // ../../src/builtins/array.tq:160:4
    {
      Label label_try_done_482_608_impl(this);
      Label* label_try_done_482_608 = &label_try_done_482_608_impl;
      USE(label_try_done_482_608);
      Label label_Bailout_65_impl(this);
      Label* label_Bailout_65 = &label_Bailout_65_impl;
      USE(label_Bailout_65);
      Label label_try_begin_483_609_impl(this);
      Label* label_try_begin_483_609 = &label_try_begin_483_609_impl;
      USE(label_try_begin_483_609);
      Goto(label_try_begin_483_609);
      if (label_try_begin_483_609->is_used())
      {
        BIND(label_try_begin_483_609);
        // ../../src/builtins/array.tq:160:8
        {
          // ../../src/builtins/array.tq:161:6
          TNode<Object> t228 = UncheckedCast<Object>(FastArraySplice(p_context, arguments, (*o_92).value(), (*len_93).value(), (*actualStart_96).value(), (*insertCount_97).value(), (*actualDeleteCount_98).value(), label_Bailout_65));
          USE(t228);
          arguments->PopAndReturn(t228);
        }
      }
      if (label_Bailout_65->is_used())
      {
        BIND(label_Bailout_65);
        // ../../src/builtins/array.tq:165:18
        {
        }
        Goto(label_try_done_482_608);
      }
      BIND(label_try_done_482_608);
    }
    // ../../src/builtins/array.tq:170:4
    TNode<Object> t229 = UncheckedCast<Object>(ArraySpeciesCreate(p_context, (*o_92).value(), (*actualDeleteCount_98).value()));
    USE(t229);
    TVARIABLE(Object, a_101_impl);
    auto a_101 = &a_101_impl;
    USE(a_101);
    *a_101 = t229;
    // ../../src/builtins/array.tq:173:4
    int31_t t230 = 0;
    TVARIABLE(Number, k_102_impl);
    auto k_102 = &k_102_impl;
    USE(k_102);
    TNode<Number> t231 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t230));
    *k_102 = t231;
    // ../../src/builtins/array.tq:176:4
    {
      Label label__True_66_impl(this);
      Label* label__True_66 = &label__True_66_impl;
      USE(label__True_66);
      Label label__False_67_impl(this);
      Label* label__False_67 = &label__False_67_impl;
      USE(label__False_67);
      Label label_header_484_610_impl(this, {k_102});
      Label* label_header_484_610 = &label_header_484_610_impl;
      USE(label_header_484_610);
      Goto(label_header_484_610);
      BIND(label_header_484_610);
      BranchIfNumberLessThan((*k_102).value(), (*actualDeleteCount_98).value(), label__True_66, label__False_67);
      if (label__True_66->is_used())
      {
        BIND(label__True_66);
        // ../../src/builtins/array.tq:176:34
        {
          // ../../src/builtins/array.tq:178:6
          TNode<Number> t232 = UncheckedCast<Number>(NumberAdd((*actualStart_96).value(), (*k_102).value()));
          USE(t232);
          TNode<String> t233 = UncheckedCast<String>(ToString_Inline(p_context, t232));
          USE(t233);
          TVARIABLE(String, from_103_impl);
          auto from_103 = &from_103_impl;
          USE(from_103);
          *from_103 = t233;
          // ../../src/builtins/array.tq:181:6
          TNode<Oddball> t234 = UncheckedCast<Oddball>(HasPropertyObject((*o_92).value(), (*from_103).value(), p_context, kHasProperty));
          USE(t234);
          TVARIABLE(Oddball, fromPresent_104_impl);
          auto fromPresent_104 = &fromPresent_104_impl;
          USE(fromPresent_104);
          *fromPresent_104 = t234;
          // ../../src/builtins/array.tq:185:6
          {
            Label label__True_68_impl(this);
            Label* label__True_68 = &label__True_68_impl;
            USE(label__True_68);
            Label label__False_69_impl(this, {});
            Label* label__False_69 = &label__False_69_impl;
            USE(label__False_69);
            TNode<BoolT> t235 = UncheckedCast<BoolT>(WordEqual((*fromPresent_104).value(), True()));
            USE(t235);
            Branch(t235, label__True_68, label__False_69);
            if (label__True_68->is_used())
            {
              BIND(label__True_68);
              // ../../src/builtins/array.tq:185:31
              {
                // ../../src/builtins/array.tq:187:8
                TNode<Object> t236 = UncheckedCast<Object>(GetProperty(p_context, (*o_92).value(), (*from_103).value()));
                USE(t236);
                TVARIABLE(Object, fromValue_105_impl);
                auto fromValue_105 = &fromValue_105_impl;
                USE(fromValue_105);
                *fromValue_105 = t236;
                // ../../src/builtins/array.tq:190:8
                TNode<String> t237 = UncheckedCast<String>(ToString_Inline(p_context, (*k_102).value()));
                USE(t237);
                CallRuntime(Runtime::kCreateDataProperty, p_context, (*a_101).value(), t237, (*fromValue_105).value());
              }
              Goto(label__False_69);
            }
            BIND(label__False_69);
          }
          // ../../src/builtins/array.tq:194:6
          int31_t t238 = 1;
          TNode<Number> t239 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t238));
          TNode<Number> t240 = UncheckedCast<Number>(NumberAdd((*k_102).value(), t239));
          USE(t240);
          *k_102 = t240;
        }
        Goto(label_header_484_610);
      }
      BIND(label__False_67);
    }
    // ../../src/builtins/array.tq:198:4
    const char* t241 = "length";
    TNode<Object> t242 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t241));
    TNode<Smi> t243 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, (*a_101).value(), t242, (*actualDeleteCount_98).value(), t243);
    // ../../src/builtins/array.tq:205:4
    TVARIABLE(Number, itemCount_106_impl);
    auto itemCount_106 = &itemCount_106_impl;
    USE(itemCount_106);
    *itemCount_106 = (*insertCount_97).value();
    // ../../src/builtins/array.tq:208:4
    {
      Label label__True_70_impl(this);
      Label* label__True_70 = &label__True_70_impl;
      USE(label__True_70);
      Label label__False_71_impl(this);
      Label* label__False_71 = &label__False_71_impl;
      USE(label__False_71);
      Label label_if_done_label_485_611_impl(this, {});
      Label* label_if_done_label_485_611 = &label_if_done_label_485_611_impl;
      USE(label_if_done_label_485_611);
      BranchIfNumberLessThan((*itemCount_106).value(), (*actualDeleteCount_98).value(), label__True_70, label__False_71);
      if (label__True_70->is_used())
      {
        BIND(label__True_70);
        // ../../src/builtins/array.tq:208:39
        {
          // ../../src/builtins/array.tq:210:6
          TVARIABLE(Number, k_107_impl);
          auto k_107 = &k_107_impl;
          USE(k_107);
          *k_107 = (*actualStart_96).value();
          // ../../src/builtins/array.tq:213:6
          {
            Label label__True_72_impl(this);
            Label* label__True_72 = &label__True_72_impl;
            USE(label__True_72);
            Label label__False_73_impl(this);
            Label* label__False_73 = &label__False_73_impl;
            USE(label__False_73);
            Label label_header_486_612_impl(this, {k_107});
            Label* label_header_486_612 = &label_header_486_612_impl;
            USE(label_header_486_612);
            Goto(label_header_486_612);
            BIND(label_header_486_612);
            TNode<Number> t244 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualDeleteCount_98).value()));
            USE(t244);
            BranchIfNumberLessThan((*k_107).value(), t244, label__True_72, label__False_73);
            if (label__True_72->is_used())
            {
              BIND(label__True_72);
              // ../../src/builtins/array.tq:213:44
              {
                // ../../src/builtins/array.tq:215:8
                TNode<Number> t245 = UncheckedCast<Number>(NumberAdd((*k_107).value(), (*actualDeleteCount_98).value()));
                USE(t245);
                TNode<String> t246 = UncheckedCast<String>(ToString_Inline(p_context, t245));
                USE(t246);
                TVARIABLE(String, from_108_impl);
                auto from_108 = &from_108_impl;
                USE(from_108);
                *from_108 = t246;
                // ../../src/builtins/array.tq:217:8
                TNode<Number> t247 = UncheckedCast<Number>(NumberAdd((*k_107).value(), (*itemCount_106).value()));
                USE(t247);
                TNode<String> t248 = UncheckedCast<String>(ToString_Inline(p_context, t247));
                USE(t248);
                TVARIABLE(String, to_109_impl);
                auto to_109 = &to_109_impl;
                USE(to_109);
                *to_109 = t248;
                // ../../src/builtins/array.tq:220:8
                TNode<Oddball> t249 = UncheckedCast<Oddball>(HasPropertyObject((*o_92).value(), (*from_108).value(), p_context, kHasProperty));
                USE(t249);
                TVARIABLE(Oddball, fromPresent_110_impl);
                auto fromPresent_110 = &fromPresent_110_impl;
                USE(fromPresent_110);
                *fromPresent_110 = t249;
                // ../../src/builtins/array.tq:224:8
                {
                  Label label__True_74_impl(this);
                  Label* label__True_74 = &label__True_74_impl;
                  USE(label__True_74);
                  Label label__False_75_impl(this);
                  Label* label__False_75 = &label__False_75_impl;
                  USE(label__False_75);
                  Label label_if_done_label_487_613_impl(this, {});
                  Label* label_if_done_label_487_613 = &label_if_done_label_487_613_impl;
                  USE(label_if_done_label_487_613);
                  TNode<BoolT> t250 = UncheckedCast<BoolT>(WordEqual((*fromPresent_110).value(), True()));
                  USE(t250);
                  Branch(t250, label__True_74, label__False_75);
                  if (label__True_74->is_used())
                  {
                    BIND(label__True_74);
                    // ../../src/builtins/array.tq:224:33
                    {
                      // ../../src/builtins/array.tq:226:10
                      TNode<Object> t251 = UncheckedCast<Object>(GetProperty(p_context, (*o_92).value(), (*from_108).value()));
                      USE(t251);
                      TVARIABLE(Object, fromValue_111_impl);
                      auto fromValue_111 = &fromValue_111_impl;
                      USE(fromValue_111);
                      *fromValue_111 = t251;
                      // ../../src/builtins/array.tq:229:10
                      TNode<Smi> t252 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                      CallRuntime(Runtime::kSetProperty, p_context, (*o_92).value(), (*to_109).value(), (*fromValue_111).value(), t252);
                    }
                    Goto(label_if_done_label_487_613);
                  }
                  if (label__False_75->is_used())
                  {
                    BIND(label__False_75);
                    // ../../src/builtins/array.tq:232:15
                    {
                      // ../../src/builtins/array.tq:234:10
                      TNode<Smi> t253 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                      CallRuntime(Runtime::kDeleteProperty, p_context, (*o_92).value(), (*to_109).value(), t253);
                    }
                    Goto(label_if_done_label_487_613);
                  }
                  BIND(label_if_done_label_487_613);
                }
                // ../../src/builtins/array.tq:237:8
                int31_t t254 = 1;
                TNode<Number> t255 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t254));
                TNode<Number> t256 = UncheckedCast<Number>(NumberAdd((*k_107).value(), t255));
                USE(t256);
                *k_107 = t256;
              }
              Goto(label_header_486_612);
            }
            BIND(label__False_73);
          }
          // ../../src/builtins/array.tq:241:6
          *k_107 = (*len_93).value();
          // ../../src/builtins/array.tq:243:6
          {
            Label label__True_76_impl(this);
            Label* label__True_76 = &label__True_76_impl;
            USE(label__True_76);
            Label label__False_77_impl(this);
            Label* label__False_77 = &label__False_77_impl;
            USE(label__False_77);
            Label label_header_488_614_impl(this, {k_107});
            Label* label_header_488_614 = &label_header_488_614_impl;
            USE(label_header_488_614);
            Goto(label_header_488_614);
            BIND(label_header_488_614);
            TNode<Number> t257 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualDeleteCount_98).value()));
            USE(t257);
            TNode<Number> t258 = UncheckedCast<Number>(NumberAdd(t257, (*itemCount_106).value()));
            USE(t258);
            BranchIfNumberGreaterThan((*k_107).value(), t258, label__True_76, label__False_77);
            if (label__True_76->is_used())
            {
              BIND(label__True_76);
              // ../../src/builtins/array.tq:243:56
              {
                // ../../src/builtins/array.tq:245:8
                int31_t t259 = 1;
                TNode<Number> t260 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t259));
                TNode<Number> t261 = UncheckedCast<Number>(NumberSub((*k_107).value(), t260));
                USE(t261);
                TNode<String> t262 = UncheckedCast<String>(ToString_Inline(p_context, t261));
                USE(t262);
                TNode<Smi> t263 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                CallRuntime(Runtime::kDeleteProperty, p_context, (*o_92).value(), t262, t263);
                // ../../src/builtins/array.tq:248:8
                int31_t t264 = 1;
                TNode<Number> t265 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t264));
                TNode<Number> t266 = UncheckedCast<Number>(NumberSub((*k_107).value(), t265));
                USE(t266);
                *k_107 = t266;
              }
              Goto(label_header_488_614);
            }
            BIND(label__False_77);
          }
        }
        Goto(label_if_done_label_485_611);
      }
      if (label__False_71->is_used())
      {
        BIND(label__False_71);
        // ../../src/builtins/array.tq:251:11
        {
          Label label__True_78_impl(this);
          Label* label__True_78 = &label__True_78_impl;
          USE(label__True_78);
          Label label__False_79_impl(this, {});
          Label* label__False_79 = &label__False_79_impl;
          USE(label__False_79);
          BranchIfNumberGreaterThan((*itemCount_106).value(), (*actualDeleteCount_98).value(), label__True_78, label__False_79);
          if (label__True_78->is_used())
          {
            BIND(label__True_78);
            // ../../src/builtins/array.tq:251:46
            {
              // ../../src/builtins/array.tq:253:6
              TNode<Number> t267 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualDeleteCount_98).value()));
              USE(t267);
              TVARIABLE(Number, k_112_impl);
              auto k_112 = &k_112_impl;
              USE(k_112);
              *k_112 = t267;
              // ../../src/builtins/array.tq:256:6
              {
                Label label__True_80_impl(this);
                Label* label__True_80 = &label__True_80_impl;
                USE(label__True_80);
                Label label__False_81_impl(this);
                Label* label__False_81 = &label__False_81_impl;
                USE(label__False_81);
                Label label_header_489_615_impl(this, {k_112});
                Label* label_header_489_615 = &label_header_489_615_impl;
                USE(label_header_489_615);
                Goto(label_header_489_615);
                BIND(label_header_489_615);
                BranchIfNumberGreaterThan((*k_112).value(), (*actualStart_96).value(), label__True_80, label__False_81);
                if (label__True_80->is_used())
                {
                  BIND(label__True_80);
                  // ../../src/builtins/array.tq:256:30
                  {
                    // ../../src/builtins/array.tq:258:8
                    TNode<Number> t268 = UncheckedCast<Number>(NumberAdd((*k_112).value(), (*actualDeleteCount_98).value()));
                    USE(t268);
                    int31_t t269 = 1;
                    TNode<Number> t270 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t269));
                    TNode<Number> t271 = UncheckedCast<Number>(NumberSub(t268, t270));
                    USE(t271);
                    TNode<String> t272 = UncheckedCast<String>(ToString_Inline(p_context, t271));
                    USE(t272);
                    TVARIABLE(String, from_113_impl);
                    auto from_113 = &from_113_impl;
                    USE(from_113);
                    *from_113 = t272;
                    // ../../src/builtins/array.tq:261:8
                    TNode<Number> t273 = UncheckedCast<Number>(NumberAdd((*k_112).value(), (*itemCount_106).value()));
                    USE(t273);
                    int31_t t274 = 1;
                    TNode<Number> t275 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t274));
                    TNode<Number> t276 = UncheckedCast<Number>(NumberSub(t273, t275));
                    USE(t276);
                    TNode<String> t277 = UncheckedCast<String>(ToString_Inline(p_context, t276));
                    USE(t277);
                    TVARIABLE(String, to_114_impl);
                    auto to_114 = &to_114_impl;
                    USE(to_114);
                    *to_114 = t277;
                    // ../../src/builtins/array.tq:264:8
                    TNode<Oddball> t278 = UncheckedCast<Oddball>(HasPropertyObject((*o_92).value(), (*from_113).value(), p_context, kHasProperty));
                    USE(t278);
                    TVARIABLE(Oddball, fromPresent_115_impl);
                    auto fromPresent_115 = &fromPresent_115_impl;
                    USE(fromPresent_115);
                    *fromPresent_115 = t278;
                    // ../../src/builtins/array.tq:268:8
                    {
                      Label label__True_82_impl(this);
                      Label* label__True_82 = &label__True_82_impl;
                      USE(label__True_82);
                      Label label__False_83_impl(this);
                      Label* label__False_83 = &label__False_83_impl;
                      USE(label__False_83);
                      Label label_if_done_label_490_616_impl(this, {});
                      Label* label_if_done_label_490_616 = &label_if_done_label_490_616_impl;
                      USE(label_if_done_label_490_616);
                      TNode<BoolT> t279 = UncheckedCast<BoolT>(WordEqual((*fromPresent_115).value(), True()));
                      USE(t279);
                      Branch(t279, label__True_82, label__False_83);
                      if (label__True_82->is_used())
                      {
                        BIND(label__True_82);
                        // ../../src/builtins/array.tq:268:33
                        {
                          // ../../src/builtins/array.tq:270:10
                          TNode<Object> t280 = UncheckedCast<Object>(GetProperty(p_context, (*o_92).value(), (*from_113).value()));
                          USE(t280);
                          TVARIABLE(Object, fromValue_116_impl);
                          auto fromValue_116 = &fromValue_116_impl;
                          USE(fromValue_116);
                          *fromValue_116 = t280;
                          // ../../src/builtins/array.tq:273:10
                          TNode<Smi> t281 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                          CallRuntime(Runtime::kSetProperty, p_context, (*o_92).value(), (*to_114).value(), (*fromValue_116).value(), t281);
                        }
                        Goto(label_if_done_label_490_616);
                      }
                      if (label__False_83->is_used())
                      {
                        BIND(label__False_83);
                        // ../../src/builtins/array.tq:276:15
                        {
                          // ../../src/builtins/array.tq:278:10
                          TNode<Smi> t282 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                          CallRuntime(Runtime::kDeleteProperty, p_context, (*o_92).value(), (*to_114).value(), t282);
                        }
                        Goto(label_if_done_label_490_616);
                      }
                      BIND(label_if_done_label_490_616);
                    }
                    // ../../src/builtins/array.tq:282:8
                    int31_t t283 = 1;
                    TNode<Number> t284 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t283));
                    TNode<Number> t285 = UncheckedCast<Number>(NumberSub((*k_112).value(), t284));
                    USE(t285);
                    *k_112 = t285;
                  }
                  Goto(label_header_489_615);
                }
                BIND(label__False_81);
              }
            }
            Goto(label__False_79);
          }
          BIND(label__False_79);
        }
        Goto(label_if_done_label_485_611);
      }
      BIND(label_if_done_label_485_611);
    }
    // ../../src/builtins/array.tq:287:4
    *k_102 = (*actualStart_96).value();
    // ../../src/builtins/array.tq:292:4
    {
      Label label__True_84_impl(this);
      Label* label__True_84 = &label__True_84_impl;
      USE(label__True_84);
      Label label__False_85_impl(this, {k_102});
      Label* label__False_85 = &label__False_85_impl;
      USE(label__False_85);
      TNode<IntPtrT> t286 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t287 = 2;
      TNode<IntPtrT> t288 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t287));
      TNode<BoolT> t289 = UncheckedCast<BoolT>(IntPtrGreaterThan(t286, t288));
      USE(t289);
      Branch(t289, label__True_84, label__False_85);
      if (label__True_84->is_used())
      {
        BIND(label__True_84);
        // ../../src/builtins/array.tq:292:30
        {
          // ../../src/builtins/array.tq:293:6
          int31_t t290 = 2;
          TNode<IntPtrT> t291 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          Label label_body_491_617_impl(this);
          Label* label_body_491_617 = &label_body_491_617_impl;
          USE(label_body_491_617);
          Label label_increment_492_618_impl(this);
          Label* label_increment_492_618 = &label_increment_492_618_impl;
          USE(label_increment_492_618);
          Label label_exit_493_619_impl(this);
          Label* label_exit_493_619 = &label_exit_493_619_impl;
          USE(label_exit_493_619);
          TVARIABLE(IntPtrT, _for_index_t292_494_impl);
          auto _for_index_t292_494 = &_for_index_t292_494_impl;
          USE(_for_index_t292_494);
          TNode<IntPtrT> t293 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t290));
          *_for_index_t292_494 = t293;
          Label label_header_495_620_impl(this, {_for_index_t292_494, k_102});
          Label* label_header_495_620 = &label_header_495_620_impl;
          USE(label_header_495_620);
          Goto(label_header_495_620);
          BIND(label_header_495_620);
          TNode<BoolT> t294 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t292_494).value(), t291));
          Branch(t294, label_body_491_617, label_exit_493_619);
          BIND(label_body_491_617);
          TNode<Object> t295 = UncheckedCast<Object>(GetArgumentValue(arguments, (*_for_index_t292_494).value()));
          TVARIABLE(Object, e_117_impl);
          auto e_117 = &e_117_impl;
          USE(e_117);
          *e_117 = t295;
          // ../../src/builtins/array.tq:293:45
          {
            // ../../src/builtins/array.tq:295:8
            TNode<String> t296 = UncheckedCast<String>(ToString_Inline(p_context, (*k_102).value()));
            USE(t296);
            TNode<Smi> t297 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
            CallRuntime(Runtime::kSetProperty, p_context, (*o_92).value(), t296, (*e_117).value(), t297);
            // ../../src/builtins/array.tq:298:8
            int31_t t298 = 1;
            TNode<Number> t299 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t298));
            TNode<Number> t300 = UncheckedCast<Number>(NumberAdd((*k_102).value(), t299));
            USE(t300);
            *k_102 = t300;
          }
          Goto(label_increment_492_618);
          BIND(label_increment_492_618);
          TNode<IntPtrT> t301 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t302 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t292_494).value(), t301));
          *_for_index_t292_494 = t302;
          Goto(label_header_495_620);
          BIND(label_exit_493_619);
        }
        Goto(label__False_85);
      }
      BIND(label__False_85);
    }
    // ../../src/builtins/array.tq:304:4
    const char* t303 = "length";
    TNode<Number> t304 = UncheckedCast<Number>(NumberSub((*len_93).value(), (*actualDeleteCount_98).value()));
    USE(t304);
    TNode<Number> t305 = UncheckedCast<Number>(NumberAdd(t304, (*itemCount_106).value()));
    USE(t305);
    TNode<Object> t306 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t303));
    TNode<Smi> t307 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, (*o_92).value(), t306, t305, t307);
    // ../../src/builtins/array.tq:307:4
    arguments->PopAndReturn((*a_101).value());
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  TVARIABLE(Object, _return_118_impl);
  auto _return_118 = &_return_118_impl;
  USE(_return_118);
  Label label_macro_end_621_impl(this, {_return_118});
  Label* label_macro_end_621 = &label_macro_end_621_impl;
  USE(label_macro_end_621);
  // ../../src/builtins/array-foreach.tq:8:47
  {
    // ../../src/builtins/array-foreach.tq:11:4
    TVARIABLE(Smi, k_119_impl);
    auto k_119 = &k_119_impl;
    USE(k_119);
    *k_119 = p_initial_k;
    Label label__True_86_impl(this);
    Label* label__True_86 = &label__True_86_impl;
    USE(label__True_86);
    Label label__False_87_impl(this);
    Label* label__False_87 = &label__False_87_impl;
    USE(label__False_87);
    Label label_header_496_622_impl(this, {k_119});
    Label* label_header_496_622 = &label_header_496_622_impl;
    USE(label_header_496_622);
    Goto(label_header_496_622);
    BIND(label_header_496_622);
    Label label_assignment_497_623_impl(this);
    Label* label_assignment_497_623 = &label_assignment_497_623_impl;
    USE(label_assignment_497_623);
    BranchIfNumberLessThan((*k_119).value(), p_len, label__True_86, label__False_87);
    if (label__True_86->is_used())
    {
      BIND(label__True_86);
      // ../../src/builtins/array-foreach.tq:11:53
      {
        // ../../src/builtins/array-foreach.tq:13:6
        TNode<String> t308 = UncheckedCast<String>(ToString_Inline(p_context, (*k_119).value()));
        USE(t308);
        TVARIABLE(String, pK_120_impl);
        auto pK_120 = &pK_120_impl;
        USE(pK_120);
        *pK_120 = t308;
        // ../../src/builtins/array-foreach.tq:16:6
        TNode<Oddball> t309 = UncheckedCast<Oddball>(HasPropertyObject(p_o, (*pK_120).value(), p_context, kHasProperty));
        USE(t309);
        TVARIABLE(Oddball, kPresent_121_impl);
        auto kPresent_121 = &kPresent_121_impl;
        USE(kPresent_121);
        *kPresent_121 = t309;
        // ../../src/builtins/array-foreach.tq:19:6
        {
          Label label__True_88_impl(this);
          Label* label__True_88 = &label__True_88_impl;
          USE(label__True_88);
          Label label__False_89_impl(this, {});
          Label* label__False_89 = &label__False_89_impl;
          USE(label__False_89);
          TNode<BoolT> t310 = UncheckedCast<BoolT>(WordEqual((*kPresent_121).value(), True()));
          USE(t310);
          Branch(t310, label__True_88, label__False_89);
          if (label__True_88->is_used())
          {
            BIND(label__True_88);
            // ../../src/builtins/array-foreach.tq:19:28
            {
              // ../../src/builtins/array-foreach.tq:21:8
              TNode<Object> t311 = UncheckedCast<Object>(GetProperty(p_context, p_o, (*pK_120).value()));
              USE(t311);
              TVARIABLE(Object, kValue_122_impl);
              auto kValue_122 = &kValue_122_impl;
              USE(kValue_122);
              *kValue_122 = t311;
              // ../../src/builtins/array-foreach.tq:24:8
              TNode<Object> t312 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*kValue_122).value(), (*k_119).value(), p_o));
              USE(t312);
            }
            Goto(label__False_89);
          }
          BIND(label__False_89);
        }
      }
      Goto(label_assignment_497_623);
    }
    {
      BIND(label_assignment_497_623);
      int31_t t313 = 1;
      TNode<Smi> t314 = UncheckedCast<Smi>(from_constexpr5ATSmi(t313));
      TNode<Smi> t315 = UncheckedCast<Smi>(SmiAdd((*k_119).value(), t314));
      USE(t315);
      *k_119 = t315;
      Goto(label_header_496_622);
    }
    BIND(label__False_87);
    // ../../src/builtins/array-foreach.tq:29:4
    *_return_118 = Undefined();
    Goto(label_macro_end_621);
  }
  BIND(label_macro_end_621);
  return (*_return_118).value();
}

TF_BUILTIN(ArrayForEachLoopEagerDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../src/builtins/array-foreach.tq:34:48
  {
    // ../../src/builtins/array-foreach.tq:35:4
    TNode<Object> t316 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, Undefined(), p_receiver, p_initialK, p_length, Undefined()));
    USE(t316);
    Return(t316);
  }
}

TF_BUILTIN(ArrayForEachLoopLazyDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_result = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(p_result);
  // ../../src/builtins/array-foreach.tq:42:64
  {
    // ../../src/builtins/array-foreach.tq:43:4
    TNode<Object> t317 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, Undefined(), p_receiver, p_initialK, p_length, Undefined()));
    USE(t317);
    Return(t317);
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_array = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Object> p_object = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(p_object);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_to = UncheckedCast<Object>(Parameter(Descriptor::kTo));
  USE(p_to);
  // ../../src/builtins/array-foreach.tq:51:26
  {
    // ../../src/builtins/array-foreach.tq:52:4
    {
      Label label_try_done_498_624_impl(this);
      Label* label_try_done_498_624 = &label_try_done_498_624_impl;
      USE(label_try_done_498_624);
      Label label_Unexpected_90_impl(this);
      Label* label_Unexpected_90 = &label_Unexpected_90_impl;
      USE(label_Unexpected_90);
      Label label_try_begin_499_625_impl(this);
      Label* label_try_begin_499_625 = &label_try_begin_499_625_impl;
      USE(label_try_begin_499_625);
      Goto(label_try_begin_499_625);
      if (label_try_begin_499_625->is_used())
      {
        BIND(label_try_begin_499_625);
        // ../../src/builtins/array-foreach.tq:52:8
        {
          // ../../src/builtins/array-foreach.tq:53:6
          TNode<JSReceiver> t318 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(p_callback, label_Unexpected_90));
          USE(t318);
          TVARIABLE(JSReceiver, callbackfn_123_impl);
          auto callbackfn_123 = &callbackfn_123_impl;
          USE(callbackfn_123);
          *callbackfn_123 = t318;
          // ../../src/builtins/array-foreach.tq:54:6
          TNode<Smi> t319 = UncheckedCast<Smi>(cast5ATSmi(p_initialK, label_Unexpected_90));
          USE(t319);
          TVARIABLE(Smi, k_124_impl);
          auto k_124 = &k_124_impl;
          USE(k_124);
          *k_124 = t319;
          // ../../src/builtins/array-foreach.tq:55:6
          TNode<Number> t320 = UncheckedCast<Number>(cast22UT12ATHeapNumber5ATSmi(p_length, label_Unexpected_90));
          USE(t320);
          TVARIABLE(Number, number_length_125_impl);
          auto number_length_125 = &number_length_125_impl;
          USE(number_length_125);
          *number_length_125 = t320;
          // ../../src/builtins/array-foreach.tq:57:6
          TNode<Object> t321 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, p_object, (*number_length_125).value(), (*callbackfn_123).value(), p_thisArg, (*k_124).value()));
          USE(t321);
          Return(t321);
        }
      }
      if (label_Unexpected_90->is_used())
      {
        BIND(label_Unexpected_90);
        // ../../src/builtins/array-foreach.tq:60:21
        {
          // ../../src/builtins/array-foreach.tq:61:6
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_91, TVariable<Smi>* Bailout0_126) {
  TVARIABLE(Object, _return_127_impl);
  auto _return_127 = &_return_127_impl;
  USE(_return_127);
  Label label_macro_end_626_impl(this, {_return_127});
  Label* label_macro_end_626 = &label_macro_end_626_impl;
  USE(label_macro_end_626);
  // ../../src/builtins/array-foreach.tq:102:15
  {
    // ../../src/builtins/array-foreach.tq:103:4
    int31_t t322 = 0;
    TVARIABLE(Smi, k_128_impl);
    auto k_128 = &k_128_impl;
    USE(k_128);
    TNode<Smi> t323 = UncheckedCast<Smi>(from_constexpr5ATSmi(t322));
    *k_128 = t323;
    // ../../src/builtins/array-foreach.tq:104:4
    {
      Label label_try_done_500_627_impl(this);
      Label* label_try_done_500_627 = &label_try_done_500_627_impl;
      USE(label_try_done_500_627);
      Label label_Slow_92_impl(this);
      Label* label_Slow_92 = &label_Slow_92_impl;
      USE(label_Slow_92);
      Label label_try_begin_501_628_impl(this);
      Label* label_try_begin_501_628 = &label_try_begin_501_628_impl;
      USE(label_try_begin_501_628);
      Goto(label_try_begin_501_628);
      if (label_try_begin_501_628->is_used())
      {
        BIND(label_try_begin_501_628);
        // ../../src/builtins/array-foreach.tq:104:8
        {
          // ../../src/builtins/array-foreach.tq:105:6
          TNode<Smi> t324 = UncheckedCast<Smi>(cast5ATSmi(p_len, label_Slow_92));
          USE(t324);
          TVARIABLE(Smi, smi_len_129_impl);
          auto smi_len_129 = &smi_len_129_impl;
          USE(smi_len_129);
          *smi_len_129 = t324;
          // ../../src/builtins/array-foreach.tq:106:6
          TNode<JSArray> t325 = UncheckedCast<JSArray>(cast9ATJSArray(p_o, label_Slow_92));
          USE(t325);
          TVARIABLE(JSArray, a_130_impl);
          auto a_130 = &a_130_impl;
          USE(a_130);
          *a_130 = t325;
          // ../../src/builtins/array-foreach.tq:107:6
          TNode<Map> t326 = UncheckedCast<Map>(LoadMap((*a_130).value()));
          TVARIABLE(Map, map_131_impl);
          auto map_131 = &map_131_impl;
          USE(map_131);
          *map_131 = t326;
          // ../../src/builtins/array-foreach.tq:109:6
          {
            Label label__True_93_impl(this);
            Label* label__True_93 = &label__True_93_impl;
            USE(label__True_93);
            Label label__False_94_impl(this, {});
            Label* label__False_94 = &label__False_94_impl;
            USE(label__False_94);
            TNode<BoolT> t327 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, (*map_131).value()));
            USE(t327);
            TNode<BoolT> t328 = UncheckedCast<BoolT>(Word32BinaryNot(t327));
            USE(t328);
            Branch(t328, label__True_93, label__False_94);
            if (label__True_93->is_used())
            {
              BIND(label__True_93);
              // ../../src/builtins/array-foreach.tq:109:59
              Goto(label_Slow_92);
            }
            BIND(label__False_94);
          }
          // ../../src/builtins/array-foreach.tq:110:6
          TNode<Int32T> t329 = UncheckedCast<Int32T>(LoadMapElementsKind((*map_131).value()));
          TVARIABLE(Int32T, elementsKind_132_impl);
          auto elementsKind_132 = &elementsKind_132_impl;
          USE(elementsKind_132);
          *elementsKind_132 = t329;
          // ../../src/builtins/array-foreach.tq:111:6
          {
            Label label__True_95_impl(this);
            Label* label__True_95 = &label__True_95_impl;
            USE(label__True_95);
            Label label__False_96_impl(this, {});
            Label* label__False_96 = &label__False_96_impl;
            USE(label__False_96);
            TNode<BoolT> t330 = UncheckedCast<BoolT>(IsFastElementsKind((*elementsKind_132).value()));
            USE(t330);
            TNode<BoolT> t331 = UncheckedCast<BoolT>(Word32BinaryNot(t330));
            USE(t331);
            Branch(t331, label__True_95, label__False_96);
            if (label__True_95->is_used())
            {
              BIND(label__True_95);
              // ../../src/builtins/array-foreach.tq:111:45
              Goto(label_Slow_92);
            }
            BIND(label__False_96);
          }
          // ../../src/builtins/array-foreach.tq:113:6
          {
            Label label__True_97_impl(this);
            Label* label__True_97 = &label__True_97_impl;
            USE(label__True_97);
            Label label__False_98_impl(this);
            Label* label__False_98 = &label__False_98_impl;
            USE(label__False_98);
            Label label_if_done_label_502_629_impl(this, {});
            Label* label_if_done_label_502_629 = &label_if_done_label_502_629_impl;
            USE(label_if_done_label_502_629);
            TNode<BoolT> t332 = UncheckedCast<BoolT>(IsElementsKindGreaterThan((*elementsKind_132).value(), HOLEY_ELEMENTS));
            USE(t332);
            Branch(t332, label__True_97, label__False_98);
            if (label__True_97->is_used())
            {
              BIND(label__True_97);
              // ../../src/builtins/array-foreach.tq:113:67
              {
                // ../../src/builtins/array-foreach.tq:114:8
                VisitAllElements18ATFixedDoubleArray(p_context, (*a_130).value(), (*smi_len_129).value(), p_callbackfn, p_thisArg, label_Bailout_91, Bailout0_126);
              }
              Goto(label_if_done_label_502_629);
            }
            if (label__False_98->is_used())
            {
              BIND(label__False_98);
              // ../../src/builtins/array-foreach.tq:117:13
              {
                // ../../src/builtins/array-foreach.tq:118:8
                VisitAllElements12ATFixedArray(p_context, (*a_130).value(), (*smi_len_129).value(), p_callbackfn, p_thisArg, label_Bailout_91, Bailout0_126);
              }
              Goto(label_if_done_label_502_629);
            }
            BIND(label_if_done_label_502_629);
          }
        }
        Goto(label_try_done_500_627);
      }
      if (label_Slow_92->is_used())
      {
        BIND(label_Slow_92);
        // ../../src/builtins/array-foreach.tq:122:15
        {
          // ../../src/builtins/array-foreach.tq:123:6
          *Bailout0_126 = (*k_128).value();
          Goto(label_Bailout_91);
        }
      }
      BIND(label_try_done_500_627);
    }
    // ../../src/builtins/array-foreach.tq:125:4
    *_return_127 = Undefined();
    Goto(label_macro_end_626);
  }
  BIND(label_macro_end_626);
  return (*_return_127).value();
}

TF_BUILTIN(ArrayForEach, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-foreach.tq:130:64
  {
    // ../../src/builtins/array-foreach.tq:131:4
    {
      Label label_try_done_503_630_impl(this);
      Label* label_try_done_503_630 = &label_try_done_503_630_impl;
      USE(label_try_done_503_630);
      Label label_TypeError_99_impl(this);
      Label* label_TypeError_99 = &label_TypeError_99_impl;
      USE(label_TypeError_99);
      Label label_NullOrUndefinedError_100_impl(this);
      Label* label_NullOrUndefinedError_100 = &label_NullOrUndefinedError_100_impl;
      USE(label_NullOrUndefinedError_100);
      Label label_try_begin_504_631_impl(this);
      Label* label_try_begin_504_631 = &label_try_begin_504_631_impl;
      USE(label_try_begin_504_631);
      Goto(label_try_begin_504_631);
      if (label_try_begin_504_631->is_used())
      {
        BIND(label_try_begin_504_631);
        // ../../src/builtins/array-foreach.tq:131:8
        {
          // ../../src/builtins/array-foreach.tq:132:6
          {
            Label label__True_101_impl(this);
            Label* label__True_101 = &label__True_101_impl;
            USE(label__True_101);
            Label label__False_102_impl(this, {});
            Label* label__False_102 = &label__False_102_impl;
            USE(label__False_102);
            TNode<BoolT> t333 = UncheckedCast<BoolT>(IsNullOrUndefined(p_receiver));
            USE(t333);
            Branch(t333, label__True_101, label__False_102);
            if (label__True_101->is_used())
            {
              BIND(label__True_101);
              // ../../src/builtins/array-foreach.tq:132:39
              {
                // ../../src/builtins/array-foreach.tq:133:8
                Goto(label_NullOrUndefinedError_100);
              }
            }
            BIND(label__False_102);
          }
          // ../../src/builtins/array-foreach.tq:137:6
          TNode<JSReceiver> t334 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
          USE(t334);
          TVARIABLE(Object, o_133_impl);
          auto o_133 = &o_133_impl;
          USE(o_133);
          *o_133 = t334;
          // ../../src/builtins/array-foreach.tq:140:6
          TNode<Number> t335 = UncheckedCast<Number>(GetLengthProperty(p_context, (*o_133).value()));
          USE(t335);
          TVARIABLE(Number, len_134_impl);
          auto len_134 = &len_134_impl;
          USE(len_134);
          *len_134 = t335;
          // ../../src/builtins/array-foreach.tq:143:6
          {
            Label label__True_103_impl(this);
            Label* label__True_103 = &label__True_103_impl;
            USE(label__True_103);
            Label label__False_104_impl(this, {});
            Label* label__False_104 = &label__False_104_impl;
            USE(label__False_104);
            TNode<IntPtrT> t336 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int31_t t337 = 0;
            TNode<IntPtrT> t338 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t337));
            TNode<BoolT> t339 = UncheckedCast<BoolT>(WordEqual(t336, t338));
            USE(t339);
            Branch(t339, label__True_103, label__False_104);
            if (label__True_103->is_used())
            {
              BIND(label__True_103);
              // ../../src/builtins/array-foreach.tq:143:33
              {
                // ../../src/builtins/array-foreach.tq:144:8
                Goto(label_TypeError_99);
              }
            }
            BIND(label__False_104);
          }
          // ../../src/builtins/array-foreach.tq:146:6
          int31_t t340 = 0;
          TNode<IntPtrT> t341 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t340));
          TNode<Object> t342 = UncheckedCast<Object>(GetArgumentValue(arguments, t341));
          TNode<JSReceiver> t343 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(t342, label_TypeError_99));
          USE(t343);
          TVARIABLE(JSReceiver, callbackfn_135_impl);
          auto callbackfn_135 = &callbackfn_135_impl;
          USE(callbackfn_135);
          *callbackfn_135 = t343;
          // ../../src/builtins/array-foreach.tq:150:6
          auto t344 = [=]() {
            int31_t t346 = 1;
            TNode<IntPtrT> t347 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t346));
            TNode<Object> t348 = UncheckedCast<Object>(GetArgumentValue(arguments, t347));
            return t348;
          };
          auto t345 = [=]() {
            return Undefined();
          };
          TVARIABLE(Object, t349_505_impl);
          auto t349_505 = &t349_505_impl;
          USE(t349_505);
          {
            Label label__True_105_impl(this);
            Label* label__True_105 = &label__True_105_impl;
            USE(label__True_105);
            Label label__False_106_impl(this);
            Label* label__False_106 = &label__False_106_impl;
            USE(label__False_106);
            Label label__done_506_632_impl(this, {t349_505});
            Label* label__done_506_632 = &label__done_506_632_impl;
            USE(label__done_506_632);
            TNode<IntPtrT> t350 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int31_t t351 = 1;
            TNode<IntPtrT> t352 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t351));
            TNode<BoolT> t353 = UncheckedCast<BoolT>(IntPtrGreaterThan(t350, t352));
            USE(t353);
            Branch(t353, label__True_105, label__False_106);
            BIND(label__True_105);
                        *t349_505 = t344();
            Goto(label__done_506_632);
            BIND(label__False_106);
                        *t349_505 = t345();
            Goto(label__done_506_632);
            BIND(label__done_506_632);
          }
          TVARIABLE(Object, thisArg_136_impl);
          auto thisArg_136 = &thisArg_136_impl;
          USE(thisArg_136);
          *thisArg_136 = (*t349_505).value();
          // ../../src/builtins/array-foreach.tq:153:6
          int31_t t354 = 0;
          TVARIABLE(Smi, k_137_impl);
          auto k_137 = &k_137_impl;
          USE(k_137);
          TNode<Smi> t355 = UncheckedCast<Smi>(from_constexpr5ATSmi(t354));
          *k_137 = t355;
          // ../../src/builtins/array-foreach.tq:154:6
          {
            Label label_try_done_507_633_impl(this);
            Label* label_try_done_507_633 = &label_try_done_507_633_impl;
            USE(label_try_done_507_633);
            Label label_Bailout_107_impl(this);
            Label* label_Bailout_107 = &label_Bailout_107_impl;
            USE(label_Bailout_107);
            TVARIABLE(Smi, k_value_138_impl);
            auto k_value_138 = &k_value_138_impl;
            USE(k_value_138);
            Label label_try_begin_508_634_impl(this);
            Label* label_try_begin_508_634 = &label_try_begin_508_634_impl;
            USE(label_try_begin_508_634);
            Goto(label_try_begin_508_634);
            if (label_try_begin_508_634->is_used())
            {
              BIND(label_try_begin_508_634);
              // ../../src/builtins/array-foreach.tq:154:10
              {
                // ../../src/builtins/array-foreach.tq:155:8
                TNode<Object> t356 = UncheckedCast<Object>(FastArrayForEach(p_context, (*o_133).value(), (*len_134).value(), (*callbackfn_135).value(), (*thisArg_136).value(), label_Bailout_107, k_value_138));
                USE(t356);
                arguments->PopAndReturn(t356);
              }
            }
            if (label_Bailout_107->is_used())
            {
              BIND(label_Bailout_107);
              // ../../src/builtins/array-foreach.tq:158:34
              {
                // ../../src/builtins/array-foreach.tq:159:8
                *k_137 = (*k_value_138).value();
              }
              Goto(label_try_done_507_633);
            }
            BIND(label_try_done_507_633);
          }
          // ../../src/builtins/array-foreach.tq:162:6
          TNode<Object> t357 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, (*o_133).value(), (*len_134).value(), (*callbackfn_135).value(), (*thisArg_136).value(), (*k_137).value()));
          USE(t357);
          arguments->PopAndReturn(t357);
        }
      }
      if (label_TypeError_99->is_used())
      {
        BIND(label_TypeError_99);
        // ../../src/builtins/array-foreach.tq:165:20
        {
          // ../../src/builtins/array-foreach.tq:166:6
          int31_t t358 = 0;
          TNode<IntPtrT> t359 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t358));
          TNode<Object> t360 = UncheckedCast<Object>(GetArgumentValue(arguments, t359));
          ThrowTypeError(p_context, MessageTemplate::kCalledNonCallable, t360);
        }
      }
      if (label_NullOrUndefinedError_100->is_used())
      {
        BIND(label_NullOrUndefinedError_100);
        // ../../src/builtins/array-foreach.tq:168:31
        {
          // ../../src/builtins/array-foreach.tq:169:6
          const char* t361 = "Array.prototype.forEach";
          TNode<Object> t362 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t361));
          ThrowTypeError(p_context, MessageTemplate::kCalledOnNullOrUndefined, t362);
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_497, TVariable<Smi>* Bailout0_433) {
  Label label_macro_end_813_impl(this, {});
  Label* label_macro_end_813 = &label_macro_end_813_impl;
  USE(label_macro_end_813);
  // ../../src/builtins/array-foreach.tq:68:15
  {
    // ../../src/builtins/array-foreach.tq:69:4
    int31_t t1890 = 0;
    TVARIABLE(Smi, k_434_impl);
    auto k_434 = &k_434_impl;
    USE(k_434);
    TNode<Smi> t1891 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1890));
    *k_434 = t1891;
    // ../../src/builtins/array-foreach.tq:70:4
    TNode<Map> t1892 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map_435_impl);
    auto map_435 = &map_435_impl;
    USE(map_435);
    *map_435 = t1892;
    // ../../src/builtins/array-foreach.tq:72:4
    {
      Label label_try_done_667_814_impl(this);
      Label* label_try_done_667_814 = &label_try_done_667_814_impl;
      USE(label_try_done_667_814);
      Label label_Slow_498_impl(this);
      Label* label_Slow_498 = &label_Slow_498_impl;
      USE(label_Slow_498);
      Label label_try_begin_668_815_impl(this);
      Label* label_try_begin_668_815 = &label_try_begin_668_815_impl;
      USE(label_try_begin_668_815);
      Goto(label_try_begin_668_815);
      if (label_try_begin_668_815->is_used())
      {
        BIND(label_try_begin_668_815);
        // ../../src/builtins/array-foreach.tq:72:8
        {
          // ../../src/builtins/array-foreach.tq:74:6
          Label label__True_499_impl(this);
          Label* label__True_499 = &label__True_499_impl;
          USE(label__True_499);
          Label label__False_500_impl(this);
          Label* label__False_500 = &label__False_500_impl;
          USE(label__False_500);
          Label label_header_669_816_impl(this, {k_434});
          Label* label_header_669_816 = &label_header_669_816_impl;
          USE(label_header_669_816);
          Goto(label_header_669_816);
          BIND(label_header_669_816);
          Label label_assignment_670_817_impl(this);
          Label* label_assignment_670_817 = &label_assignment_670_817_impl;
          USE(label_assignment_670_817);
          TNode<BoolT> t1893 = UncheckedCast<BoolT>(SmiLessThan((*k_434).value(), p_len));
          USE(t1893);
          Branch(t1893, label__True_499, label__False_500);
          if (label__True_499->is_used())
          {
            BIND(label__True_499);
            // ../../src/builtins/array-foreach.tq:74:33
            {
              // ../../src/builtins/array-foreach.tq:76:8
              {
                Label label__True_501_impl(this);
                Label* label__True_501 = &label__True_501_impl;
                USE(label__True_501);
                Label label__False_502_impl(this, {});
                Label* label__False_502 = &label__False_502_impl;
                USE(label__False_502);
                TNode<Map> t1894 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t1895 = UncheckedCast<BoolT>(WordNotEqual((*map_435).value(), t1894));
                USE(t1895);
                Branch(t1895, label__True_501, label__False_502);
                if (label__True_501->is_used())
                {
                  BIND(label__True_501);
                  // ../../src/builtins/array-foreach.tq:76:26
                  Goto(label_Slow_498);
                }
                BIND(label__False_502);
              }
              // ../../src/builtins/array-foreach.tq:78:8
              {
                Label label__True_503_impl(this);
                Label* label__True_503 = &label__True_503_impl;
                USE(label__True_503);
                Label label__False_504_impl(this, {});
                Label* label__False_504 = &label__False_504_impl;
                USE(label__False_504);
                TNode<Number> t1896 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual((*k_434).value(), t1896, label__True_503, label__False_504);
                if (label__True_503->is_used())
                {
                  BIND(label__True_503);
                  // ../../src/builtins/array-foreach.tq:78:27
                  Goto(label_Slow_498);
                }
                BIND(label__False_504);
              }
              // ../../src/builtins/array-foreach.tq:80:8
              {
                Label label_try_done_671_818_impl(this);
                Label* label_try_done_671_818 = &label_try_done_671_818_impl;
                USE(label_try_done_671_818);
                Label label_FoundHole_505_impl(this);
                Label* label_FoundHole_505 = &label_FoundHole_505_impl;
                USE(label_FoundHole_505);
                Label label_try_begin_672_819_impl(this);
                Label* label_try_begin_672_819 = &label_try_begin_672_819_impl;
                USE(label_try_begin_672_819);
                Goto(label_try_begin_672_819);
                if (label_try_begin_672_819->is_used())
                {
                  BIND(label_try_begin_672_819);
                  // ../../src/builtins/array-foreach.tq:80:12
                  {
                    // ../../src/builtins/array-foreach.tq:81:10
                    TNode<Object> t1897 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(p_a, (*k_434).value(), label_FoundHole_505));
                    USE(t1897);
                    TVARIABLE(Object, value_436_impl);
                    auto value_436 = &value_436_impl;
                    USE(value_436);
                    *value_436 = t1897;
                    // ../../src/builtins/array-foreach.tq:83:10
                    TNode<Object> t1898 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*value_436).value(), (*k_434).value(), p_a));
                    USE(t1898);
                  }
                  Goto(label_try_done_671_818);
                }
                if (label_FoundHole_505->is_used())
                {
                  BIND(label_FoundHole_505);
                  // ../../src/builtins/array-foreach.tq:85:24
                  {
                    // ../../src/builtins/array-foreach.tq:90:10
                    {
                      Label label__True_506_impl(this);
                      Label* label__True_506 = &label__True_506_impl;
                      USE(label__True_506);
                      Label label__False_507_impl(this, {});
                      Label* label__False_507 = &label__False_507_impl;
                      USE(label__False_507);
                      TNode<BoolT> t1899 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t1899);
                      Branch(t1899, label__True_506, label__False_507);
                      if (label__True_506->is_used())
                      {
                        BIND(label__True_506);
                        // ../../src/builtins/array-foreach.tq:90:50
                        *Bailout0_433 = (*k_434).value();
                        Goto(label_Bailout_497);
                      }
                      BIND(label__False_507);
                    }
                  }
                  Goto(label_try_done_671_818);
                }
                BIND(label_try_done_671_818);
              }
            }
            Goto(label_assignment_670_817);
          }
          {
            BIND(label_assignment_670_817);
            int31_t t1900 = 1;
            TNode<Smi> t1901 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1900));
            TNode<Smi> t1902 = UncheckedCast<Smi>(SmiAdd((*k_434).value(), t1901));
            USE(t1902);
            *k_434 = t1902;
            Goto(label_header_669_816);
          }
          BIND(label__False_500);
        }
        Goto(label_try_done_667_814);
      }
      if (label_Slow_498->is_used())
      {
        BIND(label_Slow_498);
        // ../../src/builtins/array-foreach.tq:94:15
        {
          // ../../src/builtins/array-foreach.tq:95:6
          *Bailout0_433 = (*k_434).value();
          Goto(label_Bailout_497);
        }
      }
      BIND(label_try_done_667_814);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_508, TVariable<Smi>* Bailout0_437) {
  Label label_macro_end_820_impl(this, {});
  Label* label_macro_end_820 = &label_macro_end_820_impl;
  USE(label_macro_end_820);
  // ../../src/builtins/array-foreach.tq:68:15
  {
    // ../../src/builtins/array-foreach.tq:69:4
    int31_t t1903 = 0;
    TVARIABLE(Smi, k_438_impl);
    auto k_438 = &k_438_impl;
    USE(k_438);
    TNode<Smi> t1904 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1903));
    *k_438 = t1904;
    // ../../src/builtins/array-foreach.tq:70:4
    TNode<Map> t1905 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map_439_impl);
    auto map_439 = &map_439_impl;
    USE(map_439);
    *map_439 = t1905;
    // ../../src/builtins/array-foreach.tq:72:4
    {
      Label label_try_done_673_821_impl(this);
      Label* label_try_done_673_821 = &label_try_done_673_821_impl;
      USE(label_try_done_673_821);
      Label label_Slow_509_impl(this);
      Label* label_Slow_509 = &label_Slow_509_impl;
      USE(label_Slow_509);
      Label label_try_begin_674_822_impl(this);
      Label* label_try_begin_674_822 = &label_try_begin_674_822_impl;
      USE(label_try_begin_674_822);
      Goto(label_try_begin_674_822);
      if (label_try_begin_674_822->is_used())
      {
        BIND(label_try_begin_674_822);
        // ../../src/builtins/array-foreach.tq:72:8
        {
          // ../../src/builtins/array-foreach.tq:74:6
          Label label__True_510_impl(this);
          Label* label__True_510 = &label__True_510_impl;
          USE(label__True_510);
          Label label__False_511_impl(this);
          Label* label__False_511 = &label__False_511_impl;
          USE(label__False_511);
          Label label_header_675_823_impl(this, {k_438});
          Label* label_header_675_823 = &label_header_675_823_impl;
          USE(label_header_675_823);
          Goto(label_header_675_823);
          BIND(label_header_675_823);
          Label label_assignment_676_824_impl(this);
          Label* label_assignment_676_824 = &label_assignment_676_824_impl;
          USE(label_assignment_676_824);
          TNode<BoolT> t1906 = UncheckedCast<BoolT>(SmiLessThan((*k_438).value(), p_len));
          USE(t1906);
          Branch(t1906, label__True_510, label__False_511);
          if (label__True_510->is_used())
          {
            BIND(label__True_510);
            // ../../src/builtins/array-foreach.tq:74:33
            {
              // ../../src/builtins/array-foreach.tq:76:8
              {
                Label label__True_512_impl(this);
                Label* label__True_512 = &label__True_512_impl;
                USE(label__True_512);
                Label label__False_513_impl(this, {});
                Label* label__False_513 = &label__False_513_impl;
                USE(label__False_513);
                TNode<Map> t1907 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t1908 = UncheckedCast<BoolT>(WordNotEqual((*map_439).value(), t1907));
                USE(t1908);
                Branch(t1908, label__True_512, label__False_513);
                if (label__True_512->is_used())
                {
                  BIND(label__True_512);
                  // ../../src/builtins/array-foreach.tq:76:26
                  Goto(label_Slow_509);
                }
                BIND(label__False_513);
              }
              // ../../src/builtins/array-foreach.tq:78:8
              {
                Label label__True_514_impl(this);
                Label* label__True_514 = &label__True_514_impl;
                USE(label__True_514);
                Label label__False_515_impl(this, {});
                Label* label__False_515 = &label__False_515_impl;
                USE(label__False_515);
                TNode<Number> t1909 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual((*k_438).value(), t1909, label__True_514, label__False_515);
                if (label__True_514->is_used())
                {
                  BIND(label__True_514);
                  // ../../src/builtins/array-foreach.tq:78:27
                  Goto(label_Slow_509);
                }
                BIND(label__False_515);
              }
              // ../../src/builtins/array-foreach.tq:80:8
              {
                Label label_try_done_677_825_impl(this);
                Label* label_try_done_677_825 = &label_try_done_677_825_impl;
                USE(label_try_done_677_825);
                Label label_FoundHole_516_impl(this);
                Label* label_FoundHole_516 = &label_FoundHole_516_impl;
                USE(label_FoundHole_516);
                Label label_try_begin_678_826_impl(this);
                Label* label_try_begin_678_826 = &label_try_begin_678_826_impl;
                USE(label_try_begin_678_826);
                Goto(label_try_begin_678_826);
                if (label_try_begin_678_826->is_used())
                {
                  BIND(label_try_begin_678_826);
                  // ../../src/builtins/array-foreach.tq:80:12
                  {
                    // ../../src/builtins/array-foreach.tq:81:10
                    TNode<Object> t1910 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(p_a, (*k_438).value(), label_FoundHole_516));
                    USE(t1910);
                    TVARIABLE(Object, value_440_impl);
                    auto value_440 = &value_440_impl;
                    USE(value_440);
                    *value_440 = t1910;
                    // ../../src/builtins/array-foreach.tq:83:10
                    TNode<Object> t1911 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*value_440).value(), (*k_438).value(), p_a));
                    USE(t1911);
                  }
                  Goto(label_try_done_677_825);
                }
                if (label_FoundHole_516->is_used())
                {
                  BIND(label_FoundHole_516);
                  // ../../src/builtins/array-foreach.tq:85:24
                  {
                    // ../../src/builtins/array-foreach.tq:90:10
                    {
                      Label label__True_517_impl(this);
                      Label* label__True_517 = &label__True_517_impl;
                      USE(label__True_517);
                      Label label__False_518_impl(this, {});
                      Label* label__False_518 = &label__False_518_impl;
                      USE(label__False_518);
                      TNode<BoolT> t1912 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t1912);
                      Branch(t1912, label__True_517, label__False_518);
                      if (label__True_517->is_used())
                      {
                        BIND(label__True_517);
                        // ../../src/builtins/array-foreach.tq:90:50
                        *Bailout0_437 = (*k_438).value();
                        Goto(label_Bailout_508);
                      }
                      BIND(label__False_518);
                    }
                  }
                  Goto(label_try_done_677_825);
                }
                BIND(label_try_done_677_825);
              }
            }
            Goto(label_assignment_676_824);
          }
          {
            BIND(label_assignment_676_824);
            int31_t t1913 = 1;
            TNode<Smi> t1914 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1913));
            TNode<Smi> t1915 = UncheckedCast<Smi>(SmiAdd((*k_438).value(), t1914));
            USE(t1915);
            *k_438 = t1915;
            Goto(label_header_675_823);
          }
          BIND(label__False_511);
        }
        Goto(label_try_done_673_821);
      }
      if (label_Slow_509->is_used())
      {
        BIND(label_Slow_509);
        // ../../src/builtins/array-foreach.tq:94:15
        {
          // ../../src/builtins/array-foreach.tq:95:6
          *Bailout0_437 = (*k_438).value();
          Goto(label_Bailout_508);
        }
      }
      BIND(label_try_done_673_821);
    }
  }
}

}  // namepsace internal
}  // namespace v8

