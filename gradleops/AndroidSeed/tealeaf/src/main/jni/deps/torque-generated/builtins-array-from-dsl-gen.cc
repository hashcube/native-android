#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_78_impl);
  auto _return_78 = &_return_78_impl;
  USE(_return_78);
  Label label_macro_end_1474_impl(this, {_return_78}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1474 = &label_macro_end_1474_impl;
  USE(label_macro_end_1474);
  // ../../src/builtins/array.tq:17:64
  {
    // ../../src/builtins/array.tq:18:5
    {
      Label label__True_38_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_38 = &label__True_38_impl;
      USE(label__True_38);
      Label label__False_39_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label__False_39 = &label__False_39_impl;
      USE(label__False_39);
      Label label_if_done_label_576_1475_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_576_1475 = &label_if_done_label_576_1475_impl;
      USE(label_if_done_label_576_1475);
      BranchIfFastJSArray(implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Context>>(p_context), label__True_38, label__False_39);
      if (label__True_38->is_used())
      {
        BIND(label__True_38);
        // ../../src/builtins/array.tq:18:42
        {
          // ../../src/builtins/array.tq:19:7
          TNode<JSArray> t119 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_o)));
          USE(implicit_cast<TNode<JSArray>>(t119));
          TNode<JSArray> a_577_impl;
          auto a_577 = &a_577_impl;
          USE(a_577);
          *a_577 = implicit_cast<TNode<JSArray>>(t119);
          // ../../src/builtins/array.tq:20:7
          TNode<Smi> t120 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_577))));
          *_return_78 = implicit_cast<TNode<Number>>(t120);
          Goto(label_macro_end_1474);
        }
      }
      if (label__False_39->is_used())
      {
        BIND(label__False_39);
        // ../../src/builtins/array.tq:22:7
        {
          // ../../src/builtins/array.tq:23:9
          TNode<Object> t121 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(kLengthString())));
          USE(implicit_cast<TNode<Object>>(t121));
          TNode<Number> t122 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t121)));
          USE(implicit_cast<TNode<Number>>(t122));
          *_return_78 = implicit_cast<TNode<Number>>(t122);
          Goto(label_macro_end_1474);
        }
      }
    }
  }
  BIND(label_macro_end_1474);
  return implicit_cast<TNode<Number>>((*_return_78).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureWriteableFastElements(TNode<JSArray> p_array) {
  Label label_macro_end_1476_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1476 = &label_macro_end_1476_impl;
  USE(label_macro_end_1476);
  // ../../src/builtins/array.tq:27:53
  {
    // ../../src/builtins/array.tq:28:5
    Label label__True_40_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_40 = &label__True_40_impl;
    USE(label__True_40);
    Label label__False_41_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_41 = &label__False_41_impl;
    USE(label__False_41);
    TNode<Map> t123 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_array)));
    TNode<Int32T> t124 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t123)));
    TNode<BoolT> t125 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>(t124)));
    USE(implicit_cast<TNode<BoolT>>(t125));
    Branch(implicit_cast<TNode<BoolT>>(t125), label__True_40, label__False_41);
    BIND(label__False_41);
    Print("assert 'IsFastElementsKind(array.map.elements_kind)' failed at ../../src/builtins/array.tq:28:5");
    Unreachable();
    BIND(label__True_40);
    // ../../src/builtins/array.tq:30:5
    TNode<FixedArrayBase> t126 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_578_impl;
    auto elements_578 = &elements_578_impl;
    USE(elements_578);
    *elements_578 = implicit_cast<TNode<FixedArrayBase>>(t126);
    // ../../src/builtins/array.tq:31:5
    {
      Label label__True_42_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_42 = &label__True_42_impl;
      USE(label__True_42);
      Label label__False_43_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_43 = &label__False_43_impl;
      USE(label__False_43);
      TNode<Map> t127 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_578))));
      TNode<BoolT> t128 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t127), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t128));
      Branch(implicit_cast<TNode<BoolT>>(t128), label__True_42, label__False_43);
      if (label__True_42->is_used())
      {
        BIND(label__True_42);
        // ../../src/builtins/array.tq:31:34
        Goto(label_macro_end_1476);
      }
      BIND(label__False_43);
    }
    // ../../src/builtins/array.tq:35:5
    Label label__True_44_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_44 = &label__True_44_impl;
    USE(label__True_44);
    Label label__False_45_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_45 = &label__False_45_impl;
    USE(label__False_45);
    TNode<Map> t129 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_array)));
    TNode<Int32T> t130 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t129)));
    TNode<BoolT> t131 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>(t130)));
    USE(implicit_cast<TNode<BoolT>>(t131));
    Branch(implicit_cast<TNode<BoolT>>(t131), label__True_44, label__False_45);
    BIND(label__False_45);
    Print("assert 'IsFastSmiOrTaggedElementsKind(array.map.elements_kind)' failed at ../../src/builtins/array.tq:35:5");
    Unreachable();
    BIND(label__True_44);
    // ../../src/builtins/array.tq:37:5
    TNode<Smi> t132 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(p_array)));
    TNode<Smi> length_579_impl;
    auto length_579 = &length_579_impl;
    USE(length_579);
    *length_579 = implicit_cast<TNode<Smi>>(t132);
    // ../../src/builtins/array.tq:38:5
    int31_t t133 = 0;
    TNode<Smi> t134 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t133)));
    TNode<FixedArrayBase> t135 = UncheckedCast<FixedArrayBase>(ExtractFixedArray(implicit_cast<TNode<FixedArrayBase>>((*elements_578)), implicit_cast<TNode<Smi>>(t134), implicit_cast<TNode<Smi>>((*length_579)), implicit_cast<TNode<Smi>>((*length_579)), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kFixedArrays)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t135));
    StoreElements(implicit_cast<TNode<JSObject>>(p_array), implicit_cast<TNode<FixedArrayBase>>(t135));
    // ../../src/builtins/array.tq:40:5
    Label label__True_46_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_46 = &label__True_46_impl;
    USE(label__True_46);
    Label label__False_47_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_47 = &label__False_47_impl;
    USE(label__False_47);
    TNode<FixedArrayBase> t136 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<Map> t137 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(t136)));
    TNode<BoolT> t138 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t137), implicit_cast<TNode<Object>>(kCOWMap())));
    USE(implicit_cast<TNode<BoolT>>(t138));
    Branch(implicit_cast<TNode<BoolT>>(t138), label__True_46, label__False_47);
    BIND(label__False_47);
    Print("assert 'array.elements.map != kCOWMap' failed at ../../src/builtins/array.tq:40:5");
    Unreachable();
    BIND(label__True_46);
  }
  Goto(label_macro_end_1476);
  BIND(label_macro_end_1476);
}

compiler::TNode<BoolT> ArrayBuiltinsFromDSLAssembler::IsJSArray(TNode<Object> p_o) {
  TVARIABLE(BoolT, _return_79_impl);
  auto _return_79 = &_return_79_impl;
  USE(_return_79);
  Label label_macro_end_1477_impl(this, {_return_79}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1477 = &label_macro_end_1477_impl;
  USE(label_macro_end_1477);
  // ../../src/builtins/array.tq:43:36
  {
    // ../../src/builtins/array.tq:44:5
    {
      Label label_try_done_580_1478_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_580_1478 = &label_try_done_580_1478_impl;
      USE(label_try_done_580_1478);
      Label label_NotArray_48_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_NotArray_48 = &label_NotArray_48_impl;
      USE(label_NotArray_48);
      Label label_try_begin_581_1479_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_581_1479 = &label_try_begin_581_1479_impl;
      USE(label_try_begin_581_1479);
      Goto(label_try_begin_581_1479);
      if (label_try_begin_581_1479->is_used())
      {
        BIND(label_try_begin_581_1479);
        // ../../src/builtins/array.tq:44:9
        {
          // ../../src/builtins/array.tq:45:7
          TNode<JSArray> t139 = UncheckedCast<JSArray>(Cast9ATJSArray(implicit_cast<TNode<Object>>(p_o), label_NotArray_48));
          USE(implicit_cast<TNode<JSArray>>(t139));
          TNode<JSArray> array_582_impl;
          auto array_582 = &array_582_impl;
          USE(array_582);
          *array_582 = implicit_cast<TNode<JSArray>>(t139);
          // ../../src/builtins/array.tq:46:7
          TNode<BoolT> t140 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
          *_return_79 = implicit_cast<TNode<BoolT>>(t140);
          Goto(label_macro_end_1477);
        }
      }
      if (label_NotArray_48->is_used())
      {
        BIND(label_NotArray_48);
        // ../../src/builtins/array.tq:48:20
        {
          // ../../src/builtins/array.tq:49:7
          TNode<BoolT> t141 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
          *_return_79 = implicit_cast<TNode<BoolT>>(t141);
          Goto(label_macro_end_1477);
        }
      }
    }
  }
  BIND(label_macro_end_1477);
  return implicit_cast<TNode<BoolT>>((*_return_79).value());
}

void ArrayBuiltinsFromDSLAssembler::StoreArrayHole(TNode<FixedDoubleArray> p_elements, TNode<Smi> p_k) {
  Label label_macro_end_1480_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1480 = &label_macro_end_1480_impl;
  USE(label_macro_end_1480);
  // ../../src/builtins/array.tq:53:66
  {
    // ../../src/builtins/array.tq:54:5
    StoreFixedDoubleArrayHoleSmi(implicit_cast<TNode<FixedDoubleArray>>(p_elements), implicit_cast<TNode<Smi>>(p_k));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreArrayHole(TNode<FixedArray> p_elements, TNode<Smi> p_k) {
  Label label_macro_end_1481_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1481 = &label_macro_end_1481_impl;
  USE(label_macro_end_1481);
  // ../../src/builtins/array.tq:57:60
  {
    // ../../src/builtins/array.tq:58:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_elements), implicit_cast<TNode<Smi>>(p_k), implicit_cast<TNode<Object>>(Hole()));
  }
}

void ArrayBuiltinsFromDSLAssembler::CopyArrayElement(TNode<FixedArray> p_elements, TNode<FixedArray> p_newElements, TNode<Smi> p_from, TNode<Smi> p_to) {
  Label label_macro_end_1482_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1482 = &label_macro_end_1482_impl;
  USE(label_macro_end_1482);
  // ../../src/builtins/array.tq:62:80
  {
    // ../../src/builtins/array.tq:63:5
    TNode<Object> t142 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_elements), implicit_cast<TNode<Smi>>(p_from)));
    TNode<Object> e_583_impl;
    auto e_583 = &e_583_impl;
    USE(e_583);
    *e_583 = implicit_cast<TNode<Object>>(t142);
    // ../../src/builtins/array.tq:64:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_newElements), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Object>>((*e_583)));
  }
}

void ArrayBuiltinsFromDSLAssembler::CopyArrayElement(TNode<FixedDoubleArray> p_elements, TNode<FixedDoubleArray> p_newElements, TNode<Smi> p_from, TNode<Smi> p_to) {
  Label label_macro_end_1483_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1483 = &label_macro_end_1483_impl;
  USE(label_macro_end_1483);
  // ../../src/builtins/array.tq:69:22
  {
    // ../../src/builtins/array.tq:70:5
    {
      Label label_try_done_584_1484_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_584_1484 = &label_try_done_584_1484_impl;
      USE(label_try_done_584_1484);
      Label label_FoundHole_49_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_FoundHole_49 = &label_FoundHole_49_impl;
      USE(label_FoundHole_49);
      Label label_try_begin_585_1485_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_585_1485 = &label_try_begin_585_1485_impl;
      USE(label_try_begin_585_1485);
      Goto(label_try_begin_585_1485);
      if (label_try_begin_585_1485->is_used())
      {
        BIND(label_try_begin_585_1485);
        // ../../src/builtins/array.tq:70:9
        {
          // ../../src/builtins/array.tq:71:7
          TNode<Float64T> t143 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>(p_elements), implicit_cast<TNode<Smi>>(p_from), label_FoundHole_49));
          USE(implicit_cast<TNode<Float64T>>(t143));
          TNode<Float64T> floatValue_586_impl;
          auto floatValue_586 = &floatValue_586_impl;
          USE(floatValue_586);
          *floatValue_586 = implicit_cast<TNode<Float64T>>(t143);
          // ../../src/builtins/array.tq:73:7
          StoreFixedDoubleArrayElementSmi(implicit_cast<TNode<FixedDoubleArray>>(p_newElements), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Float64T>>((*floatValue_586)));
        }
        Goto(label_try_done_584_1484);
      }
      if (label_FoundHole_49->is_used())
      {
        BIND(label_FoundHole_49);
        // ../../src/builtins/array.tq:75:21
        {
          // ../../src/builtins/array.tq:76:7
          StoreArrayHole(implicit_cast<TNode<FixedDoubleArray>>(p_newElements), implicit_cast<TNode<Smi>>(p_to));
        }
        Goto(label_try_done_584_1484);
      }
      BIND(label_try_done_584_1484);
    }
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::ConvertToRelativeIndex(TNode<Number> p_index, TNode<Number> p_length) {
  TVARIABLE(Number, _return_80_impl);
  auto _return_80 = &_return_80_impl;
  USE(_return_80);
  Label label_macro_end_1486_impl(this, {_return_80}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1486 = &label_macro_end_1486_impl;
  USE(label_macro_end_1486);
  // ../../src/builtins/array-copywithin.tq:6:71
  {
    // ../../src/builtins/array-copywithin.tq:7:5
    auto t144 = [=]() {
      TNode<Number> t146 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t146));
      int31_t t147 = 0;
      TNode<Number> t148 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t147)));
      TNode<Number> t149 = UncheckedCast<Number>(Max(implicit_cast<TNode<Number>>(t146), implicit_cast<TNode<Number>>(t148)));
      USE(implicit_cast<TNode<Number>>(t149));
      return implicit_cast<TNode<Number>>(t149);
    };
    auto t145 = [=]() {
      TNode<Number> t150 = UncheckedCast<Number>(Min(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t150));
      return implicit_cast<TNode<Number>>(t150);
    };
    TVARIABLE(Number, t151_587_impl);
    auto t151_587 = &t151_587_impl;
    USE(t151_587);
    {
      Label label__True_50_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_50 = &label__True_50_impl;
      USE(label__True_50);
      Label label__False_51_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_51 = &label__False_51_impl;
      USE(label__False_51);
      Label label__done_588_1487_impl(this, {t151_587}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_588_1487 = &label__done_588_1487_impl;
      USE(label__done_588_1487);
      int31_t t152 = 0;
      TNode<Number> t153 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t152)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(t153), label__True_50, label__False_51);
      BIND(label__True_50);
            *t151_587 = implicit_cast<TNode<Number>>(t144());
      Goto(label__done_588_1487);
      BIND(label__False_51);
            *t151_587 = implicit_cast<TNode<Number>>(t145());
      Goto(label__done_588_1487);
      BIND(label__done_588_1487);
    }
    *_return_80 = implicit_cast<TNode<Number>>((*t151_587).value());
    Goto(label_macro_end_1486);
  }
  BIND(label_macro_end_1486);
  return implicit_cast<TNode<Number>>((*_return_80).value());
}

TF_BUILTIN(ArrayPrototypeCopyWithin, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-copywithin.tq:12:65
  {
    // ../../src/builtins/array-copywithin.tq:14:5
    TNode<JSReceiver> t154 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t154));
    TNode<JSReceiver> object_589_impl;
    auto object_589 = &object_589_impl;
    USE(object_589);
    *object_589 = implicit_cast<TNode<JSReceiver>>(t154);
    // ../../src/builtins/array-copywithin.tq:17:5
    TNode<Number> t155 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_589))));
    USE(implicit_cast<TNode<Number>>(t155));
    TNode<Number> length_590_impl;
    auto length_590 = &length_590_impl;
    USE(length_590);
    *length_590 = implicit_cast<TNode<Number>>(t155);
    // ../../src/builtins/array-copywithin.tq:20:5
    int31_t t156 = 0;
    TNode<IntPtrT> t157 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t156)));
    TNode<Object> t158 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t157)));
    TNode<Number> t159 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t158)));
    USE(implicit_cast<TNode<Number>>(t159));
    TNode<Number> relativeTarget_591_impl;
    auto relativeTarget_591 = &relativeTarget_591_impl;
    USE(relativeTarget_591);
    *relativeTarget_591 = implicit_cast<TNode<Number>>(t159);
    // ../../src/builtins/array-copywithin.tq:24:5
    TNode<Number> t160 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relativeTarget_591)), implicit_cast<TNode<Number>>((*length_590))));
    USE(implicit_cast<TNode<Number>>(t160));
    TVARIABLE(Number, to_81_impl);
    auto to_81 = &to_81_impl;
    USE(to_81);
    *to_81 = implicit_cast<TNode<Number>>(t160);
    // ../../src/builtins/array-copywithin.tq:27:5
    int31_t t161 = 1;
    TNode<IntPtrT> t162 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t161)));
    TNode<Object> t163 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t162)));
    TNode<Number> t164 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t163)));
    USE(implicit_cast<TNode<Number>>(t164));
    TNode<Number> relativeStart_592_impl;
    auto relativeStart_592 = &relativeStart_592_impl;
    USE(relativeStart_592);
    *relativeStart_592 = implicit_cast<TNode<Number>>(t164);
    // ../../src/builtins/array-copywithin.tq:31:5
    TNode<Number> t165 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relativeStart_592)), implicit_cast<TNode<Number>>((*length_590))));
    USE(implicit_cast<TNode<Number>>(t165));
    TVARIABLE(Number, from_82_impl);
    auto from_82 = &from_82_impl;
    USE(from_82);
    *from_82 = implicit_cast<TNode<Number>>(t165);
    // ../../src/builtins/array-copywithin.tq:35:5
    TVARIABLE(Number, relativeEnd_83_impl);
    auto relativeEnd_83 = &relativeEnd_83_impl;
    USE(relativeEnd_83);
    *relativeEnd_83 = implicit_cast<TNode<Number>>((*length_590));
    // ../../src/builtins/array-copywithin.tq:36:5
    {
      Label label__True_52_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_52 = &label__True_52_impl;
      USE(label__True_52);
      Label label__False_53_impl(this, {relativeEnd_83}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_53 = &label__False_53_impl;
      USE(label__False_53);
      int31_t t166 = 2;
      TNode<IntPtrT> t167 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t166)));
      TNode<Object> t168 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t167)));
      TNode<BoolT> t169 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t168), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t169));
      Branch(implicit_cast<TNode<BoolT>>(t169), label__True_52, label__False_53);
      if (label__True_52->is_used())
      {
        BIND(label__True_52);
        // ../../src/builtins/array-copywithin.tq:36:36
        {
          // ../../src/builtins/array-copywithin.tq:37:7
          int31_t t170 = 2;
          TNode<IntPtrT> t171 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t170)));
          TNode<Object> t172 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t171)));
          TNode<Number> t173 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t172)));
          USE(implicit_cast<TNode<Number>>(t173));
          *relativeEnd_83 = implicit_cast<TNode<Number>>(t173);
        }
        Goto(label__False_53);
      }
      BIND(label__False_53);
    }
    // ../../src/builtins/array-copywithin.tq:42:5
    TNode<Number> t174 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relativeEnd_83).value()), implicit_cast<TNode<Number>>((*length_590))));
    USE(implicit_cast<TNode<Number>>(t174));
    TNode<Number> final_593_impl;
    auto final_593 = &final_593_impl;
    USE(final_593);
    *final_593 = implicit_cast<TNode<Number>>(t174);
    // ../../src/builtins/array-copywithin.tq:45:5
    TNode<Number> t175 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*final_593)), implicit_cast<TNode<Number>>((*from_82).value())));
    USE(implicit_cast<TNode<Number>>(t175));
    TNode<Number> t176 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_590)), implicit_cast<TNode<Number>>((*to_81).value())));
    USE(implicit_cast<TNode<Number>>(t176));
    TNode<Number> t177 = UncheckedCast<Number>(Min(implicit_cast<TNode<Number>>(t175), implicit_cast<TNode<Number>>(t176)));
    USE(implicit_cast<TNode<Number>>(t177));
    TVARIABLE(Number, count_84_impl);
    auto count_84 = &count_84_impl;
    USE(count_84);
    *count_84 = implicit_cast<TNode<Number>>(t177);
    // ../../src/builtins/array-copywithin.tq:48:5
    int31_t t178 = 1;
    TVARIABLE(Number, direction_85_impl);
    auto direction_85 = &direction_85_impl;
    USE(direction_85);
    TNode<Number> t179 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t178)));
    *direction_85 = implicit_cast<TNode<Number>>(t179);
    // ../../src/builtins/array-copywithin.tq:50:5
    {
      Label label__True_54_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_54 = &label__True_54_impl;
      USE(label__True_54);
      Label label__False_55_impl(this, {direction_85, from_82, to_81}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_55 = &label__False_55_impl;
      USE(label__False_55);
      Label label__True_56_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_56 = &label__True_56_impl;
      USE(label__True_56);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*from_82).value()), implicit_cast<TNode<Number>>((*to_81).value()), label__True_56, label__False_55);
      BIND(label__True_56);
      TNode<Number> t180 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_82).value()), implicit_cast<TNode<Number>>((*count_84).value())));
      USE(implicit_cast<TNode<Number>>(t180));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*to_81).value()), implicit_cast<TNode<Number>>(t180), label__True_54, label__False_55);
      if (label__True_54->is_used())
      {
        BIND(label__True_54);
        // ../../src/builtins/array-copywithin.tq:50:43
        {
          // ../../src/builtins/array-copywithin.tq:52:7
          int31_t t181 = -1;
          TNode<Number> t182 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t181)));
          *direction_85 = implicit_cast<TNode<Number>>(t182);
          // ../../src/builtins/array-copywithin.tq:55:7
          TNode<Number> t183 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_82).value()), implicit_cast<TNode<Number>>((*count_84).value())));
          USE(implicit_cast<TNode<Number>>(t183));
          int31_t t184 = 1;
          TNode<Number> t185 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t184)));
          TNode<Number> t186 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t183), implicit_cast<TNode<Number>>(t185)));
          USE(implicit_cast<TNode<Number>>(t186));
          *from_82 = implicit_cast<TNode<Number>>(t186);
          // ../../src/builtins/array-copywithin.tq:58:7
          TNode<Number> t187 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_81).value()), implicit_cast<TNode<Number>>((*count_84).value())));
          USE(implicit_cast<TNode<Number>>(t187));
          int31_t t188 = 1;
          TNode<Number> t189 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t188)));
          TNode<Number> t190 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t187), implicit_cast<TNode<Number>>(t189)));
          USE(implicit_cast<TNode<Number>>(t190));
          *to_81 = implicit_cast<TNode<Number>>(t190);
        }
        Goto(label__False_55);
      }
      BIND(label__False_55);
    }
    // ../../src/builtins/array-copywithin.tq:62:5
    {
      Label label__True_57_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_57 = &label__True_57_impl;
      USE(label__True_57);
      Label label__False_58_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_58 = &label__False_58_impl;
      USE(label__False_58);
      Label label_header_594_1488_impl(this, {count_84, from_82, to_81}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_594_1488 = &label_header_594_1488_impl;
      USE(label_header_594_1488);
      Goto(label_header_594_1488);
      BIND(label_header_594_1488);
      int31_t t191 = 0;
      TNode<Number> t192 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t191)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*count_84).value()), implicit_cast<TNode<Number>>(t192), label__True_57, label__False_58);
      if (label__True_57->is_used())
      {
        BIND(label__True_57);
        // ../../src/builtins/array-copywithin.tq:62:23
        {
          // ../../src/builtins/array-copywithin.tq:66:7
          TNode<Oddball> t193 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_589)), implicit_cast<TNode<Object>>((*from_82).value())));
          USE(implicit_cast<TNode<Oddball>>(t193));
          TNode<Oddball> fromPresent_595_impl;
          auto fromPresent_595 = &fromPresent_595_impl;
          USE(fromPresent_595);
          *fromPresent_595 = implicit_cast<TNode<Oddball>>(t193);
          // ../../src/builtins/array-copywithin.tq:69:7
          {
            Label label__True_59_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_59 = &label__True_59_impl;
            USE(label__True_59);
            Label label__False_60_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_60 = &label__False_60_impl;
            USE(label__False_60);
            Label label_if_done_label_596_1489_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_596_1489 = &label_if_done_label_596_1489_impl;
            USE(label_if_done_label_596_1489);
            TNode<BoolT> t194 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_595)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t194));
            Branch(implicit_cast<TNode<BoolT>>(t194), label__True_59, label__False_60);
            if (label__True_59->is_used())
            {
              BIND(label__True_59);
              // ../../src/builtins/array-copywithin.tq:69:32
              {
                // ../../src/builtins/array-copywithin.tq:71:9
                TNode<Object> t195 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_589)), implicit_cast<TNode<Object>>((*from_82).value())));
                USE(implicit_cast<TNode<Object>>(t195));
                TNode<Object> fromVal_597_impl;
                auto fromVal_597 = &fromVal_597_impl;
                USE(fromVal_597);
                *fromVal_597 = implicit_cast<TNode<Object>>(t195);
                // ../../src/builtins/array-copywithin.tq:74:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_589)), implicit_cast<TNode<Object>>((*to_81).value()), implicit_cast<TNode<Object>>((*fromVal_597)));
              }
              Goto(label_if_done_label_596_1489);
            }
            if (label__False_60->is_used())
            {
              BIND(label__False_60);
              // ../../src/builtins/array-copywithin.tq:75:14
              {
                // ../../src/builtins/array-copywithin.tq:77:9
                TNode<Smi> t196 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_589)), implicit_cast<TNode<Object>>((*to_81).value()), implicit_cast<TNode<Smi>>(t196));
              }
              Goto(label_if_done_label_596_1489);
            }
            BIND(label_if_done_label_596_1489);
          }
          // ../../src/builtins/array-copywithin.tq:81:7
          TNode<Number> t197 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_82).value()), implicit_cast<TNode<Number>>((*direction_85).value())));
          USE(implicit_cast<TNode<Number>>(t197));
          *from_82 = implicit_cast<TNode<Number>>(t197);
          // ../../src/builtins/array-copywithin.tq:84:7
          TNode<Number> t198 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_81).value()), implicit_cast<TNode<Number>>((*direction_85).value())));
          USE(implicit_cast<TNode<Number>>(t198));
          *to_81 = implicit_cast<TNode<Number>>(t198);
          // ../../src/builtins/array-copywithin.tq:87:7
          TNode<Number> t199 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t200 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*count_84).value()), implicit_cast<TNode<Number>>(t199)));
          *count_84 = implicit_cast<TNode<Number>>(t200);
        }
        Goto(label_header_594_1488);
      }
      BIND(label__False_58);
    }
    // ../../src/builtins/array-copywithin.tq:91:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*object_589)));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Number> p_initialK) {
  TVARIABLE(Object, _return_86_impl);
  auto _return_86 = &_return_86_impl;
  USE(_return_86);
  Label label_macro_end_1490_impl(this, {_return_86}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1490 = &label_macro_end_1490_impl;
  USE(label_macro_end_1490);
  // ../../src/builtins/array-foreach.tq:8:50
  {
    // ../../src/builtins/array-foreach.tq:11:5
    TVARIABLE(Number, k_87_impl);
    auto k_87 = &k_87_impl;
    USE(k_87);
    *k_87 = implicit_cast<TNode<Number>>(p_initialK);
    Label label__True_61_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_61 = &label__True_61_impl;
    USE(label__True_61);
    Label label__False_62_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_62 = &label__False_62_impl;
    USE(label__False_62);
    Label label_header_598_1491_impl(this, {k_87}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_598_1491 = &label_header_598_1491_impl;
    USE(label_header_598_1491);
    Goto(label_header_598_1491);
    BIND(label_header_598_1491);
    Label label_action_599_1492_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_599_1492 = &label_action_599_1492_impl;
    USE(label_action_599_1492);
    BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_87).value()), implicit_cast<TNode<Number>>(p_len), label__True_61, label__False_62);
    if (label__True_61->is_used())
    {
      BIND(label__True_61);
      // ../../src/builtins/array-foreach.tq:11:56
      {
        // ../../src/builtins/array-foreach.tq:17:7
        TNode<Oddball> t201 = UncheckedCast<Oddball>(HasProperty_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*k_87).value())));
        USE(implicit_cast<TNode<Oddball>>(t201));
        TNode<Oddball> kPresent_600_impl;
        auto kPresent_600 = &kPresent_600_impl;
        USE(kPresent_600);
        *kPresent_600 = implicit_cast<TNode<Oddball>>(t201);
        // ../../src/builtins/array-foreach.tq:20:7
        {
          Label label__True_63_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_63 = &label__True_63_impl;
          USE(label__True_63);
          Label label__False_64_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_64 = &label__False_64_impl;
          USE(label__False_64);
          TNode<BoolT> t202 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*kPresent_600)), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t202));
          Branch(implicit_cast<TNode<BoolT>>(t202), label__True_63, label__False_64);
          if (label__True_63->is_used())
          {
            BIND(label__True_63);
            // ../../src/builtins/array-foreach.tq:20:29
            {
              // ../../src/builtins/array-foreach.tq:22:9
              TNode<Object> t203 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*k_87).value())));
              USE(implicit_cast<TNode<Object>>(t203));
              TNode<Object> kValue_601_impl;
              auto kValue_601 = &kValue_601_impl;
              USE(kValue_601);
              *kValue_601 = implicit_cast<TNode<Object>>(t203);
              // ../../src/builtins/array-foreach.tq:25:9
              TNode<Object> t204 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*kValue_601)), implicit_cast<TNode<Object>>((*k_87).value()), implicit_cast<TNode<Object>>(p_o)));
              USE(implicit_cast<TNode<Object>>(t204));
            }
            Goto(label__False_64);
          }
          BIND(label__False_64);
        }
      }
      Goto(label_action_599_1492);
    }
    {
      BIND(label_action_599_1492);
      int31_t t205 = 1;
      TNode<Number> t206 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t205)));
      TNode<Number> t207 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_87).value()), implicit_cast<TNode<Number>>(t206)));
      USE(implicit_cast<TNode<Number>>(t207));
      *k_87 = implicit_cast<TNode<Number>>(t207);
      Goto(label_header_598_1491);
    }
    BIND(label__False_62);
    // ../../src/builtins/array-foreach.tq:30:5
    *_return_86 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1490);
  }
  BIND(label_macro_end_1490);
  return implicit_cast<TNode<Object>>((*_return_86).value());
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
  // ../../src/builtins/array-foreach.tq:35:49
  {
    // ../../src/builtins/array-foreach.tq:39:5
    TNode<JSReceiver> t208 = UncheckedCast<JSReceiver>(UnsafeCast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t208));
    TNode<JSReceiver> jsreceiver_602_impl;
    auto jsreceiver_602 = &jsreceiver_602_impl;
    USE(jsreceiver_602);
    *jsreceiver_602 = implicit_cast<TNode<JSReceiver>>(t208);
    // ../../src/builtins/array-foreach.tq:40:5
    TNode<Object> t209 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_602)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_602)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t209));
    Return(implicit_cast<TNode<Object>>(t209));
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
  // ../../src/builtins/array-foreach.tq:47:65
  {
    // ../../src/builtins/array-foreach.tq:51:5
    TNode<JSReceiver> t210 = UncheckedCast<JSReceiver>(UnsafeCast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t210));
    TNode<JSReceiver> jsreceiver_603_impl;
    auto jsreceiver_603 = &jsreceiver_603_impl;
    USE(jsreceiver_603);
    *jsreceiver_603 = implicit_cast<TNode<JSReceiver>>(t210);
    // ../../src/builtins/array-foreach.tq:52:5
    TNode<Object> t211 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_603)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_603)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t211));
    Return(implicit_cast<TNode<Object>>(t211));
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
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
  // ../../src/builtins/array-foreach.tq:60:27
  {
    // ../../src/builtins/array-foreach.tq:61:5
    {
      Label label_try_done_604_1493_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_604_1493 = &label_try_done_604_1493_impl;
      USE(label_try_done_604_1493);
      Label label_Unexpected_65_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_Unexpected_65 = &label_Unexpected_65_impl;
      USE(label_Unexpected_65);
      Label label_try_begin_605_1494_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_605_1494 = &label_try_begin_605_1494_impl;
      USE(label_try_begin_605_1494);
      Goto(label_try_begin_605_1494);
      if (label_try_begin_605_1494->is_used())
      {
        BIND(label_try_begin_605_1494);
        // ../../src/builtins/array-foreach.tq:61:9
        {
          // ../../src/builtins/array-foreach.tq:62:7
          TNode<JSReceiver> t212 = UncheckedCast<JSReceiver>(Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_callback), label_Unexpected_65));
          USE(implicit_cast<TNode<JSReceiver>>(t212));
          TNode<JSReceiver> callbackfn_606_impl;
          auto callbackfn_606 = &callbackfn_606_impl;
          USE(callbackfn_606);
          *callbackfn_606 = implicit_cast<TNode<JSReceiver>>(t212);
          // ../../src/builtins/array-foreach.tq:64:7
          TNode<Number> t213 = UncheckedCast<Number>(Cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_initialK), label_Unexpected_65));
          USE(implicit_cast<TNode<Number>>(t213));
          TNode<Number> k_607_impl;
          auto k_607 = &k_607_impl;
          USE(k_607);
          *k_607 = implicit_cast<TNode<Number>>(t213);
          // ../../src/builtins/array-foreach.tq:65:7
          TNode<Number> t214 = UncheckedCast<Number>(Cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_length), label_Unexpected_65));
          USE(implicit_cast<TNode<Number>>(t214));
          TNode<Number> numberLength_608_impl;
          auto numberLength_608 = &numberLength_608_impl;
          USE(numberLength_608);
          *numberLength_608 = implicit_cast<TNode<Number>>(t214);
          // ../../src/builtins/array-foreach.tq:67:7
          TNode<Object> t215 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_receiver), implicit_cast<TNode<Number>>((*numberLength_608)), implicit_cast<TNode<JSReceiver>>((*callbackfn_606)), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Number>>((*k_607))));
          USE(implicit_cast<TNode<Object>>(t215));
          Return(implicit_cast<TNode<Object>>(t215));
        }
      }
      if (label_Unexpected_65->is_used())
      {
        BIND(label_Unexpected_65);
        // ../../src/builtins/array-foreach.tq:70:22
        {
          // ../../src/builtins/array-foreach.tq:71:7
          Print("halting because of 'unreachable' at ../../src/builtins/array-foreach.tq:71:7");
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_66, TVariable<Smi>* Bailout0_88) {
  TVARIABLE(Object, _return_89_impl);
  auto _return_89 = &_return_89_impl;
  USE(_return_89);
  Label label_macro_end_1495_impl(this, {_return_89}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1495 = &label_macro_end_1495_impl;
  USE(label_macro_end_1495);
  // ../../src/builtins/array-foreach.tq:112:27
  {
    // ../../src/builtins/array-foreach.tq:113:5
    int31_t t216 = 0;
    TVARIABLE(Smi, k_90_impl);
    auto k_90 = &k_90_impl;
    USE(k_90);
    TNode<Smi> t217 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t216)));
    *k_90 = implicit_cast<TNode<Smi>>(t217);
    // ../../src/builtins/array-foreach.tq:114:5
    {
      Label label_try_done_609_1496_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_609_1496 = &label_try_done_609_1496_impl;
      USE(label_try_done_609_1496);
      Label label_Slow_67_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_Slow_67 = &label_Slow_67_impl;
      USE(label_Slow_67);
      Label label_try_begin_610_1497_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_610_1497 = &label_try_begin_610_1497_impl;
      USE(label_try_begin_610_1497);
      Goto(label_try_begin_610_1497);
      if (label_try_begin_610_1497->is_used())
      {
        BIND(label_try_begin_610_1497);
        // ../../src/builtins/array-foreach.tq:114:9
        {
          // ../../src/builtins/array-foreach.tq:115:7
          TNode<Smi> t218 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(p_len), label_Slow_67));
          USE(implicit_cast<TNode<Smi>>(t218));
          TNode<Smi> smiLen_611_impl;
          auto smiLen_611 = &smiLen_611_impl;
          USE(smiLen_611);
          *smiLen_611 = implicit_cast<TNode<Smi>>(t218);
          // ../../src/builtins/array-foreach.tq:116:7
          TNode<JSArray> t219 = UncheckedCast<JSArray>(Cast9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_Slow_67));
          USE(implicit_cast<TNode<JSArray>>(t219));
          TNode<JSArray> a_612_impl;
          auto a_612 = &a_612_impl;
          USE(a_612);
          *a_612 = implicit_cast<TNode<JSArray>>(t219);
          // ../../src/builtins/array-foreach.tq:117:7
          TNode<Map> t220 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_612))));
          TNode<Map> map_613_impl;
          auto map_613 = &map_613_impl;
          USE(map_613);
          *map_613 = implicit_cast<TNode<Map>>(t220);
          // ../../src/builtins/array-foreach.tq:119:7
          {
            Label label__True_68_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_68 = &label__True_68_impl;
            USE(label__True_68);
            Label label__False_69_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_69 = &label__False_69_impl;
            USE(label__False_69);
            TNode<BoolT> t221 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_613))));
            USE(implicit_cast<TNode<BoolT>>(t221));
            TNode<BoolT> t222 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t221)));
            USE(implicit_cast<TNode<BoolT>>(t222));
            Branch(implicit_cast<TNode<BoolT>>(t222), label__True_68, label__False_69);
            if (label__True_68->is_used())
            {
              BIND(label__True_68);
              // ../../src/builtins/array-foreach.tq:119:60
              Goto(label_Slow_67);
            }
            BIND(label__False_69);
          }
          // ../../src/builtins/array-foreach.tq:120:7
          TNode<Int32T> t223 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_613))));
          TNode<Int32T> elementsKind_614_impl;
          auto elementsKind_614 = &elementsKind_614_impl;
          USE(elementsKind_614);
          *elementsKind_614 = implicit_cast<TNode<Int32T>>(t223);
          // ../../src/builtins/array-foreach.tq:121:7
          {
            Label label__True_70_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_70 = &label__True_70_impl;
            USE(label__True_70);
            Label label__False_71_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_71 = &label__False_71_impl;
            USE(label__False_71);
            TNode<BoolT> t224 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_614))));
            USE(implicit_cast<TNode<BoolT>>(t224));
            TNode<BoolT> t225 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t224)));
            USE(implicit_cast<TNode<BoolT>>(t225));
            Branch(implicit_cast<TNode<BoolT>>(t225), label__True_70, label__False_71);
            if (label__True_70->is_used())
            {
              BIND(label__True_70);
              // ../../src/builtins/array-foreach.tq:121:46
              Goto(label_Slow_67);
            }
            BIND(label__False_71);
          }
          // ../../src/builtins/array-foreach.tq:123:7
          {
            Label label__True_72_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_72 = &label__True_72_impl;
            USE(label__True_72);
            Label label__False_73_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_73 = &label__False_73_impl;
            USE(label__False_73);
            Label label_if_done_label_615_1498_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_615_1498 = &label_if_done_label_615_1498_impl;
            USE(label_if_done_label_615_1498);
            TNode<BoolT> t226 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elementsKind_614)), implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t226));
            Branch(implicit_cast<TNode<BoolT>>(t226), label__True_72, label__False_73);
            if (label__True_72->is_used())
            {
              BIND(label__True_72);
              // ../../src/builtins/array-foreach.tq:123:68
              {
                // ../../src/builtins/array-foreach.tq:124:9
                VisitAllElements18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_612)), implicit_cast<TNode<Smi>>((*smiLen_611)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_66, Bailout0_88);
              }
              Goto(label_if_done_label_615_1498);
            }
            if (label__False_73->is_used())
            {
              BIND(label__False_73);
              // ../../src/builtins/array-foreach.tq:127:14
              {
                // ../../src/builtins/array-foreach.tq:128:9
                VisitAllElements12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_612)), implicit_cast<TNode<Smi>>((*smiLen_611)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_66, Bailout0_88);
              }
              Goto(label_if_done_label_615_1498);
            }
            BIND(label_if_done_label_615_1498);
          }
        }
        Goto(label_try_done_609_1496);
      }
      if (label_Slow_67->is_used())
      {
        BIND(label_Slow_67);
        // ../../src/builtins/array-foreach.tq:132:16
        {
          // ../../src/builtins/array-foreach.tq:133:7
          *Bailout0_88 = implicit_cast<TNode<Smi>>((*k_90).value());
          Goto(label_Bailout_66);
        }
      }
      BIND(label_try_done_609_1496);
    }
    // ../../src/builtins/array-foreach.tq:135:5
    *_return_89 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1495);
  }
  BIND(label_macro_end_1495);
  return implicit_cast<TNode<Object>>((*_return_89).value());
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
  // ../../src/builtins/array-foreach.tq:140:65
  {
    // ../../src/builtins/array-foreach.tq:141:5
    {
      Label label_try_done_616_1499_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_616_1499 = &label_try_done_616_1499_impl;
      USE(label_try_done_616_1499);
      Label label_TypeError_74_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_TypeError_74 = &label_TypeError_74_impl;
      USE(label_TypeError_74);
      Label label_NullOrUndefinedError_75_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_NullOrUndefinedError_75 = &label_NullOrUndefinedError_75_impl;
      USE(label_NullOrUndefinedError_75);
      Label label_try_begin_617_1500_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_617_1500 = &label_try_begin_617_1500_impl;
      USE(label_try_begin_617_1500);
      Goto(label_try_begin_617_1500);
      if (label_try_begin_617_1500->is_used())
      {
        BIND(label_try_begin_617_1500);
        // ../../src/builtins/array-foreach.tq:141:9
        {
          // ../../src/builtins/array-foreach.tq:142:7
          {
            Label label__True_76_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_76 = &label__True_76_impl;
            USE(label__True_76);
            Label label__False_77_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_77 = &label__False_77_impl;
            USE(label__False_77);
            TNode<BoolT> t227 = UncheckedCast<BoolT>(IsNullOrUndefined(implicit_cast<TNode<Object>>(p_receiver)));
            USE(implicit_cast<TNode<BoolT>>(t227));
            Branch(implicit_cast<TNode<BoolT>>(t227), label__True_76, label__False_77);
            if (label__True_76->is_used())
            {
              BIND(label__True_76);
              // ../../src/builtins/array-foreach.tq:142:40
              {
                // ../../src/builtins/array-foreach.tq:143:9
                Goto(label_NullOrUndefinedError_75);
              }
            }
            BIND(label__False_77);
          }
          // ../../src/builtins/array-foreach.tq:147:7
          TNode<JSReceiver> t228 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<JSReceiver>>(t228));
          TNode<JSReceiver> o_618_impl;
          auto o_618 = &o_618_impl;
          USE(o_618);
          *o_618 = implicit_cast<TNode<JSReceiver>>(t228);
          // ../../src/builtins/array-foreach.tq:150:7
          TNode<Number> t229 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_618))));
          USE(implicit_cast<TNode<Number>>(t229));
          TNode<Number> len_619_impl;
          auto len_619 = &len_619_impl;
          USE(len_619);
          *len_619 = implicit_cast<TNode<Number>>(t229);
          // ../../src/builtins/array-foreach.tq:153:7
          {
            Label label__True_78_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_78 = &label__True_78_impl;
            USE(label__True_78);
            Label label__False_79_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_79 = &label__False_79_impl;
            USE(label__False_79);
            TNode<IntPtrT> t230 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t231 = 0;
            TNode<IntPtrT> t232 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t231)));
            TNode<BoolT> t233 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t230), implicit_cast<TNode<IntPtrT>>(t232)));
            USE(implicit_cast<TNode<BoolT>>(t233));
            Branch(implicit_cast<TNode<BoolT>>(t233), label__True_78, label__False_79);
            if (label__True_78->is_used())
            {
              BIND(label__True_78);
              // ../../src/builtins/array-foreach.tq:153:34
              {
                // ../../src/builtins/array-foreach.tq:154:9
                Goto(label_TypeError_74);
              }
            }
            BIND(label__False_79);
          }
          // ../../src/builtins/array-foreach.tq:156:7
          int31_t t234 = 0;
          TNode<IntPtrT> t235 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t234)));
          TNode<Object> t236 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t235)));
          TNode<JSReceiver> t237 = UncheckedCast<JSReceiver>(Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(t236), label_TypeError_74));
          USE(implicit_cast<TNode<JSReceiver>>(t237));
          TNode<JSReceiver> callbackfn_620_impl;
          auto callbackfn_620 = &callbackfn_620_impl;
          USE(callbackfn_620);
          *callbackfn_620 = implicit_cast<TNode<JSReceiver>>(t237);
          // ../../src/builtins/array-foreach.tq:160:7
          auto t238 = [=]() {
            int31_t t240 = 1;
            TNode<IntPtrT> t241 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t240)));
            TNode<Object> t242 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t241)));
            return implicit_cast<TNode<Object>>(t242);
          };
          auto t239 = [=]() {
            return implicit_cast<TNode<Oddball>>(Undefined());
          };
          TVARIABLE(Object, t243_621_impl);
          auto t243_621 = &t243_621_impl;
          USE(t243_621);
          {
            Label label__True_80_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_80 = &label__True_80_impl;
            USE(label__True_80);
            Label label__False_81_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_81 = &label__False_81_impl;
            USE(label__False_81);
            Label label__done_622_1501_impl(this, {t243_621}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__done_622_1501 = &label__done_622_1501_impl;
            USE(label__done_622_1501);
            TNode<IntPtrT> t244 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t245 = 1;
            TNode<IntPtrT> t246 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t245)));
            TNode<BoolT> t247 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t244), implicit_cast<TNode<IntPtrT>>(t246)));
            USE(implicit_cast<TNode<BoolT>>(t247));
            Branch(implicit_cast<TNode<BoolT>>(t247), label__True_80, label__False_81);
            BIND(label__True_80);
                        *t243_621 = implicit_cast<TNode<Object>>(t238());
            Goto(label__done_622_1501);
            BIND(label__False_81);
                        *t243_621 = implicit_cast<TNode<Object>>(t239());
            Goto(label__done_622_1501);
            BIND(label__done_622_1501);
          }
          TNode<Object> thisArg_623_impl;
          auto thisArg_623 = &thisArg_623_impl;
          USE(thisArg_623);
          *thisArg_623 = implicit_cast<TNode<Object>>((*t243_621).value());
          // ../../src/builtins/array-foreach.tq:163:7
          int31_t t248 = 0;
          TVARIABLE(Number, k_91_impl);
          auto k_91 = &k_91_impl;
          USE(k_91);
          TNode<Number> t249 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t248)));
          *k_91 = implicit_cast<TNode<Number>>(t249);
          // ../../src/builtins/array-foreach.tq:164:7
          {
            Label label_try_done_624_1502_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_done_624_1502 = &label_try_done_624_1502_impl;
            USE(label_try_done_624_1502);
            Label label_Bailout_82_impl(this, compiler::CodeAssemblerLabel::kDeferred);
            Label* label_Bailout_82 = &label_Bailout_82_impl;
            USE(label_Bailout_82);
            TVARIABLE(Smi, kValue_92_impl);
            auto kValue_92 = &kValue_92_impl;
            USE(kValue_92);
            Label label_try_begin_625_1503_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_begin_625_1503 = &label_try_begin_625_1503_impl;
            USE(label_try_begin_625_1503);
            Goto(label_try_begin_625_1503);
            if (label_try_begin_625_1503->is_used())
            {
              BIND(label_try_begin_625_1503);
              // ../../src/builtins/array-foreach.tq:164:11
              {
                // ../../src/builtins/array-foreach.tq:165:9
                TNode<Object> t250 = UncheckedCast<Object>(FastArrayForEach(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_618)), implicit_cast<TNode<Number>>((*len_619)), implicit_cast<TNode<JSReceiver>>((*callbackfn_620)), implicit_cast<TNode<Object>>((*thisArg_623)), label_Bailout_82, kValue_92));
                USE(implicit_cast<TNode<Object>>(t250));
                arguments->PopAndReturn(implicit_cast<TNode<Object>>(t250));
              }
            }
            if (label_Bailout_82->is_used())
            {
              BIND(label_Bailout_82);
              // ../../src/builtins/array-foreach.tq:168:34
              {
                // ../../src/builtins/array-foreach.tq:169:9
                *k_91 = implicit_cast<TNode<Number>>((*kValue_92).value());
              }
              Goto(label_try_done_624_1502);
            }
            BIND(label_try_done_624_1502);
          }
          // ../../src/builtins/array-foreach.tq:172:7
          TNode<Object> t251 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_618)), implicit_cast<TNode<Number>>((*len_619)), implicit_cast<TNode<JSReceiver>>((*callbackfn_620)), implicit_cast<TNode<Object>>((*thisArg_623)), implicit_cast<TNode<Number>>((*k_91).value())));
          USE(implicit_cast<TNode<Object>>(t251));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t251));
        }
      }
      if (label_TypeError_74->is_used())
      {
        BIND(label_TypeError_74);
        // ../../src/builtins/array-foreach.tq:175:21
        {
          // ../../src/builtins/array-foreach.tq:176:7
          int31_t t252 = 0;
          TNode<IntPtrT> t253 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t252)));
          TNode<Object> t254 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t253)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledNonCallable), implicit_cast<TNode<Object>>(t254));
        }
      }
      if (label_NullOrUndefinedError_75->is_used())
      {
        BIND(label_NullOrUndefinedError_75);
        // ../../src/builtins/array-foreach.tq:178:32
        {
          // ../../src/builtins/array-foreach.tq:179:7
          const char* t255 = "Array.prototype.forEach";
          TNode<Object> t256 = UncheckedCast<Object>(FromConstexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t255)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledOnNullOrUndefined), implicit_cast<TNode<Object>>(t256));
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadWithHoleCheck12ATFixedArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_83) {
  TVARIABLE(Object, _return_93_impl);
  auto _return_93 = &_return_93_impl;
  USE(_return_93);
  Label label_macro_end_1504_impl(this, {_return_93}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1504 = &label_macro_end_1504_impl;
  USE(label_macro_end_1504);
  // ../../src/builtins/array-lastindexof.tq:11:21
  {
    // ../../src/builtins/array-lastindexof.tq:12:5
    TNode<FixedArray> t257 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t257));
    TNode<FixedArray> elements_626_impl;
    auto elements_626 = &elements_626_impl;
    USE(elements_626);
    *elements_626 = implicit_cast<TNode<FixedArray>>(t257);
    // ../../src/builtins/array-lastindexof.tq:13:5
    TNode<Object> t258 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_626)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Object> element_627_impl;
    auto element_627 = &element_627_impl;
    USE(element_627);
    *element_627 = implicit_cast<TNode<Object>>(t258);
    // ../../src/builtins/array-lastindexof.tq:14:5
    {
      Label label__True_84_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_84 = &label__True_84_impl;
      USE(label__True_84);
      Label label__False_85_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_85 = &label__False_85_impl;
      USE(label__False_85);
      TNode<BoolT> t259 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*element_627)), implicit_cast<TNode<Object>>(Hole())));
      USE(implicit_cast<TNode<BoolT>>(t259));
      Branch(implicit_cast<TNode<BoolT>>(t259), label__True_84, label__False_85);
      if (label__True_84->is_used())
      {
        BIND(label__True_84);
        // ../../src/builtins/array-lastindexof.tq:14:26
        Goto(label_IfHole_83);
      }
      BIND(label__False_85);
    }
    // ../../src/builtins/array-lastindexof.tq:15:5
    *_return_93 = implicit_cast<TNode<Object>>((*element_627));
    Goto(label_macro_end_1504);
  }
  BIND(label_macro_end_1504);
  return implicit_cast<TNode<Object>>((*_return_93).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadWithHoleCheck18ATFixedDoubleArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, Label* label_IfHole_86) {
  TVARIABLE(Object, _return_94_impl);
  auto _return_94 = &_return_94_impl;
  USE(_return_94);
  Label label_macro_end_1505_impl(this, {_return_94}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1505 = &label_macro_end_1505_impl;
  USE(label_macro_end_1505);
  // ../../src/builtins/array-lastindexof.tq:20:21
  {
    // ../../src/builtins/array-lastindexof.tq:21:5
    TNode<FixedDoubleArray> t260 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t260));
    TNode<FixedDoubleArray> elements_628_impl;
    auto elements_628 = &elements_628_impl;
    USE(elements_628);
    *elements_628 = implicit_cast<TNode<FixedDoubleArray>>(t260);
    // ../../src/builtins/array-lastindexof.tq:22:5
    TNode<Float64T> t261 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elements_628)), implicit_cast<TNode<Smi>>(p_index), label_IfHole_86));
    USE(implicit_cast<TNode<Float64T>>(t261));
    TNode<Float64T> element_629_impl;
    auto element_629 = &element_629_impl;
    USE(element_629);
    *element_629 = implicit_cast<TNode<Float64T>>(t261);
    // ../../src/builtins/array-lastindexof.tq:24:5
    TNode<HeapNumber> t262 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*element_629))));
    USE(implicit_cast<TNode<HeapNumber>>(t262));
    *_return_94 = implicit_cast<TNode<Object>>(t262);
    Goto(label_macro_end_1505);
  }
  BIND(label_macro_end_1505);
  return implicit_cast<TNode<Object>>((*_return_94).value());
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetFromIndex(TNode<Context> p_context, TNode<Number> p_length, CodeStubArguments* p_arguments) {
  TVARIABLE(Number, _return_95_impl);
  auto _return_95 = &_return_95_impl;
  USE(_return_95);
  Label label_macro_end_1506_impl(this, {_return_95}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1506 = &label_macro_end_1506_impl;
  USE(label_macro_end_1506);
  // ../../src/builtins/array-lastindexof.tq:54:47
  {
    // ../../src/builtins/array-lastindexof.tq:57:5
    auto t263 = [=]() {
      int31_t t265 = 1;
      TNode<Number> t266 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t265)));
      TNode<Number> t267 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>(t266)));
      USE(implicit_cast<TNode<Number>>(t267));
      return implicit_cast<TNode<Number>>(t267);
    };
    auto t264 = [=]() {
      int31_t t268 = 1;
      TNode<IntPtrT> t269 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t268)));
      TNode<Object> t270 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_arguments), implicit_cast<TNode<IntPtrT>>(t269)));
      TNode<Number> t271 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t270), implicit_cast<ToIntegerTruncationMode>(ToIntegerTruncationMode::kTruncateMinusZero)));
      USE(implicit_cast<TNode<Number>>(t271));
      return implicit_cast<TNode<Number>>(t271);
    };
    TVARIABLE(Number, t272_630_impl);
    auto t272_630 = &t272_630_impl;
    USE(t272_630);
    {
      Label label__True_87_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_87 = &label__True_87_impl;
      USE(label__True_87);
      Label label__False_88_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_88 = &label__False_88_impl;
      USE(label__False_88);
      Label label__done_631_1507_impl(this, {t272_630}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_631_1507 = &label__done_631_1507_impl;
      USE(label__done_631_1507);
      TNode<IntPtrT> t273 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
      int31_t t274 = 2;
      TNode<IntPtrT> t275 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t274)));
      TNode<BoolT> t276 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>(t273), implicit_cast<TNode<IntPtrT>>(t275)));
      USE(implicit_cast<TNode<BoolT>>(t276));
      Branch(implicit_cast<TNode<BoolT>>(t276), label__True_87, label__False_88);
      BIND(label__True_87);
            *t272_630 = implicit_cast<TNode<Number>>(t263());
      Goto(label__done_631_1507);
      BIND(label__False_88);
            *t272_630 = implicit_cast<TNode<Number>>(t264());
      Goto(label__done_631_1507);
      BIND(label__done_631_1507);
    }
    TNode<Number> n_632_impl;
    auto n_632 = &n_632_impl;
    USE(n_632);
    *n_632 = implicit_cast<TNode<Number>>((*t272_630).value());
    // ../../src/builtins/array-lastindexof.tq:62:5
    int31_t t277 = 0;
    TNode<Smi> t278 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t277)));
    USE(implicit_cast<TNode<Smi>>(t278));
    TVARIABLE(Number, k_96_impl);
    auto k_96 = &k_96_impl;
    USE(k_96);
    *k_96 = implicit_cast<TNode<Number>>(t278);
    // ../../src/builtins/array-lastindexof.tq:63:5
    {
      Label label__True_89_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_89 = &label__True_89_impl;
      USE(label__True_89);
      Label label__False_90_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_90 = &label__False_90_impl;
      USE(label__False_90);
      Label label_if_done_label_633_1508_impl(this, {k_96}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_633_1508 = &label_if_done_label_633_1508_impl;
      USE(label_if_done_label_633_1508);
      int31_t t279 = 0;
      TNode<Number> t280 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t279)));
      BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*n_632)), implicit_cast<TNode<Number>>(t280), label__True_89, label__False_90);
      if (label__True_89->is_used())
      {
        BIND(label__True_89);
        // ../../src/builtins/array-lastindexof.tq:63:17
        {
          // ../../src/builtins/array-lastindexof.tq:66:7
          int31_t t281 = 1;
          TNode<Number> t282 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t281)));
          TNode<Number> t283 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>(t282)));
          USE(implicit_cast<TNode<Number>>(t283));
          TNode<Number> t284 = UncheckedCast<Number>(Min(implicit_cast<TNode<Number>>((*n_632)), implicit_cast<TNode<Number>>(t283)));
          USE(implicit_cast<TNode<Number>>(t284));
          *k_96 = implicit_cast<TNode<Number>>(t284);
        }
        Goto(label_if_done_label_633_1508);
      }
      if (label__False_90->is_used())
      {
        BIND(label__False_90);
        // ../../src/builtins/array-lastindexof.tq:67:12
        {
          // ../../src/builtins/array-lastindexof.tq:69:7
          TNode<Number> t285 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_length), implicit_cast<TNode<Number>>((*n_632))));
          USE(implicit_cast<TNode<Number>>(t285));
          *k_96 = implicit_cast<TNode<Number>>(t285);
        }
        Goto(label_if_done_label_633_1508);
      }
      BIND(label_if_done_label_633_1508);
    }
    // ../../src/builtins/array-lastindexof.tq:71:5
    *_return_95 = implicit_cast<TNode<Number>>((*k_96).value());
    Goto(label_macro_end_1506);
  }
  BIND(label_macro_end_1506);
  return implicit_cast<TNode<Number>>((*_return_95).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::TryFastArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<Object> p_searchElement, TNode<Number> p_from, Label* label_Slow_91) {
  TVARIABLE(Object, _return_97_impl);
  auto _return_97 = &_return_97_impl;
  USE(_return_97);
  Label label_macro_end_1509_impl(this, {_return_97}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1509 = &label_macro_end_1509_impl;
  USE(label_macro_end_1509);
  // ../../src/builtins/array-lastindexof.tq:77:19
  {
    // ../../src/builtins/array-lastindexof.tq:78:5
    EnsureFastJSArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), label_Slow_91);
    // ../../src/builtins/array-lastindexof.tq:79:5
    TNode<JSArray> t286 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t286));
    TNode<JSArray> array_634_impl;
    auto array_634 = &array_634_impl;
    USE(array_634);
    *array_634 = implicit_cast<TNode<JSArray>>(t286);
    // ../../src/builtins/array-lastindexof.tq:81:5
    TNode<Smi> t287 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_634))));
    TNode<Smi> length_635_impl;
    auto length_635 = &length_635_impl;
    USE(length_635);
    *length_635 = implicit_cast<TNode<Smi>>(t287);
    // ../../src/builtins/array-lastindexof.tq:82:5
    {
      Label label__True_92_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_92 = &label__True_92_impl;
      USE(label__True_92);
      Label label__False_93_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_93 = &label__False_93_impl;
      USE(label__False_93);
      int31_t t288 = 0;
      TNode<Smi> t289 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t288)));
      TNode<BoolT> t290 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_635)), implicit_cast<TNode<Smi>>(t289)));
      USE(implicit_cast<TNode<BoolT>>(t290));
      Branch(implicit_cast<TNode<BoolT>>(t290), label__True_92, label__False_93);
      if (label__True_92->is_used())
      {
        BIND(label__True_92);
        // ../../src/builtins/array-lastindexof.tq:82:22
        int31_t t291 = -1;
        TNode<Smi> t292 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t291)));
        USE(implicit_cast<TNode<Smi>>(t292));
        *_return_97 = implicit_cast<TNode<Object>>(t292);
        Goto(label_macro_end_1509);
      }
      BIND(label__False_93);
    }
    // ../../src/builtins/array-lastindexof.tq:84:5
    TNode<Smi> t293 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(p_from), label_Slow_91));
    USE(implicit_cast<TNode<Smi>>(t293));
    TNode<Smi> fromSmi_636_impl;
    auto fromSmi_636 = &fromSmi_636_impl;
    USE(fromSmi_636);
    *fromSmi_636 = implicit_cast<TNode<Smi>>(t293);
    // ../../src/builtins/array-lastindexof.tq:85:5
    TNode<Map> t294 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_634))));
    TNode<Int32T> t295 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t294)));
    TNode<Int32T> kind_637_impl;
    auto kind_637 = &kind_637_impl;
    USE(kind_637);
    *kind_637 = implicit_cast<TNode<Int32T>>(t295);
    // ../../src/builtins/array-lastindexof.tq:86:5
    {
      Label label__True_94_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_94 = &label__True_94_impl;
      USE(label__True_94);
      Label label__False_95_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_95 = &label__False_95_impl;
      USE(label__False_95);
      TNode<BoolT> t296 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*kind_637))));
      USE(implicit_cast<TNode<BoolT>>(t296));
      Branch(implicit_cast<TNode<BoolT>>(t296), label__True_94, label__False_95);
      if (label__True_94->is_used())
      {
        BIND(label__True_94);
        // ../../src/builtins/array-lastindexof.tq:86:46
        {
          // ../../src/builtins/array-lastindexof.tq:87:7
          TNode<Smi> t297 = UncheckedCast<Smi>(FastArrayLastIndexOf12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*array_634)), implicit_cast<TNode<Smi>>((*length_635)), implicit_cast<TNode<Smi>>((*fromSmi_636)), implicit_cast<TNode<Object>>(p_searchElement)));
          USE(implicit_cast<TNode<Smi>>(t297));
          *_return_97 = implicit_cast<TNode<Object>>(t297);
          Goto(label_macro_end_1509);
        }
      }
      BIND(label__False_95);
    }
    // ../../src/builtins/array-lastindexof.tq:90:5
    Label label__True_96_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_96 = &label__True_96_impl;
    USE(label__True_96);
    Label label__False_97_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_97 = &label__False_97_impl;
    USE(label__False_97);
    TNode<BoolT> t298 = UncheckedCast<BoolT>(IsDoubleElementsKind(implicit_cast<TNode<Int32T>>((*kind_637))));
    USE(implicit_cast<TNode<BoolT>>(t298));
    Branch(implicit_cast<TNode<BoolT>>(t298), label__True_96, label__False_97);
    BIND(label__False_97);
    Print("assert 'IsDoubleElementsKind(kind)' failed at ../../src/builtins/array-lastindexof.tq:90:5");
    Unreachable();
    BIND(label__True_96);
    // ../../src/builtins/array-lastindexof.tq:91:5
    TNode<Smi> t299 = UncheckedCast<Smi>(FastArrayLastIndexOf18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*array_634)), implicit_cast<TNode<Smi>>((*length_635)), implicit_cast<TNode<Smi>>((*fromSmi_636)), implicit_cast<TNode<Object>>(p_searchElement)));
    USE(implicit_cast<TNode<Smi>>(t299));
    *_return_97 = implicit_cast<TNode<Object>>(t299);
    Goto(label_macro_end_1509);
  }
  BIND(label_macro_end_1509);
  return implicit_cast<TNode<Object>>((*_return_97).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::GenericArrayLastIndexOf(TNode<Context> p_context, TNode<JSReceiver> p_object, TNode<Object> p_searchElement, TNode<Number> p_from) {
  TVARIABLE(Object, _return_98_impl);
  auto _return_98 = &_return_98_impl;
  USE(_return_98);
  Label label_macro_end_1510_impl(this, {_return_98}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1510 = &label_macro_end_1510_impl;
  USE(label_macro_end_1510);
  // ../../src/builtins/array-lastindexof.tq:97:29
  {
    // ../../src/builtins/array-lastindexof.tq:98:5
    TVARIABLE(Number, k_99_impl);
    auto k_99 = &k_99_impl;
    USE(k_99);
    *k_99 = implicit_cast<TNode<Number>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:101:5
    {
      Label label__True_98_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_98 = &label__True_98_impl;
      USE(label__True_98);
      Label label__False_99_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_99 = &label__False_99_impl;
      USE(label__False_99);
      Label label_header_638_1511_impl(this, {k_99}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_638_1511 = &label_header_638_1511_impl;
      USE(label_header_638_1511);
      Goto(label_header_638_1511);
      BIND(label_header_638_1511);
      int31_t t300 = 0;
      TNode<Number> t301 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t300)));
      BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_99).value()), implicit_cast<TNode<Number>>(t301), label__True_98, label__False_99);
      if (label__True_98->is_used())
      {
        BIND(label__True_98);
        // ../../src/builtins/array-lastindexof.tq:101:20
        {
          // ../../src/builtins/array-lastindexof.tq:103:7
          TNode<Oddball> t302 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_object), implicit_cast<TNode<Object>>((*k_99).value())));
          USE(implicit_cast<TNode<Oddball>>(t302));
          TNode<Oddball> kPresent_639_impl;
          auto kPresent_639 = &kPresent_639_impl;
          USE(kPresent_639);
          *kPresent_639 = implicit_cast<TNode<Oddball>>(t302);
          // ../../src/builtins/array-lastindexof.tq:106:7
          {
            Label label__True_100_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_100 = &label__True_100_impl;
            USE(label__True_100);
            Label label__False_101_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_101 = &label__False_101_impl;
            USE(label__False_101);
            TNode<BoolT> t303 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*kPresent_639)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t303));
            Branch(implicit_cast<TNode<BoolT>>(t303), label__True_100, label__False_101);
            if (label__True_100->is_used())
            {
              BIND(label__True_100);
              // ../../src/builtins/array-lastindexof.tq:106:29
              {
                // ../../src/builtins/array-lastindexof.tq:108:9
                TNode<Object> t304 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_object), implicit_cast<TNode<Object>>((*k_99).value())));
                USE(implicit_cast<TNode<Object>>(t304));
                TNode<Object> element_640_impl;
                auto element_640 = &element_640_impl;
                USE(element_640);
                *element_640 = implicit_cast<TNode<Object>>(t304);
                // ../../src/builtins/array-lastindexof.tq:112:9
                TNode<Oddball> t305 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_640))));
                USE(implicit_cast<TNode<Oddball>>(t305));
                TNode<Oddball> same_641_impl;
                auto same_641 = &same_641_impl;
                USE(same_641);
                *same_641 = implicit_cast<TNode<Oddball>>(t305);
                // ../../src/builtins/array-lastindexof.tq:115:9
                {
                  Label label__True_102_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_102 = &label__True_102_impl;
                  USE(label__True_102);
                  Label label__False_103_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_103 = &label__False_103_impl;
                  USE(label__False_103);
                  TNode<BoolT> t306 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_641)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t306));
                  Branch(implicit_cast<TNode<BoolT>>(t306), label__True_102, label__False_103);
                  if (label__True_102->is_used())
                  {
                    BIND(label__True_102);
                    // ../../src/builtins/array-lastindexof.tq:115:27
                    *_return_98 = implicit_cast<TNode<Object>>((*k_99).value());
                    Goto(label_macro_end_1510);
                  }
                  BIND(label__False_103);
                }
              }
              Goto(label__False_101);
            }
            BIND(label__False_101);
          }
          // ../../src/builtins/array-lastindexof.tq:119:7
          TNode<Number> t307 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t308 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_99).value()), implicit_cast<TNode<Number>>(t307)));
          *k_99 = implicit_cast<TNode<Number>>(t308);
        }
        Goto(label_header_638_1511);
      }
      BIND(label__False_99);
    }
    // ../../src/builtins/array-lastindexof.tq:123:5
    int31_t t309 = -1;
    TNode<Smi> t310 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t309)));
    USE(implicit_cast<TNode<Smi>>(t310));
    *_return_98 = implicit_cast<TNode<Object>>(t310);
    Goto(label_macro_end_1510);
  }
  BIND(label_macro_end_1510);
  return implicit_cast<TNode<Object>>((*_return_98).value());
}

TF_BUILTIN(ArrayPrototypeLastIndexOf, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-lastindexof.tq:128:65
  {
    // ../../src/builtins/array-lastindexof.tq:130:5
    TNode<JSReceiver> t311 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t311));
    TNode<JSReceiver> object_642_impl;
    auto object_642 = &object_642_impl;
    USE(object_642);
    *object_642 = implicit_cast<TNode<JSReceiver>>(t311);
    // ../../src/builtins/array-lastindexof.tq:133:5
    TNode<Number> t312 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_642))));
    USE(implicit_cast<TNode<Number>>(t312));
    TNode<Number> length_643_impl;
    auto length_643 = &length_643_impl;
    USE(length_643);
    *length_643 = implicit_cast<TNode<Number>>(t312);
    // ../../src/builtins/array-lastindexof.tq:136:5
    {
      Label label__True_104_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_104 = &label__True_104_impl;
      USE(label__True_104);
      Label label__False_105_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_105 = &label__False_105_impl;
      USE(label__False_105);
      int31_t t313 = 0;
      TNode<Smi> t314 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t313)));
      USE(implicit_cast<TNode<Smi>>(t314));
      BranchIfNumberEqual(implicit_cast<TNode<Number>>((*length_643)), implicit_cast<TNode<Number>>(t314), label__True_104, label__False_105);
      if (label__True_104->is_used())
      {
        BIND(label__True_104);
        // ../../src/builtins/array-lastindexof.tq:136:35
        int31_t t315 = -1;
        TNode<Smi> t316 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t315)));
        USE(implicit_cast<TNode<Smi>>(t316));
        arguments->PopAndReturn(implicit_cast<TNode<Object>>(t316));
      }
      BIND(label__False_105);
    }
    // ../../src/builtins/array-lastindexof.tq:139:5
    TNode<Number> t317 = UncheckedCast<Number>(GetFromIndex(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Number>>((*length_643)), implicit_cast<CodeStubArguments*>(arguments)));
    USE(implicit_cast<TNode<Number>>(t317));
    TNode<Number> from_644_impl;
    auto from_644 = &from_644_impl;
    USE(from_644);
    *from_644 = implicit_cast<TNode<Number>>(t317);
    // ../../src/builtins/array-lastindexof.tq:141:5
    int31_t t318 = 0;
    TNode<IntPtrT> t319 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t318)));
    TNode<Object> t320 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t319)));
    TNode<Object> searchElement_645_impl;
    auto searchElement_645 = &searchElement_645_impl;
    USE(searchElement_645);
    *searchElement_645 = implicit_cast<TNode<Object>>(t320);
    // ../../src/builtins/array-lastindexof.tq:143:5
    {
      Label label_try_done_646_1512_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_646_1512 = &label_try_done_646_1512_impl;
      USE(label_try_done_646_1512);
      Label label_Baseline_106_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Baseline_106 = &label_Baseline_106_impl;
      USE(label_Baseline_106);
      Label label_try_begin_647_1513_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_647_1513 = &label_try_begin_647_1513_impl;
      USE(label_try_begin_647_1513);
      Goto(label_try_begin_647_1513);
      if (label_try_begin_647_1513->is_used())
      {
        BIND(label_try_begin_647_1513);
        // ../../src/builtins/array-lastindexof.tq:143:9
        {
          // ../../src/builtins/array-lastindexof.tq:144:7
          TNode<Object> t321 = UncheckedCast<Object>(TryFastArrayLastIndexOf(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_642)), implicit_cast<TNode<Object>>((*searchElement_645)), implicit_cast<TNode<Number>>((*from_644)), label_Baseline_106));
          USE(implicit_cast<TNode<Object>>(t321));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t321));
        }
      }
      if (label_Baseline_106->is_used())
      {
        BIND(label_Baseline_106);
        // ../../src/builtins/array-lastindexof.tq:147:20
        {
          // ../../src/builtins/array-lastindexof.tq:148:7
          TNode<Object> t322 = UncheckedCast<Object>(GenericArrayLastIndexOf(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_642)), implicit_cast<TNode<Object>>((*searchElement_645)), implicit_cast<TNode<Number>>((*from_644))));
          USE(implicit_cast<TNode<Object>>(t322));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t322));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::LoadElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Smi, _return_100_impl);
  auto _return_100 = &_return_100_impl;
  USE(_return_100);
  Label label_macro_end_1514_impl(this, {_return_100}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1514 = &label_macro_end_1514_impl;
  USE(label_macro_end_1514);
  // ../../src/builtins/array-reverse.tq:10:50
  {
    // ../../src/builtins/array-reverse.tq:11:5
    TNode<FixedArray> t323 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t323));
    TNode<FixedArray> elems_648_impl;
    auto elems_648 = &elems_648_impl;
    USE(elems_648);
    *elems_648 = implicit_cast<TNode<FixedArray>>(t323);
    // ../../src/builtins/array-reverse.tq:12:5
    TNode<Object> t324 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_648)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Smi> t325 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t324)));
    USE(implicit_cast<TNode<Smi>>(t325));
    *_return_100 = implicit_cast<TNode<Smi>>(t325);
    Goto(label_macro_end_1514);
  }
  BIND(label_macro_end_1514);
  return implicit_cast<TNode<Smi>>((*_return_100).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Object, _return_101_impl);
  auto _return_101 = &_return_101_impl;
  USE(_return_101);
  Label label_macro_end_1515_impl(this, {_return_101}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1515 = &label_macro_end_1515_impl;
  USE(label_macro_end_1515);
  // ../../src/builtins/array-reverse.tq:16:53
  {
    // ../../src/builtins/array-reverse.tq:17:5
    TNode<FixedArray> t326 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t326));
    TNode<FixedArray> elems_649_impl;
    auto elems_649 = &elems_649_impl;
    USE(elems_649);
    *elems_649 = implicit_cast<TNode<FixedArray>>(t326);
    // ../../src/builtins/array-reverse.tq:18:5
    TNode<Object> t327 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_649)), implicit_cast<TNode<Smi>>(p_index)));
    *_return_101 = implicit_cast<TNode<Object>>(t327);
    Goto(label_macro_end_1515);
  }
  BIND(label_macro_end_1515);
  return implicit_cast<TNode<Object>>((*_return_101).value());
}

compiler::TNode<Float64T> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Float64T, _return_102_impl);
  auto _return_102 = &_return_102_impl;
  USE(_return_102);
  Label label_macro_end_1516_impl(this, {_return_102}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1516 = &label_macro_end_1516_impl;
  USE(label_macro_end_1516);
  // ../../src/builtins/array-reverse.tq:22:54
  {
    // ../../src/builtins/array-reverse.tq:23:5
    {
      Label label_try_done_650_1517_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_650_1517 = &label_try_done_650_1517_impl;
      USE(label_try_done_650_1517);
      Label label_Hole_107_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Hole_107 = &label_Hole_107_impl;
      USE(label_Hole_107);
      Label label_try_begin_651_1518_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_651_1518 = &label_try_begin_651_1518_impl;
      USE(label_try_begin_651_1518);
      Goto(label_try_begin_651_1518);
      if (label_try_begin_651_1518->is_used())
      {
        BIND(label_try_begin_651_1518);
        // ../../src/builtins/array-reverse.tq:23:9
        {
          // ../../src/builtins/array-reverse.tq:24:7
          TNode<FixedDoubleArray> t328 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t328));
          TNode<FixedDoubleArray> elems_652_impl;
          auto elems_652 = &elems_652_impl;
          USE(elems_652);
          *elems_652 = implicit_cast<TNode<FixedDoubleArray>>(t328);
          // ../../src/builtins/array-reverse.tq:25:7
          TNode<Float64T> t329 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_652)), implicit_cast<TNode<Smi>>(p_index), label_Hole_107));
          USE(implicit_cast<TNode<Float64T>>(t329));
          *_return_102 = implicit_cast<TNode<Float64T>>(t329);
          Goto(label_macro_end_1516);
        }
      }
      if (label_Hole_107->is_used())
      {
        BIND(label_Hole_107);
        // ../../src/builtins/array-reverse.tq:27:16
        {
          // ../../src/builtins/array-reverse.tq:30:7
          Print("halting because of 'unreachable' at ../../src/builtins/array-reverse.tq:30:7");
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1516);
  return implicit_cast<TNode<Float64T>>((*_return_102).value());
}

void ArrayBuiltinsFromDSLAssembler::StoreElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Smi> p_value) {
  Label label_macro_end_1519_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1519 = &label_macro_end_1519_impl;
  USE(label_macro_end_1519);
  // ../../src/builtins/array-reverse.tq:38:57
  {
    // ../../src/builtins/array-reverse.tq:39:5
    TNode<FixedArray> t330 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t330));
    TNode<FixedArray> elems_653_impl;
    auto elems_653 = &elems_653_impl;
    USE(elems_653);
    *elems_653 = implicit_cast<TNode<FixedArray>>(t330);
    // ../../src/builtins/array-reverse.tq:40:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_653)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Object> p_value) {
  Label label_macro_end_1520_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1520 = &label_macro_end_1520_impl;
  USE(label_macro_end_1520);
  // ../../src/builtins/array-reverse.tq:44:60
  {
    // ../../src/builtins/array-reverse.tq:45:5
    TNode<FixedArray> t331 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t331));
    TNode<FixedArray> elems_654_impl;
    auto elems_654 = &elems_654_impl;
    USE(elems_654);
    *elems_654 = implicit_cast<TNode<FixedArray>>(t331);
    // ../../src/builtins/array-reverse.tq:46:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_654)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_1521_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1521 = &label_macro_end_1521_impl;
  USE(label_macro_end_1521);
  // ../../src/builtins/array-reverse.tq:50:61
  {
    // ../../src/builtins/array-reverse.tq:51:5
    TNode<FixedDoubleArray> t332 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t332));
    TNode<FixedDoubleArray> elems_655_impl;
    auto elems_655 = &elems_655_impl;
    USE(elems_655);
    *elems_655 = implicit_cast<TNode<FixedDoubleArray>>(t332);
    // ../../src/builtins/array-reverse.tq:53:5
    Label label__True_108_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_108 = &label__True_108_impl;
    USE(label__True_108);
    Label label__False_109_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_109 = &label__False_109_impl;
    USE(label__False_109);
    TNode<Float64T> t333 = UncheckedCast<Float64T>(Float64SilenceNaN(implicit_cast<TNode<Float64T>>(p_value)));
    USE(implicit_cast<TNode<Float64T>>(t333));
    TNode<BoolT> t334 = UncheckedCast<BoolT>(Float64Equal(implicit_cast<TNode<Float64T>>(p_value), implicit_cast<TNode<Float64T>>(t333)));
    USE(implicit_cast<TNode<BoolT>>(t334));
    Branch(implicit_cast<TNode<BoolT>>(t334), label__True_108, label__False_109);
    BIND(label__False_109);
    Print("assert 'value == Float64SilenceNaN(value)' failed at ../../src/builtins/array-reverse.tq:53:5");
    Unreachable();
    BIND(label__True_108);
    // ../../src/builtins/array-reverse.tq:54:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_655)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>(p_value));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::GenericArrayReverse(TNode<Context> p_context, TNode<Object> p_receiver) {
  TVARIABLE(Object, _return_103_impl);
  auto _return_103 = &_return_103_impl;
  USE(_return_103);
  Label label_macro_end_1522_impl(this, {_return_103}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1522 = &label_macro_end_1522_impl;
  USE(label_macro_end_1522);
  // ../../src/builtins/array-reverse.tq:75:73
  {
    // ../../src/builtins/array-reverse.tq:77:5
    TNode<JSReceiver> t335 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t335));
    TNode<JSReceiver> object_656_impl;
    auto object_656 = &object_656_impl;
    USE(object_656);
    *object_656 = implicit_cast<TNode<JSReceiver>>(t335);
    // ../../src/builtins/array-reverse.tq:80:5
    TNode<Number> t336 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656))));
    USE(implicit_cast<TNode<Number>>(t336));
    TNode<Number> length_657_impl;
    auto length_657 = &length_657_impl;
    USE(length_657);
    *length_657 = implicit_cast<TNode<Number>>(t336);
    // ../../src/builtins/array-reverse.tq:89:5
    int31_t t337 = 0;
    TVARIABLE(Number, lower_104_impl);
    auto lower_104 = &lower_104_impl;
    USE(lower_104);
    TNode<Number> t338 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t337)));
    *lower_104 = implicit_cast<TNode<Number>>(t338);
    // ../../src/builtins/array-reverse.tq:90:5
    int31_t t339 = 1;
    TNode<Number> t340 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t339)));
    TNode<Number> t341 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_657)), implicit_cast<TNode<Number>>(t340)));
    USE(implicit_cast<TNode<Number>>(t341));
    TVARIABLE(Number, upper_105_impl);
    auto upper_105 = &upper_105_impl;
    USE(upper_105);
    *upper_105 = implicit_cast<TNode<Number>>(t341);
    // ../../src/builtins/array-reverse.tq:92:5
    {
      Label label__True_110_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_110 = &label__True_110_impl;
      USE(label__True_110);
      Label label__False_111_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_111 = &label__False_111_impl;
      USE(label__False_111);
      Label label_header_658_1523_impl(this, {lower_104, upper_105}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_658_1523 = &label_header_658_1523_impl;
      USE(label_header_658_1523);
      Goto(label_header_658_1523);
      BIND(label_header_658_1523);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*lower_104).value()), implicit_cast<TNode<Number>>((*upper_105).value()), label__True_110, label__False_111);
      if (label__True_110->is_used())
      {
        BIND(label__True_110);
        // ../../src/builtins/array-reverse.tq:92:27
        {
          // ../../src/builtins/array-reverse.tq:93:7
          TVARIABLE(Object, lowerValue_106_impl);
          auto lowerValue_106 = &lowerValue_106_impl;
          USE(lowerValue_106);
          *lowerValue_106 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:94:7
          TVARIABLE(Object, upperValue_107_impl);
          auto upperValue_107 = &upperValue_107_impl;
          USE(upperValue_107);
          *upperValue_107 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:99:7
          TNode<Oddball> t342 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_656)), implicit_cast<TNode<Object>>((*lower_104).value())));
          USE(implicit_cast<TNode<Oddball>>(t342));
          TNode<Oddball> lowerExists_659_impl;
          auto lowerExists_659 = &lowerExists_659_impl;
          USE(lowerExists_659);
          *lowerExists_659 = implicit_cast<TNode<Oddball>>(t342);
          // ../../src/builtins/array-reverse.tq:102:7
          {
            Label label__True_112_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_112 = &label__True_112_impl;
            USE(label__True_112);
            Label label__False_113_impl(this, {lowerValue_106}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_113 = &label__False_113_impl;
            USE(label__False_113);
            TNode<BoolT> t343 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lowerExists_659)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t343));
            Branch(implicit_cast<TNode<BoolT>>(t343), label__True_112, label__False_113);
            if (label__True_112->is_used())
            {
              BIND(label__True_112);
              // ../../src/builtins/array-reverse.tq:102:32
              {
                // ../../src/builtins/array-reverse.tq:104:9
                TNode<Object> t344 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*lower_104).value())));
                USE(implicit_cast<TNode<Object>>(t344));
                *lowerValue_106 = implicit_cast<TNode<Object>>(t344);
              }
              Goto(label__False_113);
            }
            BIND(label__False_113);
          }
          // ../../src/builtins/array-reverse.tq:108:7
          TNode<Oddball> t345 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_656)), implicit_cast<TNode<Object>>((*upper_105).value())));
          USE(implicit_cast<TNode<Oddball>>(t345));
          TNode<Oddball> upperExists_660_impl;
          auto upperExists_660 = &upperExists_660_impl;
          USE(upperExists_660);
          *upperExists_660 = implicit_cast<TNode<Oddball>>(t345);
          // ../../src/builtins/array-reverse.tq:111:7
          {
            Label label__True_114_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_114 = &label__True_114_impl;
            USE(label__True_114);
            Label label__False_115_impl(this, {upperValue_107}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_115 = &label__False_115_impl;
            USE(label__False_115);
            TNode<BoolT> t346 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upperExists_660)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t346));
            Branch(implicit_cast<TNode<BoolT>>(t346), label__True_114, label__False_115);
            if (label__True_114->is_used())
            {
              BIND(label__True_114);
              // ../../src/builtins/array-reverse.tq:111:32
              {
                // ../../src/builtins/array-reverse.tq:113:9
                TNode<Object> t347 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*upper_105).value())));
                USE(implicit_cast<TNode<Object>>(t347));
                *upperValue_107 = implicit_cast<TNode<Object>>(t347);
              }
              Goto(label__False_115);
            }
            BIND(label__False_115);
          }
          // ../../src/builtins/array-reverse.tq:117:7
          {
            Label label__True_116_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_116 = &label__True_116_impl;
            USE(label__True_116);
            Label label__False_117_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_117 = &label__False_117_impl;
            USE(label__False_117);
            Label label_if_done_label_661_1524_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_661_1524 = &label_if_done_label_661_1524_impl;
            USE(label_if_done_label_661_1524);
            Label label__True_118_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_118 = &label__True_118_impl;
            USE(label__True_118);
            TNode<BoolT> t348 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lowerExists_659)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t348));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t348), label__False_117);
            TNode<BoolT> t349 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upperExists_660)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t349));
Branch(implicit_cast<TNode<BoolT>>(t349), label__True_116, label__False_117);
            if (label__True_116->is_used())
            {
              BIND(label__True_116);
              // ../../src/builtins/array-reverse.tq:117:55
              {
                // ../../src/builtins/array-reverse.tq:119:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*lower_104).value()), implicit_cast<TNode<Object>>((*upperValue_107).value()));
                // ../../src/builtins/array-reverse.tq:122:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*upper_105).value()), implicit_cast<TNode<Object>>((*lowerValue_106).value()));
              }
              Goto(label_if_done_label_661_1524);
            }
            if (label__False_117->is_used())
            {
              BIND(label__False_117);
              // ../../src/builtins/array-reverse.tq:123:14
              {
                Label label__True_119_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_119 = &label__True_119_impl;
                USE(label__True_119);
                Label label__False_120_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_120 = &label__False_120_impl;
                USE(label__False_120);
                Label label_if_done_label_662_1525_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_if_done_label_662_1525 = &label_if_done_label_662_1525_impl;
                USE(label_if_done_label_662_1525);
                Label label__True_121_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_121 = &label__True_121_impl;
                USE(label__True_121);
                TNode<BoolT> t350 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lowerExists_659)), implicit_cast<TNode<Object>>(False())));
                USE(implicit_cast<TNode<BoolT>>(t350));
                GotoIfNot(implicit_cast<TNode<BoolT>>(t350), label__False_120);
                TNode<BoolT> t351 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upperExists_660)), implicit_cast<TNode<Object>>(True())));
                USE(implicit_cast<TNode<BoolT>>(t351));
Branch(implicit_cast<TNode<BoolT>>(t351), label__True_119, label__False_120);
                if (label__True_119->is_used())
                {
                  BIND(label__True_119);
                  // ../../src/builtins/array-reverse.tq:123:63
                  {
                    // ../../src/builtins/array-reverse.tq:125:9
                    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*lower_104).value()), implicit_cast<TNode<Object>>((*upperValue_107).value()));
                    // ../../src/builtins/array-reverse.tq:128:9
                    TNode<Smi> t352 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                    CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*upper_105).value()), implicit_cast<TNode<Smi>>(t352));
                  }
                  Goto(label_if_done_label_662_1525);
                }
                if (label__False_120->is_used())
                {
                  BIND(label__False_120);
                  // ../../src/builtins/array-reverse.tq:129:14
                  {
                    Label label__True_122_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__True_122 = &label__True_122_impl;
                    USE(label__True_122);
                    Label label__False_123_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__False_123 = &label__False_123_impl;
                    USE(label__False_123);
                    Label label__True_124_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__True_124 = &label__True_124_impl;
                    USE(label__True_124);
                    TNode<BoolT> t353 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lowerExists_659)), implicit_cast<TNode<Object>>(True())));
                    USE(implicit_cast<TNode<BoolT>>(t353));
                    GotoIfNot(implicit_cast<TNode<BoolT>>(t353), label__False_123);
                    TNode<BoolT> t354 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upperExists_660)), implicit_cast<TNode<Object>>(False())));
                    USE(implicit_cast<TNode<BoolT>>(t354));
Branch(implicit_cast<TNode<BoolT>>(t354), label__True_122, label__False_123);
                    if (label__True_122->is_used())
                    {
                      BIND(label__True_122);
                      // ../../src/builtins/array-reverse.tq:129:63
                      {
                        // ../../src/builtins/array-reverse.tq:131:9
                        TNode<Smi> t355 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                        CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*lower_104).value()), implicit_cast<TNode<Smi>>(t355));
                        // ../../src/builtins/array-reverse.tq:134:9
                        CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_656)), implicit_cast<TNode<Object>>((*upper_105).value()), implicit_cast<TNode<Object>>((*lowerValue_106).value()));
                      }
                      Goto(label__False_123);
                    }
                    BIND(label__False_123);
                  }
                  Goto(label_if_done_label_662_1525);
                }
                BIND(label_if_done_label_662_1525);
              }
              Goto(label_if_done_label_661_1524);
            }
            BIND(label_if_done_label_661_1524);
          }
          // ../../src/builtins/array-reverse.tq:138:7
          TNode<Number> t356 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t357 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*lower_104).value()), implicit_cast<TNode<Number>>(t356)));
          *lower_104 = implicit_cast<TNode<Number>>(t357);
          // ../../src/builtins/array-reverse.tq:139:7
          TNode<Number> t358 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t359 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*upper_105).value()), implicit_cast<TNode<Number>>(t358)));
          *upper_105 = implicit_cast<TNode<Number>>(t359);
        }
        Goto(label_header_658_1523);
      }
      BIND(label__False_111);
    }
    // ../../src/builtins/array-reverse.tq:143:5
    *_return_103 = implicit_cast<TNode<Object>>((*object_656));
    Goto(label_macro_end_1522);
  }
  BIND(label_macro_end_1522);
  return implicit_cast<TNode<Object>>((*_return_103).value());
}

void ArrayBuiltinsFromDSLAssembler::TryFastPackedArrayReverse(TNode<Object> p_receiver, Label* label_Slow_125) {
  Label label_macro_end_1526_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1526 = &label_macro_end_1526_impl;
  USE(label_macro_end_1526);
  // ../../src/builtins/array-reverse.tq:146:65
  {
    // ../../src/builtins/array-reverse.tq:147:5
    TNode<JSArray> t360 = UncheckedCast<JSArray>(Cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver), label_Slow_125));
    USE(implicit_cast<TNode<JSArray>>(t360));
    TNode<JSArray> array_663_impl;
    auto array_663 = &array_663_impl;
    USE(array_663);
    *array_663 = implicit_cast<TNode<JSArray>>(t360);
    // ../../src/builtins/array-reverse.tq:149:5
    TNode<Map> t361 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_663))));
    TNode<Int32T> t362 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t361)));
    TNode<Int32T> kind_664_impl;
    auto kind_664 = &kind_664_impl;
    USE(kind_664);
    *kind_664 = implicit_cast<TNode<Int32T>>(t362);
    // ../../src/builtins/array-reverse.tq:150:5
    {
      Label label__True_126_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_126 = &label__True_126_impl;
      USE(label__True_126);
      Label label__False_127_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_127 = &label__False_127_impl;
      USE(label__False_127);
      Label label_if_done_label_665_1527_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_665_1527 = &label_if_done_label_665_1527_impl;
      USE(label_if_done_label_665_1527);
      TNode<Int32T> t363 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
      TNode<BoolT> t364 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_664)), implicit_cast<TNode<Int32T>>(t363)));
      USE(implicit_cast<TNode<BoolT>>(t364));
      Branch(implicit_cast<TNode<BoolT>>(t364), label__True_126, label__False_127);
      if (label__True_126->is_used())
      {
        BIND(label__True_126);
        // ../../src/builtins/array-reverse.tq:150:38
        {
          // ../../src/builtins/array-reverse.tq:151:7
          EnsureWriteableFastElements(implicit_cast<TNode<JSArray>>((*array_663)));
          // ../../src/builtins/array-reverse.tq:152:7
          TNode<FixedArrayBase> t365 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_663))));
          TNode<Smi> t366 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_663))));
          FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t365), implicit_cast<TNode<Smi>>(t366));
        }
        Goto(label_if_done_label_665_1527);
      }
      if (label__False_127->is_used())
      {
        BIND(label__False_127);
        // ../../src/builtins/array-reverse.tq:154:12
        {
          Label label__True_128_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_128 = &label__True_128_impl;
          USE(label__True_128);
          Label label__False_129_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_129 = &label__False_129_impl;
          USE(label__False_129);
          Label label_if_done_label_666_1528_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_if_done_label_666_1528 = &label_if_done_label_666_1528_impl;
          USE(label_if_done_label_666_1528);
          TNode<Int32T> t367 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_ELEMENTS)));
          TNode<BoolT> t368 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_664)), implicit_cast<TNode<Int32T>>(t367)));
          USE(implicit_cast<TNode<BoolT>>(t368));
          Branch(implicit_cast<TNode<BoolT>>(t368), label__True_128, label__False_129);
          if (label__True_128->is_used())
          {
            BIND(label__True_128);
            // ../../src/builtins/array-reverse.tq:154:41
            {
              // ../../src/builtins/array-reverse.tq:155:7
              EnsureWriteableFastElements(implicit_cast<TNode<JSArray>>((*array_663)));
              // ../../src/builtins/array-reverse.tq:156:7
              TNode<FixedArrayBase> t369 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_663))));
              TNode<Smi> t370 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_663))));
              FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t369), implicit_cast<TNode<Smi>>(t370));
            }
            Goto(label_if_done_label_666_1528);
          }
          if (label__False_129->is_used())
          {
            BIND(label__False_129);
            // ../../src/builtins/array-reverse.tq:158:12
            {
              Label label__True_130_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_130 = &label__True_130_impl;
              USE(label__True_130);
              Label label__False_131_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_131 = &label__False_131_impl;
              USE(label__False_131);
              Label label_if_done_label_667_1529_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_if_done_label_667_1529 = &label_if_done_label_667_1529_impl;
              USE(label_if_done_label_667_1529);
              TNode<Int32T> t371 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_DOUBLE_ELEMENTS)));
              TNode<BoolT> t372 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_664)), implicit_cast<TNode<Int32T>>(t371)));
              USE(implicit_cast<TNode<BoolT>>(t372));
              Branch(implicit_cast<TNode<BoolT>>(t372), label__True_130, label__False_131);
              if (label__True_130->is_used())
              {
                BIND(label__True_130);
                // ../../src/builtins/array-reverse.tq:158:48
                {
                  // ../../src/builtins/array-reverse.tq:159:7
                  TNode<FixedArrayBase> t373 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_663))));
                  TNode<Smi> t374 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_663))));
                  FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(t373), implicit_cast<TNode<Smi>>(t374));
                }
                Goto(label_if_done_label_667_1529);
              }
              if (label__False_131->is_used())
              {
                BIND(label__False_131);
                // ../../src/builtins/array-reverse.tq:161:12
                {
                  // ../../src/builtins/array-reverse.tq:162:7
                  Goto(label_Slow_125);
                }
              }
              BIND(label_if_done_label_667_1529);
            }
            Goto(label_if_done_label_666_1528);
          }
          BIND(label_if_done_label_666_1528);
        }
        Goto(label_if_done_label_665_1527);
      }
      BIND(label_if_done_label_665_1527);
    }
  }
}

TF_BUILTIN(ArrayPrototypeReverse, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-reverse.tq:168:65
  {
    // ../../src/builtins/array-reverse.tq:169:5
    {
      Label label_try_done_668_1530_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_668_1530 = &label_try_done_668_1530_impl;
      USE(label_try_done_668_1530);
      Label label_Baseline_132_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Baseline_132 = &label_Baseline_132_impl;
      USE(label_Baseline_132);
      Label label_try_begin_669_1531_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_669_1531 = &label_try_begin_669_1531_impl;
      USE(label_try_begin_669_1531);
      Goto(label_try_begin_669_1531);
      if (label_try_begin_669_1531->is_used())
      {
        BIND(label_try_begin_669_1531);
        // ../../src/builtins/array-reverse.tq:169:9
        {
          // ../../src/builtins/array-reverse.tq:170:7
          TryFastPackedArrayReverse(implicit_cast<TNode<Object>>(p_receiver), label_Baseline_132);
          // ../../src/builtins/array-reverse.tq:171:7
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
        }
      }
      if (label_Baseline_132->is_used())
      {
        BIND(label_Baseline_132);
        // ../../src/builtins/array-reverse.tq:173:20
        {
          // ../../src/builtins/array-reverse.tq:174:7
          TNode<Object> t375 = UncheckedCast<Object>(GenericArrayReverse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<Object>>(t375));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t375));
        }
      }
    }
  }
}

compiler::TNode<FixedDoubleArray> ArrayBuiltinsFromDSLAssembler::Extract18ATFixedDoubleArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity) {
  TVARIABLE(FixedDoubleArray, _return_108_impl);
  auto _return_108 = &_return_108_impl;
  USE(_return_108);
  Label label_macro_end_1532_impl(this, {_return_108}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1532 = &label_macro_end_1532_impl;
  USE(label_macro_end_1532);
  // ../../src/builtins/array-splice.tq:19:40
  {
    // ../../src/builtins/array-splice.tq:20:5
    {
      Label label__True_133_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_133 = &label__True_133_impl;
      USE(label__True_133);
      Label label__False_134_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_134 = &label__False_134_impl;
      USE(label__False_134);
      TNode<BoolT> t376 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(kEmptyFixedArray())));
      USE(implicit_cast<TNode<BoolT>>(t376));
      Branch(implicit_cast<TNode<BoolT>>(t376), label__True_133, label__False_134);
      if (label__True_133->is_used())
      {
        BIND(label__True_133);
        // ../../src/builtins/array-splice.tq:20:39
        {
          // ../../src/builtins/array-splice.tq:21:7
          TNode<IntPtrT> t377 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Smi>>(p_capacity)));
          USE(implicit_cast<TNode<IntPtrT>>(t377));
          TNode<FixedDoubleArray> t378 = UncheckedCast<FixedDoubleArray>(AllocateZeroedFixedDoubleArray(implicit_cast<TNode<IntPtrT>>(t377)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t378));
          *_return_108 = implicit_cast<TNode<FixedDoubleArray>>(t378);
          Goto(label_macro_end_1532);
        }
      }
      BIND(label__False_134);
    }
    // ../../src/builtins/array-splice.tq:23:5
    TNode<FixedArrayBase> t379 = UncheckedCast<FixedArrayBase>(ExtractFixedArray(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>(p_first), implicit_cast<TNode<Smi>>(p_count), implicit_cast<TNode<Smi>>(p_capacity)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t379));
    TNode<FixedDoubleArray> t380 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(t379)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t380));
    *_return_108 = implicit_cast<TNode<FixedDoubleArray>>(t380);
    Goto(label_macro_end_1532);
  }
  BIND(label_macro_end_1532);
  return implicit_cast<TNode<FixedDoubleArray>>((*_return_108).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<JSReceiver> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_135) {
  TVARIABLE(Object, _return_109_impl);
  auto _return_109 = &_return_109_impl;
  USE(_return_109);
  Label label_macro_end_1533_impl(this, {_return_109}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1533 = &label_macro_end_1533_impl;
  USE(label_macro_end_1533);
  // ../../src/builtins/array-splice.tq:92:22
  {
    // ../../src/builtins/array-splice.tq:93:5
    TNode<Smi> t381 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(p_originalLengthNumber), label_Bailout_135));
    USE(implicit_cast<TNode<Smi>>(t381));
    TNode<Smi> originalLength_670_impl;
    auto originalLength_670 = &originalLength_670_impl;
    USE(originalLength_670);
    *originalLength_670 = implicit_cast<TNode<Smi>>(t381);
    // ../../src/builtins/array-splice.tq:95:5
    TNode<Smi> t382 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(p_actualStartNumber), label_Bailout_135));
    USE(implicit_cast<TNode<Smi>>(t382));
    TNode<Smi> actualStart_671_impl;
    auto actualStart_671 = &actualStart_671_impl;
    USE(actualStart_671);
    *actualStart_671 = implicit_cast<TNode<Smi>>(t382);
    // ../../src/builtins/array-splice.tq:96:5
    TNode<Smi> t383 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(p_actualDeleteCountNumber), label_Bailout_135));
    USE(implicit_cast<TNode<Smi>>(t383));
    TNode<Smi> actualDeleteCount_672_impl;
    auto actualDeleteCount_672 = &actualDeleteCount_672_impl;
    USE(actualDeleteCount_672);
    *actualDeleteCount_672 = implicit_cast<TNode<Smi>>(t383);
    // ../../src/builtins/array-splice.tq:98:5
    TNode<Smi> t384 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_672))));
    USE(implicit_cast<TNode<Smi>>(t384));
    TNode<Smi> lengthDelta_673_impl;
    auto lengthDelta_673 = &lengthDelta_673_impl;
    USE(lengthDelta_673);
    *lengthDelta_673 = implicit_cast<TNode<Smi>>(t384);
    // ../../src/builtins/array-splice.tq:99:5
    TNode<Smi> t385 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*originalLength_670)), implicit_cast<TNode<Smi>>((*lengthDelta_673))));
    USE(implicit_cast<TNode<Smi>>(t385));
    TNode<Smi> newLength_674_impl;
    auto newLength_674 = &newLength_674_impl;
    USE(newLength_674);
    *newLength_674 = implicit_cast<TNode<Smi>>(t385);
    // ../../src/builtins/array-splice.tq:101:5
    TNode<JSArray> t386 = UncheckedCast<JSArray>(Cast9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_Bailout_135));
    USE(implicit_cast<TNode<JSArray>>(t386));
    TNode<JSArray> a_675_impl;
    auto a_675 = &a_675_impl;
    USE(a_675);
    *a_675 = implicit_cast<TNode<JSArray>>(t386);
    // ../../src/builtins/array-splice.tq:103:5
    TNode<Map> t387 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_675))));
    TNode<Map> map_676_impl;
    auto map_676 = &map_676_impl;
    USE(map_676);
    *map_676 = implicit_cast<TNode<Map>>(t387);
    // ../../src/builtins/array-splice.tq:104:5
    {
      Label label__True_136_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_136 = &label__True_136_impl;
      USE(label__True_136);
      Label label__False_137_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_137 = &label__False_137_impl;
      USE(label__False_137);
      TNode<BoolT> t388 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_676))));
      USE(implicit_cast<TNode<BoolT>>(t388));
      TNode<BoolT> t389 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t388)));
      USE(implicit_cast<TNode<BoolT>>(t389));
      Branch(implicit_cast<TNode<BoolT>>(t389), label__True_136, label__False_137);
      if (label__True_136->is_used())
      {
        BIND(label__True_136);
        // ../../src/builtins/array-splice.tq:104:58
        Goto(label_Bailout_135);
      }
      BIND(label__False_137);
    }
    // ../../src/builtins/array-splice.tq:105:5
    {
      Label label__True_138_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_138 = &label__True_138_impl;
      USE(label__True_138);
      Label label__False_139_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_139 = &label__False_139_impl;
      USE(label__False_139);
      TNode<BoolT> t390 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t390));
      Branch(implicit_cast<TNode<BoolT>>(t390), label__True_138, label__False_139);
      if (label__True_138->is_used())
      {
        BIND(label__True_138);
        // ../../src/builtins/array-splice.tq:105:45
        Goto(label_Bailout_135);
      }
      BIND(label__False_139);
    }
    // ../../src/builtins/array-splice.tq:106:5
    {
      Label label__True_140_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_140 = &label__True_140_impl;
      USE(label__True_140);
      Label label__False_141_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_141 = &label__False_141_impl;
      USE(label__False_141);
      TNode<BoolT> t391 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t391));
      Branch(implicit_cast<TNode<BoolT>>(t391), label__True_140, label__False_141);
      if (label__True_140->is_used())
      {
        BIND(label__True_140);
        // ../../src/builtins/array-splice.tq:106:47
        Goto(label_Bailout_135);
      }
      BIND(label__False_141);
    }
    // ../../src/builtins/array-splice.tq:109:5
    TNode<Int32T> t392 = UncheckedCast<Int32T>(EnsureArrayPushable(implicit_cast<TNode<Map>>((*map_676)), label_Bailout_135));
    USE(implicit_cast<TNode<Int32T>>(t392));
    TVARIABLE(Int32T, elementsKind_110_impl);
    auto elementsKind_110 = &elementsKind_110_impl;
    USE(elementsKind_110);
    *elementsKind_110 = implicit_cast<TNode<Int32T>>(t392);
    // ../../src/builtins/array-splice.tq:110:5
    {
      Label label__True_142_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_142 = &label__True_142_impl;
      USE(label__True_142);
      Label label__False_143_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_143 = &label__False_143_impl;
      USE(label__False_143);
      TNode<BoolT> t393 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
      USE(implicit_cast<TNode<BoolT>>(t393));
      TNode<BoolT> t394 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t393)));
      USE(implicit_cast<TNode<BoolT>>(t394));
      Branch(implicit_cast<TNode<BoolT>>(t394), label__True_142, label__False_143);
      if (label__True_142->is_used())
      {
        BIND(label__True_142);
        // ../../src/builtins/array-splice.tq:110:44
        Goto(label_Bailout_135);
      }
      BIND(label__False_143);
    }
    // ../../src/builtins/array-splice.tq:112:5
    TNode<Int32T> oldElementsKind_677_impl;
    auto oldElementsKind_677 = &oldElementsKind_677_impl;
    USE(oldElementsKind_677);
    *oldElementsKind_677 = implicit_cast<TNode<Int32T>>((*elementsKind_110).value());
    // ../../src/builtins/array-splice.tq:113:5
    int31_t t395 = 2;
    TNode<IntPtrT> t396 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
    Label label_body_678_1534_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_body_678_1534 = &label_body_678_1534_impl;
    USE(label_body_678_1534);
    Label label_increment_679_1535_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_increment_679_1535 = &label_increment_679_1535_impl;
    USE(label_increment_679_1535);
    Label label_exit_680_1536_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_exit_680_1536 = &label_exit_680_1536_impl;
    USE(label_exit_680_1536);
    TVARIABLE(IntPtrT, _for_index_t397_681_impl);
    auto _for_index_t397_681 = &_for_index_t397_681_impl;
    USE(_for_index_t397_681);
    TNode<IntPtrT> t398 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t395)));
    *_for_index_t397_681 = implicit_cast<TNode<IntPtrT>>(t398);
    Label label_header_682_1537_impl(this, {_for_index_t397_681, elementsKind_110}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_682_1537 = &label_header_682_1537_impl;
    USE(label_header_682_1537);
    Goto(label_header_682_1537);
    BIND(label_header_682_1537);
    TNode<BoolT> t399 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t397_681).value()), implicit_cast<TNode<IntPtrT>>(t396)));
    Branch(implicit_cast<TNode<BoolT>>(t399), label_body_678_1534, label_exit_680_1536);
    BIND(label_body_678_1534);
    TNode<Object> t400 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t397_681).value())));
    TVARIABLE(Object, e_111_impl);
    auto e_111 = &e_111_impl;
    USE(e_111);
    *e_111 = implicit_cast<TNode<Object>>(t400);
    // ../../src/builtins/array-splice.tq:113:39
    {
      // ../../src/builtins/array-splice.tq:114:7
      {
        Label label__True_144_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__True_144 = &label__True_144_impl;
        USE(label__True_144);
        Label label__False_145_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__False_145 = &label__False_145_impl;
        USE(label__False_145);
        Label label_if_done_label_683_1538_impl(this, {elementsKind_110}, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_if_done_label_683_1538 = &label_if_done_label_683_1538_impl;
        USE(label_if_done_label_683_1538);
        TNode<BoolT> t401 = UncheckedCast<BoolT>(IsFastSmiElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
        USE(implicit_cast<TNode<BoolT>>(t401));
        Branch(implicit_cast<TNode<BoolT>>(t401), label__True_144, label__False_145);
        if (label__True_144->is_used())
        {
          BIND(label__True_144);
          // ../../src/builtins/array-splice.tq:114:48
          {
            // ../../src/builtins/array-splice.tq:115:9
            {
              Label label__True_146_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_146 = &label__True_146_impl;
              USE(label__True_146);
              Label label__False_147_impl(this, {elementsKind_110}, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_147 = &label__False_147_impl;
              USE(label__False_147);
              TNode<BoolT> t402 = UncheckedCast<BoolT>(TaggedIsNotSmi(implicit_cast<TNode<Object>>((*e_111).value())));
              USE(implicit_cast<TNode<BoolT>>(t402));
              Branch(implicit_cast<TNode<BoolT>>(t402), label__True_146, label__False_147);
              if (label__True_146->is_used())
              {
                BIND(label__True_146);
                // ../../src/builtins/array-splice.tq:115:32
                {
                  // ../../src/builtins/array-splice.tq:116:11
                  TNode<HeapObject> t403 = UncheckedCast<HeapObject>(UnsafeCast12ATHeapObject(implicit_cast<TNode<Object>>((*e_111).value())));
                  USE(implicit_cast<TNode<HeapObject>>(t403));
                  TNode<HeapObject> heapObject_684_impl;
                  auto heapObject_684 = &heapObject_684_impl;
                  USE(heapObject_684);
                  *heapObject_684 = implicit_cast<TNode<HeapObject>>(t403);
                  // ../../src/builtins/array-splice.tq:117:11
                  auto t404 = [=]() {
                    TNode<Int32T> t406 = UncheckedCast<Int32T>(AllowDoubleElements(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
                    USE(implicit_cast<TNode<Int32T>>(t406));
                    return implicit_cast<TNode<Int32T>>(t406);
                  };
                  auto t405 = [=]() {
                    TNode<Int32T> t407 = UncheckedCast<Int32T>(AllowNonNumberElements(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
                    USE(implicit_cast<TNode<Int32T>>(t407));
                    return implicit_cast<TNode<Int32T>>(t407);
                  };
                  TVARIABLE(Int32T, t408_685_impl);
                  auto t408_685 = &t408_685_impl;
                  USE(t408_685);
                  {
                    Label label__True_148_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__True_148 = &label__True_148_impl;
                    USE(label__True_148);
                    Label label__False_149_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__False_149 = &label__False_149_impl;
                    USE(label__False_149);
                    Label label__done_686_1539_impl(this, {t408_685}, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__done_686_1539 = &label__done_686_1539_impl;
                    USE(label__done_686_1539);
                    TNode<BoolT> t409 = UncheckedCast<BoolT>(IsHeapNumber(implicit_cast<TNode<HeapObject>>((*heapObject_684))));
                    USE(implicit_cast<TNode<BoolT>>(t409));
                    Branch(implicit_cast<TNode<BoolT>>(t409), label__True_148, label__False_149);
                    BIND(label__True_148);
                                        *t408_685 = implicit_cast<TNode<Int32T>>(t404());
                    Goto(label__done_686_1539);
                    BIND(label__False_149);
                                        *t408_685 = implicit_cast<TNode<Int32T>>(t405());
                    Goto(label__done_686_1539);
                    BIND(label__done_686_1539);
                  }
                  *elementsKind_110 = implicit_cast<TNode<Int32T>>((*t408_685).value());
                }
                Goto(label__False_147);
              }
              BIND(label__False_147);
            }
          }
          Goto(label_if_done_label_683_1538);
        }
        if (label__False_145->is_used())
        {
          BIND(label__False_145);
          // ../../src/builtins/array-splice.tq:121:14
          {
            Label label__True_150_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_150 = &label__True_150_impl;
            USE(label__True_150);
            Label label__False_151_impl(this, {elementsKind_110}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_151 = &label__False_151_impl;
            USE(label__False_151);
            TNode<BoolT> t410 = UncheckedCast<BoolT>(IsDoubleElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
            USE(implicit_cast<TNode<BoolT>>(t410));
            Branch(implicit_cast<TNode<BoolT>>(t410), label__True_150, label__False_151);
            if (label__True_150->is_used())
            {
              BIND(label__True_150);
              // ../../src/builtins/array-splice.tq:121:54
              {
                // ../../src/builtins/array-splice.tq:122:9
                {
                  Label label__True_152_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_152 = &label__True_152_impl;
                  USE(label__True_152);
                  Label label__False_153_impl(this, {elementsKind_110}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_153 = &label__False_153_impl;
                  USE(label__False_153);
                  TNode<BoolT> t411 = UncheckedCast<BoolT>(IsNumber(implicit_cast<TNode<Object>>((*e_111).value())));
                  USE(implicit_cast<TNode<BoolT>>(t411));
                  TNode<BoolT> t412 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t411)));
                  USE(implicit_cast<TNode<BoolT>>(t412));
                  Branch(implicit_cast<TNode<BoolT>>(t412), label__True_152, label__False_153);
                  if (label__True_152->is_used())
                  {
                    BIND(label__True_152);
                    // ../../src/builtins/array-splice.tq:122:27
                    {
                      // ../../src/builtins/array-splice.tq:123:11
                      TNode<Int32T> t413 = UncheckedCast<Int32T>(AllowNonNumberElements(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
                      USE(implicit_cast<TNode<Int32T>>(t413));
                      *elementsKind_110 = implicit_cast<TNode<Int32T>>(t413);
                    }
                    Goto(label__False_153);
                  }
                  BIND(label__False_153);
                }
              }
              Goto(label__False_151);
            }
            BIND(label__False_151);
          }
          Goto(label_if_done_label_683_1538);
        }
        BIND(label_if_done_label_683_1538);
      }
    }
    Goto(label_increment_679_1535);
    BIND(label_increment_679_1535);
    TNode<IntPtrT> t414 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(1)));
    TNode<IntPtrT> t415 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t397_681).value()), implicit_cast<TNode<IntPtrT>>(t414)));
    *_for_index_t397_681 = implicit_cast<TNode<IntPtrT>>(t415);
    Goto(label_header_682_1537);
    BIND(label_exit_680_1536);
    // ../../src/builtins/array-splice.tq:128:5
    {
      Label label__True_154_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_154 = &label__True_154_impl;
      USE(label__True_154);
      Label label__False_155_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_155 = &label__False_155_impl;
      USE(label__False_155);
      TNode<BoolT> t416 = UncheckedCast<BoolT>(ElementsKindNotEqual(implicit_cast<TNode<Int32T>>((*elementsKind_110).value()), implicit_cast<TNode<Int32T>>((*oldElementsKind_677))));
      USE(implicit_cast<TNode<BoolT>>(t416));
      Branch(implicit_cast<TNode<BoolT>>(t416), label__True_154, label__False_155);
      if (label__True_154->is_used())
      {
        BIND(label__True_154);
        // ../../src/builtins/array-splice.tq:128:42
        {
          // ../../src/builtins/array-splice.tq:129:7
          TNode<Int32T> t417 = UncheckedCast<Int32T>(Convert7ATint32(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
          USE(implicit_cast<TNode<Int32T>>(t417));
          TNode<Smi> t418 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<Int32T>>(t417)));
          USE(implicit_cast<TNode<Smi>>(t418));
          TNode<Smi> smiElementsKind_687_impl;
          auto smiElementsKind_687 = &smiElementsKind_687_impl;
          USE(smiElementsKind_687);
          *smiElementsKind_687 = implicit_cast<TNode<Smi>>(t418);
          // ../../src/builtins/array-splice.tq:130:7
          CallRuntime(Runtime::kTransitionElementsKindWithKind, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSObject>>((*a_675)), implicit_cast<TNode<Smi>>((*smiElementsKind_687)));
        }
        Goto(label__False_155);
      }
      BIND(label__False_155);
    }
    // ../../src/builtins/array-splice.tq:134:5
    TNode<Number> t419 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>((*a_675))));
    TNode<Smi> t420 = UncheckedCast<Smi>(Cast5ATSmi(implicit_cast<TNode<Object>>(t419), label_Bailout_135));
    USE(implicit_cast<TNode<Smi>>(t420));
    TNode<Smi> length_688_impl;
    auto length_688 = &length_688_impl;
    USE(length_688);
    *length_688 = implicit_cast<TNode<Smi>>(t420);
    // ../../src/builtins/array-splice.tq:135:5
    {
      Label label__True_156_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_156 = &label__True_156_impl;
      USE(label__True_156);
      Label label__False_157_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_157 = &label__False_157_impl;
      USE(label__False_157);
      TNode<BoolT> t421 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*originalLength_670)), implicit_cast<TNode<Smi>>((*length_688))));
      USE(implicit_cast<TNode<BoolT>>(t421));
      Branch(implicit_cast<TNode<BoolT>>(t421), label__True_156, label__False_157);
      if (label__True_156->is_used())
      {
        BIND(label__True_156);
        // ../../src/builtins/array-splice.tq:135:35
        Goto(label_Bailout_135);
      }
      BIND(label__False_157);
    }
    // ../../src/builtins/array-splice.tq:137:5
    TNode<JSArray> t422 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_675)), implicit_cast<TNode<Smi>>((*actualStart_671)), implicit_cast<TNode<Smi>>((*actualDeleteCount_672))));
    USE(implicit_cast<TNode<JSArray>>(t422));
    TNode<JSArray> deletedResult_689_impl;
    auto deletedResult_689 = &deletedResult_689_impl;
    USE(deletedResult_689);
    *deletedResult_689 = implicit_cast<TNode<JSArray>>(t422);
    // ../../src/builtins/array-splice.tq:140:5
    {
      Label label__True_158_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_158 = &label__True_158_impl;
      USE(label__True_158);
      Label label__False_159_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_159 = &label__False_159_impl;
      USE(label__False_159);
      int31_t t423 = 0;
      TNode<Smi> t424 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t423)));
      TNode<BoolT> t425 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*newLength_674)), implicit_cast<TNode<Smi>>(t424)));
      USE(implicit_cast<TNode<BoolT>>(t425));
      Branch(implicit_cast<TNode<BoolT>>(t425), label__True_158, label__False_159);
      if (label__True_158->is_used())
      {
        BIND(label__True_158);
        // ../../src/builtins/array-splice.tq:140:25
        {
          // ../../src/builtins/array-splice.tq:141:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_675)), implicit_cast<TNode<FixedArrayBase>>(kEmptyFixedArray()));
          // ../../src/builtins/array-splice.tq:142:7
          int31_t t426 = 0;
          TNode<Smi> t427 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t426)));
          StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_675)), implicit_cast<TNode<Smi>>(t427));
          // ../../src/builtins/array-splice.tq:143:7
          *_return_109 = implicit_cast<TNode<Object>>((*deletedResult_689));
          Goto(label_macro_end_1533);
        }
      }
      BIND(label__False_159);
    }
    // ../../src/builtins/array-splice.tq:146:5
    {
      Label label__True_160_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_160 = &label__True_160_impl;
      USE(label__True_160);
      Label label__False_161_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_161 = &label__False_161_impl;
      USE(label__False_161);
      Label label_if_done_label_690_1540_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_690_1540 = &label_if_done_label_690_1540_impl;
      USE(label_if_done_label_690_1540);
      TNode<BoolT> t428 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_110).value())));
      USE(implicit_cast<TNode<BoolT>>(t428));
      Branch(implicit_cast<TNode<BoolT>>(t428), label__True_160, label__False_161);
      if (label__True_160->is_used())
      {
        BIND(label__True_160);
        // ../../src/builtins/array-splice.tq:146:54
        {
          // ../../src/builtins/array-splice.tq:147:7
          FastSplice12ATFixedArray22UT12ATHeapObject5ATSmi(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<JSArray>>((*a_675)), implicit_cast<TNode<Smi>>((*length_688)), implicit_cast<TNode<Smi>>((*newLength_674)), implicit_cast<TNode<Smi>>((*lengthDelta_673)), implicit_cast<TNode<Smi>>((*actualStart_671)), implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_672)), label_Bailout_135);
        }
        Goto(label_if_done_label_690_1540);
      }
      if (label__False_161->is_used())
      {
        BIND(label__False_161);
        // ../../src/builtins/array-splice.tq:150:12
        {
          // ../../src/builtins/array-splice.tq:151:7
          FastSplice18ATFixedDoubleArray22UT12ATHeapNumber5ATSmi(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<JSArray>>((*a_675)), implicit_cast<TNode<Smi>>((*length_688)), implicit_cast<TNode<Smi>>((*newLength_674)), implicit_cast<TNode<Smi>>((*lengthDelta_673)), implicit_cast<TNode<Smi>>((*actualStart_671)), implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_672)), label_Bailout_135);
        }
        Goto(label_if_done_label_690_1540);
      }
      BIND(label_if_done_label_690_1540);
    }
    // ../../src/builtins/array-splice.tq:156:5
    *_return_109 = implicit_cast<TNode<Object>>((*deletedResult_689));
    Goto(label_macro_end_1533);
  }
  BIND(label_macro_end_1533);
  return implicit_cast<TNode<Object>>((*_return_109).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FillDeletedElementsArray(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount, TNode<JSReceiver> p_a) {
  TVARIABLE(Object, _return_112_impl);
  auto _return_112 = &_return_112_impl;
  USE(_return_112);
  Label label_macro_end_1541_impl(this, {_return_112}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1541 = &label_macro_end_1541_impl;
  USE(label_macro_end_1541);
  // ../../src/builtins/array-splice.tq:161:57
  {
    // ../../src/builtins/array-splice.tq:163:5
    int31_t t429 = 0;
    TVARIABLE(Number, k_113_impl);
    auto k_113 = &k_113_impl;
    USE(k_113);
    TNode<Number> t430 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t429)));
    *k_113 = implicit_cast<TNode<Number>>(t430);
    // ../../src/builtins/array-splice.tq:166:5
    {
      Label label__True_162_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_162 = &label__True_162_impl;
      USE(label__True_162);
      Label label__False_163_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_163 = &label__False_163_impl;
      USE(label__False_163);
      Label label_header_691_1542_impl(this, {k_113}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_691_1542 = &label_header_691_1542_impl;
      USE(label_header_691_1542);
      Goto(label_header_691_1542);
      BIND(label_header_691_1542);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>(p_actualDeleteCount), label__True_162, label__False_163);
      if (label__True_162->is_used())
      {
        BIND(label__True_162);
        // ../../src/builtins/array-splice.tq:166:35
        {
          // ../../src/builtins/array-splice.tq:168:7
          TNode<Number> t431 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_actualStart), implicit_cast<TNode<Number>>((*k_113).value())));
          USE(implicit_cast<TNode<Number>>(t431));
          TNode<Number> from_692_impl;
          auto from_692 = &from_692_impl;
          USE(from_692);
          *from_692 = implicit_cast<TNode<Number>>(t431);
          // ../../src/builtins/array-splice.tq:171:7
          TNode<Oddball> t432 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*from_692))));
          USE(implicit_cast<TNode<Oddball>>(t432));
          TNode<Oddball> fromPresent_693_impl;
          auto fromPresent_693 = &fromPresent_693_impl;
          USE(fromPresent_693);
          *fromPresent_693 = implicit_cast<TNode<Oddball>>(t432);
          // ../../src/builtins/array-splice.tq:174:7
          {
            Label label__True_164_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_164 = &label__True_164_impl;
            USE(label__True_164);
            Label label__False_165_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_165 = &label__False_165_impl;
            USE(label__False_165);
            TNode<BoolT> t433 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_693)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t433));
            Branch(implicit_cast<TNode<BoolT>>(t433), label__True_164, label__False_165);
            if (label__True_164->is_used())
            {
              BIND(label__True_164);
              // ../../src/builtins/array-splice.tq:174:32
              {
                // ../../src/builtins/array-splice.tq:176:9
                TNode<Object> t434 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*from_692))));
                USE(implicit_cast<TNode<Object>>(t434));
                TNode<Object> fromValue_694_impl;
                auto fromValue_694 = &fromValue_694_impl;
                USE(fromValue_694);
                *fromValue_694 = implicit_cast<TNode<Object>>(t434);
                // ../../src/builtins/array-splice.tq:179:9
                CallRuntime(Runtime::kCreateDataProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_a), implicit_cast<TNode<Object>>((*k_113).value()), implicit_cast<TNode<Object>>((*fromValue_694)));
              }
              Goto(label__False_165);
            }
            BIND(label__False_165);
          }
          // ../../src/builtins/array-splice.tq:183:7
          TNode<Number> t435 = implicit_cast<TNode<Number>>((*k_113).value());
          USE(t435);
          TNode<Number> t436 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t437 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>(t436)));
          *k_113 = implicit_cast<TNode<Number>>(t437);
        }
        Goto(label_header_691_1542);
      }
      BIND(label__False_163);
    }
    // ../../src/builtins/array-splice.tq:186:5
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_a), implicit_cast<TNode<Object>>(kLengthString()), implicit_cast<TNode<Object>>(p_actualDeleteCount));
    // ../../src/builtins/array-splice.tq:187:5
    *_return_112 = implicit_cast<TNode<Object>>(p_a);
    Goto(label_macro_end_1541);
  }
  BIND(label_macro_end_1541);
  return implicit_cast<TNode<Object>>((*_return_112).value());
}

void ArrayBuiltinsFromDSLAssembler::HandleForwardCase(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount) {
  Label label_macro_end_1543_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1543 = &label_macro_end_1543_impl;
  USE(label_macro_end_1543);
  // ../../src/builtins/array-splice.tq:194:61
  {
    // ../../src/builtins/array-splice.tq:197:5
    TVARIABLE(Number, k_114_impl);
    auto k_114 = &k_114_impl;
    USE(k_114);
    *k_114 = implicit_cast<TNode<Number>>(p_actualStart);
    // ../../src/builtins/array-splice.tq:200:5
    {
      Label label__True_166_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_166 = &label__True_166_impl;
      USE(label__True_166);
      Label label__False_167_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_167 = &label__False_167_impl;
      USE(label__False_167);
      Label label_header_695_1544_impl(this, {k_114}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_695_1544 = &label_header_695_1544_impl;
      USE(label_header_695_1544);
      Goto(label_header_695_1544);
      BIND(label_header_695_1544);
      TNode<Number> t438 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
      USE(implicit_cast<TNode<Number>>(t438));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t438), label__True_166, label__False_167);
      if (label__True_166->is_used())
      {
        BIND(label__True_166);
        // ../../src/builtins/array-splice.tq:200:43
        {
          // ../../src/builtins/array-splice.tq:202:7
          TNode<Number> t439 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
          USE(implicit_cast<TNode<Number>>(t439));
          TNode<Number> from_696_impl;
          auto from_696 = &from_696_impl;
          USE(from_696);
          *from_696 = implicit_cast<TNode<Number>>(t439);
          // ../../src/builtins/array-splice.tq:204:7
          TNode<Number> t440 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(p_itemCount)));
          USE(implicit_cast<TNode<Number>>(t440));
          TNode<Number> to_697_impl;
          auto to_697 = &to_697_impl;
          USE(to_697);
          *to_697 = implicit_cast<TNode<Number>>(t440);
          // ../../src/builtins/array-splice.tq:207:7
          TNode<Oddball> t441 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*from_696))));
          USE(implicit_cast<TNode<Oddball>>(t441));
          TNode<Oddball> fromPresent_698_impl;
          auto fromPresent_698 = &fromPresent_698_impl;
          USE(fromPresent_698);
          *fromPresent_698 = implicit_cast<TNode<Oddball>>(t441);
          // ../../src/builtins/array-splice.tq:210:7
          {
            Label label__True_168_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_168 = &label__True_168_impl;
            USE(label__True_168);
            Label label__False_169_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_169 = &label__False_169_impl;
            USE(label__False_169);
            Label label_if_done_label_699_1545_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_699_1545 = &label_if_done_label_699_1545_impl;
            USE(label_if_done_label_699_1545);
            TNode<BoolT> t442 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_698)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t442));
            Branch(implicit_cast<TNode<BoolT>>(t442), label__True_168, label__False_169);
            if (label__True_168->is_used())
            {
              BIND(label__True_168);
              // ../../src/builtins/array-splice.tq:210:32
              {
                // ../../src/builtins/array-splice.tq:212:9
                TNode<Object> t443 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*from_696))));
                USE(implicit_cast<TNode<Object>>(t443));
                TNode<Object> fromValue_700_impl;
                auto fromValue_700 = &fromValue_700_impl;
                USE(fromValue_700);
                *fromValue_700 = implicit_cast<TNode<Object>>(t443);
                // ../../src/builtins/array-splice.tq:215:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*to_697)), implicit_cast<TNode<Object>>((*fromValue_700)));
              }
              Goto(label_if_done_label_699_1545);
            }
            if (label__False_169->is_used())
            {
              BIND(label__False_169);
              // ../../src/builtins/array-splice.tq:218:14
              {
                // ../../src/builtins/array-splice.tq:220:9
                TNode<Smi> t444 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*to_697)), implicit_cast<TNode<Smi>>(t444));
              }
              Goto(label_if_done_label_699_1545);
            }
            BIND(label_if_done_label_699_1545);
          }
          // ../../src/builtins/array-splice.tq:223:7
          TNode<Number> t445 = implicit_cast<TNode<Number>>((*k_114).value());
          USE(t445);
          TNode<Number> t446 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t447 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t446)));
          *k_114 = implicit_cast<TNode<Number>>(t447);
        }
        Goto(label_header_695_1544);
      }
      BIND(label__False_167);
    }
    // ../../src/builtins/array-splice.tq:227:5
    *k_114 = implicit_cast<TNode<Number>>(p_len);
    // ../../src/builtins/array-splice.tq:230:5
    {
      Label label__True_170_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_170 = &label__True_170_impl;
      USE(label__True_170);
      Label label__False_171_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_171 = &label__False_171_impl;
      USE(label__False_171);
      Label label_header_701_1546_impl(this, {k_114}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_701_1546 = &label_header_701_1546_impl;
      USE(label_header_701_1546);
      Goto(label_header_701_1546);
      BIND(label_header_701_1546);
      TNode<Number> t448 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
      USE(implicit_cast<TNode<Number>>(t448));
      TNode<Number> t449 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t448), implicit_cast<TNode<Number>>(p_itemCount)));
      USE(implicit_cast<TNode<Number>>(t449));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t449), label__True_170, label__False_171);
      if (label__True_170->is_used())
      {
        BIND(label__True_170);
        // ../../src/builtins/array-splice.tq:230:55
        {
          // ../../src/builtins/array-splice.tq:232:7
          int31_t t450 = 1;
          TNode<Number> t451 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t450)));
          TNode<Number> t452 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t451)));
          USE(implicit_cast<TNode<Number>>(t452));
          TNode<Smi> t453 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
          CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(t452), implicit_cast<TNode<Smi>>(t453));
          // ../../src/builtins/array-splice.tq:234:7
          TNode<Number> t454 = implicit_cast<TNode<Number>>((*k_114).value());
          USE(t454);
          TNode<Number> t455 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t456 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_114).value()), implicit_cast<TNode<Number>>(t455)));
          *k_114 = implicit_cast<TNode<Number>>(t456);
        }
        Goto(label_header_701_1546);
      }
      BIND(label__False_171);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::HandleBackwardCase(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount) {
  Label label_macro_end_1547_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1547 = &label_macro_end_1547_impl;
  USE(label_macro_end_1547);
  // ../../src/builtins/array-splice.tq:242:61
  {
    // ../../src/builtins/array-splice.tq:245:5
    TNode<Number> t457 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<Number>>(t457));
    TVARIABLE(Number, k_115_impl);
    auto k_115 = &k_115_impl;
    USE(k_115);
    *k_115 = implicit_cast<TNode<Number>>(t457);
    // ../../src/builtins/array-splice.tq:248:5
    {
      Label label__True_172_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_172 = &label__True_172_impl;
      USE(label__True_172);
      Label label__False_173_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_173 = &label__False_173_impl;
      USE(label__False_173);
      Label label_header_702_1548_impl(this, {k_115}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_702_1548 = &label_header_702_1548_impl;
      USE(label_header_702_1548);
      Goto(label_header_702_1548);
      BIND(label_header_702_1548);
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_115).value()), implicit_cast<TNode<Number>>(p_actualStart), label__True_172, label__False_173);
      if (label__True_172->is_used())
      {
        BIND(label__True_172);
        // ../../src/builtins/array-splice.tq:248:29
        {
          // ../../src/builtins/array-splice.tq:250:7
          TNode<Number> t458 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_115).value()), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
          USE(implicit_cast<TNode<Number>>(t458));
          int31_t t459 = 1;
          TNode<Number> t460 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t459)));
          TNode<Number> t461 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t458), implicit_cast<TNode<Number>>(t460)));
          USE(implicit_cast<TNode<Number>>(t461));
          TNode<Number> from_703_impl;
          auto from_703 = &from_703_impl;
          USE(from_703);
          *from_703 = implicit_cast<TNode<Number>>(t461);
          // ../../src/builtins/array-splice.tq:253:7
          TNode<Number> t462 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_115).value()), implicit_cast<TNode<Number>>(p_itemCount)));
          USE(implicit_cast<TNode<Number>>(t462));
          int31_t t463 = 1;
          TNode<Number> t464 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t463)));
          TNode<Number> t465 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t462), implicit_cast<TNode<Number>>(t464)));
          USE(implicit_cast<TNode<Number>>(t465));
          TNode<Number> to_704_impl;
          auto to_704 = &to_704_impl;
          USE(to_704);
          *to_704 = implicit_cast<TNode<Number>>(t465);
          // ../../src/builtins/array-splice.tq:256:7
          TNode<Oddball> t466 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*from_703))));
          USE(implicit_cast<TNode<Oddball>>(t466));
          TNode<Oddball> fromPresent_705_impl;
          auto fromPresent_705 = &fromPresent_705_impl;
          USE(fromPresent_705);
          *fromPresent_705 = implicit_cast<TNode<Oddball>>(t466);
          // ../../src/builtins/array-splice.tq:259:7
          {
            Label label__True_174_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_174 = &label__True_174_impl;
            USE(label__True_174);
            Label label__False_175_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_175 = &label__False_175_impl;
            USE(label__False_175);
            Label label_if_done_label_706_1549_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_706_1549 = &label_if_done_label_706_1549_impl;
            USE(label_if_done_label_706_1549);
            TNode<BoolT> t467 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_705)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t467));
            Branch(implicit_cast<TNode<BoolT>>(t467), label__True_174, label__False_175);
            if (label__True_174->is_used())
            {
              BIND(label__True_174);
              // ../../src/builtins/array-splice.tq:259:32
              {
                // ../../src/builtins/array-splice.tq:261:9
                TNode<Object> t468 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*from_703))));
                USE(implicit_cast<TNode<Object>>(t468));
                TNode<Object> fromValue_707_impl;
                auto fromValue_707 = &fromValue_707_impl;
                USE(fromValue_707);
                *fromValue_707 = implicit_cast<TNode<Object>>(t468);
                // ../../src/builtins/array-splice.tq:264:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*to_704)), implicit_cast<TNode<Object>>((*fromValue_707)));
              }
              Goto(label_if_done_label_706_1549);
            }
            if (label__False_175->is_used())
            {
              BIND(label__False_175);
              // ../../src/builtins/array-splice.tq:267:14
              {
                // ../../src/builtins/array-splice.tq:269:9
                TNode<Smi> t469 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*to_704)), implicit_cast<TNode<Smi>>(t469));
              }
              Goto(label_if_done_label_706_1549);
            }
            BIND(label_if_done_label_706_1549);
          }
          // ../../src/builtins/array-splice.tq:273:7
          TNode<Number> t470 = implicit_cast<TNode<Number>>((*k_115).value());
          USE(t470);
          TNode<Number> t471 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t472 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_115).value()), implicit_cast<TNode<Number>>(t471)));
          *k_115 = implicit_cast<TNode<Number>>(t472);
        }
        Goto(label_header_702_1548);
      }
      BIND(label__False_173);
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::SlowSplice(TNode<Context> p_context, CodeStubArguments* p_arguments, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_actualStart, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCount) {
  TVARIABLE(Object, _return_116_impl);
  auto _return_116 = &_return_116_impl;
  USE(_return_116);
  Label label_macro_end_1550_impl(this, {_return_116}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1550 = &label_macro_end_1550_impl;
  USE(label_macro_end_1550);
  // ../../src/builtins/array-splice.tq:280:42
  {
    // ../../src/builtins/array-splice.tq:281:5
    TNode<Number> t473 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>(p_actualStart)));
    USE(implicit_cast<TNode<Number>>(t473));
    TNode<Number> t474 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t473), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<Number>>(t474));
    TNode<Number> affected_708_impl;
    auto affected_708 = &affected_708_impl;
    USE(affected_708);
    *affected_708 = implicit_cast<TNode<Number>>(t474);
    // ../../src/builtins/array-splice.tq:284:5
    TNode<JSReceiver> t475 = UncheckedCast<JSReceiver>(ArraySpeciesCreate(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<JSReceiver>>(t475));
    TNode<JSReceiver> a_709_impl;
    auto a_709 = &a_709_impl;
    USE(a_709);
    *a_709 = implicit_cast<TNode<JSReceiver>>(t475);
    // ../../src/builtins/array-splice.tq:285:5
    TNode<Number> itemCount_710_impl;
    auto itemCount_710 = &itemCount_710_impl;
    USE(itemCount_710);
    *itemCount_710 = implicit_cast<TNode<Number>>(p_insertCount);
    // ../../src/builtins/array-splice.tq:288:5
    TNode<Object> t476 = UncheckedCast<Object>(FillDeletedElementsArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Number>>(p_actualStart), implicit_cast<TNode<Number>>(p_actualDeleteCount), implicit_cast<TNode<JSReceiver>>((*a_709))));
    USE(implicit_cast<TNode<Object>>(t476));
    // ../../src/builtins/array-splice.tq:298:5
    {
      Label label__True_176_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_176 = &label__True_176_impl;
      USE(label__True_176);
      Label label__False_177_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_177 = &label__False_177_impl;
      USE(label__False_177);
      Label label_if_done_label_711_1551_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_711_1551 = &label_if_done_label_711_1551_impl;
      USE(label_if_done_label_711_1551);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*itemCount_710)), implicit_cast<TNode<Number>>(p_actualDeleteCount), label__True_176, label__False_177);
      if (label__True_176->is_used())
      {
        BIND(label__True_176);
        // ../../src/builtins/array-splice.tq:298:40
        {
          // ../../src/builtins/array-splice.tq:299:7
          HandleForwardCase(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>((*itemCount_710)), implicit_cast<TNode<Number>>(p_actualStart), implicit_cast<TNode<Number>>(p_actualDeleteCount));
        }
        Goto(label_if_done_label_711_1551);
      }
      if (label__False_177->is_used())
      {
        BIND(label__False_177);
        // ../../src/builtins/array-splice.tq:302:12
        {
          Label label__True_178_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_178 = &label__True_178_impl;
          USE(label__True_178);
          Label label__False_179_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_179 = &label__False_179_impl;
          USE(label__False_179);
          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*itemCount_710)), implicit_cast<TNode<Number>>(p_actualDeleteCount), label__True_178, label__False_179);
          if (label__True_178->is_used())
          {
            BIND(label__True_178);
            // ../../src/builtins/array-splice.tq:302:47
            {
              // ../../src/builtins/array-splice.tq:303:7
              HandleBackwardCase(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>((*itemCount_710)), implicit_cast<TNode<Number>>(p_actualStart), implicit_cast<TNode<Number>>(p_actualDeleteCount));
            }
            Goto(label__False_179);
          }
          BIND(label__False_179);
        }
        Goto(label_if_done_label_711_1551);
      }
      BIND(label_if_done_label_711_1551);
    }
    // ../../src/builtins/array-splice.tq:308:5
    TVARIABLE(Number, k_117_impl);
    auto k_117 = &k_117_impl;
    USE(k_117);
    *k_117 = implicit_cast<TNode<Number>>(p_actualStart);
    // ../../src/builtins/array-splice.tq:313:5
    {
      Label label__True_180_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_180 = &label__True_180_impl;
      USE(label__True_180);
      Label label__False_181_impl(this, {k_117}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_181 = &label__False_181_impl;
      USE(label__False_181);
      TNode<IntPtrT> t477 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
      int31_t t478 = 2;
      TNode<IntPtrT> t479 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t478)));
      TNode<BoolT> t480 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t477), implicit_cast<TNode<IntPtrT>>(t479)));
      USE(implicit_cast<TNode<BoolT>>(t480));
      Branch(implicit_cast<TNode<BoolT>>(t480), label__True_180, label__False_181);
      if (label__True_180->is_used())
      {
        BIND(label__True_180);
        // ../../src/builtins/array-splice.tq:313:31
        {
          // ../../src/builtins/array-splice.tq:314:7
          int31_t t481 = 2;
          TNode<IntPtrT> t482 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
          Label label_body_712_1552_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_body_712_1552 = &label_body_712_1552_impl;
          USE(label_body_712_1552);
          Label label_increment_713_1553_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_increment_713_1553 = &label_increment_713_1553_impl;
          USE(label_increment_713_1553);
          Label label_exit_714_1554_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_exit_714_1554 = &label_exit_714_1554_impl;
          USE(label_exit_714_1554);
          TVARIABLE(IntPtrT, _for_index_t483_715_impl);
          auto _for_index_t483_715 = &_for_index_t483_715_impl;
          USE(_for_index_t483_715);
          TNode<IntPtrT> t484 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t481)));
          *_for_index_t483_715 = implicit_cast<TNode<IntPtrT>>(t484);
          Label label_header_716_1555_impl(this, {_for_index_t483_715, k_117}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_716_1555 = &label_header_716_1555_impl;
          USE(label_header_716_1555);
          Goto(label_header_716_1555);
          BIND(label_header_716_1555);
          TNode<BoolT> t485 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t483_715).value()), implicit_cast<TNode<IntPtrT>>(t482)));
          Branch(implicit_cast<TNode<BoolT>>(t485), label_body_712_1552, label_exit_714_1554);
          BIND(label_body_712_1552);
          TNode<Object> t486 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_arguments), implicit_cast<TNode<IntPtrT>>((*_for_index_t483_715).value())));
          TVARIABLE(Object, e_118_impl);
          auto e_118 = &e_118_impl;
          USE(e_118);
          *e_118 = implicit_cast<TNode<Object>>(t486);
          // ../../src/builtins/array-splice.tq:314:46
          {
            // ../../src/builtins/array-splice.tq:316:9
            CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*k_117).value()), implicit_cast<TNode<Object>>((*e_118).value()));
            // ../../src/builtins/array-splice.tq:319:9
            int31_t t487 = 1;
            TNode<Number> t488 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t487)));
            TNode<Number> t489 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_117).value()), implicit_cast<TNode<Number>>(t488)));
            USE(implicit_cast<TNode<Number>>(t489));
            *k_117 = implicit_cast<TNode<Number>>(t489);
          }
          Goto(label_increment_713_1553);
          BIND(label_increment_713_1553);
          TNode<IntPtrT> t490 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t491 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t483_715).value()), implicit_cast<TNode<IntPtrT>>(t490)));
          *_for_index_t483_715 = implicit_cast<TNode<IntPtrT>>(t491);
          Goto(label_header_716_1555);
          BIND(label_exit_714_1554);
        }
        Goto(label__False_181);
      }
      BIND(label__False_181);
    }
    // ../../src/builtins/array-splice.tq:325:5
    TNode<Number> t492 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(p_len), implicit_cast<TNode<Number>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<Number>>(t492));
    TNode<Number> t493 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t492), implicit_cast<TNode<Number>>((*itemCount_710))));
    USE(implicit_cast<TNode<Number>>(t493));
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(kLengthString()), implicit_cast<TNode<Object>>(t493));
    // ../../src/builtins/array-splice.tq:327:5
    *_return_116 = implicit_cast<TNode<Object>>((*a_709));
    Goto(label_macro_end_1550);
  }
  BIND(label_macro_end_1550);
  return implicit_cast<TNode<Object>>((*_return_116).value());
}

TF_BUILTIN(ArraySplice, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-splice.tq:332:65
  {
    // ../../src/builtins/array-splice.tq:334:5
    TNode<JSReceiver> t494 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t494));
    TNode<JSReceiver> o_717_impl;
    auto o_717 = &o_717_impl;
    USE(o_717);
    *o_717 = implicit_cast<TNode<JSReceiver>>(t494);
    // ../../src/builtins/array-splice.tq:337:5
    TNode<Number> t495 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_717))));
    USE(implicit_cast<TNode<Number>>(t495));
    TNode<Number> len_718_impl;
    auto len_718 = &len_718_impl;
    USE(len_718);
    *len_718 = implicit_cast<TNode<Number>>(t495);
    // ../../src/builtins/array-splice.tq:340:5
    int31_t t496 = 0;
    TNode<IntPtrT> t497 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t496)));
    TNode<Object> t498 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t497)));
    TNode<Object> start_719_impl;
    auto start_719 = &start_719_impl;
    USE(start_719);
    *start_719 = implicit_cast<TNode<Object>>(t498);
    // ../../src/builtins/array-splice.tq:341:5
    TNode<Number> t499 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*start_719))));
    USE(implicit_cast<TNode<Number>>(t499));
    TNode<Number> relativeStart_720_impl;
    auto relativeStart_720 = &relativeStart_720_impl;
    USE(relativeStart_720);
    *relativeStart_720 = implicit_cast<TNode<Number>>(t499);
    // ../../src/builtins/array-splice.tq:346:5
    auto t500 = [=]() {
      TNode<Number> t502 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*relativeStart_720))));
      USE(implicit_cast<TNode<Number>>(t502));
      int31_t t503 = 0;
      TNode<Number> t504 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t503)));
      TNode<Number> t505 = UncheckedCast<Number>(Max(implicit_cast<TNode<Number>>(t502), implicit_cast<TNode<Number>>(t504)));
      USE(implicit_cast<TNode<Number>>(t505));
      return implicit_cast<TNode<Number>>(t505);
    };
    auto t501 = [=]() {
      TNode<Number> t506 = UncheckedCast<Number>(Min(implicit_cast<TNode<Number>>((*relativeStart_720)), implicit_cast<TNode<Number>>((*len_718))));
      USE(implicit_cast<TNode<Number>>(t506));
      return implicit_cast<TNode<Number>>(t506);
    };
    TVARIABLE(Number, t507_721_impl);
    auto t507_721 = &t507_721_impl;
    USE(t507_721);
    {
      Label label__True_182_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_182 = &label__True_182_impl;
      USE(label__True_182);
      Label label__False_183_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_183 = &label__False_183_impl;
      USE(label__False_183);
      Label label__done_722_1556_impl(this, {t507_721}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_722_1556 = &label__done_722_1556_impl;
      USE(label__done_722_1556);
      int31_t t508 = 0;
      TNode<Number> t509 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t508)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*relativeStart_720)), implicit_cast<TNode<Number>>(t509), label__True_182, label__False_183);
      BIND(label__True_182);
            *t507_721 = implicit_cast<TNode<Number>>(t500());
      Goto(label__done_722_1556);
      BIND(label__False_183);
            *t507_721 = implicit_cast<TNode<Number>>(t501());
      Goto(label__done_722_1556);
      BIND(label__done_722_1556);
    }
    TNode<Number> actualStart_723_impl;
    auto actualStart_723 = &actualStart_723_impl;
    USE(actualStart_723);
    *actualStart_723 = implicit_cast<TNode<Number>>((*t507_721).value());
    // ../../src/builtins/array-splice.tq:350:5
    TVARIABLE(Smi, insertCount_119_impl);
    auto insertCount_119 = &insertCount_119_impl;
    USE(insertCount_119);
    // ../../src/builtins/array-splice.tq:351:5
    TVARIABLE(Number, actualDeleteCount_120_impl);
    auto actualDeleteCount_120 = &actualDeleteCount_120_impl;
    USE(actualDeleteCount_120);
    // ../../src/builtins/array-splice.tq:353:5
    {
      Label label__True_184_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_184 = &label__True_184_impl;
      USE(label__True_184);
      Label label__False_185_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_185 = &label__False_185_impl;
      USE(label__False_185);
      Label label_if_done_label_724_1557_impl(this, {actualDeleteCount_120, insertCount_119}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_724_1557 = &label_if_done_label_724_1557_impl;
      USE(label_if_done_label_724_1557);
      TNode<IntPtrT> t510 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t511 = 0;
      TNode<IntPtrT> t512 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t511)));
      TNode<BoolT> t513 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t510), implicit_cast<TNode<IntPtrT>>(t512)));
      USE(implicit_cast<TNode<BoolT>>(t513));
      Branch(implicit_cast<TNode<BoolT>>(t513), label__True_184, label__False_185);
      if (label__True_184->is_used())
      {
        BIND(label__True_184);
        // ../../src/builtins/array-splice.tq:353:32
        {
          // ../../src/builtins/array-splice.tq:355:7
          int31_t t514 = 0;
          TNode<Smi> t515 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t514)));
          *insertCount_119 = implicit_cast<TNode<Smi>>(t515);
          // ../../src/builtins/array-splice.tq:357:7
          int31_t t516 = 0;
          TNode<Number> t517 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t516)));
          *actualDeleteCount_120 = implicit_cast<TNode<Number>>(t517);
        }
        Goto(label_if_done_label_724_1557);
      }
      if (label__False_185->is_used())
      {
        BIND(label__False_185);
        // ../../src/builtins/array-splice.tq:359:12
        {
          Label label__True_186_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_186 = &label__True_186_impl;
          USE(label__True_186);
          Label label__False_187_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_187 = &label__False_187_impl;
          USE(label__False_187);
          Label label_if_done_label_725_1558_impl(this, {actualDeleteCount_120, insertCount_119}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_if_done_label_725_1558 = &label_if_done_label_725_1558_impl;
          USE(label_if_done_label_725_1558);
          TNode<IntPtrT> t518 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          int31_t t519 = 1;
          TNode<IntPtrT> t520 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t519)));
          TNode<BoolT> t521 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t518), implicit_cast<TNode<IntPtrT>>(t520)));
          USE(implicit_cast<TNode<BoolT>>(t521));
          Branch(implicit_cast<TNode<BoolT>>(t521), label__True_186, label__False_187);
          if (label__True_186->is_used())
          {
            BIND(label__True_186);
            // ../../src/builtins/array-splice.tq:359:39
            {
              // ../../src/builtins/array-splice.tq:361:7
              int31_t t522 = 0;
              TNode<Smi> t523 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t522)));
              *insertCount_119 = implicit_cast<TNode<Smi>>(t523);
              // ../../src/builtins/array-splice.tq:363:7
              TNode<Number> t524 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*actualStart_723))));
              USE(implicit_cast<TNode<Number>>(t524));
              *actualDeleteCount_120 = implicit_cast<TNode<Number>>(t524);
            }
            Goto(label_if_done_label_725_1558);
          }
          if (label__False_187->is_used())
          {
            BIND(label__False_187);
            // ../../src/builtins/array-splice.tq:365:12
            {
              // ../../src/builtins/array-splice.tq:367:7
              TNode<IntPtrT> t525 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
              TNode<Smi> t526 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<IntPtrT>>(t525)));
              USE(implicit_cast<TNode<Smi>>(t526));
              int31_t t527 = 2;
              TNode<Smi> t528 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t527)));
              TNode<Smi> t529 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t526), implicit_cast<TNode<Smi>>(t528)));
              USE(implicit_cast<TNode<Smi>>(t529));
              *insertCount_119 = implicit_cast<TNode<Smi>>(t529);
              // ../../src/builtins/array-splice.tq:369:7
              int31_t t530 = 1;
              TNode<IntPtrT> t531 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t530)));
              TNode<Object> t532 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t531)));
              TNode<Object> deleteCount_726_impl;
              auto deleteCount_726 = &deleteCount_726_impl;
              USE(deleteCount_726);
              *deleteCount_726 = implicit_cast<TNode<Object>>(t532);
              // ../../src/builtins/array-splice.tq:370:7
              TNode<Number> t533 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*deleteCount_726))));
              USE(implicit_cast<TNode<Number>>(t533));
              TNode<Number> dc_727_impl;
              auto dc_727 = &dc_727_impl;
              USE(dc_727);
              *dc_727 = implicit_cast<TNode<Number>>(t533);
              // ../../src/builtins/array-splice.tq:372:7
              int31_t t534 = 0;
              TNode<Number> t535 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t534)));
              TNode<Number> t536 = UncheckedCast<Number>(Max(implicit_cast<TNode<Number>>((*dc_727)), implicit_cast<TNode<Number>>(t535)));
              USE(implicit_cast<TNode<Number>>(t536));
              TNode<Number> t537 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*actualStart_723))));
              USE(implicit_cast<TNode<Number>>(t537));
              TNode<Number> t538 = UncheckedCast<Number>(Min(implicit_cast<TNode<Number>>(t536), implicit_cast<TNode<Number>>(t537)));
              USE(implicit_cast<TNode<Number>>(t538));
              *actualDeleteCount_120 = implicit_cast<TNode<Number>>(t538);
            }
            Goto(label_if_done_label_725_1558);
          }
          BIND(label_if_done_label_725_1558);
        }
        Goto(label_if_done_label_724_1557);
      }
      BIND(label_if_done_label_724_1557);
    }
    // ../../src/builtins/array-splice.tq:377:5
    TNode<Number> t539 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*insertCount_119).value())));
    USE(implicit_cast<TNode<Number>>(t539));
    TNode<Number> t540 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t539), implicit_cast<TNode<Number>>((*actualDeleteCount_120).value())));
    USE(implicit_cast<TNode<Number>>(t540));
    TNode<Number> newLength_728_impl;
    auto newLength_728 = &newLength_728_impl;
    USE(newLength_728);
    *newLength_728 = implicit_cast<TNode<Number>>(t540);
    // ../../src/builtins/array-splice.tq:378:5
    {
      Label label__True_188_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_188 = &label__True_188_impl;
      USE(label__True_188);
      Label label__False_189_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_189 = &label__False_189_impl;
      USE(label__False_189);
      TNode<Number> t541 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*newLength_728)), implicit_cast<TNode<Number>>(t541), label__True_188, label__False_189);
      if (label__True_188->is_used())
      {
        BIND(label__True_188);
        // ../../src/builtins/array-splice.tq:378:38
        {
          // ../../src/builtins/array-splice.tq:379:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidArrayLength), implicit_cast<TNode<Object>>((*start_719)));
        }
      }
      BIND(label__False_189);
    }
    // ../../src/builtins/array-splice.tq:382:5
    {
      Label label_try_done_729_1559_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_729_1559 = &label_try_done_729_1559_impl;
      USE(label_try_done_729_1559);
      Label label_Bailout_190_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_190 = &label_Bailout_190_impl;
      USE(label_Bailout_190);
      Label label_try_begin_730_1560_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_730_1560 = &label_try_begin_730_1560_impl;
      USE(label_try_begin_730_1560);
      Goto(label_try_begin_730_1560);
      if (label_try_begin_730_1560->is_used())
      {
        BIND(label_try_begin_730_1560);
        // ../../src/builtins/array-splice.tq:382:9
        {
          // ../../src/builtins/array-splice.tq:383:7
          TNode<Object> t542 = UncheckedCast<Object>(FastArraySplice(implicit_cast<TNode<Context>>(p_context), implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<JSReceiver>>((*o_717)), implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*actualStart_723)), implicit_cast<TNode<Smi>>((*insertCount_119).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_120).value()), label_Bailout_190));
          USE(implicit_cast<TNode<Object>>(t542));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t542));
        }
      }
      if (label_Bailout_190->is_used())
      {
        BIND(label_Bailout_190);
        // ../../src/builtins/array-splice.tq:387:19
        {
        }
        Goto(label_try_done_729_1559);
      }
      BIND(label_try_done_729_1559);
    }
    // ../../src/builtins/array-splice.tq:391:5
    TNode<Object> t543 = UncheckedCast<Object>(SlowSplice(implicit_cast<TNode<Context>>(p_context), implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<JSReceiver>>((*o_717)), implicit_cast<TNode<Number>>((*len_718)), implicit_cast<TNode<Number>>((*actualStart_723)), implicit_cast<TNode<Smi>>((*insertCount_119).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_120).value())));
    USE(implicit_cast<TNode<Object>>(t543));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t543));
  }
}

void ArrayBuiltinsFromDSLAssembler::TryFastArrayUnshift(TNode<Context> p_context, TNode<Object> p_receiver, CodeStubArguments* p_arguments, Label* label_Slow_191) {
  Label label_macro_end_1561_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1561 = &label_macro_end_1561_impl;
  USE(label_macro_end_1561);
  // ../../src/builtins/array-unshift.tq:11:19
  {
    // ../../src/builtins/array-unshift.tq:12:5
    EnsureFastJSArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), label_Slow_191);
    // ../../src/builtins/array-unshift.tq:13:5
    TNode<JSArray> t544 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t544));
    TNode<JSArray> array_731_impl;
    auto array_731 = &array_731_impl;
    USE(array_731);
    *array_731 = implicit_cast<TNode<JSArray>>(t544);
    // ../../src/builtins/array-unshift.tq:14:5
    EnsureWriteableFastElements(implicit_cast<TNode<JSArray>>((*array_731)));
    // ../../src/builtins/array-unshift.tq:16:5
    TNode<Map> t545 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_731))));
    TNode<Map> map_732_impl;
    auto map_732 = &map_732_impl;
    USE(map_732);
    *map_732 = implicit_cast<TNode<Map>>(t545);
    // ../../src/builtins/array-unshift.tq:17:5
    {
      Label label__True_192_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_192 = &label__True_192_impl;
      USE(label__True_192);
      Label label__False_193_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_193 = &label__False_193_impl;
      USE(label__False_193);
      TNode<BoolT> t546 = UncheckedCast<BoolT>(IsExtensibleMap(implicit_cast<TNode<Map>>((*map_732))));
      USE(implicit_cast<TNode<BoolT>>(t546));
      TNode<BoolT> t547 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t546)));
      USE(implicit_cast<TNode<BoolT>>(t547));
      Branch(implicit_cast<TNode<BoolT>>(t547), label__True_192, label__False_193);
      if (label__True_192->is_used())
      {
        BIND(label__True_192);
        // ../../src/builtins/array-unshift.tq:17:32
        Goto(label_Slow_191);
      }
      BIND(label__False_193);
    }
    // ../../src/builtins/array-unshift.tq:18:5
    EnsureArrayLengthWritable(implicit_cast<TNode<Map>>((*map_732)), label_Slow_191);
    // ../../src/builtins/array-unshift.tq:20:5
    TNode<JSFunction> t548 = UncheckedCast<JSFunction>(LoadTargetFromFrame());
    USE(implicit_cast<TNode<JSFunction>>(t548));
    TNode<IntPtrT> t549 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
    TNode<Int32T> t550 = UncheckedCast<Int32T>(Convert7ATint32(implicit_cast<TNode<IntPtrT>>(t549)));
    USE(implicit_cast<TNode<Int32T>>(t550));
    TailCallBuiltin(Builtins::kArrayUnshift, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSFunction>>(t548), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Int32T>>(t550));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GenericArrayUnshift(TNode<Context> p_context, TNode<Object> p_receiver, CodeStubArguments* p_arguments) {
  TVARIABLE(Number, _return_121_impl);
  auto _return_121 = &_return_121_impl;
  USE(_return_121);
  Label label_macro_end_1562_impl(this, {_return_121}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1562 = &label_macro_end_1562_impl;
  USE(label_macro_end_1562);
  // ../../src/builtins/array-unshift.tq:27:47
  {
    // ../../src/builtins/array-unshift.tq:29:5
    TNode<JSReceiver> t551 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t551));
    TNode<JSReceiver> object_733_impl;
    auto object_733 = &object_733_impl;
    USE(object_733);
    *object_733 = implicit_cast<TNode<JSReceiver>>(t551);
    // ../../src/builtins/array-unshift.tq:32:5
    TNode<Number> t552 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733))));
    USE(implicit_cast<TNode<Number>>(t552));
    TNode<Number> length_734_impl;
    auto length_734 = &length_734_impl;
    USE(length_734);
    *length_734 = implicit_cast<TNode<Number>>(t552);
    // ../../src/builtins/array-unshift.tq:35:5
    TNode<IntPtrT> t553 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_arguments)));
    TNode<Smi> t554 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<IntPtrT>>(t553)));
    USE(implicit_cast<TNode<Smi>>(t554));
    TNode<Smi> argCount_735_impl;
    auto argCount_735 = &argCount_735_impl;
    USE(argCount_735);
    *argCount_735 = implicit_cast<TNode<Smi>>(t554);
    // ../../src/builtins/array-unshift.tq:38:5
    {
      Label label__True_194_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_194 = &label__True_194_impl;
      USE(label__True_194);
      Label label__False_195_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_195 = &label__False_195_impl;
      USE(label__False_195);
      int31_t t555 = 0;
      TNode<Smi> t556 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t555)));
      TNode<BoolT> t557 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*argCount_735)), implicit_cast<TNode<Smi>>(t556)));
      USE(implicit_cast<TNode<BoolT>>(t557));
      Branch(implicit_cast<TNode<BoolT>>(t557), label__True_194, label__False_195);
      if (label__True_194->is_used())
      {
        BIND(label__True_194);
        // ../../src/builtins/array-unshift.tq:38:23
        {
          // ../../src/builtins/array-unshift.tq:40:7
          {
            Label label__True_196_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_196 = &label__True_196_impl;
            USE(label__True_196);
            Label label__False_197_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_197 = &label__False_197_impl;
            USE(label__False_197);
            TNode<Number> t558 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*length_734)), implicit_cast<TNode<Number>>((*argCount_735))));
            USE(implicit_cast<TNode<Number>>(t558));
            TNode<Number> t559 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t558), implicit_cast<TNode<Number>>(t559), label__True_196, label__False_197);
            if (label__True_196->is_used())
            {
              BIND(label__True_196);
              // ../../src/builtins/array-unshift.tq:40:48
              {
                // ../../src/builtins/array-unshift.tq:41:9
                ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidArrayLength));
              }
            }
            BIND(label__False_197);
          }
          // ../../src/builtins/array-unshift.tq:45:7
          TVARIABLE(Number, k_122_impl);
          auto k_122 = &k_122_impl;
          USE(k_122);
          *k_122 = implicit_cast<TNode<Number>>((*length_734));
          // ../../src/builtins/array-unshift.tq:48:7
          {
            Label label__True_198_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_198 = &label__True_198_impl;
            USE(label__True_198);
            Label label__False_199_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_199 = &label__False_199_impl;
            USE(label__False_199);
            Label label_header_736_1563_impl(this, {k_122}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_736_1563 = &label_header_736_1563_impl;
            USE(label_header_736_1563);
            Goto(label_header_736_1563);
            BIND(label_header_736_1563);
            int31_t t560 = 0;
            TNode<Number> t561 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t560)));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_122).value()), implicit_cast<TNode<Number>>(t561), label__True_198, label__False_199);
            if (label__True_198->is_used())
            {
              BIND(label__True_198);
              // ../../src/builtins/array-unshift.tq:48:21
              {
                // ../../src/builtins/array-unshift.tq:50:9
                int31_t t562 = 1;
                TNode<Number> t563 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t562)));
                TNode<Number> t564 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_122).value()), implicit_cast<TNode<Number>>(t563)));
                USE(implicit_cast<TNode<Number>>(t564));
                TNode<Number> from_737_impl;
                auto from_737 = &from_737_impl;
                USE(from_737);
                *from_737 = implicit_cast<TNode<Number>>(t564);
                // ../../src/builtins/array-unshift.tq:53:9
                TNode<Number> t565 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_122).value()), implicit_cast<TNode<Number>>((*argCount_735))));
                USE(implicit_cast<TNode<Number>>(t565));
                int31_t t566 = 1;
                TNode<Number> t567 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t566)));
                TNode<Number> t568 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t565), implicit_cast<TNode<Number>>(t567)));
                USE(implicit_cast<TNode<Number>>(t568));
                TNode<Number> to_738_impl;
                auto to_738 = &to_738_impl;
                USE(to_738);
                *to_738 = implicit_cast<TNode<Number>>(t568);
                // ../../src/builtins/array-unshift.tq:56:9
                TNode<Oddball> t569 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_733)), implicit_cast<TNode<Object>>((*from_737))));
                USE(implicit_cast<TNode<Oddball>>(t569));
                TNode<Oddball> fromPresent_739_impl;
                auto fromPresent_739 = &fromPresent_739_impl;
                USE(fromPresent_739);
                *fromPresent_739 = implicit_cast<TNode<Oddball>>(t569);
                // ../../src/builtins/array-unshift.tq:59:9
                {
                  Label label__True_200_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_200 = &label__True_200_impl;
                  USE(label__True_200);
                  Label label__False_201_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_201 = &label__False_201_impl;
                  USE(label__False_201);
                  Label label_if_done_label_740_1564_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_740_1564 = &label_if_done_label_740_1564_impl;
                  USE(label_if_done_label_740_1564);
                  TNode<BoolT> t570 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_739)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t570));
                  Branch(implicit_cast<TNode<BoolT>>(t570), label__True_200, label__False_201);
                  if (label__True_200->is_used())
                  {
                    BIND(label__True_200);
                    // ../../src/builtins/array-unshift.tq:59:34
                    {
                      // ../../src/builtins/array-unshift.tq:61:11
                      TNode<Object> t571 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733)), implicit_cast<TNode<Object>>((*from_737))));
                      USE(implicit_cast<TNode<Object>>(t571));
                      TNode<Object> fromValue_741_impl;
                      auto fromValue_741 = &fromValue_741_impl;
                      USE(fromValue_741);
                      *fromValue_741 = implicit_cast<TNode<Object>>(t571);
                      // ../../src/builtins/array-unshift.tq:64:11
                      CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733)), implicit_cast<TNode<Object>>((*to_738)), implicit_cast<TNode<Object>>((*fromValue_741)));
                    }
                    Goto(label_if_done_label_740_1564);
                  }
                  if (label__False_201->is_used())
                  {
                    BIND(label__False_201);
                    // ../../src/builtins/array-unshift.tq:65:16
                    {
                      // ../../src/builtins/array-unshift.tq:67:11
                      TNode<Smi> t572 = UncheckedCast<Smi>(FromConstexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                      CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733)), implicit_cast<TNode<Object>>((*to_738)), implicit_cast<TNode<Smi>>(t572));
                    }
                    Goto(label_if_done_label_740_1564);
                  }
                  BIND(label_if_done_label_740_1564);
                }
                // ../../src/builtins/array-unshift.tq:71:9
                TNode<Number> t573 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Number> t574 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_122).value()), implicit_cast<TNode<Number>>(t573)));
                *k_122 = implicit_cast<TNode<Number>>(t574);
              }
              Goto(label_header_736_1563);
            }
            BIND(label__False_199);
          }
          // ../../src/builtins/array-unshift.tq:75:7
          int31_t t575 = 0;
          TVARIABLE(Smi, j_123_impl);
          auto j_123 = &j_123_impl;
          USE(j_123);
          TNode<Smi> t576 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t575)));
          *j_123 = implicit_cast<TNode<Smi>>(t576);
          // ../../src/builtins/array-unshift.tq:80:7
          {
            Label label__True_202_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_202 = &label__True_202_impl;
            USE(label__True_202);
            Label label__False_203_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_203 = &label__False_203_impl;
            USE(label__False_203);
            Label label_header_742_1565_impl(this, {j_123}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_742_1565 = &label_header_742_1565_impl;
            USE(label_header_742_1565);
            Goto(label_header_742_1565);
            BIND(label_header_742_1565);
            TNode<BoolT> t577 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_123).value()), implicit_cast<TNode<Smi>>((*argCount_735))));
            USE(implicit_cast<TNode<BoolT>>(t577));
            Branch(implicit_cast<TNode<BoolT>>(t577), label__True_202, label__False_203);
            if (label__True_202->is_used())
            {
              BIND(label__True_202);
              // ../../src/builtins/array-unshift.tq:80:28
              {
                // ../../src/builtins/array-unshift.tq:82:9
                TNode<IntPtrT> t578 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Smi>>((*j_123).value())));
                USE(implicit_cast<TNode<IntPtrT>>(t578));
                TNode<Object> t579 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_arguments), implicit_cast<TNode<IntPtrT>>(t578)));
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733)), implicit_cast<TNode<Object>>((*j_123).value()), implicit_cast<TNode<Object>>(t579));
                // ../../src/builtins/array-unshift.tq:85:9
                TNode<Smi> t580 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t581 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_123).value()), implicit_cast<TNode<Smi>>(t580)));
                *j_123 = implicit_cast<TNode<Smi>>(t581);
              }
              Goto(label_header_742_1565);
            }
            BIND(label__False_203);
          }
        }
        Goto(label__False_195);
      }
      BIND(label__False_195);
    }
    // ../../src/builtins/array-unshift.tq:90:5
    TNode<Number> t582 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*length_734)), implicit_cast<TNode<Number>>((*argCount_735))));
    USE(implicit_cast<TNode<Number>>(t582));
    TNode<Number> newLength_743_impl;
    auto newLength_743 = &newLength_743_impl;
    USE(newLength_743);
    *newLength_743 = implicit_cast<TNode<Number>>(t582);
    // ../../src/builtins/array-unshift.tq:91:5
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_733)), implicit_cast<TNode<Object>>(kLengthString()), implicit_cast<TNode<Object>>((*newLength_743)));
    // ../../src/builtins/array-unshift.tq:94:5
    *_return_121 = implicit_cast<TNode<Number>>((*newLength_743));
    Goto(label_macro_end_1562);
  }
  BIND(label_macro_end_1562);
  return implicit_cast<TNode<Number>>((*_return_121).value());
}

TF_BUILTIN(ArrayPrototypeUnshift, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-unshift.tq:99:65
  {
    // ../../src/builtins/array-unshift.tq:100:5
    {
      Label label_try_done_744_1566_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_744_1566 = &label_try_done_744_1566_impl;
      USE(label_try_done_744_1566);
      Label label_Baseline_204_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Baseline_204 = &label_Baseline_204_impl;
      USE(label_Baseline_204);
      Label label_try_begin_745_1567_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_745_1567 = &label_try_begin_745_1567_impl;
      USE(label_try_begin_745_1567);
      Goto(label_try_begin_745_1567);
      if (label_try_begin_745_1567->is_used())
      {
        BIND(label_try_begin_745_1567);
        // ../../src/builtins/array-unshift.tq:100:9
        {
          // ../../src/builtins/array-unshift.tq:101:7
          TryFastArrayUnshift(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<CodeStubArguments*>(arguments), label_Baseline_204);
        }
      }
      if (label_Baseline_204->is_used())
      {
        BIND(label_Baseline_204);
        // ../../src/builtins/array-unshift.tq:103:20
        {
          // ../../src/builtins/array-unshift.tq:104:7
          TNode<Number> t583 = UncheckedCast<Number>(GenericArrayUnshift(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<CodeStubArguments*>(arguments)));
          USE(implicit_cast<TNode<Number>>(t583));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t583));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kGenericElementsAccessorId() {
  int31_t t2594 = 0;
  TNode<Smi> t2595 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2594)));
  return implicit_cast<TNode<Smi>>(t2595);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFastElementsAccessorId() {
  int31_t t2596 = 1;
  TNode<Smi> t2597 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2596)));
  return implicit_cast<TNode<Smi>>(t2597);
}

int31_t ArrayBuiltinsFromDSLAssembler::kReceiverIdx() {
  int31_t t2598 = 0;
  return implicit_cast<int31_t>(t2598);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverMapIdx() {
  int31_t t2599 = 1;
  return implicit_cast<int31_t>(t2599);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverLengthIdx() {
  int31_t t2600 = 2;
  return implicit_cast<int31_t>(t2600);
}

int31_t ArrayBuiltinsFromDSLAssembler::kUserCmpFnIdx() {
  int31_t t2601 = 3;
  return implicit_cast<int31_t>(t2601);
}

int31_t ArrayBuiltinsFromDSLAssembler::kSortComparePtrIdx() {
  int31_t t2602 = 4;
  return implicit_cast<int31_t>(t2602);
}

int31_t ArrayBuiltinsFromDSLAssembler::kLoadFnIdx() {
  int31_t t2603 = 5;
  return implicit_cast<int31_t>(t2603);
}

int31_t ArrayBuiltinsFromDSLAssembler::kStoreFnIdx() {
  int31_t t2604 = 6;
  return implicit_cast<int31_t>(t2604);
}

int31_t ArrayBuiltinsFromDSLAssembler::kCanUseSameAccessorFnIdx() {
  int31_t t2605 = 7;
  return implicit_cast<int31_t>(t2605);
}

int31_t ArrayBuiltinsFromDSLAssembler::kBailoutStatusIdx() {
  int31_t t2606 = 8;
  return implicit_cast<int31_t>(t2606);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopIdx() {
  int31_t t2607 = 9;
  return implicit_cast<int31_t>(t2607);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsSizeIdx() {
  int31_t t2608 = 10;
  return implicit_cast<int31_t>(t2608);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsIdx() {
  int31_t t2609 = 11;
  return implicit_cast<int31_t>(t2609);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArraySizeIdx() {
  int31_t t2610 = 12;
  return implicit_cast<int31_t>(t2610);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArrayIdx() {
  int31_t t2611 = 13;
  return implicit_cast<int31_t>(t2611);
}

int31_t ArrayBuiltinsFromDSLAssembler::kAccessorIdx() {
  int31_t t2612 = 14;
  return implicit_cast<int31_t>(t2612);
}

compiler::TNode<IntPtrT> ArrayBuiltinsFromDSLAssembler::kSortStateSize() {
  int31_t t2613 = 15;
  TNode<IntPtrT> t2614 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t2613)));
  return implicit_cast<TNode<IntPtrT>>(t2614);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFailure() {
  int31_t t2615 = -1;
  TNode<Smi> t2616 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2615)));
  return implicit_cast<TNode<Smi>>(t2616);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSuccess() {
  int31_t t2617 = 0;
  TNode<Smi> t2618 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2617)));
  return implicit_cast<TNode<Smi>>(t2618);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMaxMergePending() {
  int31_t t2619 = 85;
  return implicit_cast<int31_t>(t2619);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopWins() {
  int31_t t2620 = 7;
  return implicit_cast<int31_t>(t2620);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSortStateTempSize() {
  int31_t t2621 = 32;
  TNode<Smi> t2622 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2621)));
  return implicit_cast<TNode<Smi>>(t2622);
}

TF_BUILTIN(Load23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:135:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:136:5
    TNode<FixedArray> t2623 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2623));
    TNode<FixedArray> elems_971_impl;
    auto elems_971 = &elems_971_impl;
    USE(elems_971);
    *elems_971 = implicit_cast<TNode<FixedArray>>(t2623);
    // ../../third_party/v8/builtins/array-sort.tq:137:5
    TNode<Object> t2624 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_971)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2624));
  }
}

TF_BUILTIN(Load25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:142:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:143:5
    TNode<FixedArray> t2625 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2625));
    TNode<FixedArray> elems_972_impl;
    auto elems_972 = &elems_972_impl;
    USE(elems_972);
    *elems_972 = implicit_cast<TNode<FixedArray>>(t2625);
    // ../../third_party/v8/builtins/array-sort.tq:144:5
    TNode<Object> t2626 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_972)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Object> result_973_impl;
    auto result_973 = &result_973_impl;
    USE(result_973);
    *result_973 = implicit_cast<TNode<Object>>(t2626);
    // ../../third_party/v8/builtins/array-sort.tq:145:5
    {
      Label label__True_841_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_841 = &label__True_841_impl;
      USE(label__True_841);
      Label label__False_842_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_842 = &label__False_842_impl;
      USE(label__False_842);
      TNode<BoolT> t2627 = UncheckedCast<BoolT>(IsTheHole(implicit_cast<TNode<Object>>((*result_973))));
      USE(implicit_cast<TNode<BoolT>>(t2627));
      Branch(implicit_cast<TNode<BoolT>>(t2627), label__True_841, label__False_842);
      if (label__True_841->is_used())
      {
        BIND(label__True_841);
        // ../../third_party/v8/builtins/array-sort.tq:145:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:149:7
          TNode<Smi> t2628 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2628));
          Return(implicit_cast<TNode<Object>>(t2628));
        }
      }
      BIND(label__False_842);
    }
    // ../../third_party/v8/builtins/array-sort.tq:151:5
    Return(implicit_cast<TNode<Object>>((*result_973)));
  }
}

TF_BUILTIN(Load20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:156:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:157:5
    {
      Label label_try_done_974_1785_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_974_1785 = &label_try_done_974_1785_impl;
      USE(label_try_done_974_1785);
      Label label_Bailout_843_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_843 = &label_Bailout_843_impl;
      USE(label_Bailout_843);
      Label label_try_begin_975_1786_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_975_1786 = &label_try_begin_975_1786_impl;
      USE(label_try_begin_975_1786);
      Goto(label_try_begin_975_1786);
      if (label_try_begin_975_1786->is_used())
      {
        BIND(label_try_begin_975_1786);
        // ../../third_party/v8/builtins/array-sort.tq:157:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:158:7
          TNode<FixedDoubleArray> t2629 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t2629));
          TNode<FixedDoubleArray> elems_976_impl;
          auto elems_976 = &elems_976_impl;
          USE(elems_976);
          *elems_976 = implicit_cast<TNode<FixedDoubleArray>>(t2629);
          // ../../third_party/v8/builtins/array-sort.tq:159:7
          TNode<Float64T> t2630 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_976)), implicit_cast<TNode<Smi>>(p_index), label_Bailout_843));
          USE(implicit_cast<TNode<Float64T>>(t2630));
          TNode<Float64T> value_977_impl;
          auto value_977 = &value_977_impl;
          USE(value_977);
          *value_977 = implicit_cast<TNode<Float64T>>(t2630);
          // ../../third_party/v8/builtins/array-sort.tq:161:7
          TNode<HeapNumber> t2631 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*value_977))));
          USE(implicit_cast<TNode<HeapNumber>>(t2631));
          Return(implicit_cast<TNode<Object>>(t2631));
        }
      }
      if (label_Bailout_843->is_used())
      {
        BIND(label_Bailout_843);
        // ../../third_party/v8/builtins/array-sort.tq:163:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:167:7
          TNode<Smi> t2632 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2632));
          Return(implicit_cast<TNode<Object>>(t2632));
        }
      }
    }
  }
}

TF_BUILTIN(Load20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:173:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:174:5
    {
      Label label_try_done_978_1787_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_978_1787 = &label_try_done_978_1787_impl;
      USE(label_try_done_978_1787);
      Label label_Bailout_844_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_844 = &label_Bailout_844_impl;
      USE(label_Bailout_844);
      Label label_try_begin_979_1788_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_979_1788 = &label_try_begin_979_1788_impl;
      USE(label_try_begin_979_1788);
      Goto(label_try_begin_979_1788);
      if (label_try_begin_979_1788->is_used())
      {
        BIND(label_try_begin_979_1788);
        // ../../third_party/v8/builtins/array-sort.tq:174:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:175:7
          TNode<NumberDictionary> t2633 = UncheckedCast<NumberDictionary>(UnsafeCast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<NumberDictionary>>(t2633));
          TNode<NumberDictionary> dictionary_980_impl;
          auto dictionary_980 = &dictionary_980_impl;
          USE(dictionary_980);
          *dictionary_980 = implicit_cast<TNode<NumberDictionary>>(t2633);
          // ../../third_party/v8/builtins/array-sort.tq:177:7
          TNode<IntPtrT> t2634 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
          USE(implicit_cast<TNode<IntPtrT>>(t2634));
          TNode<IntPtrT> intptrIndex_981_impl;
          auto intptrIndex_981 = &intptrIndex_981_impl;
          USE(intptrIndex_981);
          *intptrIndex_981 = implicit_cast<TNode<IntPtrT>>(t2634);
          // ../../third_party/v8/builtins/array-sort.tq:178:7
          TNode<Object> t2635 = UncheckedCast<Object>(BasicLoadNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_980)), implicit_cast<TNode<IntPtrT>>((*intptrIndex_981)), label_Bailout_844, label_Bailout_844));
          USE(implicit_cast<TNode<Object>>(t2635));
          TNode<Object> value_982_impl;
          auto value_982 = &value_982_impl;
          USE(value_982);
          *value_982 = implicit_cast<TNode<Object>>(t2635);
          // ../../third_party/v8/builtins/array-sort.tq:181:7
          Return(implicit_cast<TNode<Object>>((*value_982)));
        }
      }
      if (label_Bailout_844->is_used())
      {
        BIND(label_Bailout_844);
        // ../../third_party/v8/builtins/array-sort.tq:183:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:184:7
          TNode<Smi> t2636 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2636));
          Return(implicit_cast<TNode<Object>>(t2636));
        }
      }
    }
  }
}

TF_BUILTIN(Load19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:190:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:191:5
    Label label__True_845_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_845 = &label__True_845_impl;
    USE(label__True_845);
    Label label__False_846_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_846 = &label__False_846_impl;
    USE(label__False_846);
    TNode<BoolT> t2637 = UncheckedCast<BoolT>(IsFixedArray(implicit_cast<TNode<HeapObject>>(p_elements)));
    USE(implicit_cast<TNode<BoolT>>(t2637));
    Branch(implicit_cast<TNode<BoolT>>(t2637), label__True_845, label__False_846);
    BIND(label__False_846);
    Print("assert 'IsFixedArray(elements)' failed at ../../third_party/v8/builtins/array-sort.tq:191:5");
    Unreachable();
    BIND(label__True_845);
    // ../../third_party/v8/builtins/array-sort.tq:192:5
    TNode<FixedArray> t2638 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2638));
    TNode<FixedArray> elems_983_impl;
    auto elems_983 = &elems_983_impl;
    USE(elems_983);
    *elems_983 = implicit_cast<TNode<FixedArray>>(t2638);
    // ../../third_party/v8/builtins/array-sort.tq:193:5
    TNode<Object> t2639 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_983)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2639));
  }
}

TF_BUILTIN(Store23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:205:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:206:5
    TNode<FixedArray> t2640 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2640));
    TNode<FixedArray> elems_984_impl;
    auto elems_984 = &elems_984_impl;
    USE(elems_984);
    *elems_984 = implicit_cast<TNode<FixedArray>>(t2640);
    // ../../third_party/v8/builtins/array-sort.tq:207:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_984)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
    // ../../third_party/v8/builtins/array-sort.tq:208:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:213:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:214:5
    TNode<FixedArray> t2641 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2641));
    TNode<FixedArray> elems_985_impl;
    auto elems_985 = &elems_985_impl;
    USE(elems_985);
    *elems_985 = implicit_cast<TNode<FixedArray>>(t2641);
    // ../../third_party/v8/builtins/array-sort.tq:215:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_985)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:216:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:221:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:222:5
    TNode<FixedDoubleArray> t2642 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t2642));
    TNode<FixedDoubleArray> elems_986_impl;
    auto elems_986 = &elems_986_impl;
    USE(elems_986);
    *elems_986 = implicit_cast<TNode<FixedDoubleArray>>(t2642);
    // ../../third_party/v8/builtins/array-sort.tq:223:5
    TNode<HeapNumber> t2643 = UncheckedCast<HeapNumber>(UnsafeCast12ATHeapNumber(implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<HeapNumber>>(t2643));
    TNode<HeapNumber> heapVal_987_impl;
    auto heapVal_987 = &heapVal_987_impl;
    USE(heapVal_987);
    *heapVal_987 = implicit_cast<TNode<HeapNumber>>(t2643);
    // ../../third_party/v8/builtins/array-sort.tq:225:5
    TNode<Float64T> t2644 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<HeapNumber>>((*heapVal_987))));
    USE(implicit_cast<TNode<Float64T>>(t2644));
    TNode<Float64T> t2645 = UncheckedCast<Float64T>(Float64SilenceNaN(implicit_cast<TNode<Float64T>>(t2644)));
    USE(implicit_cast<TNode<Float64T>>(t2645));
    TNode<Float64T> val_988_impl;
    auto val_988 = &val_988_impl;
    USE(val_988);
    *val_988 = implicit_cast<TNode<Float64T>>(t2645);
    // ../../third_party/v8/builtins/array-sort.tq:226:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_986)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>((*val_988)));
    // ../../third_party/v8/builtins/array-sort.tq:227:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:232:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:233:5
    TNode<NumberDictionary> t2646 = UncheckedCast<NumberDictionary>(UnsafeCast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<NumberDictionary>>(t2646));
    TNode<NumberDictionary> dictionary_989_impl;
    auto dictionary_989 = &dictionary_989_impl;
    USE(dictionary_989);
    *dictionary_989 = implicit_cast<TNode<NumberDictionary>>(t2646);
    // ../../third_party/v8/builtins/array-sort.tq:234:5
    TNode<IntPtrT> t2647 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<IntPtrT>>(t2647));
    TNode<IntPtrT> intptrIndex_990_impl;
    auto intptrIndex_990 = &intptrIndex_990_impl;
    USE(intptrIndex_990);
    *intptrIndex_990 = implicit_cast<TNode<IntPtrT>>(t2647);
    // ../../third_party/v8/builtins/array-sort.tq:235:5
    {
      Label label_try_done_991_1789_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_991_1789 = &label_try_done_991_1789_impl;
      USE(label_try_done_991_1789);
      Label label_ReadOnly_847_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_ReadOnly_847 = &label_ReadOnly_847_impl;
      USE(label_ReadOnly_847);
      Label label_Fail_848_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Fail_848 = &label_Fail_848_impl;
      USE(label_Fail_848);
      Label label_try_begin_992_1790_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_992_1790 = &label_try_begin_992_1790_impl;
      USE(label_try_begin_992_1790);
      Goto(label_try_begin_992_1790);
      if (label_try_begin_992_1790->is_used())
      {
        BIND(label_try_begin_992_1790);
        // ../../third_party/v8/builtins/array-sort.tq:235:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:236:7
          BasicStoreNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_989)), implicit_cast<TNode<IntPtrT>>((*intptrIndex_990)), implicit_cast<TNode<Object>>(p_value), label_Fail_848, label_Fail_848, label_ReadOnly_847);
          // ../../third_party/v8/builtins/array-sort.tq:238:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_ReadOnly_847->is_used())
      {
        BIND(label_ReadOnly_847);
        // ../../third_party/v8/builtins/array-sort.tq:240:20
        {
          // ../../third_party/v8/builtins/array-sort.tq:243:7
          TNode<JSReceiver> t2648 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<JSReceiver>>(t2648));
          TNode<JSReceiver> receiver_993_impl;
          auto receiver_993 = &receiver_993_impl;
          USE(receiver_993);
          *receiver_993 = implicit_cast<TNode<JSReceiver>>(t2648);
          // ../../third_party/v8/builtins/array-sort.tq:244:7
          TNode<Object> t2649 = UncheckedCast<Object>(Typeof(implicit_cast<TNode<Object>>((*receiver_993))));
          USE(implicit_cast<TNode<Object>>(t2649));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kStrictReadOnlyProperty), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(t2649), implicit_cast<TNode<Object>>((*receiver_993)));
        }
      }
      if (label_Fail_848->is_used())
      {
        BIND(label_Fail_848);
        // ../../third_party/v8/builtins/array-sort.tq:247:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:248:7
          TNode<Smi> t2650 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2650));
          Return(implicit_cast<TNode<Smi>>(t2650));
        }
      }
    }
  }
}

TF_BUILTIN(Store19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:254:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:255:5
    TNode<FixedArray> t2651 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2651));
    TNode<FixedArray> elems_994_impl;
    auto elems_994 = &elems_994_impl;
    USE(elems_994);
    *elems_994 = implicit_cast<TNode<FixedArray>>(t2651);
    // ../../third_party/v8/builtins/array-sort.tq:256:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_994)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:257:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(SortCompareDefault, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:282:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:283:5
    Label label__True_849_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_849 = &label__True_849_impl;
    USE(label__True_849);
    Label label__False_850_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_850 = &label__False_850_impl;
    USE(label__False_850);
    TNode<BoolT> t2656 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_comparefn), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2656));
    Branch(implicit_cast<TNode<BoolT>>(t2656), label__True_849, label__False_850);
    BIND(label__False_850);
    Print("assert 'comparefn == Undefined' failed at ../../third_party/v8/builtins/array-sort.tq:283:5");
    Unreachable();
    BIND(label__True_849);
    // ../../third_party/v8/builtins/array-sort.tq:285:5
    {
      Label label__True_851_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_851 = &label__True_851_impl;
      USE(label__True_851);
      Label label__False_852_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_852 = &label__False_852_impl;
      USE(label__False_852);
      Label label__True_853_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_853 = &label__True_853_impl;
      USE(label__True_853);
      TNode<BoolT> t2657 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<BoolT>>(t2657));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t2657), label__False_852);
      TNode<BoolT> t2658 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_y)));
      USE(implicit_cast<TNode<BoolT>>(t2658));
Branch(implicit_cast<TNode<BoolT>>(t2658), label__True_851, label__False_852);
      if (label__True_851->is_used())
      {
        BIND(label__True_851);
        // ../../third_party/v8/builtins/array-sort.tq:285:43
        {
          // ../../third_party/v8/builtins/array-sort.tq:286:7
          TNode<Smi> t2659 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_x)));
          USE(implicit_cast<TNode<Smi>>(t2659));
          TNode<Smi> t2660 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_y)));
          USE(implicit_cast<TNode<Smi>>(t2660));
          TNode<Smi> t2661 = UncheckedCast<Smi>(SmiLexicographicCompare(implicit_cast<TNode<Smi>>(t2659), implicit_cast<TNode<Smi>>(t2660)));
          USE(implicit_cast<TNode<Smi>>(t2661));
          Return(implicit_cast<TNode<Number>>(t2661));
        }
      }
      BIND(label__False_852);
    }
    // ../../third_party/v8/builtins/array-sort.tq:290:5
    TNode<String> t2662 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_x)));
    USE(implicit_cast<TNode<String>>(t2662));
    TNode<String> xString_995_impl;
    auto xString_995 = &xString_995_impl;
    USE(xString_995);
    *xString_995 = implicit_cast<TNode<String>>(t2662);
    // ../../third_party/v8/builtins/array-sort.tq:293:5
    TNode<String> t2663 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<String>>(t2663));
    TNode<String> yString_996_impl;
    auto yString_996 = &yString_996_impl;
    USE(yString_996);
    *yString_996 = implicit_cast<TNode<String>>(t2663);
    // ../../third_party/v8/builtins/array-sort.tq:298:5
    {
      Label label__True_854_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_854 = &label__True_854_impl;
      USE(label__True_854);
      Label label__False_855_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_855 = &label__False_855_impl;
      USE(label__False_855);
      TNode<Oddball> t2664 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*xString_995)), implicit_cast<TNode<String>>((*yString_996))));
      USE(implicit_cast<TNode<Oddball>>(t2664));
      TNode<BoolT> t2665 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2664), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2665));
      Branch(implicit_cast<TNode<BoolT>>(t2665), label__True_854, label__False_855);
      if (label__True_854->is_used())
      {
        BIND(label__True_854);
        // ../../third_party/v8/builtins/array-sort.tq:298:60
        int31_t t2666 = -1;
        TNode<Number> t2667 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2666)));
        Return(implicit_cast<TNode<Number>>(t2667));
      }
      BIND(label__False_855);
    }
    // ../../third_party/v8/builtins/array-sort.tq:303:5
    {
      Label label__True_856_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_856 = &label__True_856_impl;
      USE(label__True_856);
      Label label__False_857_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_857 = &label__False_857_impl;
      USE(label__False_857);
      TNode<Oddball> t2668 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*yString_996)), implicit_cast<TNode<String>>((*xString_995))));
      USE(implicit_cast<TNode<Oddball>>(t2668));
      TNode<BoolT> t2669 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2668), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2669));
      Branch(implicit_cast<TNode<BoolT>>(t2669), label__True_856, label__False_857);
      if (label__True_856->is_used())
      {
        BIND(label__True_856);
        // ../../third_party/v8/builtins/array-sort.tq:303:60
        int31_t t2670 = 1;
        TNode<Number> t2671 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2670)));
        Return(implicit_cast<TNode<Number>>(t2671));
      }
      BIND(label__False_857);
    }
    // ../../third_party/v8/builtins/array-sort.tq:306:5
    int31_t t2672 = 0;
    TNode<Number> t2673 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2672)));
    Return(implicit_cast<TNode<Number>>(t2673));
  }
}

TF_BUILTIN(SortCompareUserFn, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:310:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:311:5
    Label label__True_858_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_858 = &label__True_858_impl;
    USE(label__True_858);
    Label label__False_859_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_859 = &label__False_859_impl;
    USE(label__False_859);
    TNode<BoolT> t2674 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(p_comparefn), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t2674));
    Branch(implicit_cast<TNode<BoolT>>(t2674), label__True_858, label__False_859);
    BIND(label__False_859);
    Print("assert 'comparefn != Undefined' failed at ../../third_party/v8/builtins/array-sort.tq:311:5");
    Unreachable();
    BIND(label__True_858);
    // ../../third_party/v8/builtins/array-sort.tq:312:5
    TNode<JSReceiver> t2675 = UncheckedCast<JSReceiver>(UnsafeCast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_comparefn)));
    USE(implicit_cast<TNode<JSReceiver>>(t2675));
    TNode<JSReceiver> cmpfn_997_impl;
    auto cmpfn_997 = &cmpfn_997_impl;
    USE(cmpfn_997);
    *cmpfn_997 = implicit_cast<TNode<JSReceiver>>(t2675);
    // ../../third_party/v8/builtins/array-sort.tq:315:5
    TNode<Object> t2676 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*cmpfn_997)), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Object>>(t2676));
    TNode<Number> t2677 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2676)));
    USE(implicit_cast<TNode<Number>>(t2677));
    TNode<Number> v_998_impl;
    auto v_998 = &v_998_impl;
    USE(v_998);
    *v_998 = implicit_cast<TNode<Number>>(t2677);
    // ../../third_party/v8/builtins/array-sort.tq:319:5
    {
      Label label__True_860_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_860 = &label__True_860_impl;
      USE(label__True_860);
      Label label__False_861_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_861 = &label__False_861_impl;
      USE(label__False_861);
      TNode<BoolT> t2678 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_998))));
      USE(implicit_cast<TNode<BoolT>>(t2678));
      Branch(implicit_cast<TNode<BoolT>>(t2678), label__True_860, label__False_861);
      if (label__True_860->is_used())
      {
        BIND(label__True_860);
        // ../../third_party/v8/builtins/array-sort.tq:319:25
        int31_t t2679 = 0;
        TNode<Number> t2680 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2679)));
        Return(implicit_cast<TNode<Number>>(t2680));
      }
      BIND(label__False_861);
    }
    // ../../third_party/v8/builtins/array-sort.tq:322:5
    Return(implicit_cast<TNode<Number>>((*v_998)));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:342:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:344:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:349:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:350:5
    TNode<JSReceiver> t2681 = UncheckedCast<JSReceiver>(UnsafeCast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t2681));
    TVARIABLE(JSReceiver, obj_405_impl);
    auto obj_405 = &obj_405_impl;
    USE(obj_405);
    *obj_405 = implicit_cast<TNode<JSReceiver>>(t2681);
    // ../../third_party/v8/builtins/array-sort.tq:351:5
    TNode<Map> t2682 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_405).value())));
    TNode<BoolT> t2683 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2682), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
    USE(implicit_cast<TNode<BoolT>>(t2683));
    TNode<Oddball> t2684 = UncheckedCast<Oddball>(SelectBooleanConstant(implicit_cast<TNode<BoolT>>(t2683)));
    USE(implicit_cast<TNode<Oddball>>(t2684));
    Return(implicit_cast<TNode<Oddball>>(t2684));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::CallCompareFn(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Object> p_x, TNode<Object> p_y, Label* label_Bailout_862) {
  TVARIABLE(Number, _return_406_impl);
  auto _return_406 = &_return_406_impl;
  USE(_return_406);
  Label label_macro_end_1795_impl(this, {_return_406}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1795 = &label_macro_end_1795_impl;
  USE(label_macro_end_1795);
  // ../../third_party/v8/builtins/array-sort.tq:356:22
  {
    // ../../third_party/v8/builtins/array-sort.tq:357:5
    TNode<Object> t2685 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kUserCmpFnIdx())));
    TNode<Object> userCmpFn_999_impl;
    auto userCmpFn_999 = &userCmpFn_999_impl;
    USE(userCmpFn_999);
    *userCmpFn_999 = implicit_cast<TNode<Object>>(t2685);
    // ../../third_party/v8/builtins/array-sort.tq:358:5
    TNode<Object> t2686 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kSortComparePtrIdx())));
    TNode<Code> t2687 = UncheckedCast<Code>(UnsafeCast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2686)));
    USE(implicit_cast<TNode<Code>>(t2687));
    TNode<Code> sortCompare_1000_impl;
    auto sortCompare_1000 = &sortCompare_1000_impl;
    USE(sortCompare_1000);
    *sortCompare_1000 = implicit_cast<TNode<Code>>(t2687);
    // ../../third_party/v8/builtins/array-sort.tq:361:5
    TNode<Number> t2688 = UncheckedCast<Number>(CallStub(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).descriptor(), implicit_cast<TNode<Code>>((*sortCompare_1000)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*userCmpFn_999)), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t2688));
    TNode<Number> result_1001_impl;
    auto result_1001 = &result_1001_impl;
    USE(result_1001);
    *result_1001 = implicit_cast<TNode<Number>>(t2688);
    // ../../third_party/v8/builtins/array-sort.tq:363:5
    TNode<JSReceiver> t2689 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2689));
    TNode<JSReceiver> receiver_1002_impl;
    auto receiver_1002 = &receiver_1002_impl;
    USE(receiver_1002);
    *receiver_1002 = implicit_cast<TNode<JSReceiver>>(t2689);
    // ../../third_party/v8/builtins/array-sort.tq:364:5
    TNode<Object> t2690 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverMapIdx())));
    TNode<Object> initialReceiverMap_1003_impl;
    auto initialReceiverMap_1003 = &initialReceiverMap_1003_impl;
    USE(initialReceiverMap_1003);
    *initialReceiverMap_1003 = implicit_cast<TNode<Object>>(t2690);
    // ../../third_party/v8/builtins/array-sort.tq:365:5
    TNode<Object> t2691 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverLengthIdx())));
    TNode<Number> t2692 = UncheckedCast<Number>(UnsafeCast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2691)));
    USE(implicit_cast<TNode<Number>>(t2692));
    TNode<Number> initialReceiverLength_1004_impl;
    auto initialReceiverLength_1004 = &initialReceiverLength_1004_impl;
    USE(initialReceiverLength_1004);
    *initialReceiverLength_1004 = implicit_cast<TNode<Number>>(t2692);
    // ../../third_party/v8/builtins/array-sort.tq:367:5
    TNode<Code> t2693 = UncheckedCast<Code>(GetCanUseSameAccessorFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2693));
    TNode<Code> canUseSameAccessorFn_1005_impl;
    auto canUseSameAccessorFn_1005 = &canUseSameAccessorFn_1005_impl;
    USE(canUseSameAccessorFn_1005);
    *canUseSameAccessorFn_1005 = implicit_cast<TNode<Code>>(t2693);
    // ../../third_party/v8/builtins/array-sort.tq:370:5
    {
      Label label__True_863_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_863 = &label__True_863_impl;
      USE(label__True_863);
      Label label__False_864_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_864 = &label__False_864_impl;
      USE(label__False_864);
      TNode<Oddball> t2694 = UncheckedCast<Oddball>(CallStub(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).descriptor(), implicit_cast<TNode<Code>>((*canUseSameAccessorFn_1005)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*receiver_1002)), implicit_cast<TNode<Object>>((*initialReceiverMap_1003)), implicit_cast<TNode<Number>>((*initialReceiverLength_1004))));
      USE(implicit_cast<TNode<Oddball>>(t2694));
      TNode<BoolT> t2695 = UncheckedCast<BoolT>(IsFalse(implicit_cast<TNode<Oddball>>(t2694)));
      USE(implicit_cast<TNode<BoolT>>(t2695));
      Branch(implicit_cast<TNode<BoolT>>(t2695), label__True_863, label__False_864);
      if (label__True_863->is_used())
      {
        BIND(label__True_863);
        // ../../third_party/v8/builtins/array-sort.tq:371:76
        {
          // ../../third_party/v8/builtins/array-sort.tq:372:7
          Goto(label_Bailout_862);
        }
      }
      BIND(label__False_864);
    }
    // ../../third_party/v8/builtins/array-sort.tq:374:5
    *_return_406 = implicit_cast<TNode<Number>>((*result_1001));
    Goto(label_macro_end_1795);
  }
  BIND(label_macro_end_1795);
  return implicit_cast<TNode<Number>>((*_return_406).value());
}

compiler::TNode<HeapObject> ArrayBuiltinsFromDSLAssembler::ReloadElements(TNode<FixedArray> p_sortState) {
  TVARIABLE(HeapObject, _return_407_impl);
  auto _return_407 = &_return_407_impl;
  USE(_return_407);
  Label label_macro_end_1796_impl(this, {_return_407}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1796 = &label_macro_end_1796_impl;
  USE(label_macro_end_1796);
  // ../../third_party/v8/builtins/array-sort.tq:381:59
  {
    // ../../third_party/v8/builtins/array-sort.tq:382:5
    TNode<JSReceiver> t2696 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2696));
    TNode<JSReceiver> receiver_1006_impl;
    auto receiver_1006 = &receiver_1006_impl;
    USE(receiver_1006);
    *receiver_1006 = implicit_cast<TNode<JSReceiver>>(t2696);
    // ../../third_party/v8/builtins/array-sort.tq:383:5
    {
      Label label__True_865_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_865 = &label__True_865_impl;
      USE(label__True_865);
      Label label__False_866_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_866 = &label__False_866_impl;
      USE(label__False_866);
      TNode<Object> t2697 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
      TNode<BoolT> t2698 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2697), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
      USE(implicit_cast<TNode<BoolT>>(t2698));
      Branch(implicit_cast<TNode<BoolT>>(t2698), label__True_865, label__False_866);
      if (label__True_865->is_used())
      {
        BIND(label__True_865);
        // ../../third_party/v8/builtins/array-sort.tq:383:64
        *_return_407 = implicit_cast<TNode<HeapObject>>((*receiver_1006));
        Goto(label_macro_end_1796);
      }
      BIND(label__False_866);
    }
    // ../../third_party/v8/builtins/array-sort.tq:385:5
    TNode<JSObject> t2699 = UncheckedCast<JSObject>(UnsafeCast10ATJSObject(implicit_cast<TNode<Object>>((*receiver_1006))));
    USE(implicit_cast<TNode<JSObject>>(t2699));
    TNode<JSObject> object_1007_impl;
    auto object_1007 = &object_1007_impl;
    USE(object_1007);
    *object_1007 = implicit_cast<TNode<JSObject>>(t2699);
    // ../../third_party/v8/builtins/array-sort.tq:386:5
    TNode<FixedArrayBase> t2700 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*object_1007))));
    *_return_407 = implicit_cast<TNode<HeapObject>>(t2700);
    Goto(label_macro_end_1796);
  }
  BIND(label_macro_end_1796);
  return implicit_cast<TNode<HeapObject>>((*_return_407).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetLoadFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_408_impl);
  auto _return_408 = &_return_408_impl;
  USE(_return_408);
  Label label_macro_end_1797_impl(this, {_return_408}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1797 = &label_macro_end_1797_impl;
  USE(label_macro_end_1797);
  // ../../third_party/v8/builtins/array-sort.tq:389:50
  {
    // ../../third_party/v8/builtins/array-sort.tq:390:5
    TNode<Object> t2701 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx())));
    TNode<Code> t2702 = UncheckedCast<Code>(UnsafeCast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(t2701)));
    USE(implicit_cast<TNode<Code>>(t2702));
    *_return_408 = implicit_cast<TNode<Code>>(t2702);
    Goto(label_macro_end_1797);
  }
  BIND(label_macro_end_1797);
  return implicit_cast<TNode<Code>>((*_return_408).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetStoreFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_409_impl);
  auto _return_409 = &_return_409_impl;
  USE(_return_409);
  Label label_macro_end_1798_impl(this, {_return_409}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1798 = &label_macro_end_1798_impl;
  USE(label_macro_end_1798);
  // ../../third_party/v8/builtins/array-sort.tq:393:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:394:5
    TNode<Object> t2703 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx())));
    TNode<Code> t2704 = UncheckedCast<Code>(UnsafeCast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(implicit_cast<TNode<Object>>(t2703)));
    USE(implicit_cast<TNode<Code>>(t2704));
    *_return_409 = implicit_cast<TNode<Code>>(t2704);
    Goto(label_macro_end_1798);
  }
  BIND(label_macro_end_1798);
  return implicit_cast<TNode<Code>>((*_return_409).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetCanUseSameAccessorFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_410_impl);
  auto _return_410 = &_return_410_impl;
  USE(_return_410);
  Label label_macro_end_1799_impl(this, {_return_410}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1799 = &label_macro_end_1799_impl;
  USE(label_macro_end_1799);
  // ../../third_party/v8/builtins/array-sort.tq:397:78
  {
    // ../../third_party/v8/builtins/array-sort.tq:398:5
    TNode<Object> t2705 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx())));
    TNode<Code> t2706 = UncheckedCast<Code>(UnsafeCast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(implicit_cast<TNode<Object>>(t2705)));
    USE(implicit_cast<TNode<Code>>(t2706));
    *_return_410 = implicit_cast<TNode<Code>>(t2706);
    Goto(label_macro_end_1799);
  }
  BIND(label_macro_end_1799);
  return implicit_cast<TNode<Code>>((*_return_410).value());
}

compiler::TNode<JSReceiver> ArrayBuiltinsFromDSLAssembler::GetReceiver(TNode<FixedArray> p_sortState) {
  TVARIABLE(JSReceiver, _return_411_impl);
  auto _return_411 = &_return_411_impl;
  USE(_return_411);
  Label label_macro_end_1800_impl(this, {_return_411}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1800 = &label_macro_end_1800_impl;
  USE(label_macro_end_1800);
  // ../../third_party/v8/builtins/array-sort.tq:402:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:403:5
    TNode<Object> t2707 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kReceiverIdx())));
    TNode<JSReceiver> t2708 = UncheckedCast<JSReceiver>(UnsafeCast12ATJSReceiver(implicit_cast<TNode<Object>>(t2707)));
    USE(implicit_cast<TNode<JSReceiver>>(t2708));
    *_return_411 = implicit_cast<TNode<JSReceiver>>(t2708);
    Goto(label_macro_end_1800);
  }
  BIND(label_macro_end_1800);
  return implicit_cast<TNode<JSReceiver>>((*_return_411).value());
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState) {
  TVARIABLE(FixedArray, _return_412_impl);
  auto _return_412 = &_return_412_impl;
  USE(_return_412);
  Label label_macro_end_1801_impl(this, {_return_412}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1801 = &label_macro_end_1801_impl;
  USE(label_macro_end_1801);
  // ../../third_party/v8/builtins/array-sort.tq:407:57
  {
    // ../../third_party/v8/builtins/array-sort.tq:408:5
    TNode<Object> t2709 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx())));
    TNode<FixedArray> t2710 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t2709)));
    USE(implicit_cast<TNode<FixedArray>>(t2710));
    *_return_412 = implicit_cast<TNode<FixedArray>>(t2710);
    Goto(label_macro_end_1801);
  }
  BIND(label_macro_end_1801);
  return implicit_cast<TNode<FixedArray>>((*_return_412).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunsSize(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_413_impl);
  auto _return_413 = &_return_413_impl;
  USE(_return_413);
  Label label_macro_end_1802_impl(this, {_return_413}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1802 = &label_macro_end_1802_impl;
  USE(label_macro_end_1802);
  // ../../third_party/v8/builtins/array-sort.tq:413:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:414:5
    Label label__True_867_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_867 = &label__True_867_impl;
    USE(label__True_867);
    Label label__False_868_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_868 = &label__False_868_impl;
    USE(label__False_868);
    TNode<Object> t2711 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx())));
    TNode<BoolT> t2712 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(t2711)));
    USE(implicit_cast<TNode<BoolT>>(t2712));
    Branch(implicit_cast<TNode<BoolT>>(t2712), label__True_867, label__False_868);
    BIND(label__False_868);
    Print("assert 'TaggedIsSmi(sortState[kPendingRunsSizeIdx])' failed at ../../third_party/v8/builtins/array-sort.tq:414:5");
    Unreachable();
    BIND(label__True_867);
    // ../../third_party/v8/builtins/array-sort.tq:415:5
    TNode<Object> t2713 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx())));
    TNode<Smi> t2714 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2713)));
    USE(implicit_cast<TNode<Smi>>(t2714));
    TNode<Smi> stackSize_1008_impl;
    auto stackSize_1008 = &stackSize_1008_impl;
    USE(stackSize_1008);
    *stackSize_1008 = implicit_cast<TNode<Smi>>(t2714);
    // ../../third_party/v8/builtins/array-sort.tq:417:5
    Label label__True_869_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_869 = &label__True_869_impl;
    USE(label__True_869);
    Label label__False_870_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_870 = &label__False_870_impl;
    USE(label__False_870);
    int31_t t2715 = 0;
    TNode<Smi> t2716 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2715)));
    TNode<BoolT> t2717 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*stackSize_1008)), implicit_cast<TNode<Smi>>(t2716)));
    USE(implicit_cast<TNode<BoolT>>(t2717));
    Branch(implicit_cast<TNode<BoolT>>(t2717), label__True_869, label__False_870);
    BIND(label__False_870);
    Print("assert 'stackSize >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:417:5");
    Unreachable();
    BIND(label__True_869);
    // ../../third_party/v8/builtins/array-sort.tq:418:5
    *_return_413 = implicit_cast<TNode<Smi>>((*stackSize_1008));
    Goto(label_macro_end_1802);
  }
  BIND(label_macro_end_1802);
  return implicit_cast<TNode<Smi>>((*_return_413).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunsSize(TNode<FixedArray> p_sortState, TNode<Smi> p_value) {
  Label label_macro_end_1803_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1803 = &label_macro_end_1803_impl;
  USE(label_macro_end_1803);
  // ../../third_party/v8/builtins/array-sort.tq:421:63
  {
    // ../../third_party/v8/builtins/array-sort.tq:422:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx()), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_414_impl);
  auto _return_414 = &_return_414_impl;
  USE(_return_414);
  Label label_macro_end_1804_impl(this, {_return_414}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1804 = &label_macro_end_1804_impl;
  USE(label_macro_end_1804);
  // ../../third_party/v8/builtins/array-sort.tq:425:67
  {
    // ../../third_party/v8/builtins/array-sort.tq:426:5
    int31_t t2718 = 1;
    TNode<Smi> t2719 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2718)));
    USE(implicit_cast<TNode<Smi>>(t2719));
    TNode<Object> t2720 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2719)));
    TNode<Smi> t2721 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2720)));
    USE(implicit_cast<TNode<Smi>>(t2721));
    *_return_414 = implicit_cast<TNode<Smi>>(t2721);
    Goto(label_macro_end_1804);
  }
  BIND(label_macro_end_1804);
  return implicit_cast<TNode<Smi>>((*_return_414).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1805_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1805 = &label_macro_end_1805_impl;
  USE(label_macro_end_1805);
  // ../../third_party/v8/builtins/array-sort.tq:429:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:430:5
    int31_t t2722 = 1;
    TNode<Smi> t2723 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2722)));
    USE(implicit_cast<TNode<Smi>>(t2723));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2723), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_415_impl);
  auto _return_415 = &_return_415_impl;
  USE(_return_415);
  Label label_macro_end_1806_impl(this, {_return_415}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1806 = &label_macro_end_1806_impl;
  USE(label_macro_end_1806);
  // ../../third_party/v8/builtins/array-sort.tq:433:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:434:5
    int31_t t2724 = 1;
    TNode<Smi> t2725 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2724)));
    USE(implicit_cast<TNode<Smi>>(t2725));
    int31_t t2726 = 1;
    TNode<Smi> t2727 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2726)));
    TNode<Smi> t2728 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2725), implicit_cast<TNode<Smi>>(t2727)));
    USE(implicit_cast<TNode<Smi>>(t2728));
    TNode<Object> t2729 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2728)));
    TNode<Smi> t2730 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2729)));
    USE(implicit_cast<TNode<Smi>>(t2730));
    *_return_415 = implicit_cast<TNode<Smi>>(t2730);
    Goto(label_macro_end_1806);
  }
  BIND(label_macro_end_1806);
  return implicit_cast<TNode<Smi>>((*_return_415).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1807_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1807 = &label_macro_end_1807_impl;
  USE(label_macro_end_1807);
  // ../../third_party/v8/builtins/array-sort.tq:437:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:438:5
    int31_t t2731 = 1;
    TNode<Smi> t2732 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2731)));
    USE(implicit_cast<TNode<Smi>>(t2732));
    int31_t t2733 = 1;
    TNode<Smi> t2734 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2733)));
    TNode<Smi> t2735 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2732), implicit_cast<TNode<Smi>>(t2734)));
    USE(implicit_cast<TNode<Smi>>(t2735));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2735), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::PushRun(TNode<FixedArray> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length) {
  Label label_macro_end_1808_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1808 = &label_macro_end_1808_impl;
  USE(label_macro_end_1808);
  // ../../third_party/v8/builtins/array-sort.tq:441:64
  {
    // ../../third_party/v8/builtins/array-sort.tq:442:5
    Label label__True_871_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_871 = &label__True_871_impl;
    USE(label__True_871);
    Label label__False_872_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_872 = &label__False_872_impl;
    USE(label__False_872);
    TNode<Smi> t2736 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2736));
    TNode<Smi> t2737 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(kMaxMergePending())));
    TNode<BoolT> t2738 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t2736), implicit_cast<TNode<Smi>>(t2737)));
    USE(implicit_cast<TNode<BoolT>>(t2738));
    Branch(implicit_cast<TNode<BoolT>>(t2738), label__True_871, label__False_872);
    BIND(label__False_872);
    Print("assert 'GetPendingRunsSize(sortState) < kMaxMergePending' failed at ../../third_party/v8/builtins/array-sort.tq:442:5");
    Unreachable();
    BIND(label__True_871);
    // ../../third_party/v8/builtins/array-sort.tq:444:5
    TNode<Smi> t2739 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2739));
    TNode<Smi> stackSize_1009_impl;
    auto stackSize_1009 = &stackSize_1009_impl;
    USE(stackSize_1009);
    *stackSize_1009 = implicit_cast<TNode<Smi>>(t2739);
    // ../../third_party/v8/builtins/array-sort.tq:445:5
    TNode<Object> t2740 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2741 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t2740)));
    USE(implicit_cast<TNode<FixedArray>>(t2741));
    TNode<FixedArray> pendingRuns_1010_impl;
    auto pendingRuns_1010 = &pendingRuns_1010_impl;
    USE(pendingRuns_1010);
    *pendingRuns_1010 = implicit_cast<TNode<FixedArray>>(t2741);
    // ../../third_party/v8/builtins/array-sort.tq:448:5
    SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pendingRuns_1010)), implicit_cast<TNode<Smi>>((*stackSize_1009)), implicit_cast<TNode<Smi>>(p_base));
    // ../../third_party/v8/builtins/array-sort.tq:449:5
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1010)), implicit_cast<TNode<Smi>>((*stackSize_1009)), implicit_cast<TNode<Smi>>(p_length));
    // ../../third_party/v8/builtins/array-sort.tq:451:5
    int31_t t2742 = 1;
    TNode<Smi> t2743 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2742)));
    TNode<Smi> t2744 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*stackSize_1009)), implicit_cast<TNode<Smi>>(t2743)));
    USE(implicit_cast<TNode<Smi>>(t2744));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t2744));
  }
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState, TNode<Smi> p_requestedSize) {
  TVARIABLE(FixedArray, _return_416_impl);
  auto _return_416 = &_return_416_impl;
  USE(_return_416);
  Label label_macro_end_1809_impl(this, {_return_416}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1809 = &label_macro_end_1809_impl;
  USE(label_macro_end_1809);
  // ../../third_party/v8/builtins/array-sort.tq:456:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:457:5
    TNode<Smi> t2745 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(kSortStateTempSize()), implicit_cast<TNode<Smi>>(p_requestedSize)));
    USE(implicit_cast<TNode<Smi>>(t2745));
    TNode<Smi> minSize_1011_impl;
    auto minSize_1011 = &minSize_1011_impl;
    USE(minSize_1011);
    *minSize_1011 = implicit_cast<TNode<Smi>>(t2745);
    // ../../third_party/v8/builtins/array-sort.tq:459:5
    TNode<Object> t2746 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx())));
    TNode<Smi> t2747 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2746)));
    USE(implicit_cast<TNode<Smi>>(t2747));
    TNode<Smi> currentSize_1012_impl;
    auto currentSize_1012 = &currentSize_1012_impl;
    USE(currentSize_1012);
    *currentSize_1012 = implicit_cast<TNode<Smi>>(t2747);
    // ../../third_party/v8/builtins/array-sort.tq:460:5
    {
      Label label__True_873_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_873 = &label__True_873_impl;
      USE(label__True_873);
      Label label__False_874_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_874 = &label__False_874_impl;
      USE(label__False_874);
      TNode<BoolT> t2748 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*currentSize_1012)), implicit_cast<TNode<Smi>>((*minSize_1011))));
      USE(implicit_cast<TNode<BoolT>>(t2748));
      Branch(implicit_cast<TNode<BoolT>>(t2748), label__True_873, label__False_874);
      if (label__True_873->is_used())
      {
        BIND(label__True_873);
        // ../../third_party/v8/builtins/array-sort.tq:460:33
        {
          // ../../third_party/v8/builtins/array-sort.tq:461:7
          TNode<FixedArray> t2749 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<FixedArray>>(t2749));
          *_return_416 = implicit_cast<TNode<FixedArray>>(t2749);
          Goto(label_macro_end_1809);
        }
      }
      BIND(label__False_874);
    }
    // ../../third_party/v8/builtins/array-sort.tq:464:5
    TNode<IntPtrT> t2750 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Smi>>((*minSize_1011))));
    USE(implicit_cast<TNode<IntPtrT>>(t2750));
    TNode<FixedArray> t2751 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2750)));
    USE(implicit_cast<TNode<FixedArray>>(t2751));
    TNode<FixedArray> tempArray_1013_impl;
    auto tempArray_1013 = &tempArray_1013_impl;
    USE(tempArray_1013);
    *tempArray_1013 = implicit_cast<TNode<FixedArray>>(t2751);
    // ../../third_party/v8/builtins/array-sort.tq:467:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>((*minSize_1011)));
    // ../../third_party/v8/builtins/array-sort.tq:468:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx()), implicit_cast<TNode<Object>>((*tempArray_1013)));
    // ../../third_party/v8/builtins/array-sort.tq:469:5
    *_return_416 = implicit_cast<TNode<FixedArray>>((*tempArray_1013));
    Goto(label_macro_end_1809);
  }
  BIND(label_macro_end_1809);
  return implicit_cast<TNode<FixedArray>>((*_return_416).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureSuccess(TNode<FixedArray> p_sortState, Label* label_Bailout_875) {
  Label label_macro_end_1810_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1810 = &label_macro_end_1810_impl;
  USE(label_macro_end_1810);
  // ../../third_party/v8/builtins/array-sort.tq:473:61
  {
    // ../../third_party/v8/builtins/array-sort.tq:474:5
    TNode<Object> t2752 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx())));
    TNode<Smi> t2753 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t2752)));
    USE(implicit_cast<TNode<Smi>>(t2753));
    TNode<Smi> status_1014_impl;
    auto status_1014 = &status_1014_impl;
    USE(status_1014);
    *status_1014 = implicit_cast<TNode<Smi>>(t2753);
    // ../../third_party/v8/builtins/array-sort.tq:475:5
    {
      Label label__True_876_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_876 = &label__True_876_impl;
      USE(label__True_876);
      Label label__False_877_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_877 = &label__False_877_impl;
      USE(label__False_877);
      TNode<BoolT> t2754 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*status_1014)), implicit_cast<TNode<Smi>>(kFailure())));
      USE(implicit_cast<TNode<BoolT>>(t2754));
      Branch(implicit_cast<TNode<BoolT>>(t2754), label__True_876, label__False_877);
      if (label__True_876->is_used())
      {
        BIND(label__True_876);
        // ../../third_party/v8/builtins/array-sort.tq:475:29
        Goto(label_Bailout_875);
      }
      BIND(label__False_877);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::Failure(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_417_impl);
  auto _return_417 = &_return_417_impl;
  USE(_return_417);
  Label label_macro_end_1811_impl(this, {_return_417}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1811 = &label_macro_end_1811_impl;
  USE(label_macro_end_1811);
  // ../../third_party/v8/builtins/array-sort.tq:479:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:480:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kFailure()));
    // ../../third_party/v8/builtins/array-sort.tq:481:5
    *_return_417 = implicit_cast<TNode<Smi>>(kFailure());
    Goto(label_macro_end_1811);
  }
  BIND(label_macro_end_1811);
  return implicit_cast<TNode<Smi>>((*_return_417).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::CallLoad(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<HeapObject> p_elements, TNode<Smi> p_index, Label* label_Bailout_878) {
  TVARIABLE(Object, _return_418_impl);
  auto _return_418 = &_return_418_impl;
  USE(_return_418);
  Label label_macro_end_1812_impl(this, {_return_418}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1812 = &label_macro_end_1812_impl;
  USE(label_macro_end_1812);
  // ../../third_party/v8/builtins/array-sort.tq:491:22
  {
    // ../../third_party/v8/builtins/array-sort.tq:492:5
    TNode<Object> t2755 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t2755));
    TNode<Object> result_1015_impl;
    auto result_1015 = &result_1015_impl;
    USE(result_1015);
    *result_1015 = implicit_cast<TNode<Object>>(t2755);
    // ../../third_party/v8/builtins/array-sort.tq:493:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_878);
    // ../../third_party/v8/builtins/array-sort.tq:494:5
    *_return_418 = implicit_cast<TNode<Object>>((*result_1015));
    Goto(label_macro_end_1812);
  }
  BIND(label_macro_end_1812);
  return implicit_cast<TNode<Object>>((*_return_418).value());
}

void ArrayBuiltinsFromDSLAssembler::CallStore(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_store, TNode<HeapObject> p_elements, TNode<Smi> p_index, TNode<Object> p_value, Label* label_Bailout_879) {
  Label label_macro_end_1813_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1813 = &label_macro_end_1813_impl;
  USE(label_macro_end_1813);
  // ../../third_party/v8/builtins/array-sort.tq:499:71
  {
    // ../../third_party/v8/builtins/array-sort.tq:500:5
    TNode<Smi> t2756 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<Smi>>(t2756));
    // ../../third_party/v8/builtins/array-sort.tq:501:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_879);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyFromTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_dstElements, TNode<Smi> p_dstPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_srcPos, TNode<Smi> p_length, Label* label_Bailout_880) {
  Label label_macro_end_1814_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1814 = &label_macro_end_1814_impl;
  USE(label_macro_end_1814);
  // ../../third_party/v8/builtins/array-sort.tq:507:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:508:5
    TNode<Smi> t2757 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyFromTempArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2757));
    // ../../third_party/v8/builtins/array-sort.tq:510:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_880);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyWithinSortArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_elements, TNode<Smi> p_srcPos, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_881) {
  Label label_macro_end_1815_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1815 = &label_macro_end_1815_impl;
  USE(label_macro_end_1815);
  // ../../third_party/v8/builtins/array-sort.tq:516:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:517:5
    TNode<Smi> t2758 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyWithinSortArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2758));
    // ../../third_party/v8/builtins/array-sort.tq:518:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_881);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopRight(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_882) {
  TVARIABLE(Smi, _return_419_impl);
  auto _return_419 = &_return_419_impl;
  USE(_return_419);
  Label label_macro_end_1816_impl(this, {_return_419}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1816 = &label_macro_end_1816_impl;
  USE(label_macro_end_1816);
  // ../../third_party/v8/builtins/array-sort.tq:524:22
  {
    // ../../third_party/v8/builtins/array-sort.tq:525:5
    TNode<Smi> t2759 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopRight, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2759));
    TNode<Smi> result_1016_impl;
    auto result_1016 = &result_1016_impl;
    USE(result_1016);
    *result_1016 = implicit_cast<TNode<Smi>>(t2759);
    // ../../third_party/v8/builtins/array-sort.tq:527:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_882);
    // ../../third_party/v8/builtins/array-sort.tq:528:5
    *_return_419 = implicit_cast<TNode<Smi>>((*result_1016));
    Goto(label_macro_end_1816);
  }
  BIND(label_macro_end_1816);
  return implicit_cast<TNode<Smi>>((*_return_419).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopLeft(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_883) {
  TVARIABLE(Smi, _return_420_impl);
  auto _return_420 = &_return_420_impl;
  USE(_return_420);
  Label label_macro_end_1817_impl(this, {_return_420}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1817 = &label_macro_end_1817_impl;
  USE(label_macro_end_1817);
  // ../../third_party/v8/builtins/array-sort.tq:534:22
  {
    // ../../third_party/v8/builtins/array-sort.tq:535:5
    TNode<Smi> t2760 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopLeft, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2760));
    TNode<Smi> result_1017_impl;
    auto result_1017 = &result_1017_impl;
    USE(result_1017);
    *result_1017 = implicit_cast<TNode<Smi>>(t2760);
    // ../../third_party/v8/builtins/array-sort.tq:537:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_883);
    // ../../third_party/v8/builtins/array-sort.tq:538:5
    *_return_420 = implicit_cast<TNode<Smi>>((*result_1017));
    Goto(label_macro_end_1817);
  }
  BIND(label_macro_end_1817);
  return implicit_cast<TNode<Smi>>((*_return_420).value());
}

void ArrayBuiltinsFromDSLAssembler::CallMergeAt(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_i, Label* label_Bailout_884) {
  Label label_macro_end_1818_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1818 = &label_macro_end_1818_impl;
  USE(label_macro_end_1818);
  // ../../third_party/v8/builtins/array-sort.tq:542:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:543:5
    TNode<Smi> t2761 = UncheckedCast<Smi>(CallBuiltin(Builtins::kMergeAt, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2761));
    // ../../third_party/v8/builtins/array-sort.tq:544:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_884);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetReceiverLengthProperty(TNode<Context> p_context, TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_421_impl);
  auto _return_421 = &_return_421_impl;
  USE(_return_421);
  Label label_macro_end_1819_impl(this, {_return_421}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1819 = &label_macro_end_1819_impl;
  USE(label_macro_end_1819);
  // ../../third_party/v8/builtins/array-sort.tq:549:53
  {
    // ../../third_party/v8/builtins/array-sort.tq:550:5
    TNode<JSReceiver> t2762 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2762));
    TNode<JSReceiver> receiver_1018_impl;
    auto receiver_1018 = &receiver_1018_impl;
    USE(receiver_1018);
    *receiver_1018 = implicit_cast<TNode<JSReceiver>>(t2762);
    // ../../third_party/v8/builtins/array-sort.tq:552:5
    {
      Label label__True_885_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_885 = &label__True_885_impl;
      USE(label__True_885);
      Label label__False_886_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_886 = &label__False_886_impl;
      USE(label__False_886);
      TNode<BoolT> t2763 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>((*receiver_1018))));
      USE(implicit_cast<TNode<BoolT>>(t2763));
      Branch(implicit_cast<TNode<BoolT>>(t2763), label__True_885, label__False_886);
      if (label__True_885->is_used())
      {
        BIND(label__True_885);
        // ../../third_party/v8/builtins/array-sort.tq:552:30
        TNode<JSArray> t2764 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>((*receiver_1018))));
        USE(implicit_cast<TNode<JSArray>>(t2764));
        TNode<Smi> t2765 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(t2764)));
        *_return_421 = implicit_cast<TNode<Smi>>(t2765);
        Goto(label_macro_end_1819);
      }
      BIND(label__False_886);
    }
    // ../../third_party/v8/builtins/array-sort.tq:554:5
    TNode<Object> t2766 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*receiver_1018)), implicit_cast<TNode<Object>>(kLengthString())));
    USE(implicit_cast<TNode<Object>>(t2766));
    TNode<Number> t2767 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2766)));
    USE(implicit_cast<TNode<Number>>(t2767));
    TNode<Number> len_1019_impl;
    auto len_1019 = &len_1019_impl;
    USE(len_1019);
    *len_1019 = implicit_cast<TNode<Number>>(t2767);
    // ../../third_party/v8/builtins/array-sort.tq:556:5
    TNode<Smi> t2768 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>((*len_1019))));
    USE(implicit_cast<TNode<Smi>>(t2768));
    *_return_421 = implicit_cast<TNode<Smi>>(t2768);
    Goto(label_macro_end_1819);
  }
  BIND(label_macro_end_1819);
  return implicit_cast<TNode<Smi>>((*_return_421).value());
}

void ArrayBuiltinsFromDSLAssembler::CopyToTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<HeapObject> p_srcElements, TNode<Smi> p_srcPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_887) {
  Label label_macro_end_1820_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1820 = &label_macro_end_1820_impl;
  USE(label_macro_end_1820);
  // ../../third_party/v8/builtins/array-sort.tq:563:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:564:5
    Label label__True_888_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_888 = &label__True_888_impl;
    USE(label__True_888);
    Label label__False_889_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_889 = &label__False_889_impl;
    USE(label__False_889);
    int31_t t2769 = 0;
    TNode<Smi> t2770 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2769)));
    TNode<BoolT> t2771 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2770)));
    USE(implicit_cast<TNode<BoolT>>(t2771));
    Branch(implicit_cast<TNode<BoolT>>(t2771), label__True_888, label__False_889);
    BIND(label__False_889);
    Print("assert 'srcPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:564:5");
    Unreachable();
    BIND(label__True_888);
    // ../../third_party/v8/builtins/array-sort.tq:565:5
    Label label__True_890_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_890 = &label__True_890_impl;
    USE(label__True_890);
    Label label__False_891_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_891 = &label__False_891_impl;
    USE(label__False_891);
    int31_t t2772 = 0;
    TNode<Smi> t2773 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2772)));
    TNode<BoolT> t2774 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2773)));
    USE(implicit_cast<TNode<BoolT>>(t2774));
    Branch(implicit_cast<TNode<BoolT>>(t2774), label__True_890, label__False_891);
    BIND(label__False_891);
    Print("assert 'dstPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:565:5");
    Unreachable();
    BIND(label__True_890);
    // ../../third_party/v8/builtins/array-sort.tq:566:5
    Label label__True_892_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_892 = &label__True_892_impl;
    USE(label__True_892);
    Label label__False_893_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_893 = &label__False_893_impl;
    USE(label__False_893);
    TNode<Smi> t2775 = UncheckedCast<Smi>(GetReceiverLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2775));
    TNode<Smi> t2776 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2775), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2776));
    TNode<BoolT> t2777 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2776)));
    USE(implicit_cast<TNode<BoolT>>(t2777));
    Branch(implicit_cast<TNode<BoolT>>(t2777), label__True_892, label__False_893);
    BIND(label__False_893);
    Print("assert 'srcPos <= GetReceiverLengthProperty(context, sortState) - length' failed at ../../third_party/v8/builtins/array-sort.tq:566:5");
    Unreachable();
    BIND(label__True_892);
    // ../../third_party/v8/builtins/array-sort.tq:567:5
    Label label__True_894_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_894 = &label__True_894_impl;
    USE(label__True_894);
    Label label__False_895_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_895 = &label__False_895_impl;
    USE(label__False_895);
    TNode<Smi> t2778 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>(p_tempArray)));
    TNode<Smi> t2779 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2778), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2779));
    TNode<BoolT> t2780 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2779)));
    USE(implicit_cast<TNode<BoolT>>(t2780));
    Branch(implicit_cast<TNode<BoolT>>(t2780), label__True_894, label__False_895);
    BIND(label__False_895);
    Print("assert 'dstPos <= tempArray.length - length' failed at ../../third_party/v8/builtins/array-sort.tq:567:5");
    Unreachable();
    BIND(label__True_894);
    // ../../third_party/v8/builtins/array-sort.tq:569:5
    TVARIABLE(Smi, srcIdx_422_impl);
    auto srcIdx_422 = &srcIdx_422_impl;
    USE(srcIdx_422);
    *srcIdx_422 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:570:5
    TVARIABLE(Smi, dstIdx_423_impl);
    auto dstIdx_423 = &dstIdx_423_impl;
    USE(dstIdx_423);
    *dstIdx_423 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:571:5
    TNode<Smi> t2781 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2781));
    TVARIABLE(Smi, to_424_impl);
    auto to_424 = &to_424_impl;
    USE(to_424);
    *to_424 = implicit_cast<TNode<Smi>>(t2781);
    // ../../third_party/v8/builtins/array-sort.tq:573:5
    {
      Label label__True_896_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_896 = &label__True_896_impl;
      USE(label__True_896);
      Label label__False_897_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_897 = &label__False_897_impl;
      USE(label__False_897);
      Label label_header_1020_1821_impl(this, {dstIdx_423, srcIdx_422}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1020_1821 = &label_header_1020_1821_impl;
      USE(label_header_1020_1821);
      Goto(label_header_1020_1821);
      BIND(label_header_1020_1821);
      TNode<BoolT> t2782 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*srcIdx_422).value()), implicit_cast<TNode<Smi>>((*to_424).value())));
      USE(implicit_cast<TNode<BoolT>>(t2782));
      Branch(implicit_cast<TNode<BoolT>>(t2782), label__True_896, label__False_897);
      if (label__True_896->is_used())
      {
        BIND(label__True_896);
        // ../../third_party/v8/builtins/array-sort.tq:573:25
        {
          // ../../third_party/v8/builtins/array-sort.tq:574:7
          TNode<Smi> t2783 = implicit_cast<TNode<Smi>>((*srcIdx_422).value());
          USE(t2783);
          TNode<Smi> t2784 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2785 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*srcIdx_422).value()), implicit_cast<TNode<Smi>>(t2784)));
          *srcIdx_422 = implicit_cast<TNode<Smi>>(t2785);
          TNode<Object> t2786 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>(p_srcElements), implicit_cast<TNode<Smi>>(t2783), label_Bailout_887));
          USE(implicit_cast<TNode<Object>>(t2786));
          TVARIABLE(Object, element_425_impl);
          auto element_425 = &element_425_impl;
          USE(element_425);
          *element_425 = implicit_cast<TNode<Object>>(t2786);
          // ../../third_party/v8/builtins/array-sort.tq:577:7
          TNode<Smi> t2787 = implicit_cast<TNode<Smi>>((*dstIdx_423).value());
          USE(t2787);
          TNode<Smi> t2788 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2789 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dstIdx_423).value()), implicit_cast<TNode<Smi>>(t2788)));
          *dstIdx_423 = implicit_cast<TNode<Smi>>(t2789);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2787), implicit_cast<TNode<Object>>((*element_425).value()));
        }
        Goto(label_header_1020_1821);
      }
      BIND(label__False_897);
    }
  }
}

TF_BUILTIN(CopyFromTempArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_dstElements = UncheckedCast<HeapObject>(Parameter(Descriptor::kDstElements));
  USE(p_dstElements);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<FixedArray> p_tempArray = UncheckedCast<FixedArray>(Parameter(Descriptor::kTempArray));
  USE(p_tempArray);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:583:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:584:5
    Label label__True_898_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_898 = &label__True_898_impl;
    USE(label__True_898);
    Label label__False_899_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_899 = &label__False_899_impl;
    USE(label__False_899);
    int31_t t2790 = 0;
    TNode<Smi> t2791 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2790)));
    TNode<BoolT> t2792 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2791)));
    USE(implicit_cast<TNode<BoolT>>(t2792));
    Branch(implicit_cast<TNode<BoolT>>(t2792), label__True_898, label__False_899);
    BIND(label__False_899);
    Print("assert 'srcPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:584:5");
    Unreachable();
    BIND(label__True_898);
    // ../../third_party/v8/builtins/array-sort.tq:585:5
    Label label__True_900_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_900 = &label__True_900_impl;
    USE(label__True_900);
    Label label__False_901_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_901 = &label__False_901_impl;
    USE(label__False_901);
    int31_t t2793 = 0;
    TNode<Smi> t2794 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2793)));
    TNode<BoolT> t2795 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2794)));
    USE(implicit_cast<TNode<BoolT>>(t2795));
    Branch(implicit_cast<TNode<BoolT>>(t2795), label__True_900, label__False_901);
    BIND(label__False_901);
    Print("assert 'dstPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:585:5");
    Unreachable();
    BIND(label__True_900);
    // ../../third_party/v8/builtins/array-sort.tq:586:5
    Label label__True_902_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_902 = &label__True_902_impl;
    USE(label__True_902);
    Label label__False_903_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_903 = &label__False_903_impl;
    USE(label__False_903);
    TNode<Smi> t2796 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>(p_tempArray)));
    TNode<Smi> t2797 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2796), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2797));
    TNode<BoolT> t2798 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2797)));
    USE(implicit_cast<TNode<BoolT>>(t2798));
    Branch(implicit_cast<TNode<BoolT>>(t2798), label__True_902, label__False_903);
    BIND(label__False_903);
    Print("assert 'srcPos <= tempArray.length - length' failed at ../../third_party/v8/builtins/array-sort.tq:586:5");
    Unreachable();
    BIND(label__True_902);
    // ../../third_party/v8/builtins/array-sort.tq:587:5
    Label label__True_904_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_904 = &label__True_904_impl;
    USE(label__True_904);
    Label label__False_905_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_905 = &label__False_905_impl;
    USE(label__False_905);
    TNode<Smi> t2799 = UncheckedCast<Smi>(GetReceiverLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2799));
    TNode<Smi> t2800 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2799), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2800));
    TNode<BoolT> t2801 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2800)));
    USE(implicit_cast<TNode<BoolT>>(t2801));
    Branch(implicit_cast<TNode<BoolT>>(t2801), label__True_904, label__False_905);
    BIND(label__False_905);
    Print("assert 'dstPos <= GetReceiverLengthProperty(context, sortState) - length' failed at ../../third_party/v8/builtins/array-sort.tq:587:5");
    Unreachable();
    BIND(label__True_904);
    // ../../third_party/v8/builtins/array-sort.tq:589:5
    TNode<Code> t2802 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2802));
    TVARIABLE(Code, store_426_impl);
    auto store_426 = &store_426_impl;
    USE(store_426);
    *store_426 = implicit_cast<TNode<Code>>(t2802);
    // ../../third_party/v8/builtins/array-sort.tq:591:5
    TVARIABLE(Smi, srcIdx_427_impl);
    auto srcIdx_427 = &srcIdx_427_impl;
    USE(srcIdx_427);
    *srcIdx_427 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:592:5
    TVARIABLE(Smi, dstIdx_428_impl);
    auto dstIdx_428 = &dstIdx_428_impl;
    USE(dstIdx_428);
    *dstIdx_428 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:593:5
    TNode<Smi> t2803 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2803));
    TVARIABLE(Smi, to_429_impl);
    auto to_429 = &to_429_impl;
    USE(to_429);
    *to_429 = implicit_cast<TNode<Smi>>(t2803);
    // ../../third_party/v8/builtins/array-sort.tq:594:5
    {
      Label label_try_done_1021_1822_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1021_1822 = &label_try_done_1021_1822_impl;
      USE(label_try_done_1021_1822);
      Label label_Bailout_906_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_906 = &label_Bailout_906_impl;
      USE(label_Bailout_906);
      Label label_try_begin_1022_1823_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1022_1823 = &label_try_begin_1022_1823_impl;
      USE(label_try_begin_1022_1823);
      Goto(label_try_begin_1022_1823);
      if (label_try_begin_1022_1823->is_used())
      {
        BIND(label_try_begin_1022_1823);
        // ../../third_party/v8/builtins/array-sort.tq:594:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:595:7
          {
            Label label__True_907_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_907 = &label__True_907_impl;
            USE(label__True_907);
            Label label__False_908_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_908 = &label__False_908_impl;
            USE(label__False_908);
            Label label_header_1023_1824_impl(this, {dstIdx_428, srcIdx_427}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1023_1824 = &label_header_1023_1824_impl;
            USE(label_header_1023_1824);
            Goto(label_header_1023_1824);
            BIND(label_header_1023_1824);
            TNode<BoolT> t2804 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*srcIdx_427).value()), implicit_cast<TNode<Smi>>((*to_429).value())));
            USE(implicit_cast<TNode<BoolT>>(t2804));
            Branch(implicit_cast<TNode<BoolT>>(t2804), label__True_907, label__False_908);
            if (label__True_907->is_used())
            {
              BIND(label__True_907);
              // ../../third_party/v8/builtins/array-sort.tq:595:27
              {
                // ../../third_party/v8/builtins/array-sort.tq:596:9
                TNode<Smi> t2805 = implicit_cast<TNode<Smi>>((*dstIdx_428).value());
                USE(t2805);
                TNode<Smi> t2806 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2807 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dstIdx_428).value()), implicit_cast<TNode<Smi>>(t2806)));
                *dstIdx_428 = implicit_cast<TNode<Smi>>(t2807);
                TNode<Smi> t2808 = implicit_cast<TNode<Smi>>((*srcIdx_427).value());
                USE(t2808);
                TNode<Smi> t2809 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2810 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*srcIdx_427).value()), implicit_cast<TNode<Smi>>(t2809)));
                *srcIdx_427 = implicit_cast<TNode<Smi>>(t2810);
                TNode<Object> t2811 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2808)));
                CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_426).value()), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(t2805), implicit_cast<TNode<Object>>(t2811), label_Bailout_906);
              }
              Goto(label_header_1023_1824);
            }
            BIND(label__False_908);
          }
          // ../../third_party/v8/builtins/array-sort.tq:601:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_906->is_used())
      {
        BIND(label_Bailout_906);
        // ../../third_party/v8/builtins/array-sort.tq:603:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:604:7
          TNode<Smi> t2812 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2812));
          Return(implicit_cast<TNode<Smi>>(t2812));
        }
      }
    }
  }
}

TF_BUILTIN(CopyWithinSortArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:610:51
  {
    // ../../third_party/v8/builtins/array-sort.tq:611:5
    Label label__True_909_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_909 = &label__True_909_impl;
    USE(label__True_909);
    Label label__False_910_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_910 = &label__False_910_impl;
    USE(label__False_910);
    int31_t t2813 = 0;
    TNode<Smi> t2814 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2813)));
    TNode<BoolT> t2815 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2814)));
    USE(implicit_cast<TNode<BoolT>>(t2815));
    Branch(implicit_cast<TNode<BoolT>>(t2815), label__True_909, label__False_910);
    BIND(label__False_910);
    Print("assert 'srcPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:611:5");
    Unreachable();
    BIND(label__True_909);
    // ../../third_party/v8/builtins/array-sort.tq:612:5
    Label label__True_911_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_911 = &label__True_911_impl;
    USE(label__True_911);
    Label label__False_912_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_912 = &label__False_912_impl;
    USE(label__False_912);
    int31_t t2816 = 0;
    TNode<Smi> t2817 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2816)));
    TNode<BoolT> t2818 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2817)));
    USE(implicit_cast<TNode<BoolT>>(t2818));
    Branch(implicit_cast<TNode<BoolT>>(t2818), label__True_911, label__False_912);
    BIND(label__False_912);
    Print("assert 'dstPos >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:612:5");
    Unreachable();
    BIND(label__True_911);
    // ../../third_party/v8/builtins/array-sort.tq:613:5
    Label label__True_913_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_913 = &label__True_913_impl;
    USE(label__True_913);
    Label label__False_914_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_914 = &label__False_914_impl;
    USE(label__False_914);
    TNode<Smi> t2819 = UncheckedCast<Smi>(GetReceiverLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2819));
    TNode<Smi> t2820 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2819), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2820));
    TNode<BoolT> t2821 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(t2820)));
    USE(implicit_cast<TNode<BoolT>>(t2821));
    Branch(implicit_cast<TNode<BoolT>>(t2821), label__True_913, label__False_914);
    BIND(label__False_914);
    Print("assert 'srcPos <= GetReceiverLengthProperty(context, sortState) - length' failed at ../../third_party/v8/builtins/array-sort.tq:613:5");
    Unreachable();
    BIND(label__True_913);
    // ../../third_party/v8/builtins/array-sort.tq:614:5
    Label label__True_915_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_915 = &label__True_915_impl;
    USE(label__True_915);
    Label label__False_916_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_916 = &label__False_916_impl;
    USE(label__False_916);
    TNode<Smi> t2822 = UncheckedCast<Smi>(GetReceiverLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2822));
    TNode<Smi> t2823 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2822), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2823));
    TNode<BoolT> t2824 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(t2823)));
    USE(implicit_cast<TNode<BoolT>>(t2824));
    Branch(implicit_cast<TNode<BoolT>>(t2824), label__True_915, label__False_916);
    BIND(label__False_916);
    Print("assert 'dstPos <= GetReceiverLengthProperty(context, sortState) - length' failed at ../../third_party/v8/builtins/array-sort.tq:614:5");
    Unreachable();
    BIND(label__True_915);
    // ../../third_party/v8/builtins/array-sort.tq:616:5
    {
      Label label_try_done_1024_1825_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1024_1825 = &label_try_done_1024_1825_impl;
      USE(label_try_done_1024_1825);
      Label label_Bailout_917_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_917 = &label_Bailout_917_impl;
      USE(label_Bailout_917);
      Label label_try_begin_1025_1826_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1025_1826 = &label_try_begin_1025_1826_impl;
      USE(label_try_begin_1025_1826);
      Goto(label_try_begin_1025_1826);
      if (label_try_begin_1025_1826->is_used())
      {
        BIND(label_try_begin_1025_1826);
        // ../../third_party/v8/builtins/array-sort.tq:616:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:617:7
          TNode<Code> t2825 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2825));
          TVARIABLE(Code, load_430_impl);
          auto load_430 = &load_430_impl;
          USE(load_430);
          *load_430 = implicit_cast<TNode<Code>>(t2825);
          // ../../third_party/v8/builtins/array-sort.tq:618:7
          TNode<Code> t2826 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2826));
          TVARIABLE(Code, store_431_impl);
          auto store_431 = &store_431_impl;
          USE(store_431);
          *store_431 = implicit_cast<TNode<Code>>(t2826);
          // ../../third_party/v8/builtins/array-sort.tq:620:7
          {
            Label label__True_918_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_918 = &label__True_918_impl;
            USE(label__True_918);
            Label label__False_919_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_919 = &label__False_919_impl;
            USE(label__False_919);
            Label label_if_done_label_1026_1827_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1026_1827 = &label_if_done_label_1026_1827_impl;
            USE(label_if_done_label_1026_1827);
            TNode<BoolT> t2827 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos)));
            USE(implicit_cast<TNode<BoolT>>(t2827));
            Branch(implicit_cast<TNode<BoolT>>(t2827), label__True_918, label__False_919);
            if (label__True_918->is_used())
            {
              BIND(label__True_918);
              // ../../third_party/v8/builtins/array-sort.tq:620:28
              {
                // ../../third_party/v8/builtins/array-sort.tq:621:9
                TNode<Smi> t2828 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2828));
                int31_t t2829 = 1;
                TNode<Smi> t2830 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2829)));
                TNode<Smi> t2831 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2828), implicit_cast<TNode<Smi>>(t2830)));
                USE(implicit_cast<TNode<Smi>>(t2831));
                TVARIABLE(Smi, srcIdx_432_impl);
                auto srcIdx_432 = &srcIdx_432_impl;
                USE(srcIdx_432);
                *srcIdx_432 = implicit_cast<TNode<Smi>>(t2831);
                // ../../third_party/v8/builtins/array-sort.tq:622:9
                TNode<Smi> t2832 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2832));
                int31_t t2833 = 1;
                TNode<Smi> t2834 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2833)));
                TNode<Smi> t2835 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2832), implicit_cast<TNode<Smi>>(t2834)));
                USE(implicit_cast<TNode<Smi>>(t2835));
                TVARIABLE(Smi, dstIdx_433_impl);
                auto dstIdx_433 = &dstIdx_433_impl;
                USE(dstIdx_433);
                *dstIdx_433 = implicit_cast<TNode<Smi>>(t2835);
                // ../../third_party/v8/builtins/array-sort.tq:623:9
                {
                  Label label__True_920_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_920 = &label__True_920_impl;
                  USE(label__True_920);
                  Label label__False_921_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_921 = &label__False_921_impl;
                  USE(label__False_921);
                  Label label_header_1027_1828_impl(this, {dstIdx_433, srcIdx_432}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1027_1828 = &label_header_1027_1828_impl;
                  USE(label_header_1027_1828);
                  Goto(label_header_1027_1828);
                  BIND(label_header_1027_1828);
                  TNode<BoolT> t2836 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*srcIdx_432).value()), implicit_cast<TNode<Smi>>(p_srcPos)));
                  USE(implicit_cast<TNode<BoolT>>(t2836));
                  Branch(implicit_cast<TNode<BoolT>>(t2836), label__True_920, label__False_921);
                  if (label__True_920->is_used())
                  {
                    BIND(label__True_920);
                    // ../../third_party/v8/builtins/array-sort.tq:623:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:624:11
                      TNode<Smi> t2837 = implicit_cast<TNode<Smi>>((*srcIdx_432).value());
                      USE(t2837);
                      TNode<Smi> t2838 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2839 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*srcIdx_432).value()), implicit_cast<TNode<Smi>>(t2838)));
                      *srcIdx_432 = implicit_cast<TNode<Smi>>(t2839);
                      TNode<Smi> t2840 = implicit_cast<TNode<Smi>>((*dstIdx_433).value());
                      USE(t2840);
                      TNode<Smi> t2841 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2842 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dstIdx_433).value()), implicit_cast<TNode<Smi>>(t2841)));
                      *dstIdx_433 = implicit_cast<TNode<Smi>>(t2842);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_430).value()), implicit_cast<TNode<Code>>((*store_431).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2837), implicit_cast<TNode<Smi>>(t2840), label_Bailout_917);
                    }
                    Goto(label_header_1027_1828);
                  }
                  BIND(label__False_921);
                }
              }
              Goto(label_if_done_label_1026_1827);
            }
            if (label__False_919->is_used())
            {
              BIND(label__False_919);
              // ../../third_party/v8/builtins/array-sort.tq:628:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:629:9
                TVARIABLE(Smi, srcIdx_434_impl);
                auto srcIdx_434 = &srcIdx_434_impl;
                USE(srcIdx_434);
                *srcIdx_434 = implicit_cast<TNode<Smi>>(p_srcPos);
                // ../../third_party/v8/builtins/array-sort.tq:630:9
                TVARIABLE(Smi, dstIdx_435_impl);
                auto dstIdx_435 = &dstIdx_435_impl;
                USE(dstIdx_435);
                *dstIdx_435 = implicit_cast<TNode<Smi>>(p_dstPos);
                // ../../third_party/v8/builtins/array-sort.tq:631:9
                TNode<Smi> t2843 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2843));
                TVARIABLE(Smi, to_436_impl);
                auto to_436 = &to_436_impl;
                USE(to_436);
                *to_436 = implicit_cast<TNode<Smi>>(t2843);
                // ../../third_party/v8/builtins/array-sort.tq:632:9
                {
                  Label label__True_922_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_922 = &label__True_922_impl;
                  USE(label__True_922);
                  Label label__False_923_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_923 = &label__False_923_impl;
                  USE(label__False_923);
                  Label label_header_1028_1829_impl(this, {dstIdx_435, srcIdx_434}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1028_1829 = &label_header_1028_1829_impl;
                  USE(label_header_1028_1829);
                  Goto(label_header_1028_1829);
                  BIND(label_header_1028_1829);
                  TNode<BoolT> t2844 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*srcIdx_434).value()), implicit_cast<TNode<Smi>>((*to_436).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2844));
                  Branch(implicit_cast<TNode<BoolT>>(t2844), label__True_922, label__False_923);
                  if (label__True_922->is_used())
                  {
                    BIND(label__True_922);
                    // ../../third_party/v8/builtins/array-sort.tq:632:29
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:633:11
                      TNode<Smi> t2845 = implicit_cast<TNode<Smi>>((*srcIdx_434).value());
                      USE(t2845);
                      TNode<Smi> t2846 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2847 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*srcIdx_434).value()), implicit_cast<TNode<Smi>>(t2846)));
                      *srcIdx_434 = implicit_cast<TNode<Smi>>(t2847);
                      TNode<Smi> t2848 = implicit_cast<TNode<Smi>>((*dstIdx_435).value());
                      USE(t2848);
                      TNode<Smi> t2849 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2850 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dstIdx_435).value()), implicit_cast<TNode<Smi>>(t2849)));
                      *dstIdx_435 = implicit_cast<TNode<Smi>>(t2850);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_430).value()), implicit_cast<TNode<Code>>((*store_431).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2845), implicit_cast<TNode<Smi>>(t2848), label_Bailout_917);
                    }
                    Goto(label_header_1028_1829);
                  }
                  BIND(label__False_923);
                }
              }
              Goto(label_if_done_label_1026_1827);
            }
            BIND(label_if_done_label_1026_1827);
          }
          // ../../third_party/v8/builtins/array-sort.tq:638:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_917->is_used())
      {
        BIND(label_Bailout_917);
        // ../../third_party/v8/builtins/array-sort.tq:640:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:641:7
          TNode<Smi> t2851 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2851));
          Return(implicit_cast<TNode<Smi>>(t2851));
        }
      }
    }
  }
}

TF_BUILTIN(BinaryInsertionSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_low = UncheckedCast<Smi>(Parameter(Descriptor::kLow));
  USE(p_low);
  TNode<Smi> p_startArg = UncheckedCast<Smi>(Parameter(Descriptor::kStartArg));
  USE(p_startArg);
  TNode<Smi> p_high = UncheckedCast<Smi>(Parameter(Descriptor::kHigh));
  USE(p_high);
  // ../../third_party/v8/builtins/array-sort.tq:657:23
  {
    // ../../third_party/v8/builtins/array-sort.tq:658:5
    Label label__True_924_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_924 = &label__True_924_impl;
    USE(label__True_924);
    Label label__False_925_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_925 = &label__False_925_impl;
    USE(label__False_925);
    Label label__True_926_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_926 = &label__True_926_impl;
    USE(label__True_926);
    TNode<BoolT> t2852 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_low), implicit_cast<TNode<Smi>>(p_startArg)));
    USE(implicit_cast<TNode<BoolT>>(t2852));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t2852), label__False_925);
    TNode<BoolT> t2853 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(p_startArg), implicit_cast<TNode<Smi>>(p_high)));
    USE(implicit_cast<TNode<BoolT>>(t2853));
Branch(implicit_cast<TNode<BoolT>>(t2853), label__True_924, label__False_925);
    BIND(label__False_925);
    Print("assert 'low <= startArg && startArg <= high' failed at ../../third_party/v8/builtins/array-sort.tq:658:5");
    Unreachable();
    BIND(label__True_924);
    // ../../third_party/v8/builtins/array-sort.tq:660:5
    {
      Label label_try_done_1029_1830_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1029_1830 = &label_try_done_1029_1830_impl;
      USE(label_try_done_1029_1830);
      Label label_Bailout_927_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_927 = &label_Bailout_927_impl;
      USE(label_Bailout_927);
      Label label_try_begin_1030_1831_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1030_1831 = &label_try_begin_1030_1831_impl;
      USE(label_try_begin_1030_1831);
      Goto(label_try_begin_1030_1831);
      if (label_try_begin_1030_1831->is_used())
      {
        BIND(label_try_begin_1030_1831);
        // ../../third_party/v8/builtins/array-sort.tq:660:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:661:7
          TNode<HeapObject> t2854 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2854));
          TVARIABLE(HeapObject, elements_437_impl);
          auto elements_437 = &elements_437_impl;
          USE(elements_437);
          *elements_437 = implicit_cast<TNode<HeapObject>>(t2854);
          // ../../third_party/v8/builtins/array-sort.tq:663:7
          TNode<Code> t2855 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2855));
          TNode<Code> load_1031_impl;
          auto load_1031 = &load_1031_impl;
          USE(load_1031);
          *load_1031 = implicit_cast<TNode<Code>>(t2855);
          // ../../third_party/v8/builtins/array-sort.tq:664:7
          TNode<Code> t2856 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2856));
          TNode<Code> store_1032_impl;
          auto store_1032 = &store_1032_impl;
          USE(store_1032);
          *store_1032 = implicit_cast<TNode<Code>>(t2856);
          // ../../third_party/v8/builtins/array-sort.tq:666:7
          auto t2857 = [=]() {
            int31_t t2859 = 1;
            TNode<Smi> t2860 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2859)));
            TNode<Smi> t2861 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_startArg), implicit_cast<TNode<Smi>>(t2860)));
            USE(implicit_cast<TNode<Smi>>(t2861));
            return implicit_cast<TNode<Smi>>(t2861);
          };
          auto t2858 = [=]() {
            return implicit_cast<TNode<Smi>>(p_startArg);
          };
          TVARIABLE(Smi, t2862_1033_impl);
          auto t2862_1033 = &t2862_1033_impl;
          USE(t2862_1033);
          {
            Label label__True_928_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_928 = &label__True_928_impl;
            USE(label__True_928);
            Label label__False_929_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_929 = &label__False_929_impl;
            USE(label__False_929);
            Label label__done_1034_1832_impl(this, {t2862_1033}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__done_1034_1832 = &label__done_1034_1832_impl;
            USE(label__done_1034_1832);
            TNode<BoolT> t2863 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_low), implicit_cast<TNode<Smi>>(p_startArg)));
            USE(implicit_cast<TNode<BoolT>>(t2863));
            Branch(implicit_cast<TNode<BoolT>>(t2863), label__True_928, label__False_929);
            BIND(label__True_928);
                        *t2862_1033 = implicit_cast<TNode<Smi>>(t2857());
            Goto(label__done_1034_1832);
            BIND(label__False_929);
                        *t2862_1033 = implicit_cast<TNode<Smi>>(t2858());
            Goto(label__done_1034_1832);
            BIND(label__done_1034_1832);
          }
          TVARIABLE(Smi, start_438_impl);
          auto start_438 = &start_438_impl;
          USE(start_438);
          *start_438 = implicit_cast<TNode<Smi>>((*t2862_1033).value());
          // ../../third_party/v8/builtins/array-sort.tq:668:7
          Label label__True_930_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_930 = &label__True_930_impl;
          USE(label__True_930);
          Label label__False_931_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_931 = &label__False_931_impl;
          USE(label__False_931);
          Label label_header_1035_1833_impl(this, {elements_437, start_438}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_1035_1833 = &label_header_1035_1833_impl;
          USE(label_header_1035_1833);
          Goto(label_header_1035_1833);
          BIND(label_header_1035_1833);
          Label label_action_1036_1834_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_action_1036_1834 = &label_action_1036_1834_impl;
          USE(label_action_1036_1834);
          TNode<BoolT> t2864 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*start_438).value()), implicit_cast<TNode<Smi>>(p_high)));
          USE(implicit_cast<TNode<BoolT>>(t2864));
          Branch(implicit_cast<TNode<BoolT>>(t2864), label__True_930, label__False_931);
          if (label__True_930->is_used())
          {
            BIND(label__True_930);
            // ../../third_party/v8/builtins/array-sort.tq:668:37
            {
              // ../../third_party/v8/builtins/array-sort.tq:670:9
              TVARIABLE(Smi, left_439_impl);
              auto left_439 = &left_439_impl;
              USE(left_439);
              *left_439 = implicit_cast<TNode<Smi>>(p_low);
              // ../../third_party/v8/builtins/array-sort.tq:671:9
              TVARIABLE(Smi, right_440_impl);
              auto right_440 = &right_440_impl;
              USE(right_440);
              *right_440 = implicit_cast<TNode<Smi>>((*start_438).value());
              // ../../third_party/v8/builtins/array-sort.tq:673:9
              TNode<Object> t2865 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1031)), implicit_cast<TNode<HeapObject>>((*elements_437).value()), implicit_cast<TNode<Smi>>((*right_440).value()), label_Bailout_927));
              USE(implicit_cast<TNode<Object>>(t2865));
              TNode<Object> pivot_1037_impl;
              auto pivot_1037 = &pivot_1037_impl;
              USE(pivot_1037);
              *pivot_1037 = implicit_cast<TNode<Object>>(t2865);
              // ../../third_party/v8/builtins/array-sort.tq:680:9
              Label label__True_932_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_932 = &label__True_932_impl;
              USE(label__True_932);
              Label label__False_933_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_933 = &label__False_933_impl;
              USE(label__False_933);
              TNode<BoolT> t2866 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*left_439).value()), implicit_cast<TNode<Smi>>((*right_440).value())));
              USE(implicit_cast<TNode<BoolT>>(t2866));
              Branch(implicit_cast<TNode<BoolT>>(t2866), label__True_932, label__False_933);
              BIND(label__False_933);
              Print("assert 'left < right' failed at ../../third_party/v8/builtins/array-sort.tq:680:9");
              Unreachable();
              BIND(label__True_932);
              // ../../third_party/v8/builtins/array-sort.tq:683:9
              {
                Label label__True_934_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_934 = &label__True_934_impl;
                USE(label__True_934);
                Label label__False_935_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_935 = &label__False_935_impl;
                USE(label__False_935);
                Label label_header_1038_1835_impl(this, {elements_437, left_439, right_440}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_header_1038_1835 = &label_header_1038_1835_impl;
                USE(label_header_1038_1835);
                Goto(label_header_1038_1835);
                BIND(label_header_1038_1835);
                TNode<BoolT> t2867 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*left_439).value()), implicit_cast<TNode<Smi>>((*right_440).value())));
                USE(implicit_cast<TNode<BoolT>>(t2867));
                Branch(implicit_cast<TNode<BoolT>>(t2867), label__True_934, label__False_935);
                if (label__True_934->is_used())
                {
                  BIND(label__True_934);
                  // ../../third_party/v8/builtins/array-sort.tq:683:30
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:684:11
                    TNode<Smi> t2868 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*right_440).value()), implicit_cast<TNode<Smi>>((*left_439).value())));
                    USE(implicit_cast<TNode<Smi>>(t2868));
                    int31_t t2869 = 1;
                    TNode<Smi> t2870 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2868), implicit_cast<int31_t>(t2869)));
                    USE(implicit_cast<TNode<Smi>>(t2870));
                    TNode<Smi> t2871 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*left_439).value()), implicit_cast<TNode<Smi>>(t2870)));
                    USE(implicit_cast<TNode<Smi>>(t2871));
                    TNode<Smi> mid_1039_impl;
                    auto mid_1039 = &mid_1039_impl;
                    USE(mid_1039);
                    *mid_1039 = implicit_cast<TNode<Smi>>(t2871);
                    // ../../third_party/v8/builtins/array-sort.tq:685:11
                    TNode<Object> t2872 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1031)), implicit_cast<TNode<HeapObject>>((*elements_437).value()), implicit_cast<TNode<Smi>>((*mid_1039)), label_Bailout_927));
                    USE(implicit_cast<TNode<Object>>(t2872));
                    TNode<Object> midElement_1040_impl;
                    auto midElement_1040 = &midElement_1040_impl;
                    USE(midElement_1040);
                    *midElement_1040 = implicit_cast<TNode<Object>>(t2872);
                    // ../../third_party/v8/builtins/array-sort.tq:688:11
                    TNode<Number> t2873 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*pivot_1037)), implicit_cast<TNode<Object>>((*midElement_1040)), label_Bailout_927));
                    USE(implicit_cast<TNode<Number>>(t2873));
                    TNode<Number> order_1041_impl;
                    auto order_1041 = &order_1041_impl;
                    USE(order_1041);
                    *order_1041 = implicit_cast<TNode<Number>>(t2873);
                    // ../../third_party/v8/builtins/array-sort.tq:691:11
                    TNode<HeapObject> t2874 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                    USE(implicit_cast<TNode<HeapObject>>(t2874));
                    *elements_437 = implicit_cast<TNode<HeapObject>>(t2874);
                    // ../../third_party/v8/builtins/array-sort.tq:693:11
                    {
                      Label label__True_936_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_936 = &label__True_936_impl;
                      USE(label__True_936);
                      Label label__False_937_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_937 = &label__False_937_impl;
                      USE(label__False_937);
                      Label label_if_done_label_1042_1836_impl(this, {left_439, right_440}, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label_if_done_label_1042_1836 = &label_if_done_label_1042_1836_impl;
                      USE(label_if_done_label_1042_1836);
                      int31_t t2875 = 0;
                      TNode<Number> t2876 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2875)));
                      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_1041)), implicit_cast<TNode<Number>>(t2876), label__True_936, label__False_937);
                      if (label__True_936->is_used())
                      {
                        BIND(label__True_936);
                        // ../../third_party/v8/builtins/array-sort.tq:693:26
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:694:13
                          *right_440 = implicit_cast<TNode<Smi>>((*mid_1039));
                        }
                        Goto(label_if_done_label_1042_1836);
                      }
                      if (label__False_937->is_used())
                      {
                        BIND(label__False_937);
                        // ../../third_party/v8/builtins/array-sort.tq:695:18
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:696:13
                          int31_t t2877 = 1;
                          TNode<Smi> t2878 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2877)));
                          TNode<Smi> t2879 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*mid_1039)), implicit_cast<TNode<Smi>>(t2878)));
                          USE(implicit_cast<TNode<Smi>>(t2879));
                          *left_439 = implicit_cast<TNode<Smi>>(t2879);
                        }
                        Goto(label_if_done_label_1042_1836);
                      }
                      BIND(label_if_done_label_1042_1836);
                    }
                  }
                  Goto(label_header_1038_1835);
                }
                BIND(label__False_935);
              }
              // ../../third_party/v8/builtins/array-sort.tq:699:9
              Label label__True_938_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_938 = &label__True_938_impl;
              USE(label__True_938);
              Label label__False_939_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_939 = &label__False_939_impl;
              USE(label__False_939);
              TNode<BoolT> t2880 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*left_439).value()), implicit_cast<TNode<Smi>>((*right_440).value())));
              USE(implicit_cast<TNode<BoolT>>(t2880));
              Branch(implicit_cast<TNode<BoolT>>(t2880), label__True_938, label__False_939);
              BIND(label__False_939);
              Print("assert 'left == right' failed at ../../third_party/v8/builtins/array-sort.tq:699:9");
              Unreachable();
              BIND(label__True_938);
              // ../../third_party/v8/builtins/array-sort.tq:709:9
              TVARIABLE(Smi, p_441_impl);
              auto p_441 = &p_441_impl;
              USE(p_441);
              *p_441 = implicit_cast<TNode<Smi>>((*start_438).value());
              Label label__True_940_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_940 = &label__True_940_impl;
              USE(label__True_940);
              Label label__False_941_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_941 = &label__False_941_impl;
              USE(label__False_941);
              Label label_header_1043_1837_impl(this, {p_441}, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_header_1043_1837 = &label_header_1043_1837_impl;
              USE(label_header_1043_1837);
              Goto(label_header_1043_1837);
              BIND(label_header_1043_1837);
              Label label_action_1044_1838_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_action_1044_1838 = &label_action_1044_1838_impl;
              USE(label_action_1044_1838);
              TNode<BoolT> t2881 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*p_441).value()), implicit_cast<TNode<Smi>>((*left_439).value())));
              USE(implicit_cast<TNode<BoolT>>(t2881));
              Branch(implicit_cast<TNode<BoolT>>(t2881), label__True_940, label__False_941);
              if (label__True_940->is_used())
              {
                BIND(label__True_940);
                // ../../third_party/v8/builtins/array-sort.tq:709:49
                {
                  // ../../third_party/v8/builtins/array-sort.tq:710:11
                  int31_t t2882 = 1;
                  TNode<Smi> t2883 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2882)));
                  TNode<Smi> t2884 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_441).value()), implicit_cast<TNode<Smi>>(t2883)));
                  USE(implicit_cast<TNode<Smi>>(t2884));
                  CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1031)), implicit_cast<TNode<Code>>((*store_1032)), implicit_cast<TNode<HeapObject>>((*elements_437).value()), implicit_cast<TNode<Smi>>(t2884), implicit_cast<TNode<Smi>>((*p_441).value()), label_Bailout_927);
                }
                Goto(label_action_1044_1838);
              }
              {
                BIND(label_action_1044_1838);
                TNode<Smi> t2885 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2886 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_441).value()), implicit_cast<TNode<Smi>>(t2885)));
                *p_441 = implicit_cast<TNode<Smi>>(t2886);
                Goto(label_header_1043_1837);
              }
              BIND(label__False_941);
              // ../../third_party/v8/builtins/array-sort.tq:713:9
              CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1032)), implicit_cast<TNode<HeapObject>>((*elements_437).value()), implicit_cast<TNode<Smi>>((*left_439).value()), implicit_cast<TNode<Object>>((*pivot_1037)), label_Bailout_927);
            }
            Goto(label_action_1036_1834);
          }
          {
            BIND(label_action_1036_1834);
            TNode<Smi> t2887 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2888 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*start_438).value()), implicit_cast<TNode<Smi>>(t2887)));
            *start_438 = implicit_cast<TNode<Smi>>(t2888);
            Goto(label_header_1035_1833);
          }
          BIND(label__False_931);
          // ../../third_party/v8/builtins/array-sort.tq:716:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_927->is_used())
      {
        BIND(label_Bailout_927);
        // ../../third_party/v8/builtins/array-sort.tq:718:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:719:7
          TNode<Smi> t2889 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2889));
          Return(implicit_cast<TNode<Smi>>(t2889));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CountAndMakeRun(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high, Label* label_Bailout_942) {
  TVARIABLE(Smi, _return_442_impl);
  auto _return_442 = &_return_442_impl;
  USE(_return_442);
  Label label_macro_end_1839_impl(this, {_return_442}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1839 = &label_macro_end_1839_impl;
  USE(label_macro_end_1839);
  // ../../third_party/v8/builtins/array-sort.tq:742:22
  {
    // ../../third_party/v8/builtins/array-sort.tq:743:5
    Label label__True_943_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_943 = &label__True_943_impl;
    USE(label__True_943);
    Label label__False_944_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_944 = &label__False_944_impl;
    USE(label__False_944);
    TNode<BoolT> t2890 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(p_high)));
    USE(implicit_cast<TNode<BoolT>>(t2890));
    Branch(implicit_cast<TNode<BoolT>>(t2890), label__True_943, label__False_944);
    BIND(label__False_944);
    Print("assert 'lowArg < high' failed at ../../third_party/v8/builtins/array-sort.tq:743:5");
    Unreachable();
    BIND(label__True_943);
    // ../../third_party/v8/builtins/array-sort.tq:745:5
    TNode<HeapObject> t2891 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2891));
    TVARIABLE(HeapObject, elements_443_impl);
    auto elements_443 = &elements_443_impl;
    USE(elements_443);
    *elements_443 = implicit_cast<TNode<HeapObject>>(t2891);
    // ../../third_party/v8/builtins/array-sort.tq:746:5
    TNode<Code> t2892 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2892));
    TNode<Code> load_1045_impl;
    auto load_1045 = &load_1045_impl;
    USE(load_1045);
    *load_1045 = implicit_cast<TNode<Code>>(t2892);
    // ../../third_party/v8/builtins/array-sort.tq:747:5
    TNode<Code> t2893 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2893));
    TNode<Code> store_1046_impl;
    auto store_1046 = &store_1046_impl;
    USE(store_1046);
    *store_1046 = implicit_cast<TNode<Code>>(t2893);
    // ../../third_party/v8/builtins/array-sort.tq:749:5
    int31_t t2894 = 1;
    TNode<Smi> t2895 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2894)));
    TNode<Smi> t2896 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2895)));
    USE(implicit_cast<TNode<Smi>>(t2896));
    TVARIABLE(Smi, low_444_impl);
    auto low_444 = &low_444_impl;
    USE(low_444);
    *low_444 = implicit_cast<TNode<Smi>>(t2896);
    // ../../third_party/v8/builtins/array-sort.tq:750:5
    {
      Label label__True_945_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_945 = &label__True_945_impl;
      USE(label__True_945);
      Label label__False_946_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_946 = &label__False_946_impl;
      USE(label__False_946);
      TNode<BoolT> t2897 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*low_444).value()), implicit_cast<TNode<Smi>>(p_high)));
      USE(implicit_cast<TNode<BoolT>>(t2897));
      Branch(implicit_cast<TNode<BoolT>>(t2897), label__True_945, label__False_946);
      if (label__True_945->is_used())
      {
        BIND(label__True_945);
        // ../../third_party/v8/builtins/array-sort.tq:750:22
        int31_t t2898 = 1;
        TNode<Smi> t2899 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2898)));
        *_return_442 = implicit_cast<TNode<Smi>>(t2899);
        Goto(label_macro_end_1839);
      }
      BIND(label__False_946);
    }
    // ../../third_party/v8/builtins/array-sort.tq:752:5
    int31_t t2900 = 2;
    TVARIABLE(Smi, runLength_445_impl);
    auto runLength_445 = &runLength_445_impl;
    USE(runLength_445);
    TNode<Smi> t2901 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2900)));
    *runLength_445 = implicit_cast<TNode<Smi>>(t2901);
    // ../../third_party/v8/builtins/array-sort.tq:754:5
    TNode<Object> t2902 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1045)), implicit_cast<TNode<HeapObject>>((*elements_443).value()), implicit_cast<TNode<Smi>>((*low_444).value()), label_Bailout_942));
    USE(implicit_cast<TNode<Object>>(t2902));
    TNode<Object> elementLow_1047_impl;
    auto elementLow_1047 = &elementLow_1047_impl;
    USE(elementLow_1047);
    *elementLow_1047 = implicit_cast<TNode<Object>>(t2902);
    // ../../third_party/v8/builtins/array-sort.tq:756:5
    int31_t t2903 = 1;
    TNode<Smi> t2904 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2903)));
    TNode<Smi> t2905 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*low_444).value()), implicit_cast<TNode<Smi>>(t2904)));
    USE(implicit_cast<TNode<Smi>>(t2905));
    TNode<Object> t2906 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1045)), implicit_cast<TNode<HeapObject>>((*elements_443).value()), implicit_cast<TNode<Smi>>(t2905), label_Bailout_942));
    USE(implicit_cast<TNode<Object>>(t2906));
    TNode<Object> elementLowPred_1048_impl;
    auto elementLowPred_1048 = &elementLowPred_1048_impl;
    USE(elementLowPred_1048);
    *elementLowPred_1048 = implicit_cast<TNode<Object>>(t2906);
    // ../../third_party/v8/builtins/array-sort.tq:758:5
    TNode<Number> t2907 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*elementLow_1047)), implicit_cast<TNode<Object>>((*elementLowPred_1048)), label_Bailout_942));
    USE(implicit_cast<TNode<Number>>(t2907));
    TVARIABLE(Number, order_446_impl);
    auto order_446 = &order_446_impl;
    USE(order_446);
    *order_446 = implicit_cast<TNode<Number>>(t2907);
    // ../../third_party/v8/builtins/array-sort.tq:761:5
    TNode<HeapObject> t2908 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2908));
    *elements_443 = implicit_cast<TNode<HeapObject>>(t2908);
    // ../../third_party/v8/builtins/array-sort.tq:766:5
    auto t2909 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2910 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2911_1049_impl);
    auto t2911_1049 = &t2911_1049_impl;
    USE(t2911_1049);
    {
      Label label__True_947_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_947 = &label__True_947_impl;
      USE(label__True_947);
      Label label__False_948_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_948 = &label__False_948_impl;
      USE(label__False_948);
      Label label__done_1050_1840_impl(this, {t2911_1049}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_1050_1840 = &label__done_1050_1840_impl;
      USE(label__done_1050_1840);
      int31_t t2912 = 0;
      TNode<Number> t2913 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2912)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_446).value()), implicit_cast<TNode<Number>>(t2913), label__True_947, label__False_948);
      BIND(label__True_947);
            TNode<BoolT> t2914 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2909())));
      *t2911_1049 = implicit_cast<TNode<BoolT>>(t2914);
      Goto(label__done_1050_1840);
      BIND(label__False_948);
            TNode<BoolT> t2915 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(t2910())));
      *t2911_1049 = implicit_cast<TNode<BoolT>>(t2915);
      Goto(label__done_1050_1840);
      BIND(label__done_1050_1840);
    }
    TNode<BoolT> isDescending_1051_impl;
    auto isDescending_1051 = &isDescending_1051_impl;
    USE(isDescending_1051);
    *isDescending_1051 = implicit_cast<TNode<BoolT>>((*t2911_1049).value());
    // ../../third_party/v8/builtins/array-sort.tq:768:5
    TVARIABLE(Object, previousElement_447_impl);
    auto previousElement_447 = &previousElement_447_impl;
    USE(previousElement_447);
    *previousElement_447 = implicit_cast<TNode<Object>>((*elementLow_1047));
    // ../../third_party/v8/builtins/array-sort.tq:769:5
    int31_t t2916 = 1;
    TNode<Smi> t2917 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2916)));
    TNode<Smi> t2918 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_444).value()), implicit_cast<TNode<Smi>>(t2917)));
    USE(implicit_cast<TNode<Smi>>(t2918));
    TVARIABLE(Smi, idx_448_impl);
    auto idx_448 = &idx_448_impl;
    USE(idx_448);
    *idx_448 = implicit_cast<TNode<Smi>>(t2918);
    Label label__True_949_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_949 = &label__True_949_impl;
    USE(label__True_949);
    Label label__False_950_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_950 = &label__False_950_impl;
    USE(label__False_950);
    Label label_header_1052_1841_impl(this, {elements_443, idx_448, order_446, previousElement_447, runLength_445}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_1052_1841 = &label_header_1052_1841_impl;
    USE(label_header_1052_1841);
    Goto(label_header_1052_1841);
    BIND(label_header_1052_1841);
    Label label_action_1053_1842_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_1053_1842 = &label_action_1053_1842_impl;
    USE(label_action_1053_1842);
    TNode<BoolT> t2919 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_448).value()), implicit_cast<TNode<Smi>>(p_high)));
    USE(implicit_cast<TNode<BoolT>>(t2919));
    Branch(implicit_cast<TNode<BoolT>>(t2919), label__True_949, label__False_950);
    if (label__True_949->is_used())
    {
      BIND(label__True_949);
      // ../../third_party/v8/builtins/array-sort.tq:769:53
      {
        // ../../third_party/v8/builtins/array-sort.tq:770:7
        TNode<Object> t2920 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1045)), implicit_cast<TNode<HeapObject>>((*elements_443).value()), implicit_cast<TNode<Smi>>((*idx_448).value()), label_Bailout_942));
        USE(implicit_cast<TNode<Object>>(t2920));
        TNode<Object> currentElement_1054_impl;
        auto currentElement_1054 = &currentElement_1054_impl;
        USE(currentElement_1054);
        *currentElement_1054 = implicit_cast<TNode<Object>>(t2920);
        // ../../third_party/v8/builtins/array-sort.tq:772:7
        TNode<Number> t2921 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*currentElement_1054)), implicit_cast<TNode<Object>>((*previousElement_447).value()), label_Bailout_942));
        USE(implicit_cast<TNode<Number>>(t2921));
        *order_446 = implicit_cast<TNode<Number>>(t2921);
        // ../../third_party/v8/builtins/array-sort.tq:774:7
        TNode<HeapObject> t2922 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
        USE(implicit_cast<TNode<HeapObject>>(t2922));
        *elements_443 = implicit_cast<TNode<HeapObject>>(t2922);
        // ../../third_party/v8/builtins/array-sort.tq:776:7
        {
          Label label__True_951_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_951 = &label__True_951_impl;
          USE(label__True_951);
          Label label__False_952_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_952 = &label__False_952_impl;
          USE(label__False_952);
          Label label_if_done_label_1055_1843_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_if_done_label_1055_1843 = &label_if_done_label_1055_1843_impl;
          USE(label_if_done_label_1055_1843);
          Branch(implicit_cast<TNode<BoolT>>((*isDescending_1051)), label__True_951, label__False_952);
          if (label__True_951->is_used())
          {
            BIND(label__True_951);
            // ../../third_party/v8/builtins/array-sort.tq:776:25
            {
              // ../../third_party/v8/builtins/array-sort.tq:777:9
              {
                Label label__True_953_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_953 = &label__True_953_impl;
                USE(label__True_953);
                Label label__False_954_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_954 = &label__False_954_impl;
                USE(label__False_954);
                int31_t t2923 = 0;
                TNode<Number> t2924 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2923)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_446).value()), implicit_cast<TNode<Number>>(t2924), label__True_953, label__False_954);
                if (label__True_953->is_used())
                {
                  BIND(label__True_953);
                  // ../../third_party/v8/builtins/array-sort.tq:777:25
                  Goto(label__False_950);
                }
                BIND(label__False_954);
              }
            }
            Goto(label_if_done_label_1055_1843);
          }
          if (label__False_952->is_used())
          {
            BIND(label__False_952);
            // ../../third_party/v8/builtins/array-sort.tq:778:14
            {
              // ../../third_party/v8/builtins/array-sort.tq:779:9
              {
                Label label__True_955_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_955 = &label__True_955_impl;
                USE(label__True_955);
                Label label__False_956_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_956 = &label__False_956_impl;
                USE(label__False_956);
                int31_t t2925 = 0;
                TNode<Number> t2926 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2925)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_446).value()), implicit_cast<TNode<Number>>(t2926), label__True_955, label__False_956);
                if (label__True_955->is_used())
                {
                  BIND(label__True_955);
                  // ../../third_party/v8/builtins/array-sort.tq:779:24
                  Goto(label__False_950);
                }
                BIND(label__False_956);
              }
            }
            Goto(label_if_done_label_1055_1843);
          }
          BIND(label_if_done_label_1055_1843);
        }
        // ../../third_party/v8/builtins/array-sort.tq:782:7
        *previousElement_447 = implicit_cast<TNode<Object>>((*currentElement_1054));
        // ../../third_party/v8/builtins/array-sort.tq:783:7
        TNode<Smi> t2927 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2928 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*runLength_445).value()), implicit_cast<TNode<Smi>>(t2927)));
        *runLength_445 = implicit_cast<TNode<Smi>>(t2928);
      }
      Goto(label_action_1053_1842);
    }
    {
      BIND(label_action_1053_1842);
      TNode<Smi> t2929 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2930 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_448).value()), implicit_cast<TNode<Smi>>(t2929)));
      *idx_448 = implicit_cast<TNode<Smi>>(t2930);
      Goto(label_header_1052_1841);
    }
    BIND(label__False_950);
    // ../../third_party/v8/builtins/array-sort.tq:786:5
    {
      Label label__True_957_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_957 = &label__True_957_impl;
      USE(label__True_957);
      Label label__False_958_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_958 = &label__False_958_impl;
      USE(label__False_958);
      Branch(implicit_cast<TNode<BoolT>>((*isDescending_1051)), label__True_957, label__False_958);
      if (label__True_957->is_used())
      {
        BIND(label__True_957);
        // ../../third_party/v8/builtins/array-sort.tq:786:23
        {
          // ../../third_party/v8/builtins/array-sort.tq:787:7
          TNode<Smi> t2931 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>((*runLength_445).value())));
          USE(implicit_cast<TNode<Smi>>(t2931));
          ReverseRange(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1045)), implicit_cast<TNode<Code>>((*store_1046)), implicit_cast<TNode<HeapObject>>((*elements_443).value()), implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2931), label_Bailout_942);
        }
        Goto(label__False_958);
      }
      BIND(label__False_958);
    }
    // ../../third_party/v8/builtins/array-sort.tq:792:5
    *_return_442 = implicit_cast<TNode<Smi>>((*runLength_445).value());
    Goto(label_macro_end_1839);
  }
  BIND(label_macro_end_1839);
  return implicit_cast<TNode<Smi>>((*_return_442).value());
}

void ArrayBuiltinsFromDSLAssembler::ReverseRange(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<Code> p_store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_959) {
  Label label_macro_end_1844_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1844 = &label_macro_end_1844_impl;
  USE(label_macro_end_1844);
  // ../../third_party/v8/builtins/array-sort.tq:798:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:799:5
    TVARIABLE(Smi, low_449_impl);
    auto low_449 = &low_449_impl;
    USE(low_449);
    *low_449 = implicit_cast<TNode<Smi>>(p_from);
    // ../../third_party/v8/builtins/array-sort.tq:800:5
    int31_t t2932 = 1;
    TNode<Smi> t2933 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2932)));
    TNode<Smi> t2934 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Smi>>(t2933)));
    USE(implicit_cast<TNode<Smi>>(t2934));
    TVARIABLE(Smi, high_450_impl);
    auto high_450 = &high_450_impl;
    USE(high_450);
    *high_450 = implicit_cast<TNode<Smi>>(t2934);
    // ../../third_party/v8/builtins/array-sort.tq:802:5
    {
      Label label__True_960_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_960 = &label__True_960_impl;
      USE(label__True_960);
      Label label__False_961_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_961 = &label__False_961_impl;
      USE(label__False_961);
      Label label_header_1056_1845_impl(this, {high_450, low_449}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1056_1845 = &label_header_1056_1845_impl;
      USE(label_header_1056_1845);
      Goto(label_header_1056_1845);
      BIND(label_header_1056_1845);
      TNode<BoolT> t2935 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*low_449).value()), implicit_cast<TNode<Smi>>((*high_450).value())));
      USE(implicit_cast<TNode<BoolT>>(t2935));
      Branch(implicit_cast<TNode<BoolT>>(t2935), label__True_960, label__False_961);
      if (label__True_960->is_used())
      {
        BIND(label__True_960);
        // ../../third_party/v8/builtins/array-sort.tq:802:24
        {
          // ../../third_party/v8/builtins/array-sort.tq:803:7
          TNode<Object> t2936 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*low_449).value()), label_Bailout_959));
          USE(implicit_cast<TNode<Object>>(t2936));
          TNode<Object> elementLow_1057_impl;
          auto elementLow_1057 = &elementLow_1057_impl;
          USE(elementLow_1057);
          *elementLow_1057 = implicit_cast<TNode<Object>>(t2936);
          // ../../third_party/v8/builtins/array-sort.tq:805:7
          TNode<Object> t2937 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*high_450).value()), label_Bailout_959));
          USE(implicit_cast<TNode<Object>>(t2937));
          TNode<Object> elementHigh_1058_impl;
          auto elementHigh_1058 = &elementHigh_1058_impl;
          USE(elementHigh_1058);
          *elementHigh_1058 = implicit_cast<TNode<Object>>(t2937);
          // ../../third_party/v8/builtins/array-sort.tq:807:7
          TNode<Smi> t2938 = implicit_cast<TNode<Smi>>((*low_449).value());
          USE(t2938);
          TNode<Smi> t2939 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2940 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_449).value()), implicit_cast<TNode<Smi>>(t2939)));
          *low_449 = implicit_cast<TNode<Smi>>(t2940);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2938), implicit_cast<TNode<Object>>((*elementHigh_1058)), label_Bailout_959);
          // ../../third_party/v8/builtins/array-sort.tq:809:7
          TNode<Smi> t2941 = implicit_cast<TNode<Smi>>((*high_450).value());
          USE(t2941);
          TNode<Smi> t2942 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2943 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*high_450).value()), implicit_cast<TNode<Smi>>(t2942)));
          *high_450 = implicit_cast<TNode<Smi>>(t2943);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2941), implicit_cast<TNode<Object>>((*elementLow_1057)), label_Bailout_959);
        }
        Goto(label_header_1056_1845);
      }
      BIND(label__False_961);
    }
  }
}

TF_BUILTIN(MergeAt, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_i = UncheckedCast<Smi>(Parameter(Descriptor::kI));
  USE(p_i);
  // ../../third_party/v8/builtins/array-sort.tq:816:73
  {
    // ../../third_party/v8/builtins/array-sort.tq:817:5
    TNode<Smi> t2944 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2944));
    TNode<Smi> stackSize_1059_impl;
    auto stackSize_1059 = &stackSize_1059_impl;
    USE(stackSize_1059);
    *stackSize_1059 = implicit_cast<TNode<Smi>>(t2944);
    // ../../third_party/v8/builtins/array-sort.tq:821:5
    Label label__True_962_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_962 = &label__True_962_impl;
    USE(label__True_962);
    Label label__False_963_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_963 = &label__False_963_impl;
    USE(label__False_963);
    int31_t t2945 = 2;
    TNode<Smi> t2946 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2945)));
    TNode<BoolT> t2947 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*stackSize_1059)), implicit_cast<TNode<Smi>>(t2946)));
    USE(implicit_cast<TNode<BoolT>>(t2947));
    Branch(implicit_cast<TNode<BoolT>>(t2947), label__True_962, label__False_963);
    BIND(label__False_963);
    Print("assert 'stackSize >= 2' failed at ../../third_party/v8/builtins/array-sort.tq:821:5");
    Unreachable();
    BIND(label__True_962);
    // ../../third_party/v8/builtins/array-sort.tq:822:5
    Label label__True_964_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_964 = &label__True_964_impl;
    USE(label__True_964);
    Label label__False_965_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_965 = &label__False_965_impl;
    USE(label__False_965);
    int31_t t2948 = 0;
    TNode<Smi> t2949 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2948)));
    TNode<BoolT> t2950 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2949)));
    USE(implicit_cast<TNode<BoolT>>(t2950));
    Branch(implicit_cast<TNode<BoolT>>(t2950), label__True_964, label__False_965);
    BIND(label__False_965);
    Print("assert 'i >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:822:5");
    Unreachable();
    BIND(label__True_964);
    // ../../third_party/v8/builtins/array-sort.tq:823:5
    Label label__True_966_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_966 = &label__True_966_impl;
    USE(label__True_966);
    Label label__False_967_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_967 = &label__False_967_impl;
    USE(label__False_967);
    Label label__False_968_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_968 = &label__False_968_impl;
    USE(label__False_968);
    int31_t t2951 = 2;
    TNode<Smi> t2952 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2951)));
    TNode<Smi> t2953 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stackSize_1059)), implicit_cast<TNode<Smi>>(t2952)));
    USE(implicit_cast<TNode<Smi>>(t2953));
    TNode<BoolT> t2954 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2953)));
    USE(implicit_cast<TNode<BoolT>>(t2954));
    GotoIf(implicit_cast<TNode<BoolT>>(t2954), label__True_966);
    int31_t t2955 = 3;
    TNode<Smi> t2956 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2955)));
    TNode<Smi> t2957 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stackSize_1059)), implicit_cast<TNode<Smi>>(t2956)));
    USE(implicit_cast<TNode<Smi>>(t2957));
    TNode<BoolT> t2958 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2957)));
    USE(implicit_cast<TNode<BoolT>>(t2958));
Branch(implicit_cast<TNode<BoolT>>(t2958), label__True_966, label__False_967);
    BIND(label__False_967);
    Print("assert 'i == stackSize - 2 || i == stackSize - 3' failed at ../../third_party/v8/builtins/array-sort.tq:823:5");
    Unreachable();
    BIND(label__True_966);
    // ../../third_party/v8/builtins/array-sort.tq:825:5
    TNode<HeapObject> t2959 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2959));
    TNode<HeapObject> elements_1060_impl;
    auto elements_1060 = &elements_1060_impl;
    USE(elements_1060);
    *elements_1060 = implicit_cast<TNode<HeapObject>>(t2959);
    // ../../third_party/v8/builtins/array-sort.tq:826:5
    TNode<Code> t2960 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2960));
    TNode<Code> load_1061_impl;
    auto load_1061 = &load_1061_impl;
    USE(load_1061);
    *load_1061 = implicit_cast<TNode<Code>>(t2960);
    // ../../third_party/v8/builtins/array-sort.tq:828:5
    TNode<Object> t2961 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2962 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t2961)));
    USE(implicit_cast<TNode<FixedArray>>(t2962));
    TNode<FixedArray> pendingRuns_1062_impl;
    auto pendingRuns_1062 = &pendingRuns_1062_impl;
    USE(pendingRuns_1062);
    *pendingRuns_1062 = implicit_cast<TNode<FixedArray>>(t2962);
    // ../../third_party/v8/builtins/array-sort.tq:830:5
    TNode<Smi> t2963 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2963));
    TVARIABLE(Smi, baseA_451_impl);
    auto baseA_451 = &baseA_451_impl;
    USE(baseA_451);
    *baseA_451 = implicit_cast<TNode<Smi>>(t2963);
    // ../../third_party/v8/builtins/array-sort.tq:831:5
    TNode<Smi> t2964 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2964));
    TVARIABLE(Smi, lengthA_452_impl);
    auto lengthA_452 = &lengthA_452_impl;
    USE(lengthA_452);
    *lengthA_452 = implicit_cast<TNode<Smi>>(t2964);
    // ../../third_party/v8/builtins/array-sort.tq:832:5
    int31_t t2965 = 1;
    TNode<Smi> t2966 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2965)));
    TNode<Smi> t2967 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2966)));
    USE(implicit_cast<TNode<Smi>>(t2967));
    TNode<Smi> t2968 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2967)));
    USE(implicit_cast<TNode<Smi>>(t2968));
    TVARIABLE(Smi, baseB_453_impl);
    auto baseB_453 = &baseB_453_impl;
    USE(baseB_453);
    *baseB_453 = implicit_cast<TNode<Smi>>(t2968);
    // ../../third_party/v8/builtins/array-sort.tq:833:5
    int31_t t2969 = 1;
    TNode<Smi> t2970 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2969)));
    TNode<Smi> t2971 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2970)));
    USE(implicit_cast<TNode<Smi>>(t2971));
    TNode<Smi> t2972 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2971)));
    USE(implicit_cast<TNode<Smi>>(t2972));
    TVARIABLE(Smi, lengthB_454_impl);
    auto lengthB_454 = &lengthB_454_impl;
    USE(lengthB_454);
    *lengthB_454 = implicit_cast<TNode<Smi>>(t2972);
    // ../../third_party/v8/builtins/array-sort.tq:834:5
    Label label__True_969_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_969 = &label__True_969_impl;
    USE(label__True_969);
    Label label__False_970_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_970 = &label__False_970_impl;
    USE(label__False_970);
    Label label__True_971_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_971 = &label__True_971_impl;
    USE(label__True_971);
    int31_t t2973 = 0;
    TNode<Smi> t2974 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2973)));
    TNode<BoolT> t2975 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>(t2974)));
    USE(implicit_cast<TNode<BoolT>>(t2975));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t2975), label__False_970);
    int31_t t2976 = 0;
    TNode<Smi> t2977 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2976)));
    TNode<BoolT> t2978 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_454).value()), implicit_cast<TNode<Smi>>(t2977)));
    USE(implicit_cast<TNode<BoolT>>(t2978));
Branch(implicit_cast<TNode<BoolT>>(t2978), label__True_969, label__False_970);
    BIND(label__False_970);
    Print("assert 'lengthA > 0 && lengthB > 0' failed at ../../third_party/v8/builtins/array-sort.tq:834:5");
    Unreachable();
    BIND(label__True_969);
    // ../../third_party/v8/builtins/array-sort.tq:835:5
    Label label__True_972_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_972 = &label__True_972_impl;
    USE(label__True_972);
    Label label__False_973_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_973 = &label__False_973_impl;
    USE(label__False_973);
    TNode<Smi> t2979 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*lengthA_452).value())));
    USE(implicit_cast<TNode<Smi>>(t2979));
    TNode<BoolT> t2980 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2979), implicit_cast<TNode<Smi>>((*baseB_453).value())));
    USE(implicit_cast<TNode<BoolT>>(t2980));
    Branch(implicit_cast<TNode<BoolT>>(t2980), label__True_972, label__False_973);
    BIND(label__False_973);
    Print("assert 'baseA + lengthA == baseB' failed at ../../third_party/v8/builtins/array-sort.tq:835:5");
    Unreachable();
    BIND(label__True_972);
    // ../../third_party/v8/builtins/array-sort.tq:840:5
    TNode<Smi> t2981 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>((*lengthB_454).value())));
    USE(implicit_cast<TNode<Smi>>(t2981));
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2981));
    // ../../third_party/v8/builtins/array-sort.tq:841:5
    {
      Label label__True_974_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_974 = &label__True_974_impl;
      USE(label__True_974);
      Label label__False_975_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_975 = &label__False_975_impl;
      USE(label__False_975);
      int31_t t2982 = 3;
      TNode<Smi> t2983 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2982)));
      TNode<Smi> t2984 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stackSize_1059)), implicit_cast<TNode<Smi>>(t2983)));
      USE(implicit_cast<TNode<Smi>>(t2984));
      TNode<BoolT> t2985 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2984)));
      USE(implicit_cast<TNode<BoolT>>(t2985));
      Branch(implicit_cast<TNode<BoolT>>(t2985), label__True_974, label__False_975);
      if (label__True_974->is_used())
      {
        BIND(label__True_974);
        // ../../third_party/v8/builtins/array-sort.tq:841:29
        {
          // ../../third_party/v8/builtins/array-sort.tq:842:7
          int31_t t2986 = 2;
          TNode<Smi> t2987 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2986)));
          TNode<Smi> t2988 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2987)));
          USE(implicit_cast<TNode<Smi>>(t2988));
          TNode<Smi> t2989 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2988)));
          USE(implicit_cast<TNode<Smi>>(t2989));
          TNode<Smi> base_1063_impl;
          auto base_1063 = &base_1063_impl;
          USE(base_1063);
          *base_1063 = implicit_cast<TNode<Smi>>(t2989);
          // ../../third_party/v8/builtins/array-sort.tq:843:7
          int31_t t2990 = 2;
          TNode<Smi> t2991 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2990)));
          TNode<Smi> t2992 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2991)));
          USE(implicit_cast<TNode<Smi>>(t2992));
          TNode<Smi> t2993 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2992)));
          USE(implicit_cast<TNode<Smi>>(t2993));
          TNode<Smi> length_1064_impl;
          auto length_1064 = &length_1064_impl;
          USE(length_1064);
          *length_1064 = implicit_cast<TNode<Smi>>(t2993);
          // ../../third_party/v8/builtins/array-sort.tq:844:7
          int31_t t2994 = 1;
          TNode<Smi> t2995 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2994)));
          TNode<Smi> t2996 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2995)));
          USE(implicit_cast<TNode<Smi>>(t2996));
          SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2996), implicit_cast<TNode<Smi>>((*base_1063)));
          // ../../third_party/v8/builtins/array-sort.tq:845:7
          int31_t t2997 = 1;
          TNode<Smi> t2998 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t2997)));
          TNode<Smi> t2999 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2998)));
          USE(implicit_cast<TNode<Smi>>(t2999));
          SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1062)), implicit_cast<TNode<Smi>>(t2999), implicit_cast<TNode<Smi>>((*length_1064)));
        }
        Goto(label__False_975);
      }
      BIND(label__False_975);
    }
    // ../../third_party/v8/builtins/array-sort.tq:847:5
    int31_t t3000 = 1;
    TNode<Smi> t3001 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3000)));
    TNode<Smi> t3002 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stackSize_1059)), implicit_cast<TNode<Smi>>(t3001)));
    USE(implicit_cast<TNode<Smi>>(t3002));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t3002));
    // ../../third_party/v8/builtins/array-sort.tq:849:5
    {
      Label label_try_done_1065_1846_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1065_1846 = &label_try_done_1065_1846_impl;
      USE(label_try_done_1065_1846);
      Label label_Bailout_976_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_976 = &label_Bailout_976_impl;
      USE(label_Bailout_976);
      Label label_try_begin_1066_1847_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1066_1847 = &label_try_begin_1066_1847_impl;
      USE(label_try_begin_1066_1847);
      Goto(label_try_begin_1066_1847);
      if (label_try_begin_1066_1847->is_used())
      {
        BIND(label_try_begin_1066_1847);
        // ../../third_party/v8/builtins/array-sort.tq:849:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:852:7
          TNode<Object> t3003 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1061)), implicit_cast<TNode<HeapObject>>((*elements_1060)), implicit_cast<TNode<Smi>>((*baseB_453).value()), label_Bailout_976));
          USE(implicit_cast<TNode<Object>>(t3003));
          TNode<Object> keyRight_1067_impl;
          auto keyRight_1067 = &keyRight_1067_impl;
          USE(keyRight_1067);
          *keyRight_1067 = implicit_cast<TNode<Object>>(t3003);
          // ../../third_party/v8/builtins/array-sort.tq:855:7
          int31_t t3004 = 0;
          TNode<Smi> t3005 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3004)));
          TNode<Smi> t3006 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1061)), implicit_cast<TNode<Object>>((*keyRight_1067)), implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>(t3005), implicit_cast<TNode<Oddball>>(False()), label_Bailout_976));
          USE(implicit_cast<TNode<Smi>>(t3006));
          TNode<Smi> k_1068_impl;
          auto k_1068 = &k_1068_impl;
          USE(k_1068);
          *k_1068 = implicit_cast<TNode<Smi>>(t3006);
          // ../../third_party/v8/builtins/array-sort.tq:858:7
          Label label__True_977_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_977 = &label__True_977_impl;
          USE(label__True_977);
          Label label__False_978_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_978 = &label__False_978_impl;
          USE(label__False_978);
          int31_t t3007 = 0;
          TNode<Smi> t3008 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3007)));
          TNode<BoolT> t3009 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_1068)), implicit_cast<TNode<Smi>>(t3008)));
          USE(implicit_cast<TNode<BoolT>>(t3009));
          Branch(implicit_cast<TNode<BoolT>>(t3009), label__True_977, label__False_978);
          BIND(label__False_978);
          Print("assert 'k >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:858:7");
          Unreachable();
          BIND(label__True_977);
          // ../../third_party/v8/builtins/array-sort.tq:860:7
          TNode<Smi> t3010 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*k_1068))));
          USE(implicit_cast<TNode<Smi>>(t3010));
          *baseA_451 = implicit_cast<TNode<Smi>>(t3010);
          // ../../third_party/v8/builtins/array-sort.tq:861:7
          TNode<Smi> t3011 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>((*k_1068))));
          USE(implicit_cast<TNode<Smi>>(t3011));
          *lengthA_452 = implicit_cast<TNode<Smi>>(t3011);
          // ../../third_party/v8/builtins/array-sort.tq:862:7
          {
            Label label__True_979_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_979 = &label__True_979_impl;
            USE(label__True_979);
            Label label__False_980_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_980 = &label__False_980_impl;
            USE(label__False_980);
            int31_t t3012 = 0;
            TNode<Smi> t3013 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3012)));
            TNode<BoolT> t3014 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>(t3013)));
            USE(implicit_cast<TNode<BoolT>>(t3014));
            Branch(implicit_cast<TNode<BoolT>>(t3014), label__True_979, label__False_980);
            if (label__True_979->is_used())
            {
              BIND(label__True_979);
              // ../../third_party/v8/builtins/array-sort.tq:862:25
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_980);
          }
          // ../../third_party/v8/builtins/array-sort.tq:863:7
          Label label__True_981_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_981 = &label__True_981_impl;
          USE(label__True_981);
          Label label__False_982_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_982 = &label__False_982_impl;
          USE(label__False_982);
          int31_t t3015 = 0;
          TNode<Smi> t3016 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3015)));
          TNode<BoolT> t3017 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>(t3016)));
          USE(implicit_cast<TNode<BoolT>>(t3017));
          Branch(implicit_cast<TNode<BoolT>>(t3017), label__True_981, label__False_982);
          BIND(label__False_982);
          Print("assert 'lengthA > 0' failed at ../../third_party/v8/builtins/array-sort.tq:863:7");
          Unreachable();
          BIND(label__True_981);
          // ../../third_party/v8/builtins/array-sort.tq:867:7
          TNode<Smi> t3018 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*lengthA_452).value())));
          USE(implicit_cast<TNode<Smi>>(t3018));
          int31_t t3019 = 1;
          TNode<Smi> t3020 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3019)));
          TNode<Smi> t3021 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3018), implicit_cast<TNode<Smi>>(t3020)));
          USE(implicit_cast<TNode<Smi>>(t3021));
          TNode<Object> t3022 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1061)), implicit_cast<TNode<HeapObject>>((*elements_1060)), implicit_cast<TNode<Smi>>(t3021), label_Bailout_976));
          USE(implicit_cast<TNode<Object>>(t3022));
          TVARIABLE(Object, keyLeft_455_impl);
          auto keyLeft_455 = &keyLeft_455_impl;
          USE(keyLeft_455);
          *keyLeft_455 = implicit_cast<TNode<Object>>(t3022);
          // ../../third_party/v8/builtins/array-sort.tq:870:7
          int31_t t3023 = 1;
          TNode<Smi> t3024 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3023)));
          TNode<Smi> t3025 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_454).value()), implicit_cast<TNode<Smi>>(t3024)));
          USE(implicit_cast<TNode<Smi>>(t3025));
          TNode<Smi> t3026 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1061)), implicit_cast<TNode<Object>>((*keyLeft_455).value()), implicit_cast<TNode<Smi>>((*baseB_453).value()), implicit_cast<TNode<Smi>>((*lengthB_454).value()), implicit_cast<TNode<Smi>>(t3025), implicit_cast<TNode<Oddball>>(False()), label_Bailout_976));
          USE(implicit_cast<TNode<Smi>>(t3026));
          *lengthB_454 = implicit_cast<TNode<Smi>>(t3026);
          // ../../third_party/v8/builtins/array-sort.tq:873:7
          Label label__True_983_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_983 = &label__True_983_impl;
          USE(label__True_983);
          Label label__False_984_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_984 = &label__False_984_impl;
          USE(label__False_984);
          int31_t t3027 = 0;
          TNode<Smi> t3028 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3027)));
          TNode<BoolT> t3029 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*lengthB_454).value()), implicit_cast<TNode<Smi>>(t3028)));
          USE(implicit_cast<TNode<BoolT>>(t3029));
          Branch(implicit_cast<TNode<BoolT>>(t3029), label__True_983, label__False_984);
          BIND(label__False_984);
          Print("assert 'lengthB >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:873:7");
          Unreachable();
          BIND(label__True_983);
          // ../../third_party/v8/builtins/array-sort.tq:874:7
          {
            Label label__True_985_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_985 = &label__True_985_impl;
            USE(label__True_985);
            Label label__False_986_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_986 = &label__False_986_impl;
            USE(label__False_986);
            int31_t t3030 = 0;
            TNode<Smi> t3031 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3030)));
            TNode<BoolT> t3032 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_454).value()), implicit_cast<TNode<Smi>>(t3031)));
            USE(implicit_cast<TNode<BoolT>>(t3032));
            Branch(implicit_cast<TNode<BoolT>>(t3032), label__True_985, label__False_986);
            if (label__True_985->is_used())
            {
              BIND(label__True_985);
              // ../../third_party/v8/builtins/array-sort.tq:874:25
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_986);
          }
          // ../../third_party/v8/builtins/array-sort.tq:878:7
          {
            Label label__True_987_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_987 = &label__True_987_impl;
            USE(label__True_987);
            Label label__False_988_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_988 = &label__False_988_impl;
            USE(label__False_988);
            Label label_if_done_label_1069_1848_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1069_1848 = &label_if_done_label_1069_1848_impl;
            USE(label_if_done_label_1069_1848);
            TNode<BoolT> t3033 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>((*lengthB_454).value())));
            USE(implicit_cast<TNode<BoolT>>(t3033));
            Branch(implicit_cast<TNode<BoolT>>(t3033), label__True_987, label__False_988);
            if (label__True_987->is_used())
            {
              BIND(label__True_987);
              // ../../third_party/v8/builtins/array-sort.tq:878:31
              {
                // ../../third_party/v8/builtins/array-sort.tq:879:9
                MergeLow(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>((*baseB_453).value()), implicit_cast<TNode<Smi>>((*lengthB_454).value()), label_Bailout_976);
              }
              Goto(label_if_done_label_1069_1848);
            }
            if (label__False_988->is_used())
            {
              BIND(label__False_988);
              // ../../third_party/v8/builtins/array-sort.tq:881:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:882:9
                MergeHigh(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*baseA_451).value()), implicit_cast<TNode<Smi>>((*lengthA_452).value()), implicit_cast<TNode<Smi>>((*baseB_453).value()), implicit_cast<TNode<Smi>>((*lengthB_454).value()), label_Bailout_976);
              }
              Goto(label_if_done_label_1069_1848);
            }
            BIND(label_if_done_label_1069_1848);
          }
          // ../../third_party/v8/builtins/array-sort.tq:885:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_976->is_used())
      {
        BIND(label_Bailout_976);
        // ../../third_party/v8/builtins/array-sort.tq:887:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:888:7
          TNode<Smi> t3034 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3034));
          Return(implicit_cast<TNode<Smi>>(t3034));
        }
      }
    }
  }
}

TF_BUILTIN(GallopLeft, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:911:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:912:5
    Label label__True_989_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_989 = &label__True_989_impl;
    USE(label__True_989);
    Label label__False_990_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_990 = &label__False_990_impl;
    USE(label__False_990);
    Label label__True_991_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_991 = &label__True_991_impl;
    USE(label__True_991);
    int31_t t3035 = 0;
    TNode<Smi> t3036 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3035)));
    TNode<BoolT> t3037 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3036)));
    USE(implicit_cast<TNode<BoolT>>(t3037));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3037), label__False_990);
    int31_t t3038 = 0;
    TNode<Smi> t3039 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3038)));
    TNode<BoolT> t3040 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(t3039)));
    USE(implicit_cast<TNode<BoolT>>(t3040));
Branch(implicit_cast<TNode<BoolT>>(t3040), label__True_989, label__False_990);
    BIND(label__False_990);
    Print("assert 'length > 0 && base >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:912:5");
    Unreachable();
    BIND(label__True_989);
    // ../../third_party/v8/builtins/array-sort.tq:913:5
    Label label__True_992_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_992 = &label__True_992_impl;
    USE(label__True_992);
    Label label__False_993_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_993 = &label__False_993_impl;
    USE(label__False_993);
    Label label__True_994_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_994 = &label__True_994_impl;
    USE(label__True_994);
    int31_t t3041 = 0;
    TNode<Smi> t3042 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3041)));
    TNode<BoolT> t3043 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3042), implicit_cast<TNode<Smi>>(p_hint)));
    USE(implicit_cast<TNode<BoolT>>(t3043));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3043), label__False_993);
    TNode<BoolT> t3044 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<BoolT>>(t3044));
Branch(implicit_cast<TNode<BoolT>>(t3044), label__True_992, label__False_993);
    BIND(label__False_993);
    Print("assert '0 <= hint && hint < length' failed at ../../third_party/v8/builtins/array-sort.tq:913:5");
    Unreachable();
    BIND(label__True_992);
    // ../../third_party/v8/builtins/array-sort.tq:918:5
    auto t3045 = [=]() {
      TNode<FixedArray> t3047 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<FixedArray>>(t3047));
      return implicit_cast<TNode<FixedArray>>(t3047);
    };
    auto t3046 = [=]() {
      TNode<HeapObject> t3048 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<HeapObject>>(t3048));
      return implicit_cast<TNode<HeapObject>>(t3048);
    };
    TVARIABLE(HeapObject, t3049_1070_impl);
    auto t3049_1070 = &t3049_1070_impl;
    USE(t3049_1070);
    {
      Label label__True_995_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_995 = &label__True_995_impl;
      USE(label__True_995);
      Label label__False_996_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_996 = &label__False_996_impl;
      USE(label__False_996);
      Label label__done_1071_1849_impl(this, {t3049_1070}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_1071_1849 = &label__done_1071_1849_impl;
      USE(label__done_1071_1849);
      TNode<BoolT> t3050 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t3050));
      Branch(implicit_cast<TNode<BoolT>>(t3050), label__True_995, label__False_996);
      BIND(label__True_995);
            *t3049_1070 = implicit_cast<TNode<HeapObject>>(t3045());
      Goto(label__done_1071_1849);
      BIND(label__False_996);
            *t3049_1070 = implicit_cast<TNode<HeapObject>>(t3046());
      Goto(label__done_1071_1849);
      BIND(label__done_1071_1849);
    }
    TVARIABLE(HeapObject, elements_456_impl);
    auto elements_456 = &elements_456_impl;
    USE(elements_456);
    *elements_456 = implicit_cast<TNode<HeapObject>>((*t3049_1070).value());
    // ../../third_party/v8/builtins/array-sort.tq:921:5
    int31_t t3051 = 0;
    TVARIABLE(Smi, lastOfs_457_impl);
    auto lastOfs_457 = &lastOfs_457_impl;
    USE(lastOfs_457);
    TNode<Smi> t3052 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3051)));
    *lastOfs_457 = implicit_cast<TNode<Smi>>(t3052);
    // ../../third_party/v8/builtins/array-sort.tq:922:5
    int31_t t3053 = 1;
    TVARIABLE(Smi, offset_458_impl);
    auto offset_458 = &offset_458_impl;
    USE(offset_458);
    TNode<Smi> t3054 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3053)));
    *offset_458 = implicit_cast<TNode<Smi>>(t3054);
    // ../../third_party/v8/builtins/array-sort.tq:924:5
    {
      Label label_try_done_1072_1850_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1072_1850 = &label_try_done_1072_1850_impl;
      USE(label_try_done_1072_1850);
      Label label_Bailout_997_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_997 = &label_Bailout_997_impl;
      USE(label_Bailout_997);
      Label label_try_begin_1073_1851_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1073_1851 = &label_try_begin_1073_1851_impl;
      USE(label_try_begin_1073_1851);
      Goto(label_try_begin_1073_1851);
      if (label_try_begin_1073_1851->is_used())
      {
        BIND(label_try_begin_1073_1851);
        // ../../third_party/v8/builtins/array-sort.tq:924:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:925:7
          TNode<Smi> t3055 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t3055));
          TNode<Object> t3056 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_456).value()), implicit_cast<TNode<Smi>>(t3055), label_Bailout_997));
          USE(implicit_cast<TNode<Object>>(t3056));
          TNode<Object> baseHintElement_1074_impl;
          auto baseHintElement_1074 = &baseHintElement_1074_impl;
          USE(baseHintElement_1074);
          *baseHintElement_1074 = implicit_cast<TNode<Object>>(t3056);
          // ../../third_party/v8/builtins/array-sort.tq:928:7
          TNode<Number> t3057 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*baseHintElement_1074)), implicit_cast<TNode<Object>>(p_key), label_Bailout_997));
          USE(implicit_cast<TNode<Number>>(t3057));
          TVARIABLE(Number, order_459_impl);
          auto order_459 = &order_459_impl;
          USE(order_459);
          *order_459 = implicit_cast<TNode<Number>>(t3057);
          // ../../third_party/v8/builtins/array-sort.tq:931:7
          {
            Label label__True_998_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_998 = &label__True_998_impl;
            USE(label__True_998);
            Label label__False_999_impl(this, {elements_456}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_999 = &label__False_999_impl;
            USE(label__False_999);
            TNode<BoolT> t3058 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
            USE(implicit_cast<TNode<BoolT>>(t3058));
            Branch(implicit_cast<TNode<BoolT>>(t3058), label__True_998, label__False_999);
            if (label__True_998->is_used())
            {
              BIND(label__True_998);
              // ../../third_party/v8/builtins/array-sort.tq:931:34
              {
                // ../../third_party/v8/builtins/array-sort.tq:932:9
                TNode<HeapObject> t3059 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t3059));
                *elements_456 = implicit_cast<TNode<HeapObject>>(t3059);
              }
              Goto(label__False_999);
            }
            BIND(label__False_999);
          }
          // ../../third_party/v8/builtins/array-sort.tq:935:7
          {
            Label label__True_1000_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1000 = &label__True_1000_impl;
            USE(label__True_1000);
            Label label__False_1001_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1001 = &label__False_1001_impl;
            USE(label__False_1001);
            Label label_if_done_label_1075_1852_impl(this, {elements_456, lastOfs_457, offset_458, order_459}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1075_1852 = &label_if_done_label_1075_1852_impl;
            USE(label_if_done_label_1075_1852);
            int31_t t3060 = 0;
            TNode<Number> t3061 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3060)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_459).value()), implicit_cast<TNode<Number>>(t3061), label__True_1000, label__False_1001);
            if (label__True_1000->is_used())
            {
              BIND(label__True_1000);
              // ../../third_party/v8/builtins/array-sort.tq:935:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:940:9
                TNode<Smi> t3062 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3062));
                TVARIABLE(Smi, maxOfs_460_impl);
                auto maxOfs_460 = &maxOfs_460_impl;
                USE(maxOfs_460);
                *maxOfs_460 = implicit_cast<TNode<Smi>>(t3062);
                // ../../third_party/v8/builtins/array-sort.tq:941:9
                {
                  Label label__True_1002_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1002 = &label__True_1002_impl;
                  USE(label__True_1002);
                  Label label__False_1003_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1003 = &label__False_1003_impl;
                  USE(label__False_1003);
                  Label label_header_1076_1853_impl(this, {elements_456, lastOfs_457, offset_458, order_459}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1076_1853 = &label_header_1076_1853_impl;
                  USE(label_header_1076_1853);
                  Goto(label_header_1076_1853);
                  BIND(label_header_1076_1853);
                  TNode<BoolT> t3063 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>((*maxOfs_460).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3063));
                  Branch(implicit_cast<TNode<BoolT>>(t3063), label__True_1002, label__False_1003);
                  if (label__True_1002->is_used())
                  {
                    BIND(label__True_1002);
                    // ../../third_party/v8/builtins/array-sort.tq:941:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:942:11
                      TNode<Smi> t3064 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t3064));
                      TNode<Smi> t3065 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3064), implicit_cast<TNode<Smi>>((*offset_458).value())));
                      USE(implicit_cast<TNode<Smi>>(t3065));
                      TNode<Object> t3066 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_456).value()), implicit_cast<TNode<Smi>>(t3065), label_Bailout_997));
                      USE(implicit_cast<TNode<Object>>(t3066));
                      TNode<Object> offsetElement_1077_impl;
                      auto offsetElement_1077 = &offsetElement_1077_impl;
                      USE(offsetElement_1077);
                      *offsetElement_1077 = implicit_cast<TNode<Object>>(t3066);
                      // ../../third_party/v8/builtins/array-sort.tq:945:11
                      TNode<Number> t3067 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offsetElement_1077)), implicit_cast<TNode<Object>>(p_key), label_Bailout_997));
                      USE(implicit_cast<TNode<Number>>(t3067));
                      *order_459 = implicit_cast<TNode<Number>>(t3067);
                      // ../../third_party/v8/builtins/array-sort.tq:947:11
                      {
                        Label label__True_1004_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1004 = &label__True_1004_impl;
                        USE(label__True_1004);
                        Label label__False_1005_impl(this, {elements_456}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1005 = &label__False_1005_impl;
                        USE(label__False_1005);
                        TNode<BoolT> t3068 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t3068));
                        Branch(implicit_cast<TNode<BoolT>>(t3068), label__True_1004, label__False_1005);
                        if (label__True_1004->is_used())
                        {
                          BIND(label__True_1004);
                          // ../../third_party/v8/builtins/array-sort.tq:947:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:948:13
                            TNode<HeapObject> t3069 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t3069));
                            *elements_456 = implicit_cast<TNode<HeapObject>>(t3069);
                          }
                          Goto(label__False_1005);
                        }
                        BIND(label__False_1005);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:952:11
                      {
                        Label label__True_1006_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1006 = &label__True_1006_impl;
                        USE(label__True_1006);
                        Label label__False_1007_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1007 = &label__False_1007_impl;
                        USE(label__False_1007);
                        int31_t t3070 = 0;
                        TNode<Number> t3071 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3070)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_459).value()), implicit_cast<TNode<Number>>(t3071), label__True_1006, label__False_1007);
                        if (label__True_1006->is_used())
                        {
                          BIND(label__True_1006);
                          // ../../third_party/v8/builtins/array-sort.tq:952:27
                          Goto(label__False_1003);
                        }
                        BIND(label__False_1007);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:954:11
                      *lastOfs_457 = implicit_cast<TNode<Smi>>((*offset_458).value());
                      // ../../third_party/v8/builtins/array-sort.tq:955:11
                      int31_t t3072 = 1;
                      TNode<Smi> t3073 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<int31_t>(t3072)));
                      USE(implicit_cast<TNode<Smi>>(t3073));
                      int31_t t3074 = 1;
                      TNode<Smi> t3075 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3074)));
                      TNode<Smi> t3076 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3073), implicit_cast<TNode<Smi>>(t3075)));
                      USE(implicit_cast<TNode<Smi>>(t3076));
                      *offset_458 = implicit_cast<TNode<Smi>>(t3076);
                      // ../../third_party/v8/builtins/array-sort.tq:958:11
                      {
                        Label label__True_1008_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1008 = &label__True_1008_impl;
                        USE(label__True_1008);
                        Label label__False_1009_impl(this, {offset_458}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1009 = &label__False_1009_impl;
                        USE(label__False_1009);
                        int31_t t3077 = 0;
                        TNode<Smi> t3078 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3077)));
                        TNode<BoolT> t3079 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>(t3078)));
                        USE(implicit_cast<TNode<BoolT>>(t3079));
                        Branch(implicit_cast<TNode<BoolT>>(t3079), label__True_1008, label__False_1009);
                        if (label__True_1008->is_used())
                        {
                          BIND(label__True_1008);
                          // ../../third_party/v8/builtins/array-sort.tq:958:28
                          *offset_458 = implicit_cast<TNode<Smi>>((*maxOfs_460).value());
                          Goto(label__False_1009);
                        }
                        BIND(label__False_1009);
                      }
                    }
                    Goto(label_header_1076_1853);
                  }
                  BIND(label__False_1003);
                }
                // ../../third_party/v8/builtins/array-sort.tq:961:9
                {
                  Label label__True_1010_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1010 = &label__True_1010_impl;
                  USE(label__True_1010);
                  Label label__False_1011_impl(this, {offset_458}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1011 = &label__False_1011_impl;
                  USE(label__False_1011);
                  TNode<BoolT> t3080 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>((*maxOfs_460).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3080));
                  Branch(implicit_cast<TNode<BoolT>>(t3080), label__True_1010, label__False_1011);
                  if (label__True_1010->is_used())
                  {
                    BIND(label__True_1010);
                    // ../../third_party/v8/builtins/array-sort.tq:961:30
                    *offset_458 = implicit_cast<TNode<Smi>>((*maxOfs_460).value());
                    Goto(label__False_1011);
                  }
                  BIND(label__False_1011);
                }
                // ../../third_party/v8/builtins/array-sort.tq:964:9
                TNode<Smi> t3081 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3081));
                *lastOfs_457 = implicit_cast<TNode<Smi>>(t3081);
                // ../../third_party/v8/builtins/array-sort.tq:965:9
                TNode<Smi> t3082 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3082));
                *offset_458 = implicit_cast<TNode<Smi>>(t3082);
              }
              Goto(label_if_done_label_1075_1852);
            }
            if (label__False_1001->is_used())
            {
              BIND(label__False_1001);
              // ../../third_party/v8/builtins/array-sort.tq:966:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:969:9
                Label label__True_1012_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1012 = &label__True_1012_impl;
                USE(label__True_1012);
                Label label__False_1013_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1013 = &label__False_1013_impl;
                USE(label__False_1013);
                int31_t t3083 = 0;
                TNode<Number> t3084 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3083)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_459).value()), implicit_cast<TNode<Number>>(t3084), label__True_1012, label__False_1013);
                BIND(label__False_1013);
                Print("assert 'order >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:969:9");
                Unreachable();
                BIND(label__True_1012);
                // ../../third_party/v8/builtins/array-sort.tq:972:9
                int31_t t3085 = 1;
                TNode<Smi> t3086 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3085)));
                TNode<Smi> t3087 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t3086)));
                USE(implicit_cast<TNode<Smi>>(t3087));
                TVARIABLE(Smi, maxOfs_461_impl);
                auto maxOfs_461 = &maxOfs_461_impl;
                USE(maxOfs_461);
                *maxOfs_461 = implicit_cast<TNode<Smi>>(t3087);
                // ../../third_party/v8/builtins/array-sort.tq:973:9
                {
                  Label label__True_1014_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1014 = &label__True_1014_impl;
                  USE(label__True_1014);
                  Label label__False_1015_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1015 = &label__False_1015_impl;
                  USE(label__False_1015);
                  Label label_header_1078_1854_impl(this, {elements_456, lastOfs_457, offset_458, order_459}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1078_1854 = &label_header_1078_1854_impl;
                  USE(label_header_1078_1854);
                  Goto(label_header_1078_1854);
                  BIND(label_header_1078_1854);
                  TNode<BoolT> t3088 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>((*maxOfs_461).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3088));
                  Branch(implicit_cast<TNode<BoolT>>(t3088), label__True_1014, label__False_1015);
                  if (label__True_1014->is_used())
                  {
                    BIND(label__True_1014);
                    // ../../third_party/v8/builtins/array-sort.tq:973:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:974:11
                      TNode<Smi> t3089 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t3089));
                      TNode<Smi> t3090 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3089), implicit_cast<TNode<Smi>>((*offset_458).value())));
                      USE(implicit_cast<TNode<Smi>>(t3090));
                      TNode<Object> t3091 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_456).value()), implicit_cast<TNode<Smi>>(t3090), label_Bailout_997));
                      USE(implicit_cast<TNode<Object>>(t3091));
                      TNode<Object> offsetElement_1079_impl;
                      auto offsetElement_1079 = &offsetElement_1079_impl;
                      USE(offsetElement_1079);
                      *offsetElement_1079 = implicit_cast<TNode<Object>>(t3091);
                      // ../../third_party/v8/builtins/array-sort.tq:977:11
                      TNode<Number> t3092 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offsetElement_1079)), implicit_cast<TNode<Object>>(p_key), label_Bailout_997));
                      USE(implicit_cast<TNode<Number>>(t3092));
                      *order_459 = implicit_cast<TNode<Number>>(t3092);
                      // ../../third_party/v8/builtins/array-sort.tq:979:11
                      {
                        Label label__True_1016_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1016 = &label__True_1016_impl;
                        USE(label__True_1016);
                        Label label__False_1017_impl(this, {elements_456}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1017 = &label__False_1017_impl;
                        USE(label__False_1017);
                        TNode<BoolT> t3093 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t3093));
                        Branch(implicit_cast<TNode<BoolT>>(t3093), label__True_1016, label__False_1017);
                        if (label__True_1016->is_used())
                        {
                          BIND(label__True_1016);
                          // ../../third_party/v8/builtins/array-sort.tq:979:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:980:13
                            TNode<HeapObject> t3094 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t3094));
                            *elements_456 = implicit_cast<TNode<HeapObject>>(t3094);
                          }
                          Goto(label__False_1017);
                        }
                        BIND(label__False_1017);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:983:11
                      {
                        Label label__True_1018_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1018 = &label__True_1018_impl;
                        USE(label__True_1018);
                        Label label__False_1019_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1019 = &label__False_1019_impl;
                        USE(label__False_1019);
                        int31_t t3095 = 0;
                        TNode<Number> t3096 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3095)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_459).value()), implicit_cast<TNode<Number>>(t3096), label__True_1018, label__False_1019);
                        if (label__True_1018->is_used())
                        {
                          BIND(label__True_1018);
                          // ../../third_party/v8/builtins/array-sort.tq:983:26
                          Goto(label__False_1015);
                        }
                        BIND(label__False_1019);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:985:11
                      *lastOfs_457 = implicit_cast<TNode<Smi>>((*offset_458).value());
                      // ../../third_party/v8/builtins/array-sort.tq:986:11
                      int31_t t3097 = 1;
                      TNode<Smi> t3098 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<int31_t>(t3097)));
                      USE(implicit_cast<TNode<Smi>>(t3098));
                      int31_t t3099 = 1;
                      TNode<Smi> t3100 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3099)));
                      TNode<Smi> t3101 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3098), implicit_cast<TNode<Smi>>(t3100)));
                      USE(implicit_cast<TNode<Smi>>(t3101));
                      *offset_458 = implicit_cast<TNode<Smi>>(t3101);
                      // ../../third_party/v8/builtins/array-sort.tq:989:11
                      {
                        Label label__True_1020_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1020 = &label__True_1020_impl;
                        USE(label__True_1020);
                        Label label__False_1021_impl(this, {offset_458}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1021 = &label__False_1021_impl;
                        USE(label__False_1021);
                        int31_t t3102 = 0;
                        TNode<Smi> t3103 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3102)));
                        TNode<BoolT> t3104 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>(t3103)));
                        USE(implicit_cast<TNode<BoolT>>(t3104));
                        Branch(implicit_cast<TNode<BoolT>>(t3104), label__True_1020, label__False_1021);
                        if (label__True_1020->is_used())
                        {
                          BIND(label__True_1020);
                          // ../../third_party/v8/builtins/array-sort.tq:989:28
                          *offset_458 = implicit_cast<TNode<Smi>>((*maxOfs_461).value());
                          Goto(label__False_1021);
                        }
                        BIND(label__False_1021);
                      }
                    }
                    Goto(label_header_1078_1854);
                  }
                  BIND(label__False_1015);
                }
                // ../../third_party/v8/builtins/array-sort.tq:992:9
                {
                  Label label__True_1022_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1022 = &label__True_1022_impl;
                  USE(label__True_1022);
                  Label label__False_1023_impl(this, {offset_458}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1023 = &label__False_1023_impl;
                  USE(label__False_1023);
                  TNode<BoolT> t3105 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>((*maxOfs_461).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3105));
                  Branch(implicit_cast<TNode<BoolT>>(t3105), label__True_1022, label__False_1023);
                  if (label__True_1022->is_used())
                  {
                    BIND(label__True_1022);
                    // ../../third_party/v8/builtins/array-sort.tq:992:30
                    *offset_458 = implicit_cast<TNode<Smi>>((*maxOfs_461).value());
                    Goto(label__False_1023);
                  }
                  BIND(label__False_1023);
                }
                // ../../third_party/v8/builtins/array-sort.tq:995:9
                TNode<Smi> tmp_1080_impl;
                auto tmp_1080 = &tmp_1080_impl;
                USE(tmp_1080);
                *tmp_1080 = implicit_cast<TNode<Smi>>((*lastOfs_457).value());
                // ../../third_party/v8/builtins/array-sort.tq:996:9
                TNode<Smi> t3106 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_458).value())));
                USE(implicit_cast<TNode<Smi>>(t3106));
                *lastOfs_457 = implicit_cast<TNode<Smi>>(t3106);
                // ../../third_party/v8/builtins/array-sort.tq:997:9
                TNode<Smi> t3107 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_1080))));
                USE(implicit_cast<TNode<Smi>>(t3107));
                *offset_458 = implicit_cast<TNode<Smi>>(t3107);
              }
              Goto(label_if_done_label_1075_1852);
            }
            BIND(label_if_done_label_1075_1852);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1000:7
          Label label__True_1024_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1024 = &label__True_1024_impl;
          USE(label__True_1024);
          Label label__False_1025_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1025 = &label__False_1025_impl;
          USE(label__False_1025);
          Label label__True_1026_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1026 = &label__True_1026_impl;
          USE(label__True_1026);
          Label label__True_1027_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1027 = &label__True_1027_impl;
          USE(label__True_1027);
          int31_t t3108 = -1;
          TNode<Smi> t3109 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3108)));
          TNode<BoolT> t3110 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3109), implicit_cast<TNode<Smi>>((*lastOfs_457).value())));
          USE(implicit_cast<TNode<BoolT>>(t3110));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3110), label__False_1025);
          TNode<BoolT> t3111 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>((*offset_458).value())));
          USE(implicit_cast<TNode<BoolT>>(t3111));
Branch(implicit_cast<TNode<BoolT>>(t3111), label__True_1026, label__False_1025);
          BIND(label__True_1026);
          TNode<BoolT> t3112 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<BoolT>>(t3112));
Branch(implicit_cast<TNode<BoolT>>(t3112), label__True_1024, label__False_1025);
          BIND(label__False_1025);
          Print("assert '-1 <= lastOfs && lastOfs < offset && offset <= length' failed at ../../third_party/v8/builtins/array-sort.tq:1000:7");
          Unreachable();
          BIND(label__True_1024);
          // ../../third_party/v8/builtins/array-sort.tq:1006:7
          TNode<Smi> t3113 = implicit_cast<TNode<Smi>>((*lastOfs_457).value());
          USE(t3113);
          TNode<Smi> t3114 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3115 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>(t3114)));
          *lastOfs_457 = implicit_cast<TNode<Smi>>(t3115);
          // ../../third_party/v8/builtins/array-sort.tq:1007:7
          {
            Label label__True_1028_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1028 = &label__True_1028_impl;
            USE(label__True_1028);
            Label label__False_1029_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1029 = &label__False_1029_impl;
            USE(label__False_1029);
            Label label_header_1081_1855_impl(this, {elements_456, lastOfs_457, offset_458, order_459}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1081_1855 = &label_header_1081_1855_impl;
            USE(label_header_1081_1855);
            Goto(label_header_1081_1855);
            BIND(label_header_1081_1855);
            TNode<BoolT> t3116 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>((*offset_458).value())));
            USE(implicit_cast<TNode<BoolT>>(t3116));
            Branch(implicit_cast<TNode<BoolT>>(t3116), label__True_1028, label__False_1029);
            if (label__True_1028->is_used())
            {
              BIND(label__True_1028);
              // ../../third_party/v8/builtins/array-sort.tq:1007:32
              {
                // ../../third_party/v8/builtins/array-sort.tq:1008:9
                TNode<Smi> t3117 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>((*lastOfs_457).value())));
                USE(implicit_cast<TNode<Smi>>(t3117));
                int31_t t3118 = 1;
                TNode<Smi> t3119 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t3117), implicit_cast<int31_t>(t3118)));
                USE(implicit_cast<TNode<Smi>>(t3119));
                TNode<Smi> t3120 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>(t3119)));
                USE(implicit_cast<TNode<Smi>>(t3120));
                TNode<Smi> m_1082_impl;
                auto m_1082 = &m_1082_impl;
                USE(m_1082);
                *m_1082 = implicit_cast<TNode<Smi>>(t3120);
                // ../../third_party/v8/builtins/array-sort.tq:1010:9
                TNode<Smi> t3121 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_1082))));
                USE(implicit_cast<TNode<Smi>>(t3121));
                TNode<Object> t3122 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_456).value()), implicit_cast<TNode<Smi>>(t3121), label_Bailout_997));
                USE(implicit_cast<TNode<Object>>(t3122));
                TNode<Object> baseMElement_1083_impl;
                auto baseMElement_1083 = &baseMElement_1083_impl;
                USE(baseMElement_1083);
                *baseMElement_1083 = implicit_cast<TNode<Object>>(t3122);
                // ../../third_party/v8/builtins/array-sort.tq:1013:9
                TNode<Number> t3123 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*baseMElement_1083)), implicit_cast<TNode<Object>>(p_key), label_Bailout_997));
                USE(implicit_cast<TNode<Number>>(t3123));
                *order_459 = implicit_cast<TNode<Number>>(t3123);
                // ../../third_party/v8/builtins/array-sort.tq:1015:9
                {
                  Label label__True_1030_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1030 = &label__True_1030_impl;
                  USE(label__True_1030);
                  Label label__False_1031_impl(this, {elements_456}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1031 = &label__False_1031_impl;
                  USE(label__False_1031);
                  TNode<BoolT> t3124 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                  USE(implicit_cast<TNode<BoolT>>(t3124));
                  Branch(implicit_cast<TNode<BoolT>>(t3124), label__True_1030, label__False_1031);
                  if (label__True_1030->is_used())
                  {
                    BIND(label__True_1030);
                    // ../../third_party/v8/builtins/array-sort.tq:1015:36
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1016:11
                      TNode<HeapObject> t3125 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3125));
                      *elements_456 = implicit_cast<TNode<HeapObject>>(t3125);
                    }
                    Goto(label__False_1031);
                  }
                  BIND(label__False_1031);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1019:9
                {
                  Label label__True_1032_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1032 = &label__True_1032_impl;
                  USE(label__True_1032);
                  Label label__False_1033_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1033 = &label__False_1033_impl;
                  USE(label__False_1033);
                  Label label_if_done_label_1084_1856_impl(this, {lastOfs_457, offset_458}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_1084_1856 = &label_if_done_label_1084_1856_impl;
                  USE(label_if_done_label_1084_1856);
                  int31_t t3126 = 0;
                  TNode<Number> t3127 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3126)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_459).value()), implicit_cast<TNode<Number>>(t3127), label__True_1032, label__False_1033);
                  if (label__True_1032->is_used())
                  {
                    BIND(label__True_1032);
                    // ../../third_party/v8/builtins/array-sort.tq:1019:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1020:11
                      int31_t t3128 = 1;
                      TNode<Smi> t3129 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3128)));
                      TNode<Smi> t3130 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_1082)), implicit_cast<TNode<Smi>>(t3129)));
                      USE(implicit_cast<TNode<Smi>>(t3130));
                      *lastOfs_457 = implicit_cast<TNode<Smi>>(t3130);
                    }
                    Goto(label_if_done_label_1084_1856);
                  }
                  if (label__False_1033->is_used())
                  {
                    BIND(label__False_1033);
                    // ../../third_party/v8/builtins/array-sort.tq:1021:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1022:11
                      *offset_458 = implicit_cast<TNode<Smi>>((*m_1082));
                    }
                    Goto(label_if_done_label_1084_1856);
                  }
                  BIND(label_if_done_label_1084_1856);
                }
              }
              Goto(label_header_1081_1855);
            }
            BIND(label__False_1029);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1026:7
          Label label__True_1034_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1034 = &label__True_1034_impl;
          USE(label__True_1034);
          Label label__False_1035_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1035 = &label__False_1035_impl;
          USE(label__False_1035);
          TNode<BoolT> t3131 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lastOfs_457).value()), implicit_cast<TNode<Smi>>((*offset_458).value())));
          USE(implicit_cast<TNode<BoolT>>(t3131));
          Branch(implicit_cast<TNode<BoolT>>(t3131), label__True_1034, label__False_1035);
          BIND(label__False_1035);
          Print("assert 'lastOfs == offset' failed at ../../third_party/v8/builtins/array-sort.tq:1026:7");
          Unreachable();
          BIND(label__True_1034);
          // ../../third_party/v8/builtins/array-sort.tq:1027:7
          Label label__True_1036_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1036 = &label__True_1036_impl;
          USE(label__True_1036);
          Label label__False_1037_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1037 = &label__False_1037_impl;
          USE(label__False_1037);
          Label label__True_1038_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1038 = &label__True_1038_impl;
          USE(label__True_1038);
          int31_t t3132 = 0;
          TNode<Smi> t3133 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3132)));
          TNode<BoolT> t3134 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3133), implicit_cast<TNode<Smi>>((*offset_458).value())));
          USE(implicit_cast<TNode<BoolT>>(t3134));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3134), label__False_1037);
          TNode<BoolT> t3135 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_458).value()), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<BoolT>>(t3135));
Branch(implicit_cast<TNode<BoolT>>(t3135), label__True_1036, label__False_1037);
          BIND(label__False_1037);
          Print("assert '0 <= offset && offset <= length' failed at ../../third_party/v8/builtins/array-sort.tq:1027:7");
          Unreachable();
          BIND(label__True_1036);
          // ../../third_party/v8/builtins/array-sort.tq:1028:7
          Return(implicit_cast<TNode<Smi>>((*offset_458).value()));
        }
      }
      if (label_Bailout_997->is_used())
      {
        BIND(label_Bailout_997);
        // ../../third_party/v8/builtins/array-sort.tq:1030:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1031:7
          TNode<Smi> t3136 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3136));
          Return(implicit_cast<TNode<Smi>>(t3136));
        }
      }
    }
  }
}

TF_BUILTIN(GallopRight, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:1046:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:1047:5
    Label label__True_1039_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1039 = &label__True_1039_impl;
    USE(label__True_1039);
    Label label__False_1040_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1040 = &label__False_1040_impl;
    USE(label__False_1040);
    Label label__True_1041_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1041 = &label__True_1041_impl;
    USE(label__True_1041);
    int31_t t3137 = 0;
    TNode<Smi> t3138 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3137)));
    TNode<BoolT> t3139 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3138)));
    USE(implicit_cast<TNode<BoolT>>(t3139));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3139), label__False_1040);
    int31_t t3140 = 0;
    TNode<Smi> t3141 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3140)));
    TNode<BoolT> t3142 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(t3141)));
    USE(implicit_cast<TNode<BoolT>>(t3142));
Branch(implicit_cast<TNode<BoolT>>(t3142), label__True_1039, label__False_1040);
    BIND(label__False_1040);
    Print("assert 'length > 0 && base >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1047:5");
    Unreachable();
    BIND(label__True_1039);
    // ../../third_party/v8/builtins/array-sort.tq:1048:5
    Label label__True_1042_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1042 = &label__True_1042_impl;
    USE(label__True_1042);
    Label label__False_1043_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1043 = &label__False_1043_impl;
    USE(label__False_1043);
    Label label__True_1044_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1044 = &label__True_1044_impl;
    USE(label__True_1044);
    int31_t t3143 = 0;
    TNode<Smi> t3144 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3143)));
    TNode<BoolT> t3145 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3144), implicit_cast<TNode<Smi>>(p_hint)));
    USE(implicit_cast<TNode<BoolT>>(t3145));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3145), label__False_1043);
    TNode<BoolT> t3146 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<BoolT>>(t3146));
Branch(implicit_cast<TNode<BoolT>>(t3146), label__True_1042, label__False_1043);
    BIND(label__False_1043);
    Print("assert '0 <= hint && hint < length' failed at ../../third_party/v8/builtins/array-sort.tq:1048:5");
    Unreachable();
    BIND(label__True_1042);
    // ../../third_party/v8/builtins/array-sort.tq:1053:5
    auto t3147 = [=]() {
      TNode<FixedArray> t3149 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<FixedArray>>(t3149));
      return implicit_cast<TNode<FixedArray>>(t3149);
    };
    auto t3148 = [=]() {
      TNode<HeapObject> t3150 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<HeapObject>>(t3150));
      return implicit_cast<TNode<HeapObject>>(t3150);
    };
    TVARIABLE(HeapObject, t3151_1085_impl);
    auto t3151_1085 = &t3151_1085_impl;
    USE(t3151_1085);
    {
      Label label__True_1045_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1045 = &label__True_1045_impl;
      USE(label__True_1045);
      Label label__False_1046_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1046 = &label__False_1046_impl;
      USE(label__False_1046);
      Label label__done_1086_1857_impl(this, {t3151_1085}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_1086_1857 = &label__done_1086_1857_impl;
      USE(label__done_1086_1857);
      TNode<BoolT> t3152 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t3152));
      Branch(implicit_cast<TNode<BoolT>>(t3152), label__True_1045, label__False_1046);
      BIND(label__True_1045);
            *t3151_1085 = implicit_cast<TNode<HeapObject>>(t3147());
      Goto(label__done_1086_1857);
      BIND(label__False_1046);
            *t3151_1085 = implicit_cast<TNode<HeapObject>>(t3148());
      Goto(label__done_1086_1857);
      BIND(label__done_1086_1857);
    }
    TVARIABLE(HeapObject, elements_462_impl);
    auto elements_462 = &elements_462_impl;
    USE(elements_462);
    *elements_462 = implicit_cast<TNode<HeapObject>>((*t3151_1085).value());
    // ../../third_party/v8/builtins/array-sort.tq:1056:5
    int31_t t3153 = 0;
    TVARIABLE(Smi, lastOfs_463_impl);
    auto lastOfs_463 = &lastOfs_463_impl;
    USE(lastOfs_463);
    TNode<Smi> t3154 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3153)));
    *lastOfs_463 = implicit_cast<TNode<Smi>>(t3154);
    // ../../third_party/v8/builtins/array-sort.tq:1057:5
    int31_t t3155 = 1;
    TVARIABLE(Smi, offset_464_impl);
    auto offset_464 = &offset_464_impl;
    USE(offset_464);
    TNode<Smi> t3156 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3155)));
    *offset_464 = implicit_cast<TNode<Smi>>(t3156);
    // ../../third_party/v8/builtins/array-sort.tq:1059:5
    {
      Label label_try_done_1087_1858_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1087_1858 = &label_try_done_1087_1858_impl;
      USE(label_try_done_1087_1858);
      Label label_Bailout_1047_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Bailout_1047 = &label_Bailout_1047_impl;
      USE(label_Bailout_1047);
      Label label_try_begin_1088_1859_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1088_1859 = &label_try_begin_1088_1859_impl;
      USE(label_try_begin_1088_1859);
      Goto(label_try_begin_1088_1859);
      if (label_try_begin_1088_1859->is_used())
      {
        BIND(label_try_begin_1088_1859);
        // ../../third_party/v8/builtins/array-sort.tq:1059:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1060:7
          TNode<Smi> t3157 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t3157));
          TNode<Object> t3158 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_462).value()), implicit_cast<TNode<Smi>>(t3157), label_Bailout_1047));
          USE(implicit_cast<TNode<Object>>(t3158));
          TNode<Object> baseHintElement_1089_impl;
          auto baseHintElement_1089 = &baseHintElement_1089_impl;
          USE(baseHintElement_1089);
          *baseHintElement_1089 = implicit_cast<TNode<Object>>(t3158);
          // ../../third_party/v8/builtins/array-sort.tq:1063:7
          TNode<Number> t3159 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*baseHintElement_1089)), label_Bailout_1047));
          USE(implicit_cast<TNode<Number>>(t3159));
          TVARIABLE(Number, order_465_impl);
          auto order_465 = &order_465_impl;
          USE(order_465);
          *order_465 = implicit_cast<TNode<Number>>(t3159);
          // ../../third_party/v8/builtins/array-sort.tq:1066:7
          {
            Label label__True_1048_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1048 = &label__True_1048_impl;
            USE(label__True_1048);
            Label label__False_1049_impl(this, {elements_462}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1049 = &label__False_1049_impl;
            USE(label__False_1049);
            TNode<BoolT> t3160 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
            USE(implicit_cast<TNode<BoolT>>(t3160));
            Branch(implicit_cast<TNode<BoolT>>(t3160), label__True_1048, label__False_1049);
            if (label__True_1048->is_used())
            {
              BIND(label__True_1048);
              // ../../third_party/v8/builtins/array-sort.tq:1066:34
              {
                // ../../third_party/v8/builtins/array-sort.tq:1067:9
                TNode<HeapObject> t3161 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t3161));
                *elements_462 = implicit_cast<TNode<HeapObject>>(t3161);
              }
              Goto(label__False_1049);
            }
            BIND(label__False_1049);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1070:7
          {
            Label label__True_1050_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1050 = &label__True_1050_impl;
            USE(label__True_1050);
            Label label__False_1051_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1051 = &label__False_1051_impl;
            USE(label__False_1051);
            Label label_if_done_label_1090_1860_impl(this, {elements_462, lastOfs_463, offset_464, order_465}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1090_1860 = &label_if_done_label_1090_1860_impl;
            USE(label_if_done_label_1090_1860);
            int31_t t3162 = 0;
            TNode<Number> t3163 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3162)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_465).value()), implicit_cast<TNode<Number>>(t3163), label__True_1050, label__False_1051);
            if (label__True_1050->is_used())
            {
              BIND(label__True_1050);
              // ../../third_party/v8/builtins/array-sort.tq:1070:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:1075:9
                int31_t t3164 = 1;
                TNode<Smi> t3165 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3164)));
                TNode<Smi> t3166 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t3165)));
                USE(implicit_cast<TNode<Smi>>(t3166));
                TVARIABLE(Smi, maxOfs_466_impl);
                auto maxOfs_466 = &maxOfs_466_impl;
                USE(maxOfs_466);
                *maxOfs_466 = implicit_cast<TNode<Smi>>(t3166);
                // ../../third_party/v8/builtins/array-sort.tq:1076:9
                {
                  Label label__True_1052_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1052 = &label__True_1052_impl;
                  USE(label__True_1052);
                  Label label__False_1053_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1053 = &label__False_1053_impl;
                  USE(label__False_1053);
                  Label label_header_1091_1861_impl(this, {elements_462, lastOfs_463, offset_464, order_465}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1091_1861 = &label_header_1091_1861_impl;
                  USE(label_header_1091_1861);
                  Goto(label_header_1091_1861);
                  BIND(label_header_1091_1861);
                  TNode<BoolT> t3167 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>((*maxOfs_466).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3167));
                  Branch(implicit_cast<TNode<BoolT>>(t3167), label__True_1052, label__False_1053);
                  if (label__True_1052->is_used())
                  {
                    BIND(label__True_1052);
                    // ../../third_party/v8/builtins/array-sort.tq:1076:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1077:11
                      TNode<Smi> t3168 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t3168));
                      TNode<Smi> t3169 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3168), implicit_cast<TNode<Smi>>((*offset_464).value())));
                      USE(implicit_cast<TNode<Smi>>(t3169));
                      TNode<Object> t3170 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_462).value()), implicit_cast<TNode<Smi>>(t3169), label_Bailout_1047));
                      USE(implicit_cast<TNode<Object>>(t3170));
                      TNode<Object> offsetElement_1092_impl;
                      auto offsetElement_1092 = &offsetElement_1092_impl;
                      USE(offsetElement_1092);
                      *offsetElement_1092 = implicit_cast<TNode<Object>>(t3170);
                      // ../../third_party/v8/builtins/array-sort.tq:1080:11
                      TNode<Number> t3171 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offsetElement_1092)), label_Bailout_1047));
                      USE(implicit_cast<TNode<Number>>(t3171));
                      *order_465 = implicit_cast<TNode<Number>>(t3171);
                      // ../../third_party/v8/builtins/array-sort.tq:1082:11
                      {
                        Label label__True_1054_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1054 = &label__True_1054_impl;
                        USE(label__True_1054);
                        Label label__False_1055_impl(this, {elements_462}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1055 = &label__False_1055_impl;
                        USE(label__False_1055);
                        TNode<BoolT> t3172 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t3172));
                        Branch(implicit_cast<TNode<BoolT>>(t3172), label__True_1054, label__False_1055);
                        if (label__True_1054->is_used())
                        {
                          BIND(label__True_1054);
                          // ../../third_party/v8/builtins/array-sort.tq:1082:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1083:13
                            TNode<HeapObject> t3173 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t3173));
                            *elements_462 = implicit_cast<TNode<HeapObject>>(t3173);
                          }
                          Goto(label__False_1055);
                        }
                        BIND(label__False_1055);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1086:11
                      {
                        Label label__True_1056_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1056 = &label__True_1056_impl;
                        USE(label__True_1056);
                        Label label__False_1057_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1057 = &label__False_1057_impl;
                        USE(label__False_1057);
                        int31_t t3174 = 0;
                        TNode<Number> t3175 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3174)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_465).value()), implicit_cast<TNode<Number>>(t3175), label__True_1056, label__False_1057);
                        if (label__True_1056->is_used())
                        {
                          BIND(label__True_1056);
                          // ../../third_party/v8/builtins/array-sort.tq:1086:27
                          Goto(label__False_1053);
                        }
                        BIND(label__False_1057);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1088:11
                      *lastOfs_463 = implicit_cast<TNode<Smi>>((*offset_464).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1089:11
                      int31_t t3176 = 1;
                      TNode<Smi> t3177 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<int31_t>(t3176)));
                      USE(implicit_cast<TNode<Smi>>(t3177));
                      int31_t t3178 = 1;
                      TNode<Smi> t3179 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3178)));
                      TNode<Smi> t3180 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3177), implicit_cast<TNode<Smi>>(t3179)));
                      USE(implicit_cast<TNode<Smi>>(t3180));
                      *offset_464 = implicit_cast<TNode<Smi>>(t3180);
                      // ../../third_party/v8/builtins/array-sort.tq:1092:11
                      {
                        Label label__True_1058_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1058 = &label__True_1058_impl;
                        USE(label__True_1058);
                        Label label__False_1059_impl(this, {offset_464}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1059 = &label__False_1059_impl;
                        USE(label__False_1059);
                        int31_t t3181 = 0;
                        TNode<Smi> t3182 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3181)));
                        TNode<BoolT> t3183 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>(t3182)));
                        USE(implicit_cast<TNode<BoolT>>(t3183));
                        Branch(implicit_cast<TNode<BoolT>>(t3183), label__True_1058, label__False_1059);
                        if (label__True_1058->is_used())
                        {
                          BIND(label__True_1058);
                          // ../../third_party/v8/builtins/array-sort.tq:1092:28
                          *offset_464 = implicit_cast<TNode<Smi>>((*maxOfs_466).value());
                          Goto(label__False_1059);
                        }
                        BIND(label__False_1059);
                      }
                    }
                    Goto(label_header_1091_1861);
                  }
                  BIND(label__False_1053);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1095:9
                {
                  Label label__True_1060_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1060 = &label__True_1060_impl;
                  USE(label__True_1060);
                  Label label__False_1061_impl(this, {offset_464}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1061 = &label__False_1061_impl;
                  USE(label__False_1061);
                  TNode<BoolT> t3184 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>((*maxOfs_466).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3184));
                  Branch(implicit_cast<TNode<BoolT>>(t3184), label__True_1060, label__False_1061);
                  if (label__True_1060->is_used())
                  {
                    BIND(label__True_1060);
                    // ../../third_party/v8/builtins/array-sort.tq:1095:30
                    *offset_464 = implicit_cast<TNode<Smi>>((*maxOfs_466).value());
                    Goto(label__False_1061);
                  }
                  BIND(label__False_1061);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1098:9
                TNode<Smi> tmp_1093_impl;
                auto tmp_1093 = &tmp_1093_impl;
                USE(tmp_1093);
                *tmp_1093 = implicit_cast<TNode<Smi>>((*lastOfs_463).value());
                // ../../third_party/v8/builtins/array-sort.tq:1099:9
                TNode<Smi> t3185 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_464).value())));
                USE(implicit_cast<TNode<Smi>>(t3185));
                *lastOfs_463 = implicit_cast<TNode<Smi>>(t3185);
                // ../../third_party/v8/builtins/array-sort.tq:1100:9
                TNode<Smi> t3186 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_1093))));
                USE(implicit_cast<TNode<Smi>>(t3186));
                *offset_464 = implicit_cast<TNode<Smi>>(t3186);
              }
              Goto(label_if_done_label_1090_1860);
            }
            if (label__False_1051->is_used())
            {
              BIND(label__False_1051);
              // ../../third_party/v8/builtins/array-sort.tq:1101:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1106:9
                TNode<Smi> t3187 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3187));
                TVARIABLE(Smi, maxOfs_467_impl);
                auto maxOfs_467 = &maxOfs_467_impl;
                USE(maxOfs_467);
                *maxOfs_467 = implicit_cast<TNode<Smi>>(t3187);
                // ../../third_party/v8/builtins/array-sort.tq:1107:9
                {
                  Label label__True_1062_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1062 = &label__True_1062_impl;
                  USE(label__True_1062);
                  Label label__False_1063_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1063 = &label__False_1063_impl;
                  USE(label__False_1063);
                  Label label_header_1094_1862_impl(this, {elements_462, lastOfs_463, offset_464, order_465}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1094_1862 = &label_header_1094_1862_impl;
                  USE(label_header_1094_1862);
                  Goto(label_header_1094_1862);
                  BIND(label_header_1094_1862);
                  TNode<BoolT> t3188 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>((*maxOfs_467).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3188));
                  Branch(implicit_cast<TNode<BoolT>>(t3188), label__True_1062, label__False_1063);
                  if (label__True_1062->is_used())
                  {
                    BIND(label__True_1062);
                    // ../../third_party/v8/builtins/array-sort.tq:1107:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1108:11
                      TNode<Smi> t3189 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t3189));
                      TNode<Smi> t3190 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3189), implicit_cast<TNode<Smi>>((*offset_464).value())));
                      USE(implicit_cast<TNode<Smi>>(t3190));
                      TNode<Object> t3191 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_462).value()), implicit_cast<TNode<Smi>>(t3190), label_Bailout_1047));
                      USE(implicit_cast<TNode<Object>>(t3191));
                      TNode<Object> offsetElement_1095_impl;
                      auto offsetElement_1095 = &offsetElement_1095_impl;
                      USE(offsetElement_1095);
                      *offsetElement_1095 = implicit_cast<TNode<Object>>(t3191);
                      // ../../third_party/v8/builtins/array-sort.tq:1111:11
                      TNode<Number> t3192 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offsetElement_1095)), label_Bailout_1047));
                      USE(implicit_cast<TNode<Number>>(t3192));
                      *order_465 = implicit_cast<TNode<Number>>(t3192);
                      // ../../third_party/v8/builtins/array-sort.tq:1113:11
                      {
                        Label label__True_1064_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1064 = &label__True_1064_impl;
                        USE(label__True_1064);
                        Label label__False_1065_impl(this, {elements_462}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1065 = &label__False_1065_impl;
                        USE(label__False_1065);
                        TNode<BoolT> t3193 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                        USE(implicit_cast<TNode<BoolT>>(t3193));
                        Branch(implicit_cast<TNode<BoolT>>(t3193), label__True_1064, label__False_1065);
                        if (label__True_1064->is_used())
                        {
                          BIND(label__True_1064);
                          // ../../third_party/v8/builtins/array-sort.tq:1113:38
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1114:13
                            TNode<HeapObject> t3194 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                            USE(implicit_cast<TNode<HeapObject>>(t3194));
                            *elements_462 = implicit_cast<TNode<HeapObject>>(t3194);
                          }
                          Goto(label__False_1065);
                        }
                        BIND(label__False_1065);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1118:11
                      {
                        Label label__True_1066_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1066 = &label__True_1066_impl;
                        USE(label__True_1066);
                        Label label__False_1067_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1067 = &label__False_1067_impl;
                        USE(label__False_1067);
                        int31_t t3195 = 0;
                        TNode<Number> t3196 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3195)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_465).value()), implicit_cast<TNode<Number>>(t3196), label__True_1066, label__False_1067);
                        if (label__True_1066->is_used())
                        {
                          BIND(label__True_1066);
                          // ../../third_party/v8/builtins/array-sort.tq:1118:26
                          Goto(label__False_1063);
                        }
                        BIND(label__False_1067);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1120:11
                      *lastOfs_463 = implicit_cast<TNode<Smi>>((*offset_464).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1121:11
                      int31_t t3197 = 1;
                      TNode<Smi> t3198 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<int31_t>(t3197)));
                      USE(implicit_cast<TNode<Smi>>(t3198));
                      int31_t t3199 = 1;
                      TNode<Smi> t3200 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3199)));
                      TNode<Smi> t3201 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t3198), implicit_cast<TNode<Smi>>(t3200)));
                      USE(implicit_cast<TNode<Smi>>(t3201));
                      *offset_464 = implicit_cast<TNode<Smi>>(t3201);
                      // ../../third_party/v8/builtins/array-sort.tq:1124:11
                      {
                        Label label__True_1068_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1068 = &label__True_1068_impl;
                        USE(label__True_1068);
                        Label label__False_1069_impl(this, {offset_464}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1069 = &label__False_1069_impl;
                        USE(label__False_1069);
                        int31_t t3202 = 0;
                        TNode<Smi> t3203 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3202)));
                        TNode<BoolT> t3204 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>(t3203)));
                        USE(implicit_cast<TNode<BoolT>>(t3204));
                        Branch(implicit_cast<TNode<BoolT>>(t3204), label__True_1068, label__False_1069);
                        if (label__True_1068->is_used())
                        {
                          BIND(label__True_1068);
                          // ../../third_party/v8/builtins/array-sort.tq:1124:28
                          *offset_464 = implicit_cast<TNode<Smi>>((*maxOfs_467).value());
                          Goto(label__False_1069);
                        }
                        BIND(label__False_1069);
                      }
                    }
                    Goto(label_header_1094_1862);
                  }
                  BIND(label__False_1063);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1127:9
                {
                  Label label__True_1070_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1070 = &label__True_1070_impl;
                  USE(label__True_1070);
                  Label label__False_1071_impl(this, {offset_464}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1071 = &label__False_1071_impl;
                  USE(label__False_1071);
                  TNode<BoolT> t3205 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>((*maxOfs_467).value())));
                  USE(implicit_cast<TNode<BoolT>>(t3205));
                  Branch(implicit_cast<TNode<BoolT>>(t3205), label__True_1070, label__False_1071);
                  if (label__True_1070->is_used())
                  {
                    BIND(label__True_1070);
                    // ../../third_party/v8/builtins/array-sort.tq:1127:30
                    *offset_464 = implicit_cast<TNode<Smi>>((*maxOfs_467).value());
                    Goto(label__False_1071);
                  }
                  BIND(label__False_1071);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1130:9
                TNode<Smi> t3206 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3206));
                *lastOfs_463 = implicit_cast<TNode<Smi>>(t3206);
                // ../../third_party/v8/builtins/array-sort.tq:1131:9
                TNode<Smi> t3207 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t3207));
                *offset_464 = implicit_cast<TNode<Smi>>(t3207);
              }
              Goto(label_if_done_label_1090_1860);
            }
            BIND(label_if_done_label_1090_1860);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1133:7
          Label label__True_1072_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1072 = &label__True_1072_impl;
          USE(label__True_1072);
          Label label__False_1073_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1073 = &label__False_1073_impl;
          USE(label__False_1073);
          Label label__True_1074_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1074 = &label__True_1074_impl;
          USE(label__True_1074);
          Label label__True_1075_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1075 = &label__True_1075_impl;
          USE(label__True_1075);
          int31_t t3208 = -1;
          TNode<Smi> t3209 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3208)));
          TNode<BoolT> t3210 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3209), implicit_cast<TNode<Smi>>((*lastOfs_463).value())));
          USE(implicit_cast<TNode<BoolT>>(t3210));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3210), label__False_1073);
          TNode<BoolT> t3211 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>((*offset_464).value())));
          USE(implicit_cast<TNode<BoolT>>(t3211));
Branch(implicit_cast<TNode<BoolT>>(t3211), label__True_1074, label__False_1073);
          BIND(label__True_1074);
          TNode<BoolT> t3212 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<BoolT>>(t3212));
Branch(implicit_cast<TNode<BoolT>>(t3212), label__True_1072, label__False_1073);
          BIND(label__False_1073);
          Print("assert '-1 <= lastOfs && lastOfs < offset && offset <= length' failed at ../../third_party/v8/builtins/array-sort.tq:1133:7");
          Unreachable();
          BIND(label__True_1072);
          // ../../third_party/v8/builtins/array-sort.tq:1139:7
          TNode<Smi> t3213 = implicit_cast<TNode<Smi>>((*lastOfs_463).value());
          USE(t3213);
          TNode<Smi> t3214 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3215 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>(t3214)));
          *lastOfs_463 = implicit_cast<TNode<Smi>>(t3215);
          // ../../third_party/v8/builtins/array-sort.tq:1140:7
          {
            Label label__True_1076_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1076 = &label__True_1076_impl;
            USE(label__True_1076);
            Label label__False_1077_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1077 = &label__False_1077_impl;
            USE(label__False_1077);
            Label label_header_1096_1863_impl(this, {elements_462, lastOfs_463, offset_464, order_465}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1096_1863 = &label_header_1096_1863_impl;
            USE(label_header_1096_1863);
            Goto(label_header_1096_1863);
            BIND(label_header_1096_1863);
            TNode<BoolT> t3216 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>((*offset_464).value())));
            USE(implicit_cast<TNode<BoolT>>(t3216));
            Branch(implicit_cast<TNode<BoolT>>(t3216), label__True_1076, label__False_1077);
            if (label__True_1076->is_used())
            {
              BIND(label__True_1076);
              // ../../third_party/v8/builtins/array-sort.tq:1140:32
              {
                // ../../third_party/v8/builtins/array-sort.tq:1141:9
                TNode<Smi> t3217 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>((*lastOfs_463).value())));
                USE(implicit_cast<TNode<Smi>>(t3217));
                int31_t t3218 = 1;
                TNode<Smi> t3219 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t3217), implicit_cast<int31_t>(t3218)));
                USE(implicit_cast<TNode<Smi>>(t3219));
                TNode<Smi> t3220 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>(t3219)));
                USE(implicit_cast<TNode<Smi>>(t3220));
                TNode<Smi> m_1097_impl;
                auto m_1097 = &m_1097_impl;
                USE(m_1097);
                *m_1097 = implicit_cast<TNode<Smi>>(t3220);
                // ../../third_party/v8/builtins/array-sort.tq:1143:9
                TNode<Smi> t3221 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_1097))));
                USE(implicit_cast<TNode<Smi>>(t3221));
                TNode<Object> t3222 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>((*elements_462).value()), implicit_cast<TNode<Smi>>(t3221), label_Bailout_1047));
                USE(implicit_cast<TNode<Object>>(t3222));
                TNode<Object> baseMElement_1098_impl;
                auto baseMElement_1098 = &baseMElement_1098_impl;
                USE(baseMElement_1098);
                *baseMElement_1098 = implicit_cast<TNode<Object>>(t3222);
                // ../../third_party/v8/builtins/array-sort.tq:1146:9
                TNode<Number> t3223 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*baseMElement_1098)), label_Bailout_1047));
                USE(implicit_cast<TNode<Number>>(t3223));
                *order_465 = implicit_cast<TNode<Number>>(t3223);
                // ../../third_party/v8/builtins/array-sort.tq:1148:9
                {
                  Label label__True_1078_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1078 = &label__True_1078_impl;
                  USE(label__True_1078);
                  Label label__False_1079_impl(this, {elements_462}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1079 = &label__False_1079_impl;
                  USE(label__False_1079);
                  TNode<BoolT> t3224 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(False())));
                  USE(implicit_cast<TNode<BoolT>>(t3224));
                  Branch(implicit_cast<TNode<BoolT>>(t3224), label__True_1078, label__False_1079);
                  if (label__True_1078->is_used())
                  {
                    BIND(label__True_1078);
                    // ../../third_party/v8/builtins/array-sort.tq:1148:36
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1149:11
                      TNode<HeapObject> t3225 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3225));
                      *elements_462 = implicit_cast<TNode<HeapObject>>(t3225);
                    }
                    Goto(label__False_1079);
                  }
                  BIND(label__False_1079);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1152:9
                {
                  Label label__True_1080_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1080 = &label__True_1080_impl;
                  USE(label__True_1080);
                  Label label__False_1081_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1081 = &label__False_1081_impl;
                  USE(label__False_1081);
                  Label label_if_done_label_1099_1864_impl(this, {lastOfs_463, offset_464}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_1099_1864 = &label_if_done_label_1099_1864_impl;
                  USE(label_if_done_label_1099_1864);
                  int31_t t3226 = 0;
                  TNode<Number> t3227 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3226)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_465).value()), implicit_cast<TNode<Number>>(t3227), label__True_1080, label__False_1081);
                  if (label__True_1080->is_used())
                  {
                    BIND(label__True_1080);
                    // ../../third_party/v8/builtins/array-sort.tq:1152:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1153:11
                      *offset_464 = implicit_cast<TNode<Smi>>((*m_1097));
                    }
                    Goto(label_if_done_label_1099_1864);
                  }
                  if (label__False_1081->is_used())
                  {
                    BIND(label__False_1081);
                    // ../../third_party/v8/builtins/array-sort.tq:1154:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1155:11
                      int31_t t3228 = 1;
                      TNode<Smi> t3229 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3228)));
                      TNode<Smi> t3230 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_1097)), implicit_cast<TNode<Smi>>(t3229)));
                      USE(implicit_cast<TNode<Smi>>(t3230));
                      *lastOfs_463 = implicit_cast<TNode<Smi>>(t3230);
                    }
                    Goto(label_if_done_label_1099_1864);
                  }
                  BIND(label_if_done_label_1099_1864);
                }
              }
              Goto(label_header_1096_1863);
            }
            BIND(label__False_1077);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1159:7
          Label label__True_1082_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1082 = &label__True_1082_impl;
          USE(label__True_1082);
          Label label__False_1083_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1083 = &label__False_1083_impl;
          USE(label__False_1083);
          TNode<BoolT> t3231 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lastOfs_463).value()), implicit_cast<TNode<Smi>>((*offset_464).value())));
          USE(implicit_cast<TNode<BoolT>>(t3231));
          Branch(implicit_cast<TNode<BoolT>>(t3231), label__True_1082, label__False_1083);
          BIND(label__False_1083);
          Print("assert 'lastOfs == offset' failed at ../../third_party/v8/builtins/array-sort.tq:1159:7");
          Unreachable();
          BIND(label__True_1082);
          // ../../third_party/v8/builtins/array-sort.tq:1160:7
          Label label__True_1084_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1084 = &label__True_1084_impl;
          USE(label__True_1084);
          Label label__False_1085_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1085 = &label__False_1085_impl;
          USE(label__False_1085);
          Label label__True_1086_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1086 = &label__True_1086_impl;
          USE(label__True_1086);
          int31_t t3232 = 0;
          TNode<Smi> t3233 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3232)));
          TNode<BoolT> t3234 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3233), implicit_cast<TNode<Smi>>((*offset_464).value())));
          USE(implicit_cast<TNode<BoolT>>(t3234));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3234), label__False_1085);
          TNode<BoolT> t3235 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_464).value()), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<BoolT>>(t3235));
Branch(implicit_cast<TNode<BoolT>>(t3235), label__True_1084, label__False_1085);
          BIND(label__False_1085);
          Print("assert '0 <= offset && offset <= length' failed at ../../third_party/v8/builtins/array-sort.tq:1160:7");
          Unreachable();
          BIND(label__True_1084);
          // ../../third_party/v8/builtins/array-sort.tq:1161:7
          Return(implicit_cast<TNode<Smi>>((*offset_464).value()));
        }
      }
      if (label_Bailout_1047->is_used())
      {
        BIND(label_Bailout_1047);
        // ../../third_party/v8/builtins/array-sort.tq:1163:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1164:7
          TNode<Smi> t3236 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3236));
          Return(implicit_cast<TNode<Smi>>(t3236));
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::CopyElement(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_load, TNode<Code> p_store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_1087) {
  Label label_macro_end_1865_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1865 = &label_macro_end_1865_impl;
  USE(label_macro_end_1865);
  // ../../third_party/v8/builtins/array-sort.tq:1172:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1173:5
    TNode<Object> t3237 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_from), label_Bailout_1087));
    USE(implicit_cast<TNode<Object>>(t3237));
    TNode<Object> element_1100_impl;
    auto element_1100 = &element_1100_impl;
    USE(element_1100);
    *element_1100 = implicit_cast<TNode<Object>>(t3237);
    // ../../third_party/v8/builtins/array-sort.tq:1175:5
    CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Object>>((*element_1100)), label_Bailout_1087);
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeLow(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg, Label* label_Bailout_1088) {
  Label label_macro_end_1866_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1866 = &label_macro_end_1866_impl;
  USE(label_macro_end_1866);
  // ../../third_party/v8/builtins/array-sort.tq:1188:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1189:5
    Label label__True_1089_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1089 = &label__True_1089_impl;
    USE(label__True_1089);
    Label label__False_1090_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1090 = &label__False_1090_impl;
    USE(label__False_1090);
    Label label__True_1091_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1091 = &label__True_1091_impl;
    USE(label__True_1091);
    int31_t t3238 = 0;
    TNode<Smi> t3239 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3238)));
    TNode<BoolT> t3240 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3239), implicit_cast<TNode<Smi>>(p_lengthAArg)));
    USE(implicit_cast<TNode<BoolT>>(t3240));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3240), label__False_1090);
    int31_t t3241 = 0;
    TNode<Smi> t3242 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3241)));
    TNode<BoolT> t3243 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3242), implicit_cast<TNode<Smi>>(p_lengthBArg)));
    USE(implicit_cast<TNode<BoolT>>(t3243));
Branch(implicit_cast<TNode<BoolT>>(t3243), label__True_1089, label__False_1090);
    BIND(label__False_1090);
    Print("assert '0 < lengthAArg && 0 < lengthBArg' failed at ../../third_party/v8/builtins/array-sort.tq:1189:5");
    Unreachable();
    BIND(label__True_1089);
    // ../../third_party/v8/builtins/array-sort.tq:1190:5
    Label label__True_1092_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1092 = &label__True_1092_impl;
    USE(label__True_1092);
    Label label__False_1093_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1093 = &label__False_1093_impl;
    USE(label__False_1093);
    Label label__True_1094_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1094 = &label__True_1094_impl;
    USE(label__True_1094);
    int31_t t3244 = 0;
    TNode<Smi> t3245 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3244)));
    TNode<BoolT> t3246 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3245), implicit_cast<TNode<Smi>>(p_baseA)));
    USE(implicit_cast<TNode<BoolT>>(t3246));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3246), label__False_1093);
    int31_t t3247 = 0;
    TNode<Smi> t3248 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3247)));
    TNode<BoolT> t3249 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3248), implicit_cast<TNode<Smi>>(p_baseB)));
    USE(implicit_cast<TNode<BoolT>>(t3249));
Branch(implicit_cast<TNode<BoolT>>(t3249), label__True_1092, label__False_1093);
    BIND(label__False_1093);
    Print("assert '0 <= baseA && 0 < baseB' failed at ../../third_party/v8/builtins/array-sort.tq:1190:5");
    Unreachable();
    BIND(label__True_1092);
    // ../../third_party/v8/builtins/array-sort.tq:1191:5
    Label label__True_1095_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1095 = &label__True_1095_impl;
    USE(label__True_1095);
    Label label__False_1096_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1096 = &label__False_1096_impl;
    USE(label__False_1096);
    TNode<Smi> t3250 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>(p_lengthAArg)));
    USE(implicit_cast<TNode<Smi>>(t3250));
    TNode<BoolT> t3251 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3250), implicit_cast<TNode<Smi>>(p_baseB)));
    USE(implicit_cast<TNode<BoolT>>(t3251));
    Branch(implicit_cast<TNode<BoolT>>(t3251), label__True_1095, label__False_1096);
    BIND(label__False_1096);
    Print("assert 'baseA + lengthAArg == baseB' failed at ../../third_party/v8/builtins/array-sort.tq:1191:5");
    Unreachable();
    BIND(label__True_1095);
    // ../../third_party/v8/builtins/array-sort.tq:1193:5
    TVARIABLE(Smi, lengthA_468_impl);
    auto lengthA_468 = &lengthA_468_impl;
    USE(lengthA_468);
    *lengthA_468 = implicit_cast<TNode<Smi>>(p_lengthAArg);
    // ../../third_party/v8/builtins/array-sort.tq:1194:5
    TVARIABLE(Smi, lengthB_469_impl);
    auto lengthB_469 = &lengthB_469_impl;
    USE(lengthB_469);
    *lengthB_469 = implicit_cast<TNode<Smi>>(p_lengthBArg);
    // ../../third_party/v8/builtins/array-sort.tq:1196:5
    TNode<HeapObject> t3252 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t3252));
    TVARIABLE(HeapObject, elements_470_impl);
    auto elements_470 = &elements_470_impl;
    USE(elements_470);
    *elements_470 = implicit_cast<TNode<HeapObject>>(t3252);
    // ../../third_party/v8/builtins/array-sort.tq:1197:5
    TNode<Code> t3253 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t3253));
    TNode<Code> load_1101_impl;
    auto load_1101 = &load_1101_impl;
    USE(load_1101);
    *load_1101 = implicit_cast<TNode<Code>>(t3253);
    // ../../third_party/v8/builtins/array-sort.tq:1198:5
    TNode<Code> t3254 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t3254));
    TNode<Code> store_1102_impl;
    auto store_1102 = &store_1102_impl;
    USE(store_1102);
    *store_1102 = implicit_cast<TNode<Code>>(t3254);
    // ../../third_party/v8/builtins/array-sort.tq:1200:5
    TNode<FixedArray> t3255 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*lengthA_468).value())));
    USE(implicit_cast<TNode<FixedArray>>(t3255));
    TNode<FixedArray> tempArray_1103_impl;
    auto tempArray_1103 = &tempArray_1103_impl;
    USE(tempArray_1103);
    *tempArray_1103 = implicit_cast<TNode<FixedArray>>(t3255);
    // ../../third_party/v8/builtins/array-sort.tq:1201:5
    int31_t t3256 = 0;
    TNode<Smi> t3257 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3256)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>(t3257), implicit_cast<TNode<Smi>>((*lengthA_468).value()), label_Bailout_1088);
    // ../../third_party/v8/builtins/array-sort.tq:1205:5
    TVARIABLE(Smi, dest_471_impl);
    auto dest_471 = &dest_471_impl;
    USE(dest_471);
    *dest_471 = implicit_cast<TNode<Smi>>(p_baseA);
    // ../../third_party/v8/builtins/array-sort.tq:1206:5
    int31_t t3258 = 0;
    TVARIABLE(Smi, cursorTemp_472_impl);
    auto cursorTemp_472 = &cursorTemp_472_impl;
    USE(cursorTemp_472);
    TNode<Smi> t3259 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3258)));
    *cursorTemp_472 = implicit_cast<TNode<Smi>>(t3259);
    // ../../third_party/v8/builtins/array-sort.tq:1207:5
    TVARIABLE(Smi, cursorB_473_impl);
    auto cursorB_473 = &cursorB_473_impl;
    USE(cursorB_473);
    *cursorB_473 = implicit_cast<TNode<Smi>>(p_baseB);
    // ../../third_party/v8/builtins/array-sort.tq:1209:5
    TNode<Smi> t3260 = implicit_cast<TNode<Smi>>((*cursorB_473).value());
    USE(t3260);
    TNode<Smi> t3261 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t3262 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>(t3261)));
    *cursorB_473 = implicit_cast<TNode<Smi>>(t3262);
    TNode<Smi> t3263 = implicit_cast<TNode<Smi>>((*dest_471).value());
    USE(t3263);
    TNode<Smi> t3264 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t3265 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>(t3264)));
    *dest_471 = implicit_cast<TNode<Smi>>(t3265);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>(t3260), implicit_cast<TNode<Smi>>(t3263), label_Bailout_1088);
    // ../../third_party/v8/builtins/array-sort.tq:1212:5
    {
      Label label_try_done_1104_1867_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1104_1867 = &label_try_done_1104_1867_impl;
      USE(label_try_done_1104_1867);
      Label label_Succeed_1097_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Succeed_1097 = &label_Succeed_1097_impl;
      USE(label_Succeed_1097);
      Label label_CopyB_1098_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_CopyB_1098 = &label_CopyB_1098_impl;
      USE(label_CopyB_1098);
      Label label_try_begin_1105_1868_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1105_1868 = &label_try_begin_1105_1868_impl;
      USE(label_try_begin_1105_1868);
      Goto(label_try_begin_1105_1868);
      if (label_try_begin_1105_1868->is_used())
      {
        BIND(label_try_begin_1105_1868);
        // ../../third_party/v8/builtins/array-sort.tq:1212:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1213:7
          {
            Label label__True_1099_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1099 = &label__True_1099_impl;
            USE(label__True_1099);
            Label label__False_1100_impl(this, {lengthB_469}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1100 = &label__False_1100_impl;
            USE(label__False_1100);
            TNode<Smi> t3266 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t3267 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3266)));
            *lengthB_469 = implicit_cast<TNode<Smi>>(t3267);
            int31_t t3268 = 0;
            TNode<Smi> t3269 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3268)));
            TNode<BoolT> t3270 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3267), implicit_cast<TNode<Smi>>(t3269)));
            USE(implicit_cast<TNode<BoolT>>(t3270));
            Branch(implicit_cast<TNode<BoolT>>(t3270), label__True_1099, label__False_1100);
            if (label__True_1099->is_used())
            {
              BIND(label__True_1099);
              // ../../third_party/v8/builtins/array-sort.tq:1213:27
              Goto(label_Succeed_1097);
            }
            BIND(label__False_1100);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1214:7
          {
            Label label__True_1101_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1101 = &label__True_1101_impl;
            USE(label__True_1101);
            Label label__False_1102_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1102 = &label__False_1102_impl;
            USE(label__False_1102);
            int31_t t3271 = 1;
            TNode<Smi> t3272 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3271)));
            TNode<BoolT> t3273 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3272)));
            USE(implicit_cast<TNode<BoolT>>(t3273));
            Branch(implicit_cast<TNode<BoolT>>(t3273), label__True_1101, label__False_1102);
            if (label__True_1101->is_used())
            {
              BIND(label__True_1101);
              // ../../third_party/v8/builtins/array-sort.tq:1214:25
              Goto(label_CopyB_1098);
            }
            BIND(label__False_1102);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1216:7
          TNode<Object> t3274 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t3275 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t3274)));
          USE(implicit_cast<TNode<Smi>>(t3275));
          TVARIABLE(Smi, minGallop_474_impl);
          auto minGallop_474 = &minGallop_474_impl;
          USE(minGallop_474);
          *minGallop_474 = implicit_cast<TNode<Smi>>(t3275);
          // ../../third_party/v8/builtins/array-sort.tq:1219:7
          {
            Label label__True_1103_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1103 = &label__True_1103_impl;
            USE(label__True_1103);
            Label label__False_1104_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1104 = &label__False_1104_impl;
            USE(label__False_1104);
            Label label_header_1106_1869_impl(this, {cursorB_473, cursorTemp_472, dest_471, elements_470, lengthA_468, lengthB_469, minGallop_474}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1106_1869 = &label_header_1106_1869_impl;
            USE(label_header_1106_1869);
            Goto(label_header_1106_1869);
            BIND(label_header_1106_1869);
            TNode<BoolT> t3276 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t3276));
            Branch(implicit_cast<TNode<BoolT>>(t3276), label__True_1103, label__False_1104);
            if (label__True_1103->is_used())
            {
              BIND(label__True_1103);
              // ../../third_party/v8/builtins/array-sort.tq:1219:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1220:9
                int31_t t3277 = 0;
                TVARIABLE(Smi, nofWinsA_475_impl);
                auto nofWinsA_475 = &nofWinsA_475_impl;
                USE(nofWinsA_475);
                TNode<Smi> t3278 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3277)));
                *nofWinsA_475 = implicit_cast<TNode<Smi>>(t3278);
                // ../../third_party/v8/builtins/array-sort.tq:1221:9
                int31_t t3279 = 0;
                TVARIABLE(Smi, nofWinsB_476_impl);
                auto nofWinsB_476 = &nofWinsB_476_impl;
                USE(nofWinsB_476);
                TNode<Smi> t3280 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3279)));
                *nofWinsB_476 = implicit_cast<TNode<Smi>>(t3280);
                // ../../third_party/v8/builtins/array-sort.tq:1227:9
                {
                  Label label__True_1105_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1105 = &label__True_1105_impl;
                  USE(label__True_1105);
                  Label label__False_1106_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1106 = &label__False_1106_impl;
                  USE(label__False_1106);
                  Label label_header_1107_1870_impl(this, {cursorB_473, cursorTemp_472, dest_471, elements_470, lengthA_468, lengthB_469, nofWinsA_475, nofWinsB_476}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1107_1870 = &label_header_1107_1870_impl;
                  USE(label_header_1107_1870);
                  Goto(label_header_1107_1870);
                  BIND(label_header_1107_1870);
                  TNode<BoolT> t3281 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t3281));
                  Branch(implicit_cast<TNode<BoolT>>(t3281), label__True_1105, label__False_1106);
                  if (label__True_1105->is_used())
                  {
                    BIND(label__True_1105);
                    // ../../third_party/v8/builtins/array-sort.tq:1227:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1228:11
                      Label label__True_1107_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1107 = &label__True_1107_impl;
                      USE(label__True_1107);
                      Label label__False_1108_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1108 = &label__False_1108_impl;
                      USE(label__False_1108);
                      Label label__True_1109_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1109 = &label__True_1109_impl;
                      USE(label__True_1109);
                      int31_t t3282 = 1;
                      TNode<Smi> t3283 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3282)));
                      TNode<BoolT> t3284 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3283)));
                      USE(implicit_cast<TNode<BoolT>>(t3284));
                      GotoIfNot(implicit_cast<TNode<BoolT>>(t3284), label__False_1108);
                      int31_t t3285 = 0;
                      TNode<Smi> t3286 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3285)));
                      TNode<BoolT> t3287 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3286)));
                      USE(implicit_cast<TNode<BoolT>>(t3287));
Branch(implicit_cast<TNode<BoolT>>(t3287), label__True_1107, label__False_1108);
                      BIND(label__False_1108);
                      Print("assert 'lengthA > 1 && lengthB > 0' failed at ../../third_party/v8/builtins/array-sort.tq:1228:11");
                      Unreachable();
                      BIND(label__True_1107);
                      // ../../third_party/v8/builtins/array-sort.tq:1230:11
                      TNode<Object> t3288 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*cursorB_473).value()), label_Bailout_1088));
                      USE(implicit_cast<TNode<Object>>(t3288));
                      TVARIABLE(Object, elementB_477_impl);
                      auto elementB_477 = &elementB_477_impl;
                      USE(elementB_477);
                      *elementB_477 = implicit_cast<TNode<Object>>(t3288);
                      // ../../third_party/v8/builtins/array-sort.tq:1233:11
                      TNode<Object> t3289 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value())));
                      TNode<Number> t3290 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*elementB_477).value()), implicit_cast<TNode<Object>>(t3289), label_Bailout_1088));
                      USE(implicit_cast<TNode<Number>>(t3290));
                      TVARIABLE(Number, order_478_impl);
                      auto order_478 = &order_478_impl;
                      USE(order_478);
                      *order_478 = implicit_cast<TNode<Number>>(t3290);
                      // ../../third_party/v8/builtins/array-sort.tq:1236:11
                      TNode<HeapObject> t3291 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3291));
                      *elements_470 = implicit_cast<TNode<HeapObject>>(t3291);
                      // ../../third_party/v8/builtins/array-sort.tq:1238:11
                      {
                        Label label__True_1110_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1110 = &label__True_1110_impl;
                        USE(label__True_1110);
                        Label label__False_1111_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1111 = &label__False_1111_impl;
                        USE(label__False_1111);
                        Label label_if_done_label_1108_1871_impl(this, {cursorB_473, cursorTemp_472, dest_471, lengthA_468, lengthB_469, nofWinsA_475, nofWinsB_476}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label_if_done_label_1108_1871 = &label_if_done_label_1108_1871_impl;
                        USE(label_if_done_label_1108_1871);
                        int31_t t3292 = 0;
                        TNode<Number> t3293 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3292)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_478).value()), implicit_cast<TNode<Number>>(t3293), label__True_1110, label__False_1111);
                        if (label__True_1110->is_used())
                        {
                          BIND(label__True_1110);
                          // ../../third_party/v8/builtins/array-sort.tq:1238:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1239:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), label_Bailout_1088);
                            // ../../third_party/v8/builtins/array-sort.tq:1243:13
                            TNode<Smi> t3294 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3295 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>(t3294)));
                            *cursorB_473 = implicit_cast<TNode<Smi>>(t3295);
                            // ../../third_party/v8/builtins/array-sort.tq:1244:13
                            TNode<Smi> t3296 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3297 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>(t3296)));
                            *dest_471 = implicit_cast<TNode<Smi>>(t3297);
                            // ../../third_party/v8/builtins/array-sort.tq:1245:13
                            TNode<Smi> t3298 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3299 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), implicit_cast<TNode<Smi>>(t3298)));
                            *nofWinsB_476 = implicit_cast<TNode<Smi>>(t3299);
                            // ../../third_party/v8/builtins/array-sort.tq:1246:13
                            TNode<Smi> t3300 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3301 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3300)));
                            *lengthB_469 = implicit_cast<TNode<Smi>>(t3301);
                            // ../../third_party/v8/builtins/array-sort.tq:1247:13
                            int31_t t3302 = 0;
                            TNode<Smi> t3303 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3302)));
                            *nofWinsA_475 = implicit_cast<TNode<Smi>>(t3303);
                            // ../../third_party/v8/builtins/array-sort.tq:1249:13
                            {
                              Label label__True_1112_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1112 = &label__True_1112_impl;
                              USE(label__True_1112);
                              Label label__False_1113_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1113 = &label__False_1113_impl;
                              USE(label__False_1113);
                              int31_t t3304 = 0;
                              TNode<Smi> t3305 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3304)));
                              TNode<BoolT> t3306 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3305)));
                              USE(implicit_cast<TNode<BoolT>>(t3306));
                              Branch(implicit_cast<TNode<BoolT>>(t3306), label__True_1112, label__False_1113);
                              if (label__True_1112->is_used())
                              {
                                BIND(label__True_1112);
                                // ../../third_party/v8/builtins/array-sort.tq:1249:31
                                Goto(label_Succeed_1097);
                              }
                              BIND(label__False_1113);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1250:13
                            {
                              Label label__True_1114_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1114 = &label__True_1114_impl;
                              USE(label__True_1114);
                              Label label__False_1115_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1115 = &label__False_1115_impl;
                              USE(label__False_1115);
                              TNode<BoolT> t3307 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), implicit_cast<TNode<Smi>>((*minGallop_474).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3307));
                              Branch(implicit_cast<TNode<BoolT>>(t3307), label__True_1114, label__False_1115);
                              if (label__True_1114->is_used())
                              {
                                BIND(label__True_1114);
                                // ../../third_party/v8/builtins/array-sort.tq:1250:40
                                Goto(label__False_1106);
                              }
                              BIND(label__False_1115);
                            }
                          }
                          Goto(label_if_done_label_1108_1871);
                        }
                        if (label__False_1111->is_used())
                        {
                          BIND(label__False_1111);
                          // ../../third_party/v8/builtins/array-sort.tq:1251:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1252:13
                            TNode<Object> t3308 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Object>>(t3308), label_Bailout_1088);
                            // ../../third_party/v8/builtins/array-sort.tq:1257:13
                            TNode<Smi> t3309 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3310 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>(t3309)));
                            *cursorTemp_472 = implicit_cast<TNode<Smi>>(t3310);
                            // ../../third_party/v8/builtins/array-sort.tq:1258:13
                            TNode<Smi> t3311 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3312 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>(t3311)));
                            *dest_471 = implicit_cast<TNode<Smi>>(t3312);
                            // ../../third_party/v8/builtins/array-sort.tq:1259:13
                            TNode<Smi> t3313 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3314 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), implicit_cast<TNode<Smi>>(t3313)));
                            *nofWinsA_475 = implicit_cast<TNode<Smi>>(t3314);
                            // ../../third_party/v8/builtins/array-sort.tq:1260:13
                            TNode<Smi> t3315 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3316 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3315)));
                            *lengthA_468 = implicit_cast<TNode<Smi>>(t3316);
                            // ../../third_party/v8/builtins/array-sort.tq:1261:13
                            int31_t t3317 = 0;
                            TNode<Smi> t3318 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3317)));
                            *nofWinsB_476 = implicit_cast<TNode<Smi>>(t3318);
                            // ../../third_party/v8/builtins/array-sort.tq:1263:13
                            {
                              Label label__True_1116_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1116 = &label__True_1116_impl;
                              USE(label__True_1116);
                              Label label__False_1117_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1117 = &label__False_1117_impl;
                              USE(label__False_1117);
                              int31_t t3319 = 1;
                              TNode<Smi> t3320 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3319)));
                              TNode<BoolT> t3321 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3320)));
                              USE(implicit_cast<TNode<BoolT>>(t3321));
                              Branch(implicit_cast<TNode<BoolT>>(t3321), label__True_1116, label__False_1117);
                              if (label__True_1116->is_used())
                              {
                                BIND(label__True_1116);
                                // ../../third_party/v8/builtins/array-sort.tq:1263:31
                                Goto(label_CopyB_1098);
                              }
                              BIND(label__False_1117);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1264:13
                            {
                              Label label__True_1118_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1118 = &label__True_1118_impl;
                              USE(label__True_1118);
                              Label label__False_1119_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1119 = &label__False_1119_impl;
                              USE(label__False_1119);
                              TNode<BoolT> t3322 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), implicit_cast<TNode<Smi>>((*minGallop_474).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3322));
                              Branch(implicit_cast<TNode<BoolT>>(t3322), label__True_1118, label__False_1119);
                              if (label__True_1118->is_used())
                              {
                                BIND(label__True_1118);
                                // ../../third_party/v8/builtins/array-sort.tq:1264:40
                                Goto(label__False_1106);
                              }
                              BIND(label__False_1119);
                            }
                          }
                          Goto(label_if_done_label_1108_1871);
                        }
                        BIND(label_if_done_label_1108_1871);
                      }
                    }
                    Goto(label_header_1107_1870);
                  }
                  BIND(label__False_1106);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1271:9
                TNode<Smi> t3323 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3324 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*minGallop_474).value()), implicit_cast<TNode<Smi>>(t3323)));
                *minGallop_474 = implicit_cast<TNode<Smi>>(t3324);
                // ../../third_party/v8/builtins/array-sort.tq:1272:9
                TVARIABLE(BoolT, firstIteration_479_impl);
                auto firstIteration_479 = &firstIteration_479_impl;
                USE(firstIteration_479);
                TNode<BoolT> t3325 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                *firstIteration_479 = implicit_cast<TNode<BoolT>>(t3325);
                // ../../third_party/v8/builtins/array-sort.tq:1273:9
                {
                  Label label__True_1120_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1120 = &label__True_1120_impl;
                  USE(label__True_1120);
                  Label label__False_1121_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1121 = &label__False_1121_impl;
                  USE(label__False_1121);
                  Label label_header_1109_1872_impl(this, {cursorB_473, cursorTemp_472, dest_471, firstIteration_479, lengthA_468, lengthB_469, minGallop_474, nofWinsA_475, nofWinsB_476}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1109_1872 = &label_header_1109_1872_impl;
                  USE(label_header_1109_1872);
                  Goto(label_header_1109_1872);
                  BIND(label_header_1109_1872);
                  Label label__False_1122_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1122 = &label__False_1122_impl;
                  USE(label__False_1122);
                  Label label__False_1123_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1123 = &label__False_1123_impl;
                  USE(label__False_1123);
                  TNode<Smi> t3326 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3327 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), implicit_cast<TNode<Smi>>(t3326)));
                  USE(implicit_cast<TNode<BoolT>>(t3327));
                  GotoIf(implicit_cast<TNode<BoolT>>(t3327), label__True_1120);
                  TNode<Smi> t3328 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3329 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), implicit_cast<TNode<Smi>>(t3328)));
                  USE(implicit_cast<TNode<BoolT>>(t3329));
Branch(implicit_cast<TNode<BoolT>>(t3329), label__True_1120, label__False_1122);
                  BIND(label__False_1122);
Branch(implicit_cast<TNode<BoolT>>((*firstIteration_479).value()), label__True_1120, label__False_1121);
                  if (label__True_1120->is_used())
                  {
                    BIND(label__True_1120);
                    // ../../third_party/v8/builtins/array-sort.tq:1274:32
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1275:11
                      TNode<BoolT> t3330 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
                      *firstIteration_479 = implicit_cast<TNode<BoolT>>(t3330);
                      // ../../third_party/v8/builtins/array-sort.tq:1276:11
                      Label label__True_1124_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1124 = &label__True_1124_impl;
                      USE(label__True_1124);
                      Label label__False_1125_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1125 = &label__False_1125_impl;
                      USE(label__False_1125);
                      Label label__True_1126_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1126 = &label__True_1126_impl;
                      USE(label__True_1126);
                      int31_t t3331 = 1;
                      TNode<Smi> t3332 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3331)));
                      TNode<BoolT> t3333 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3332)));
                      USE(implicit_cast<TNode<BoolT>>(t3333));
                      GotoIfNot(implicit_cast<TNode<BoolT>>(t3333), label__False_1125);
                      int31_t t3334 = 0;
                      TNode<Smi> t3335 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3334)));
                      TNode<BoolT> t3336 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3335)));
                      USE(implicit_cast<TNode<BoolT>>(t3336));
Branch(implicit_cast<TNode<BoolT>>(t3336), label__True_1124, label__False_1125);
                      BIND(label__False_1125);
                      Print("assert 'lengthA > 1 && lengthB > 0' failed at ../../third_party/v8/builtins/array-sort.tq:1276:11");
                      Unreachable();
                      BIND(label__True_1124);
                      // ../../third_party/v8/builtins/array-sort.tq:1278:11
                      int31_t t3337 = 1;
                      int31_t t3338 = 1;
                      TNode<Smi> t3339 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3338)));
                      TNode<Smi> t3340 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*minGallop_474).value()), implicit_cast<TNode<Smi>>(t3339)));
                      USE(implicit_cast<TNode<Smi>>(t3340));
                      TNode<Smi> t3341 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3337)));
                      TNode<Smi> t3342 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t3341), implicit_cast<TNode<Smi>>(t3340)));
                      USE(implicit_cast<TNode<Smi>>(t3342));
                      *minGallop_474 = implicit_cast<TNode<Smi>>(t3342);
                      // ../../third_party/v8/builtins/array-sort.tq:1279:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*minGallop_474).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1281:11
                      TNode<Object> t3343 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*cursorB_473).value()), label_Bailout_1088));
                      USE(implicit_cast<TNode<Object>>(t3343));
                      TVARIABLE(Object, keyRight_480_impl);
                      auto keyRight_480 = &keyRight_480_impl;
                      USE(keyRight_480);
                      *keyRight_480 = implicit_cast<TNode<Object>>(t3343);
                      // ../../third_party/v8/builtins/array-sort.tq:1284:11
                      int31_t t3344 = 0;
                      TNode<Smi> t3345 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3344)));
                      TNode<Smi> t3346 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*keyRight_480).value()), implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3345), implicit_cast<TNode<Oddball>>(True()), label_Bailout_1088));
                      USE(implicit_cast<TNode<Smi>>(t3346));
                      *nofWinsA_475 = implicit_cast<TNode<Smi>>(t3346);
                      // ../../third_party/v8/builtins/array-sort.tq:1287:11
                      Label label__True_1127_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1127 = &label__True_1127_impl;
                      USE(label__True_1127);
                      Label label__False_1128_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1128 = &label__False_1128_impl;
                      USE(label__False_1128);
                      int31_t t3347 = 0;
                      TNode<Smi> t3348 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3347)));
                      TNode<BoolT> t3349 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), implicit_cast<TNode<Smi>>(t3348)));
                      USE(implicit_cast<TNode<BoolT>>(t3349));
                      Branch(implicit_cast<TNode<BoolT>>(t3349), label__True_1127, label__False_1128);
                      BIND(label__False_1128);
                      Print("assert 'nofWinsA >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1287:11");
                      Unreachable();
                      BIND(label__True_1127);
                      // ../../third_party/v8/builtins/array-sort.tq:1289:11
                      {
                        Label label__True_1129_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1129 = &label__True_1129_impl;
                        USE(label__True_1129);
                        Label label__False_1130_impl(this, {cursorTemp_472, dest_471, lengthA_468}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1130 = &label__False_1130_impl;
                        USE(label__False_1130);
                        int31_t t3350 = 0;
                        TNode<Smi> t3351 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3350)));
                        TNode<BoolT> t3352 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), implicit_cast<TNode<Smi>>(t3351)));
                        USE(implicit_cast<TNode<BoolT>>(t3352));
                        Branch(implicit_cast<TNode<BoolT>>(t3352), label__True_1129, label__False_1130);
                        if (label__True_1129->is_used())
                        {
                          BIND(label__True_1129);
                          // ../../third_party/v8/builtins/array-sort.tq:1289:29
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1290:13
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>((*nofWinsA_475).value()), label_Bailout_1088);
                            // ../../third_party/v8/builtins/array-sort.tq:1293:13
                            TNode<Smi> t3353 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>((*nofWinsA_475).value())));
                            USE(implicit_cast<TNode<Smi>>(t3353));
                            *dest_471 = implicit_cast<TNode<Smi>>(t3353);
                            // ../../third_party/v8/builtins/array-sort.tq:1294:13
                            TNode<Smi> t3354 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>((*nofWinsA_475).value())));
                            USE(implicit_cast<TNode<Smi>>(t3354));
                            *cursorTemp_472 = implicit_cast<TNode<Smi>>(t3354);
                            // ../../third_party/v8/builtins/array-sort.tq:1295:13
                            TNode<Smi> t3355 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>((*nofWinsA_475).value())));
                            USE(implicit_cast<TNode<Smi>>(t3355));
                            *lengthA_468 = implicit_cast<TNode<Smi>>(t3355);
                            // ../../third_party/v8/builtins/array-sort.tq:1297:13
                            {
                              Label label__True_1131_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1131 = &label__True_1131_impl;
                              USE(label__True_1131);
                              Label label__False_1132_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1132 = &label__False_1132_impl;
                              USE(label__False_1132);
                              int31_t t3356 = 1;
                              TNode<Smi> t3357 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3356)));
                              TNode<BoolT> t3358 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3357)));
                              USE(implicit_cast<TNode<BoolT>>(t3358));
                              Branch(implicit_cast<TNode<BoolT>>(t3358), label__True_1131, label__False_1132);
                              if (label__True_1131->is_used())
                              {
                                BIND(label__True_1131);
                                // ../../third_party/v8/builtins/array-sort.tq:1297:31
                                Goto(label_CopyB_1098);
                              }
                              BIND(label__False_1132);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1301:13
                            {
                              Label label__True_1133_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1133 = &label__True_1133_impl;
                              USE(label__True_1133);
                              Label label__False_1134_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1134 = &label__False_1134_impl;
                              USE(label__False_1134);
                              int31_t t3359 = 0;
                              TNode<Smi> t3360 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3359)));
                              TNode<BoolT> t3361 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3360)));
                              USE(implicit_cast<TNode<BoolT>>(t3361));
                              Branch(implicit_cast<TNode<BoolT>>(t3361), label__True_1133, label__False_1134);
                              if (label__True_1133->is_used())
                              {
                                BIND(label__True_1133);
                                // ../../third_party/v8/builtins/array-sort.tq:1301:31
                                Goto(label_Succeed_1097);
                              }
                              BIND(label__False_1134);
                            }
                          }
                          Goto(label__False_1130);
                        }
                        BIND(label__False_1130);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1303:11
                      TNode<Smi> t3362 = implicit_cast<TNode<Smi>>((*cursorB_473).value());
                      USE(t3362);
                      TNode<Smi> t3363 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3364 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>(t3363)));
                      *cursorB_473 = implicit_cast<TNode<Smi>>(t3364);
                      TNode<Smi> t3365 = implicit_cast<TNode<Smi>>((*dest_471).value());
                      USE(t3365);
                      TNode<Smi> t3366 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3367 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>(t3366)));
                      *dest_471 = implicit_cast<TNode<Smi>>(t3367);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>(t3362), implicit_cast<TNode<Smi>>(t3365), label_Bailout_1088);
                      // ../../third_party/v8/builtins/array-sort.tq:1306:11
                      {
                        Label label__True_1135_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1135 = &label__True_1135_impl;
                        USE(label__True_1135);
                        Label label__False_1136_impl(this, {lengthB_469}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1136 = &label__False_1136_impl;
                        USE(label__False_1136);
                        TNode<Smi> t3368 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3369 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3368)));
                        *lengthB_469 = implicit_cast<TNode<Smi>>(t3369);
                        int31_t t3370 = 0;
                        TNode<Smi> t3371 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3370)));
                        TNode<BoolT> t3372 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3369), implicit_cast<TNode<Smi>>(t3371)));
                        USE(implicit_cast<TNode<BoolT>>(t3372));
                        Branch(implicit_cast<TNode<BoolT>>(t3372), label__True_1135, label__False_1136);
                        if (label__True_1135->is_used())
                        {
                          BIND(label__True_1135);
                          // ../../third_party/v8/builtins/array-sort.tq:1306:31
                          Goto(label_Succeed_1097);
                        }
                        BIND(label__False_1136);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1308:11
                      TNode<Object> t3373 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value())));
                      int31_t t3374 = 0;
                      TNode<Smi> t3375 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3374)));
                      TNode<Smi> t3376 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1101)), implicit_cast<TNode<Object>>(t3373), implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3375), implicit_cast<TNode<Oddball>>(False()), label_Bailout_1088));
                      USE(implicit_cast<TNode<Smi>>(t3376));
                      *nofWinsB_476 = implicit_cast<TNode<Smi>>(t3376);
                      // ../../third_party/v8/builtins/array-sort.tq:1312:11
                      Label label__True_1137_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1137 = &label__True_1137_impl;
                      USE(label__True_1137);
                      Label label__False_1138_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1138 = &label__False_1138_impl;
                      USE(label__False_1138);
                      int31_t t3377 = 0;
                      TNode<Smi> t3378 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3377)));
                      TNode<BoolT> t3379 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), implicit_cast<TNode<Smi>>(t3378)));
                      USE(implicit_cast<TNode<BoolT>>(t3379));
                      Branch(implicit_cast<TNode<BoolT>>(t3379), label__True_1137, label__False_1138);
                      BIND(label__False_1138);
                      Print("assert 'nofWinsB >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1312:11");
                      Unreachable();
                      BIND(label__True_1137);
                      // ../../third_party/v8/builtins/array-sort.tq:1313:11
                      {
                        Label label__True_1139_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1139 = &label__True_1139_impl;
                        USE(label__True_1139);
                        Label label__False_1140_impl(this, {cursorB_473, dest_471, lengthB_469}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1140 = &label__False_1140_impl;
                        USE(label__False_1140);
                        int31_t t3380 = 0;
                        TNode<Smi> t3381 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3380)));
                        TNode<BoolT> t3382 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), implicit_cast<TNode<Smi>>(t3381)));
                        USE(implicit_cast<TNode<BoolT>>(t3382));
                        Branch(implicit_cast<TNode<BoolT>>(t3382), label__True_1139, label__False_1140);
                        if (label__True_1139->is_used())
                        {
                          BIND(label__True_1139);
                          // ../../third_party/v8/builtins/array-sort.tq:1313:29
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1314:13
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>((*nofWinsB_476).value()), label_Bailout_1088);
                            // ../../third_party/v8/builtins/array-sort.tq:1318:13
                            TNode<Smi> t3383 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>((*nofWinsB_476).value())));
                            USE(implicit_cast<TNode<Smi>>(t3383));
                            *dest_471 = implicit_cast<TNode<Smi>>(t3383);
                            // ../../third_party/v8/builtins/array-sort.tq:1319:13
                            TNode<Smi> t3384 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>((*nofWinsB_476).value())));
                            USE(implicit_cast<TNode<Smi>>(t3384));
                            *cursorB_473 = implicit_cast<TNode<Smi>>(t3384);
                            // ../../third_party/v8/builtins/array-sort.tq:1320:13
                            TNode<Smi> t3385 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>((*nofWinsB_476).value())));
                            USE(implicit_cast<TNode<Smi>>(t3385));
                            *lengthB_469 = implicit_cast<TNode<Smi>>(t3385);
                            // ../../third_party/v8/builtins/array-sort.tq:1322:13
                            {
                              Label label__True_1141_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1141 = &label__True_1141_impl;
                              USE(label__True_1141);
                              Label label__False_1142_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1142 = &label__False_1142_impl;
                              USE(label__False_1142);
                              int31_t t3386 = 0;
                              TNode<Smi> t3387 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3386)));
                              TNode<BoolT> t3388 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3387)));
                              USE(implicit_cast<TNode<BoolT>>(t3388));
                              Branch(implicit_cast<TNode<BoolT>>(t3388), label__True_1141, label__False_1142);
                              if (label__True_1141->is_used())
                              {
                                BIND(label__True_1141);
                                // ../../third_party/v8/builtins/array-sort.tq:1322:31
                                Goto(label_Succeed_1097);
                              }
                              BIND(label__False_1142);
                            }
                          }
                          Goto(label__False_1140);
                        }
                        BIND(label__False_1140);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1324:11
                      TNode<Smi> t3389 = implicit_cast<TNode<Smi>>((*dest_471).value());
                      USE(t3389);
                      TNode<Smi> t3390 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3391 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>(t3390)));
                      *dest_471 = implicit_cast<TNode<Smi>>(t3391);
                      TNode<Smi> t3392 = implicit_cast<TNode<Smi>>((*cursorTemp_472).value());
                      USE(t3392);
                      TNode<Smi> t3393 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3394 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>(t3393)));
                      *cursorTemp_472 = implicit_cast<TNode<Smi>>(t3394);
                      TNode<Object> t3395 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>(t3392)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>(t3389), implicit_cast<TNode<Object>>(t3395), label_Bailout_1088);
                      // ../../third_party/v8/builtins/array-sort.tq:1328:11
                      {
                        Label label__True_1143_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1143 = &label__True_1143_impl;
                        USE(label__True_1143);
                        Label label__False_1144_impl(this, {lengthA_468}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1144 = &label__False_1144_impl;
                        USE(label__False_1144);
                        TNode<Smi> t3396 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3397 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3396)));
                        *lengthA_468 = implicit_cast<TNode<Smi>>(t3397);
                        int31_t t3398 = 1;
                        TNode<Smi> t3399 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3398)));
                        TNode<BoolT> t3400 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3397), implicit_cast<TNode<Smi>>(t3399)));
                        USE(implicit_cast<TNode<BoolT>>(t3400));
                        Branch(implicit_cast<TNode<BoolT>>(t3400), label__True_1143, label__False_1144);
                        if (label__True_1143->is_used())
                        {
                          BIND(label__True_1143);
                          // ../../third_party/v8/builtins/array-sort.tq:1328:31
                          Goto(label_CopyB_1098);
                        }
                        BIND(label__False_1144);
                      }
                    }
                    Goto(label_header_1109_1872);
                  }
                  BIND(label__False_1121);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1330:9
                TNode<Smi> t3401 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3402 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*minGallop_474).value()), implicit_cast<TNode<Smi>>(t3401)));
                *minGallop_474 = implicit_cast<TNode<Smi>>(t3402);
                // ../../third_party/v8/builtins/array-sort.tq:1331:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*minGallop_474).value()));
              }
              Goto(label_header_1106_1869);
            }
            BIND(label__False_1104);
          }
        }
        Goto(label_try_done_1104_1867);
      }
      if (label_Succeed_1097->is_used())
      {
        BIND(label_Succeed_1097);
        // ../../third_party/v8/builtins/array-sort.tq:1334:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1335:7
          {
            Label label__True_1145_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1145 = &label__True_1145_impl;
            USE(label__True_1145);
            Label label__False_1146_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1146 = &label__False_1146_impl;
            USE(label__False_1146);
            int31_t t3403 = 0;
            TNode<Smi> t3404 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3403)));
            TNode<BoolT> t3405 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3404)));
            USE(implicit_cast<TNode<BoolT>>(t3405));
            Branch(implicit_cast<TNode<BoolT>>(t3405), label__True_1145, label__False_1146);
            if (label__True_1145->is_used())
            {
              BIND(label__True_1145);
              // ../../third_party/v8/builtins/array-sort.tq:1335:24
              {
                // ../../third_party/v8/builtins/array-sort.tq:1336:9
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value()), implicit_cast<TNode<Smi>>((*lengthA_468).value()), label_Bailout_1088);
              }
              Goto(label__False_1146);
            }
            BIND(label__False_1146);
          }
        }
        Goto(label_try_done_1104_1867);
      }
      if (label_CopyB_1098->is_used())
      {
        BIND(label_CopyB_1098);
        // ../../third_party/v8/builtins/array-sort.tq:1341:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1342:7
          Label label__True_1147_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1147 = &label__True_1147_impl;
          USE(label__True_1147);
          Label label__False_1148_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1148 = &label__False_1148_impl;
          USE(label__False_1148);
          Label label__True_1149_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1149 = &label__True_1149_impl;
          USE(label__True_1149);
          int31_t t3406 = 1;
          TNode<Smi> t3407 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3406)));
          TNode<BoolT> t3408 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_468).value()), implicit_cast<TNode<Smi>>(t3407)));
          USE(implicit_cast<TNode<BoolT>>(t3408));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3408), label__False_1148);
          int31_t t3409 = 0;
          TNode<Smi> t3410 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3409)));
          TNode<BoolT> t3411 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_469).value()), implicit_cast<TNode<Smi>>(t3410)));
          USE(implicit_cast<TNode<BoolT>>(t3411));
Branch(implicit_cast<TNode<BoolT>>(t3411), label__True_1147, label__False_1148);
          BIND(label__False_1148);
          Print("assert 'lengthA == 1 && lengthB > 0' failed at ../../third_party/v8/builtins/array-sort.tq:1342:7");
          Unreachable();
          BIND(label__True_1147);
          // ../../third_party/v8/builtins/array-sort.tq:1344:7
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>((*cursorB_473).value()), implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>((*lengthB_469).value()), label_Bailout_1088);
          // ../../third_party/v8/builtins/array-sort.tq:1347:7
          TNode<Smi> t3412 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_471).value()), implicit_cast<TNode<Smi>>((*lengthB_469).value())));
          USE(implicit_cast<TNode<Smi>>(t3412));
          TNode<Object> t3413 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1103)), implicit_cast<TNode<Smi>>((*cursorTemp_472).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1102)), implicit_cast<TNode<HeapObject>>((*elements_470).value()), implicit_cast<TNode<Smi>>(t3412), implicit_cast<TNode<Object>>(t3413), label_Bailout_1088);
        }
        Goto(label_try_done_1104_1867);
      }
      BIND(label_try_done_1104_1867);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeHigh(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthAArg, TNode<Smi> p_baseB, TNode<Smi> p_lengthBArg, Label* label_Bailout_1150) {
  Label label_macro_end_1873_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1873 = &label_macro_end_1873_impl;
  USE(label_macro_end_1873);
  // ../../third_party/v8/builtins/array-sort.tq:1361:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1362:5
    Label label__True_1151_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1151 = &label__True_1151_impl;
    USE(label__True_1151);
    Label label__False_1152_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1152 = &label__False_1152_impl;
    USE(label__False_1152);
    Label label__True_1153_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1153 = &label__True_1153_impl;
    USE(label__True_1153);
    int31_t t3414 = 0;
    TNode<Smi> t3415 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3414)));
    TNode<BoolT> t3416 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3415), implicit_cast<TNode<Smi>>(p_lengthAArg)));
    USE(implicit_cast<TNode<BoolT>>(t3416));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3416), label__False_1152);
    int31_t t3417 = 0;
    TNode<Smi> t3418 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3417)));
    TNode<BoolT> t3419 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3418), implicit_cast<TNode<Smi>>(p_lengthBArg)));
    USE(implicit_cast<TNode<BoolT>>(t3419));
Branch(implicit_cast<TNode<BoolT>>(t3419), label__True_1151, label__False_1152);
    BIND(label__False_1152);
    Print("assert '0 < lengthAArg && 0 < lengthBArg' failed at ../../third_party/v8/builtins/array-sort.tq:1362:5");
    Unreachable();
    BIND(label__True_1151);
    // ../../third_party/v8/builtins/array-sort.tq:1363:5
    Label label__True_1154_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1154 = &label__True_1154_impl;
    USE(label__True_1154);
    Label label__False_1155_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1155 = &label__False_1155_impl;
    USE(label__False_1155);
    Label label__True_1156_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1156 = &label__True_1156_impl;
    USE(label__True_1156);
    int31_t t3420 = 0;
    TNode<Smi> t3421 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3420)));
    TNode<BoolT> t3422 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3421), implicit_cast<TNode<Smi>>(p_baseA)));
    USE(implicit_cast<TNode<BoolT>>(t3422));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3422), label__False_1155);
    int31_t t3423 = 0;
    TNode<Smi> t3424 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3423)));
    TNode<BoolT> t3425 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3424), implicit_cast<TNode<Smi>>(p_baseB)));
    USE(implicit_cast<TNode<BoolT>>(t3425));
Branch(implicit_cast<TNode<BoolT>>(t3425), label__True_1154, label__False_1155);
    BIND(label__False_1155);
    Print("assert '0 <= baseA && 0 < baseB' failed at ../../third_party/v8/builtins/array-sort.tq:1363:5");
    Unreachable();
    BIND(label__True_1154);
    // ../../third_party/v8/builtins/array-sort.tq:1364:5
    Label label__True_1157_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1157 = &label__True_1157_impl;
    USE(label__True_1157);
    Label label__False_1158_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1158 = &label__False_1158_impl;
    USE(label__False_1158);
    TNode<Smi> t3426 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>(p_lengthAArg)));
    USE(implicit_cast<TNode<Smi>>(t3426));
    TNode<BoolT> t3427 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3426), implicit_cast<TNode<Smi>>(p_baseB)));
    USE(implicit_cast<TNode<BoolT>>(t3427));
    Branch(implicit_cast<TNode<BoolT>>(t3427), label__True_1157, label__False_1158);
    BIND(label__False_1158);
    Print("assert 'baseA + lengthAArg == baseB' failed at ../../third_party/v8/builtins/array-sort.tq:1364:5");
    Unreachable();
    BIND(label__True_1157);
    // ../../third_party/v8/builtins/array-sort.tq:1366:5
    TVARIABLE(Smi, lengthA_481_impl);
    auto lengthA_481 = &lengthA_481_impl;
    USE(lengthA_481);
    *lengthA_481 = implicit_cast<TNode<Smi>>(p_lengthAArg);
    // ../../third_party/v8/builtins/array-sort.tq:1367:5
    TVARIABLE(Smi, lengthB_482_impl);
    auto lengthB_482 = &lengthB_482_impl;
    USE(lengthB_482);
    *lengthB_482 = implicit_cast<TNode<Smi>>(p_lengthBArg);
    // ../../third_party/v8/builtins/array-sort.tq:1369:5
    TNode<HeapObject> t3428 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t3428));
    TVARIABLE(HeapObject, elements_483_impl);
    auto elements_483 = &elements_483_impl;
    USE(elements_483);
    *elements_483 = implicit_cast<TNode<HeapObject>>(t3428);
    // ../../third_party/v8/builtins/array-sort.tq:1370:5
    TNode<Code> t3429 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t3429));
    TNode<Code> load_1110_impl;
    auto load_1110 = &load_1110_impl;
    USE(load_1110);
    *load_1110 = implicit_cast<TNode<Code>>(t3429);
    // ../../third_party/v8/builtins/array-sort.tq:1371:5
    TNode<Code> t3430 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t3430));
    TNode<Code> store_1111_impl;
    auto store_1111 = &store_1111_impl;
    USE(store_1111);
    *store_1111 = implicit_cast<TNode<Code>>(t3430);
    // ../../third_party/v8/builtins/array-sort.tq:1373:5
    TNode<FixedArray> t3431 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*lengthB_482).value())));
    USE(implicit_cast<TNode<FixedArray>>(t3431));
    TNode<FixedArray> tempArray_1112_impl;
    auto tempArray_1112 = &tempArray_1112_impl;
    USE(tempArray_1112);
    *tempArray_1112 = implicit_cast<TNode<FixedArray>>(t3431);
    // ../../third_party/v8/builtins/array-sort.tq:1374:5
    int31_t t3432 = 0;
    TNode<Smi> t3433 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3432)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>(t3433), implicit_cast<TNode<Smi>>((*lengthB_482).value()), label_Bailout_1150);
    // ../../third_party/v8/builtins/array-sort.tq:1379:5
    TNode<Smi> t3434 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<Smi>>((*lengthB_482).value())));
    USE(implicit_cast<TNode<Smi>>(t3434));
    int31_t t3435 = 1;
    TNode<Smi> t3436 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3435)));
    TNode<Smi> t3437 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3434), implicit_cast<TNode<Smi>>(t3436)));
    USE(implicit_cast<TNode<Smi>>(t3437));
    TVARIABLE(Smi, dest_484_impl);
    auto dest_484 = &dest_484_impl;
    USE(dest_484);
    *dest_484 = implicit_cast<TNode<Smi>>(t3437);
    // ../../third_party/v8/builtins/array-sort.tq:1380:5
    int31_t t3438 = 1;
    TNode<Smi> t3439 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3438)));
    TNode<Smi> t3440 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3439)));
    USE(implicit_cast<TNode<Smi>>(t3440));
    TVARIABLE(Smi, cursorTemp_485_impl);
    auto cursorTemp_485 = &cursorTemp_485_impl;
    USE(cursorTemp_485);
    *cursorTemp_485 = implicit_cast<TNode<Smi>>(t3440);
    // ../../third_party/v8/builtins/array-sort.tq:1381:5
    TNode<Smi> t3441 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*lengthA_481).value())));
    USE(implicit_cast<TNode<Smi>>(t3441));
    int31_t t3442 = 1;
    TNode<Smi> t3443 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3442)));
    TNode<Smi> t3444 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3441), implicit_cast<TNode<Smi>>(t3443)));
    USE(implicit_cast<TNode<Smi>>(t3444));
    TVARIABLE(Smi, cursorA_486_impl);
    auto cursorA_486 = &cursorA_486_impl;
    USE(cursorA_486);
    *cursorA_486 = implicit_cast<TNode<Smi>>(t3444);
    // ../../third_party/v8/builtins/array-sort.tq:1383:5
    TNode<Smi> t3445 = implicit_cast<TNode<Smi>>((*cursorA_486).value());
    USE(t3445);
    TNode<Smi> t3446 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t3447 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>(t3446)));
    *cursorA_486 = implicit_cast<TNode<Smi>>(t3447);
    TNode<Smi> t3448 = implicit_cast<TNode<Smi>>((*dest_484).value());
    USE(t3448);
    TNode<Smi> t3449 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t3450 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3449)));
    *dest_484 = implicit_cast<TNode<Smi>>(t3450);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3445), implicit_cast<TNode<Smi>>(t3448), label_Bailout_1150);
    // ../../third_party/v8/builtins/array-sort.tq:1386:5
    {
      Label label_try_done_1113_1874_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1113_1874 = &label_try_done_1113_1874_impl;
      USE(label_try_done_1113_1874);
      Label label_Succeed_1159_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Succeed_1159 = &label_Succeed_1159_impl;
      USE(label_Succeed_1159);
      Label label_CopyA_1160_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_CopyA_1160 = &label_CopyA_1160_impl;
      USE(label_CopyA_1160);
      Label label_try_begin_1114_1875_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1114_1875 = &label_try_begin_1114_1875_impl;
      USE(label_try_begin_1114_1875);
      Goto(label_try_begin_1114_1875);
      if (label_try_begin_1114_1875->is_used())
      {
        BIND(label_try_begin_1114_1875);
        // ../../third_party/v8/builtins/array-sort.tq:1386:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1387:7
          {
            Label label__True_1161_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1161 = &label__True_1161_impl;
            USE(label__True_1161);
            Label label__False_1162_impl(this, {lengthA_481}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1162 = &label__False_1162_impl;
            USE(label__False_1162);
            TNode<Smi> t3451 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t3452 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3451)));
            *lengthA_481 = implicit_cast<TNode<Smi>>(t3452);
            int31_t t3453 = 0;
            TNode<Smi> t3454 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3453)));
            TNode<BoolT> t3455 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3452), implicit_cast<TNode<Smi>>(t3454)));
            USE(implicit_cast<TNode<BoolT>>(t3455));
            Branch(implicit_cast<TNode<BoolT>>(t3455), label__True_1161, label__False_1162);
            if (label__True_1161->is_used())
            {
              BIND(label__True_1161);
              // ../../third_party/v8/builtins/array-sort.tq:1387:27
              Goto(label_Succeed_1159);
            }
            BIND(label__False_1162);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1388:7
          {
            Label label__True_1163_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1163 = &label__True_1163_impl;
            USE(label__True_1163);
            Label label__False_1164_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1164 = &label__False_1164_impl;
            USE(label__False_1164);
            int31_t t3456 = 1;
            TNode<Smi> t3457 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3456)));
            TNode<BoolT> t3458 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3457)));
            USE(implicit_cast<TNode<BoolT>>(t3458));
            Branch(implicit_cast<TNode<BoolT>>(t3458), label__True_1163, label__False_1164);
            if (label__True_1163->is_used())
            {
              BIND(label__True_1163);
              // ../../third_party/v8/builtins/array-sort.tq:1388:25
              Goto(label_CopyA_1160);
            }
            BIND(label__False_1164);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1390:7
          TNode<Object> t3459 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t3460 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(t3459)));
          USE(implicit_cast<TNode<Smi>>(t3460));
          TVARIABLE(Smi, minGallop_487_impl);
          auto minGallop_487 = &minGallop_487_impl;
          USE(minGallop_487);
          *minGallop_487 = implicit_cast<TNode<Smi>>(t3460);
          // ../../third_party/v8/builtins/array-sort.tq:1393:7
          {
            Label label__True_1165_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1165 = &label__True_1165_impl;
            USE(label__True_1165);
            Label label__False_1166_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1166 = &label__False_1166_impl;
            USE(label__False_1166);
            Label label_header_1115_1876_impl(this, {cursorA_486, cursorTemp_485, dest_484, elements_483, lengthA_481, lengthB_482, minGallop_487}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1115_1876 = &label_header_1115_1876_impl;
            USE(label_header_1115_1876);
            Goto(label_header_1115_1876);
            BIND(label_header_1115_1876);
            TNode<BoolT> t3461 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t3461));
            Branch(implicit_cast<TNode<BoolT>>(t3461), label__True_1165, label__False_1166);
            if (label__True_1165->is_used())
            {
              BIND(label__True_1165);
              // ../../third_party/v8/builtins/array-sort.tq:1393:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1394:9
                int31_t t3462 = 0;
                TVARIABLE(Smi, nofWinsA_488_impl);
                auto nofWinsA_488 = &nofWinsA_488_impl;
                USE(nofWinsA_488);
                TNode<Smi> t3463 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3462)));
                *nofWinsA_488 = implicit_cast<TNode<Smi>>(t3463);
                // ../../third_party/v8/builtins/array-sort.tq:1395:9
                int31_t t3464 = 0;
                TVARIABLE(Smi, nofWinsB_489_impl);
                auto nofWinsB_489 = &nofWinsB_489_impl;
                USE(nofWinsB_489);
                TNode<Smi> t3465 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3464)));
                *nofWinsB_489 = implicit_cast<TNode<Smi>>(t3465);
                // ../../third_party/v8/builtins/array-sort.tq:1401:9
                {
                  Label label__True_1167_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1167 = &label__True_1167_impl;
                  USE(label__True_1167);
                  Label label__False_1168_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1168 = &label__False_1168_impl;
                  USE(label__False_1168);
                  Label label_header_1116_1877_impl(this, {cursorA_486, cursorTemp_485, dest_484, elements_483, lengthA_481, lengthB_482, nofWinsA_488, nofWinsB_489}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1116_1877 = &label_header_1116_1877_impl;
                  USE(label_header_1116_1877);
                  Goto(label_header_1116_1877);
                  BIND(label_header_1116_1877);
                  TNode<BoolT> t3466 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t3466));
                  Branch(implicit_cast<TNode<BoolT>>(t3466), label__True_1167, label__False_1168);
                  if (label__True_1167->is_used())
                  {
                    BIND(label__True_1167);
                    // ../../third_party/v8/builtins/array-sort.tq:1401:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1402:11
                      Label label__True_1169_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1169 = &label__True_1169_impl;
                      USE(label__True_1169);
                      Label label__False_1170_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1170 = &label__False_1170_impl;
                      USE(label__False_1170);
                      Label label__True_1171_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1171 = &label__True_1171_impl;
                      USE(label__True_1171);
                      int31_t t3467 = 0;
                      TNode<Smi> t3468 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3467)));
                      TNode<BoolT> t3469 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3468)));
                      USE(implicit_cast<TNode<BoolT>>(t3469));
                      GotoIfNot(implicit_cast<TNode<BoolT>>(t3469), label__False_1170);
                      int31_t t3470 = 1;
                      TNode<Smi> t3471 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3470)));
                      TNode<BoolT> t3472 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3471)));
                      USE(implicit_cast<TNode<BoolT>>(t3472));
Branch(implicit_cast<TNode<BoolT>>(t3472), label__True_1169, label__False_1170);
                      BIND(label__False_1170);
                      Print("assert 'lengthA > 0 && lengthB > 1' failed at ../../third_party/v8/builtins/array-sort.tq:1402:11");
                      Unreachable();
                      BIND(label__True_1169);
                      // ../../third_party/v8/builtins/array-sort.tq:1404:11
                      TNode<Object> t3473 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>((*cursorA_486).value()), label_Bailout_1150));
                      USE(implicit_cast<TNode<Object>>(t3473));
                      TVARIABLE(Object, elementA_490_impl);
                      auto elementA_490 = &elementA_490_impl;
                      USE(elementA_490);
                      *elementA_490 = implicit_cast<TNode<Object>>(t3473);
                      // ../../third_party/v8/builtins/array-sort.tq:1407:11
                      TNode<Object> t3474 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>((*cursorTemp_485).value())));
                      TNode<Number> t3475 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(t3474), implicit_cast<TNode<Object>>((*elementA_490).value()), label_Bailout_1150));
                      USE(implicit_cast<TNode<Number>>(t3475));
                      TVARIABLE(Number, order_491_impl);
                      auto order_491 = &order_491_impl;
                      USE(order_491);
                      *order_491 = implicit_cast<TNode<Number>>(t3475);
                      // ../../third_party/v8/builtins/array-sort.tq:1410:11
                      TNode<HeapObject> t3476 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3476));
                      *elements_483 = implicit_cast<TNode<HeapObject>>(t3476);
                      // ../../third_party/v8/builtins/array-sort.tq:1412:11
                      {
                        Label label__True_1172_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1172 = &label__True_1172_impl;
                        USE(label__True_1172);
                        Label label__False_1173_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1173 = &label__False_1173_impl;
                        USE(label__False_1173);
                        Label label_if_done_label_1117_1878_impl(this, {cursorA_486, cursorTemp_485, dest_484, lengthA_481, lengthB_482, nofWinsA_488, nofWinsB_489}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label_if_done_label_1117_1878 = &label_if_done_label_1117_1878_impl;
                        USE(label_if_done_label_1117_1878);
                        int31_t t3477 = 0;
                        TNode<Number> t3478 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3477)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_491).value()), implicit_cast<TNode<Number>>(t3478), label__True_1172, label__False_1173);
                        if (label__True_1172->is_used())
                        {
                          BIND(label__True_1172);
                          // ../../third_party/v8/builtins/array-sort.tq:1412:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1413:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>((*dest_484).value()), label_Bailout_1150);
                            // ../../third_party/v8/builtins/array-sort.tq:1417:13
                            TNode<Smi> t3479 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3480 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>(t3479)));
                            *cursorA_486 = implicit_cast<TNode<Smi>>(t3480);
                            // ../../third_party/v8/builtins/array-sort.tq:1418:13
                            TNode<Smi> t3481 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3482 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3481)));
                            *dest_484 = implicit_cast<TNode<Smi>>(t3482);
                            // ../../third_party/v8/builtins/array-sort.tq:1419:13
                            TNode<Smi> t3483 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3484 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nofWinsA_488).value()), implicit_cast<TNode<Smi>>(t3483)));
                            *nofWinsA_488 = implicit_cast<TNode<Smi>>(t3484);
                            // ../../third_party/v8/builtins/array-sort.tq:1420:13
                            TNode<Smi> t3485 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3486 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3485)));
                            *lengthA_481 = implicit_cast<TNode<Smi>>(t3486);
                            // ../../third_party/v8/builtins/array-sort.tq:1421:13
                            int31_t t3487 = 0;
                            TNode<Smi> t3488 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3487)));
                            *nofWinsB_489 = implicit_cast<TNode<Smi>>(t3488);
                            // ../../third_party/v8/builtins/array-sort.tq:1423:13
                            {
                              Label label__True_1174_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1174 = &label__True_1174_impl;
                              USE(label__True_1174);
                              Label label__False_1175_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1175 = &label__False_1175_impl;
                              USE(label__False_1175);
                              int31_t t3489 = 0;
                              TNode<Smi> t3490 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3489)));
                              TNode<BoolT> t3491 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3490)));
                              USE(implicit_cast<TNode<BoolT>>(t3491));
                              Branch(implicit_cast<TNode<BoolT>>(t3491), label__True_1174, label__False_1175);
                              if (label__True_1174->is_used())
                              {
                                BIND(label__True_1174);
                                // ../../third_party/v8/builtins/array-sort.tq:1423:31
                                Goto(label_Succeed_1159);
                              }
                              BIND(label__False_1175);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1424:13
                            {
                              Label label__True_1176_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1176 = &label__True_1176_impl;
                              USE(label__True_1176);
                              Label label__False_1177_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1177 = &label__False_1177_impl;
                              USE(label__False_1177);
                              TNode<BoolT> t3492 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsA_488).value()), implicit_cast<TNode<Smi>>((*minGallop_487).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3492));
                              Branch(implicit_cast<TNode<BoolT>>(t3492), label__True_1176, label__False_1177);
                              if (label__True_1176->is_used())
                              {
                                BIND(label__True_1176);
                                // ../../third_party/v8/builtins/array-sort.tq:1424:40
                                Goto(label__False_1168);
                              }
                              BIND(label__False_1177);
                            }
                          }
                          Goto(label_if_done_label_1117_1878);
                        }
                        if (label__False_1173->is_used())
                        {
                          BIND(label__False_1173);
                          // ../../third_party/v8/builtins/array-sort.tq:1425:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1426:13
                            TNode<Object> t3493 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>((*cursorTemp_485).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Object>>(t3493), label_Bailout_1150);
                            // ../../third_party/v8/builtins/array-sort.tq:1431:13
                            TNode<Smi> t3494 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3495 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorTemp_485).value()), implicit_cast<TNode<Smi>>(t3494)));
                            *cursorTemp_485 = implicit_cast<TNode<Smi>>(t3495);
                            // ../../third_party/v8/builtins/array-sort.tq:1432:13
                            TNode<Smi> t3496 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3497 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3496)));
                            *dest_484 = implicit_cast<TNode<Smi>>(t3497);
                            // ../../third_party/v8/builtins/array-sort.tq:1433:13
                            TNode<Smi> t3498 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3499 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nofWinsB_489).value()), implicit_cast<TNode<Smi>>(t3498)));
                            *nofWinsB_489 = implicit_cast<TNode<Smi>>(t3499);
                            // ../../third_party/v8/builtins/array-sort.tq:1434:13
                            TNode<Smi> t3500 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t3501 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3500)));
                            *lengthB_482 = implicit_cast<TNode<Smi>>(t3501);
                            // ../../third_party/v8/builtins/array-sort.tq:1435:13
                            int31_t t3502 = 0;
                            TNode<Smi> t3503 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3502)));
                            *nofWinsA_488 = implicit_cast<TNode<Smi>>(t3503);
                            // ../../third_party/v8/builtins/array-sort.tq:1437:13
                            {
                              Label label__True_1178_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1178 = &label__True_1178_impl;
                              USE(label__True_1178);
                              Label label__False_1179_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1179 = &label__False_1179_impl;
                              USE(label__False_1179);
                              int31_t t3504 = 1;
                              TNode<Smi> t3505 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3504)));
                              TNode<BoolT> t3506 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3505)));
                              USE(implicit_cast<TNode<BoolT>>(t3506));
                              Branch(implicit_cast<TNode<BoolT>>(t3506), label__True_1178, label__False_1179);
                              if (label__True_1178->is_used())
                              {
                                BIND(label__True_1178);
                                // ../../third_party/v8/builtins/array-sort.tq:1437:31
                                Goto(label_CopyA_1160);
                              }
                              BIND(label__False_1179);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1438:13
                            {
                              Label label__True_1180_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1180 = &label__True_1180_impl;
                              USE(label__True_1180);
                              Label label__False_1181_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1181 = &label__False_1181_impl;
                              USE(label__False_1181);
                              TNode<BoolT> t3507 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsB_489).value()), implicit_cast<TNode<Smi>>((*minGallop_487).value())));
                              USE(implicit_cast<TNode<BoolT>>(t3507));
                              Branch(implicit_cast<TNode<BoolT>>(t3507), label__True_1180, label__False_1181);
                              if (label__True_1180->is_used())
                              {
                                BIND(label__True_1180);
                                // ../../third_party/v8/builtins/array-sort.tq:1438:40
                                Goto(label__False_1168);
                              }
                              BIND(label__False_1181);
                            }
                          }
                          Goto(label_if_done_label_1117_1878);
                        }
                        BIND(label_if_done_label_1117_1878);
                      }
                    }
                    Goto(label_header_1116_1877);
                  }
                  BIND(label__False_1168);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1445:9
                TNode<Smi> t3508 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3509 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*minGallop_487).value()), implicit_cast<TNode<Smi>>(t3508)));
                *minGallop_487 = implicit_cast<TNode<Smi>>(t3509);
                // ../../third_party/v8/builtins/array-sort.tq:1446:9
                TVARIABLE(BoolT, firstIteration_492_impl);
                auto firstIteration_492 = &firstIteration_492_impl;
                USE(firstIteration_492);
                TNode<BoolT> t3510 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                *firstIteration_492 = implicit_cast<TNode<BoolT>>(t3510);
                // ../../third_party/v8/builtins/array-sort.tq:1447:9
                {
                  Label label__True_1182_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1182 = &label__True_1182_impl;
                  USE(label__True_1182);
                  Label label__False_1183_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1183 = &label__False_1183_impl;
                  USE(label__False_1183);
                  Label label_header_1118_1879_impl(this, {cursorA_486, cursorTemp_485, dest_484, firstIteration_492, lengthA_481, lengthB_482, minGallop_487, nofWinsA_488, nofWinsB_489}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_header_1118_1879 = &label_header_1118_1879_impl;
                  USE(label_header_1118_1879);
                  Goto(label_header_1118_1879);
                  BIND(label_header_1118_1879);
                  Label label__False_1184_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1184 = &label__False_1184_impl;
                  USE(label__False_1184);
                  Label label__False_1185_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1185 = &label__False_1185_impl;
                  USE(label__False_1185);
                  TNode<Smi> t3511 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3512 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsA_488).value()), implicit_cast<TNode<Smi>>(t3511)));
                  USE(implicit_cast<TNode<BoolT>>(t3512));
                  GotoIf(implicit_cast<TNode<BoolT>>(t3512), label__True_1182);
                  TNode<Smi> t3513 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t3514 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nofWinsB_489).value()), implicit_cast<TNode<Smi>>(t3513)));
                  USE(implicit_cast<TNode<BoolT>>(t3514));
Branch(implicit_cast<TNode<BoolT>>(t3514), label__True_1182, label__False_1184);
                  BIND(label__False_1184);
Branch(implicit_cast<TNode<BoolT>>((*firstIteration_492).value()), label__True_1182, label__False_1183);
                  if (label__True_1182->is_used())
                  {
                    BIND(label__True_1182);
                    // ../../third_party/v8/builtins/array-sort.tq:1448:32
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1449:11
                      TNode<BoolT> t3515 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
                      *firstIteration_492 = implicit_cast<TNode<BoolT>>(t3515);
                      // ../../third_party/v8/builtins/array-sort.tq:1451:11
                      Label label__True_1186_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1186 = &label__True_1186_impl;
                      USE(label__True_1186);
                      Label label__False_1187_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1187 = &label__False_1187_impl;
                      USE(label__False_1187);
                      Label label__True_1188_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1188 = &label__True_1188_impl;
                      USE(label__True_1188);
                      int31_t t3516 = 0;
                      TNode<Smi> t3517 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3516)));
                      TNode<BoolT> t3518 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3517)));
                      USE(implicit_cast<TNode<BoolT>>(t3518));
                      GotoIfNot(implicit_cast<TNode<BoolT>>(t3518), label__False_1187);
                      int31_t t3519 = 1;
                      TNode<Smi> t3520 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3519)));
                      TNode<BoolT> t3521 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3520)));
                      USE(implicit_cast<TNode<BoolT>>(t3521));
Branch(implicit_cast<TNode<BoolT>>(t3521), label__True_1186, label__False_1187);
                      BIND(label__False_1187);
                      Print("assert 'lengthA > 0 && lengthB > 1' failed at ../../third_party/v8/builtins/array-sort.tq:1451:11");
                      Unreachable();
                      BIND(label__True_1186);
                      // ../../third_party/v8/builtins/array-sort.tq:1453:11
                      int31_t t3522 = 1;
                      int31_t t3523 = 1;
                      TNode<Smi> t3524 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3523)));
                      TNode<Smi> t3525 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*minGallop_487).value()), implicit_cast<TNode<Smi>>(t3524)));
                      USE(implicit_cast<TNode<Smi>>(t3525));
                      TNode<Smi> t3526 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3522)));
                      TNode<Smi> t3527 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t3526), implicit_cast<TNode<Smi>>(t3525)));
                      USE(implicit_cast<TNode<Smi>>(t3527));
                      *minGallop_487 = implicit_cast<TNode<Smi>>(t3527);
                      // ../../third_party/v8/builtins/array-sort.tq:1454:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*minGallop_487).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1456:11
                      TNode<Object> t3528 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>((*cursorTemp_485).value())));
                      int31_t t3529 = 1;
                      TNode<Smi> t3530 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3529)));
                      TNode<Smi> t3531 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3530)));
                      USE(implicit_cast<TNode<Smi>>(t3531));
                      TNode<Smi> t3532 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<Object>>(t3528), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3531), implicit_cast<TNode<Oddball>>(False()), label_Bailout_1150));
                      USE(implicit_cast<TNode<Smi>>(t3532));
                      TVARIABLE(Smi, k_493_impl);
                      auto k_493 = &k_493_impl;
                      USE(k_493);
                      *k_493 = implicit_cast<TNode<Smi>>(t3532);
                      // ../../third_party/v8/builtins/array-sort.tq:1460:11
                      Label label__True_1189_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1189 = &label__True_1189_impl;
                      USE(label__True_1189);
                      Label label__False_1190_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1190 = &label__False_1190_impl;
                      USE(label__False_1190);
                      int31_t t3533 = 0;
                      TNode<Smi> t3534 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3533)));
                      TNode<BoolT> t3535 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_493).value()), implicit_cast<TNode<Smi>>(t3534)));
                      USE(implicit_cast<TNode<BoolT>>(t3535));
                      Branch(implicit_cast<TNode<BoolT>>(t3535), label__True_1189, label__False_1190);
                      BIND(label__False_1190);
                      Print("assert 'k >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1460:11");
                      Unreachable();
                      BIND(label__True_1189);
                      // ../../third_party/v8/builtins/array-sort.tq:1461:11
                      TNode<Smi> t3536 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>((*k_493).value())));
                      USE(implicit_cast<TNode<Smi>>(t3536));
                      *nofWinsA_488 = implicit_cast<TNode<Smi>>(t3536);
                      // ../../third_party/v8/builtins/array-sort.tq:1463:11
                      {
                        Label label__True_1191_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1191 = &label__True_1191_impl;
                        USE(label__True_1191);
                        Label label__False_1192_impl(this, {cursorA_486, dest_484, lengthA_481}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1192 = &label__False_1192_impl;
                        USE(label__False_1192);
                        int31_t t3537 = 0;
                        TNode<Smi> t3538 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3537)));
                        TNode<BoolT> t3539 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nofWinsA_488).value()), implicit_cast<TNode<Smi>>(t3538)));
                        USE(implicit_cast<TNode<BoolT>>(t3539));
                        Branch(implicit_cast<TNode<BoolT>>(t3539), label__True_1191, label__False_1192);
                        if (label__True_1191->is_used())
                        {
                          BIND(label__True_1191);
                          // ../../third_party/v8/builtins/array-sort.tq:1463:29
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1464:13
                            TNode<Smi> t3540 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>((*nofWinsA_488).value())));
                            USE(implicit_cast<TNode<Smi>>(t3540));
                            *dest_484 = implicit_cast<TNode<Smi>>(t3540);
                            // ../../third_party/v8/builtins/array-sort.tq:1465:13
                            TNode<Smi> t3541 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>((*nofWinsA_488).value())));
                            USE(implicit_cast<TNode<Smi>>(t3541));
                            *cursorA_486 = implicit_cast<TNode<Smi>>(t3541);
                            // ../../third_party/v8/builtins/array-sort.tq:1466:13
                            int31_t t3542 = 1;
                            TNode<Smi> t3543 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3542)));
                            TNode<Smi> t3544 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>(t3543)));
                            USE(implicit_cast<TNode<Smi>>(t3544));
                            int31_t t3545 = 1;
                            TNode<Smi> t3546 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3545)));
                            TNode<Smi> t3547 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3546)));
                            USE(implicit_cast<TNode<Smi>>(t3547));
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3544), implicit_cast<TNode<Smi>>(t3547), implicit_cast<TNode<Smi>>((*nofWinsA_488).value()), label_Bailout_1150);
                            // ../../third_party/v8/builtins/array-sort.tq:1470:13
                            TNode<Smi> t3548 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>((*nofWinsA_488).value())));
                            USE(implicit_cast<TNode<Smi>>(t3548));
                            *lengthA_481 = implicit_cast<TNode<Smi>>(t3548);
                            // ../../third_party/v8/builtins/array-sort.tq:1471:13
                            {
                              Label label__True_1193_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1193 = &label__True_1193_impl;
                              USE(label__True_1193);
                              Label label__False_1194_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1194 = &label__False_1194_impl;
                              USE(label__False_1194);
                              int31_t t3549 = 0;
                              TNode<Smi> t3550 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3549)));
                              TNode<BoolT> t3551 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3550)));
                              USE(implicit_cast<TNode<BoolT>>(t3551));
                              Branch(implicit_cast<TNode<BoolT>>(t3551), label__True_1193, label__False_1194);
                              if (label__True_1193->is_used())
                              {
                                BIND(label__True_1193);
                                // ../../third_party/v8/builtins/array-sort.tq:1471:31
                                Goto(label_Succeed_1159);
                              }
                              BIND(label__False_1194);
                            }
                          }
                          Goto(label__False_1192);
                        }
                        BIND(label__False_1192);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1473:11
                      TNode<Smi> t3552 = implicit_cast<TNode<Smi>>((*dest_484).value());
                      USE(t3552);
                      TNode<Smi> t3553 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3554 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3553)));
                      *dest_484 = implicit_cast<TNode<Smi>>(t3554);
                      TNode<Smi> t3555 = implicit_cast<TNode<Smi>>((*cursorTemp_485).value());
                      USE(t3555);
                      TNode<Smi> t3556 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3557 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorTemp_485).value()), implicit_cast<TNode<Smi>>(t3556)));
                      *cursorTemp_485 = implicit_cast<TNode<Smi>>(t3557);
                      TNode<Object> t3558 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>(t3555)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3552), implicit_cast<TNode<Object>>(t3558), label_Bailout_1150);
                      // ../../third_party/v8/builtins/array-sort.tq:1477:11
                      {
                        Label label__True_1195_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1195 = &label__True_1195_impl;
                        USE(label__True_1195);
                        Label label__False_1196_impl(this, {lengthB_482}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1196 = &label__False_1196_impl;
                        USE(label__False_1196);
                        TNode<Smi> t3559 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3560 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3559)));
                        *lengthB_482 = implicit_cast<TNode<Smi>>(t3560);
                        int31_t t3561 = 1;
                        TNode<Smi> t3562 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3561)));
                        TNode<BoolT> t3563 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3560), implicit_cast<TNode<Smi>>(t3562)));
                        USE(implicit_cast<TNode<BoolT>>(t3563));
                        Branch(implicit_cast<TNode<BoolT>>(t3563), label__True_1195, label__False_1196);
                        if (label__True_1195->is_used())
                        {
                          BIND(label__True_1195);
                          // ../../third_party/v8/builtins/array-sort.tq:1477:31
                          Goto(label_CopyA_1160);
                        }
                        BIND(label__False_1196);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1479:11
                      TNode<Object> t3564 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>((*cursorA_486).value()), label_Bailout_1150));
                      USE(implicit_cast<TNode<Object>>(t3564));
                      TVARIABLE(Object, key_494_impl);
                      auto key_494 = &key_494_impl;
                      USE(key_494);
                      *key_494 = implicit_cast<TNode<Object>>(t3564);
                      // ../../third_party/v8/builtins/array-sort.tq:1482:11
                      int31_t t3565 = 0;
                      int31_t t3566 = 1;
                      TNode<Smi> t3567 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3566)));
                      TNode<Smi> t3568 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3567)));
                      USE(implicit_cast<TNode<Smi>>(t3568));
                      TNode<Smi> t3569 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3565)));
                      TNode<Smi> t3570 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*key_494).value()), implicit_cast<TNode<Smi>>(t3569), implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3568), implicit_cast<TNode<Oddball>>(True()), label_Bailout_1150));
                      USE(implicit_cast<TNode<Smi>>(t3570));
                      *k_493 = implicit_cast<TNode<Smi>>(t3570);
                      // ../../third_party/v8/builtins/array-sort.tq:1485:11
                      Label label__True_1197_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1197 = &label__True_1197_impl;
                      USE(label__True_1197);
                      Label label__False_1198_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1198 = &label__False_1198_impl;
                      USE(label__False_1198);
                      int31_t t3571 = 0;
                      TNode<Smi> t3572 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3571)));
                      TNode<BoolT> t3573 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_493).value()), implicit_cast<TNode<Smi>>(t3572)));
                      USE(implicit_cast<TNode<BoolT>>(t3573));
                      Branch(implicit_cast<TNode<BoolT>>(t3573), label__True_1197, label__False_1198);
                      BIND(label__False_1198);
                      Print("assert 'k >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1485:11");
                      Unreachable();
                      BIND(label__True_1197);
                      // ../../third_party/v8/builtins/array-sort.tq:1486:11
                      TNode<Smi> t3574 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>((*k_493).value())));
                      USE(implicit_cast<TNode<Smi>>(t3574));
                      *nofWinsB_489 = implicit_cast<TNode<Smi>>(t3574);
                      // ../../third_party/v8/builtins/array-sort.tq:1488:11
                      {
                        Label label__True_1199_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1199 = &label__True_1199_impl;
                        USE(label__True_1199);
                        Label label__False_1200_impl(this, {cursorTemp_485, dest_484, lengthB_482}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1200 = &label__False_1200_impl;
                        USE(label__False_1200);
                        int31_t t3575 = 0;
                        TNode<Smi> t3576 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3575)));
                        TNode<BoolT> t3577 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nofWinsB_489).value()), implicit_cast<TNode<Smi>>(t3576)));
                        USE(implicit_cast<TNode<BoolT>>(t3577));
                        Branch(implicit_cast<TNode<BoolT>>(t3577), label__True_1199, label__False_1200);
                        if (label__True_1199->is_used())
                        {
                          BIND(label__True_1199);
                          // ../../third_party/v8/builtins/array-sort.tq:1488:29
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1489:13
                            TNode<Smi> t3578 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>((*nofWinsB_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t3578));
                            *dest_484 = implicit_cast<TNode<Smi>>(t3578);
                            // ../../third_party/v8/builtins/array-sort.tq:1490:13
                            TNode<Smi> t3579 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorTemp_485).value()), implicit_cast<TNode<Smi>>((*nofWinsB_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t3579));
                            *cursorTemp_485 = implicit_cast<TNode<Smi>>(t3579);
                            // ../../third_party/v8/builtins/array-sort.tq:1491:13
                            int31_t t3580 = 1;
                            TNode<Smi> t3581 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3580)));
                            TNode<Smi> t3582 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3581)));
                            USE(implicit_cast<TNode<Smi>>(t3582));
                            int31_t t3583 = 1;
                            TNode<Smi> t3584 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3583)));
                            TNode<Smi> t3585 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorTemp_485).value()), implicit_cast<TNode<Smi>>(t3584)));
                            USE(implicit_cast<TNode<Smi>>(t3585));
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3582), implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>(t3585), implicit_cast<TNode<Smi>>((*nofWinsB_489).value()), label_Bailout_1150);
                            // ../../third_party/v8/builtins/array-sort.tq:1495:13
                            TNode<Smi> t3586 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>((*nofWinsB_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t3586));
                            *lengthB_482 = implicit_cast<TNode<Smi>>(t3586);
                            // ../../third_party/v8/builtins/array-sort.tq:1496:13
                            {
                              Label label__True_1201_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1201 = &label__True_1201_impl;
                              USE(label__True_1201);
                              Label label__False_1202_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1202 = &label__False_1202_impl;
                              USE(label__False_1202);
                              int31_t t3587 = 1;
                              TNode<Smi> t3588 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3587)));
                              TNode<BoolT> t3589 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3588)));
                              USE(implicit_cast<TNode<BoolT>>(t3589));
                              Branch(implicit_cast<TNode<BoolT>>(t3589), label__True_1201, label__False_1202);
                              if (label__True_1201->is_used())
                              {
                                BIND(label__True_1201);
                                // ../../third_party/v8/builtins/array-sort.tq:1496:31
                                Goto(label_CopyA_1160);
                              }
                              BIND(label__False_1202);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1500:13
                            {
                              Label label__True_1203_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_1203 = &label__True_1203_impl;
                              USE(label__True_1203);
                              Label label__False_1204_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_1204 = &label__False_1204_impl;
                              USE(label__False_1204);
                              int31_t t3590 = 0;
                              TNode<Smi> t3591 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3590)));
                              TNode<BoolT> t3592 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3591)));
                              USE(implicit_cast<TNode<BoolT>>(t3592));
                              Branch(implicit_cast<TNode<BoolT>>(t3592), label__True_1203, label__False_1204);
                              if (label__True_1203->is_used())
                              {
                                BIND(label__True_1203);
                                // ../../third_party/v8/builtins/array-sort.tq:1500:31
                                Goto(label_Succeed_1159);
                              }
                              BIND(label__False_1204);
                            }
                          }
                          Goto(label__False_1200);
                        }
                        BIND(label__False_1200);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1502:11
                      TNode<Smi> t3593 = implicit_cast<TNode<Smi>>((*cursorA_486).value());
                      USE(t3593);
                      TNode<Smi> t3594 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3595 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>(t3594)));
                      *cursorA_486 = implicit_cast<TNode<Smi>>(t3595);
                      TNode<Smi> t3596 = implicit_cast<TNode<Smi>>((*dest_484).value());
                      USE(t3596);
                      TNode<Smi> t3597 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3598 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3597)));
                      *dest_484 = implicit_cast<TNode<Smi>>(t3598);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*load_1110)), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3593), implicit_cast<TNode<Smi>>(t3596), label_Bailout_1150);
                      // ../../third_party/v8/builtins/array-sort.tq:1505:11
                      {
                        Label label__True_1205_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_1205 = &label__True_1205_impl;
                        USE(label__True_1205);
                        Label label__False_1206_impl(this, {lengthA_481}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_1206 = &label__False_1206_impl;
                        USE(label__False_1206);
                        TNode<Smi> t3599 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3600 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3599)));
                        *lengthA_481 = implicit_cast<TNode<Smi>>(t3600);
                        int31_t t3601 = 0;
                        TNode<Smi> t3602 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3601)));
                        TNode<BoolT> t3603 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3600), implicit_cast<TNode<Smi>>(t3602)));
                        USE(implicit_cast<TNode<BoolT>>(t3603));
                        Branch(implicit_cast<TNode<BoolT>>(t3603), label__True_1205, label__False_1206);
                        if (label__True_1205->is_used())
                        {
                          BIND(label__True_1205);
                          // ../../third_party/v8/builtins/array-sort.tq:1505:31
                          Goto(label_Succeed_1159);
                        }
                        BIND(label__False_1206);
                      }
                    }
                    Goto(label_header_1118_1879);
                  }
                  BIND(label__False_1183);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1507:9
                TNode<Smi> t3604 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3605 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*minGallop_487).value()), implicit_cast<TNode<Smi>>(t3604)));
                *minGallop_487 = implicit_cast<TNode<Smi>>(t3605);
                // ../../third_party/v8/builtins/array-sort.tq:1508:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*minGallop_487).value()));
              }
              Goto(label_header_1115_1876);
            }
            BIND(label__False_1166);
          }
        }
        Goto(label_try_done_1113_1874);
      }
      if (label_Succeed_1159->is_used())
      {
        BIND(label_Succeed_1159);
        // ../../third_party/v8/builtins/array-sort.tq:1511:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1512:7
          {
            Label label__True_1207_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1207 = &label__True_1207_impl;
            USE(label__True_1207);
            Label label__False_1208_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1208 = &label__False_1208_impl;
            USE(label__False_1208);
            int31_t t3606 = 0;
            TNode<Smi> t3607 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3606)));
            TNode<BoolT> t3608 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3607)));
            USE(implicit_cast<TNode<BoolT>>(t3608));
            Branch(implicit_cast<TNode<BoolT>>(t3608), label__True_1207, label__False_1208);
            if (label__True_1207->is_used())
            {
              BIND(label__True_1207);
              // ../../third_party/v8/builtins/array-sort.tq:1512:24
              {
                // ../../third_party/v8/builtins/array-sort.tq:1513:9
                Label label__True_1209_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1209 = &label__True_1209_impl;
                USE(label__True_1209);
                Label label__False_1210_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1210 = &label__False_1210_impl;
                USE(label__False_1210);
                int31_t t3609 = 0;
                TNode<Smi> t3610 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3609)));
                TNode<BoolT> t3611 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3610)));
                USE(implicit_cast<TNode<BoolT>>(t3611));
                Branch(implicit_cast<TNode<BoolT>>(t3611), label__True_1209, label__False_1210);
                BIND(label__False_1210);
                Print("assert 'lengthA == 0' failed at ../../third_party/v8/builtins/array-sort.tq:1513:9");
                Unreachable();
                BIND(label__True_1209);
                // ../../third_party/v8/builtins/array-sort.tq:1514:9
                int31_t t3612 = 1;
                TNode<Smi> t3613 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3612)));
                TNode<Smi> t3614 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3613)));
                USE(implicit_cast<TNode<Smi>>(t3614));
                TNode<Smi> t3615 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3614)));
                USE(implicit_cast<TNode<Smi>>(t3615));
                int31_t t3616 = 0;
                TNode<Smi> t3617 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3616)));
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3615), implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>(t3617), implicit_cast<TNode<Smi>>((*lengthB_482).value()), label_Bailout_1150);
              }
              Goto(label__False_1208);
            }
            BIND(label__False_1208);
          }
        }
        Goto(label_try_done_1113_1874);
      }
      if (label_CopyA_1160->is_used())
      {
        BIND(label_CopyA_1160);
        // ../../third_party/v8/builtins/array-sort.tq:1519:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1520:7
          Label label__True_1211_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1211 = &label__True_1211_impl;
          USE(label__True_1211);
          Label label__False_1212_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1212 = &label__False_1212_impl;
          USE(label__False_1212);
          Label label__True_1213_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1213 = &label__True_1213_impl;
          USE(label__True_1213);
          int31_t t3618 = 1;
          TNode<Smi> t3619 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3618)));
          TNode<BoolT> t3620 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*lengthB_482).value()), implicit_cast<TNode<Smi>>(t3619)));
          USE(implicit_cast<TNode<BoolT>>(t3620));
          GotoIfNot(implicit_cast<TNode<BoolT>>(t3620), label__False_1212);
          int31_t t3621 = 0;
          TNode<Smi> t3622 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3621)));
          TNode<BoolT> t3623 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthA_481).value()), implicit_cast<TNode<Smi>>(t3622)));
          USE(implicit_cast<TNode<BoolT>>(t3623));
Branch(implicit_cast<TNode<BoolT>>(t3623), label__True_1211, label__False_1212);
          BIND(label__False_1212);
          Print("assert 'lengthB == 1 && lengthA > 0' failed at ../../third_party/v8/builtins/array-sort.tq:1520:7");
          Unreachable();
          BIND(label__True_1211);
          // ../../third_party/v8/builtins/array-sort.tq:1523:7
          TNode<Smi> t3624 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>((*lengthA_481).value())));
          USE(implicit_cast<TNode<Smi>>(t3624));
          *dest_484 = implicit_cast<TNode<Smi>>(t3624);
          // ../../third_party/v8/builtins/array-sort.tq:1524:7
          TNode<Smi> t3625 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>((*lengthA_481).value())));
          USE(implicit_cast<TNode<Smi>>(t3625));
          *cursorA_486 = implicit_cast<TNode<Smi>>(t3625);
          // ../../third_party/v8/builtins/array-sort.tq:1525:7
          int31_t t3626 = 1;
          TNode<Smi> t3627 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3626)));
          TNode<Smi> t3628 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursorA_486).value()), implicit_cast<TNode<Smi>>(t3627)));
          USE(implicit_cast<TNode<Smi>>(t3628));
          int31_t t3629 = 1;
          TNode<Smi> t3630 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3629)));
          TNode<Smi> t3631 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Smi>>(t3630)));
          USE(implicit_cast<TNode<Smi>>(t3631));
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>(t3628), implicit_cast<TNode<Smi>>(t3631), implicit_cast<TNode<Smi>>((*lengthA_481).value()), label_Bailout_1150);
          // ../../third_party/v8/builtins/array-sort.tq:1528:7
          TNode<Object> t3632 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*tempArray_1112)), implicit_cast<TNode<Smi>>((*cursorTemp_485).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*store_1111)), implicit_cast<TNode<HeapObject>>((*elements_483).value()), implicit_cast<TNode<Smi>>((*dest_484).value()), implicit_cast<TNode<Object>>(t3632), label_Bailout_1150);
        }
        Goto(label_try_done_1113_1874);
      }
      BIND(label_try_done_1113_1874);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::ComputeMinRunLength(TNode<Smi> p_nArg) {
  TVARIABLE(Smi, _return_495_impl);
  auto _return_495 = &_return_495_impl;
  USE(_return_495);
  Label label_macro_end_1880_impl(this, {_return_495}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1880 = &label_macro_end_1880_impl;
  USE(label_macro_end_1880);
  // ../../third_party/v8/builtins/array-sort.tq:1543:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:1544:5
    TVARIABLE(Smi, n_496_impl);
    auto n_496 = &n_496_impl;
    USE(n_496);
    *n_496 = implicit_cast<TNode<Smi>>(p_nArg);
    // ../../third_party/v8/builtins/array-sort.tq:1545:5
    int31_t t3633 = 0;
    TVARIABLE(Smi, r_497_impl);
    auto r_497 = &r_497_impl;
    USE(r_497);
    TNode<Smi> t3634 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3633)));
    *r_497 = implicit_cast<TNode<Smi>>(t3634);
    // ../../third_party/v8/builtins/array-sort.tq:1547:5
    Label label__True_1214_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1214 = &label__True_1214_impl;
    USE(label__True_1214);
    Label label__False_1215_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1215 = &label__False_1215_impl;
    USE(label__False_1215);
    int31_t t3635 = 0;
    TNode<Smi> t3636 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3635)));
    TNode<BoolT> t3637 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*n_496).value()), implicit_cast<TNode<Smi>>(t3636)));
    USE(implicit_cast<TNode<BoolT>>(t3637));
    Branch(implicit_cast<TNode<BoolT>>(t3637), label__True_1214, label__False_1215);
    BIND(label__False_1215);
    Print("assert 'n >= 0' failed at ../../third_party/v8/builtins/array-sort.tq:1547:5");
    Unreachable();
    BIND(label__True_1214);
    // ../../third_party/v8/builtins/array-sort.tq:1548:5
    {
      Label label__True_1216_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1216 = &label__True_1216_impl;
      USE(label__True_1216);
      Label label__False_1217_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1217 = &label__False_1217_impl;
      USE(label__False_1217);
      Label label_header_1119_1881_impl(this, {n_496, r_497}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1119_1881 = &label_header_1119_1881_impl;
      USE(label_header_1119_1881);
      Goto(label_header_1119_1881);
      BIND(label_header_1119_1881);
      int31_t t3638 = 64;
      TNode<Smi> t3639 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3638)));
      TNode<BoolT> t3640 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*n_496).value()), implicit_cast<TNode<Smi>>(t3639)));
      USE(implicit_cast<TNode<BoolT>>(t3640));
      Branch(implicit_cast<TNode<BoolT>>(t3640), label__True_1216, label__False_1217);
      if (label__True_1216->is_used())
      {
        BIND(label__True_1216);
        // ../../third_party/v8/builtins/array-sort.tq:1548:21
        {
          // ../../third_party/v8/builtins/array-sort.tq:1549:7
          int31_t t3641 = 1;
          TNode<Smi> t3642 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3641)));
          TNode<Smi> t3643 = UncheckedCast<Smi>(SmiAnd(implicit_cast<TNode<Smi>>((*n_496).value()), implicit_cast<TNode<Smi>>(t3642)));
          USE(implicit_cast<TNode<Smi>>(t3643));
          TNode<Smi> t3644 = UncheckedCast<Smi>(SmiOr(implicit_cast<TNode<Smi>>((*r_497).value()), implicit_cast<TNode<Smi>>(t3643)));
          USE(implicit_cast<TNode<Smi>>(t3644));
          *r_497 = implicit_cast<TNode<Smi>>(t3644);
          // ../../third_party/v8/builtins/array-sort.tq:1550:7
          int31_t t3645 = 1;
          TNode<Smi> t3646 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>((*n_496).value()), implicit_cast<int31_t>(t3645)));
          USE(implicit_cast<TNode<Smi>>(t3646));
          *n_496 = implicit_cast<TNode<Smi>>(t3646);
        }
        Goto(label_header_1119_1881);
      }
      BIND(label__False_1217);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1553:5
    TNode<Smi> t3647 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_496).value()), implicit_cast<TNode<Smi>>((*r_497).value())));
    USE(implicit_cast<TNode<Smi>>(t3647));
    TNode<Smi> minRunLength_1120_impl;
    auto minRunLength_1120 = &minRunLength_1120_impl;
    USE(minRunLength_1120);
    *minRunLength_1120 = implicit_cast<TNode<Smi>>(t3647);
    // ../../third_party/v8/builtins/array-sort.tq:1554:5
    Label label__True_1218_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1218 = &label__True_1218_impl;
    USE(label__True_1218);
    Label label__False_1219_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1219 = &label__False_1219_impl;
    USE(label__False_1219);
    Label label__False_1220_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1220 = &label__False_1220_impl;
    USE(label__False_1220);
    int31_t t3648 = 64;
    TNode<Smi> t3649 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3648)));
    TNode<BoolT> t3650 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_nArg), implicit_cast<TNode<Smi>>(t3649)));
    USE(implicit_cast<TNode<BoolT>>(t3650));
    GotoIf(implicit_cast<TNode<BoolT>>(t3650), label__True_1218);
    Label label__True_1221_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1221 = &label__True_1221_impl;
    USE(label__True_1221);
    int31_t t3651 = 32;
    TNode<Smi> t3652 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3651)));
    TNode<BoolT> t3653 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3652), implicit_cast<TNode<Smi>>((*minRunLength_1120))));
    USE(implicit_cast<TNode<BoolT>>(t3653));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t3653), label__False_1219);
    int31_t t3654 = 64;
    TNode<Smi> t3655 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3654)));
    TNode<BoolT> t3656 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*minRunLength_1120)), implicit_cast<TNode<Smi>>(t3655)));
    USE(implicit_cast<TNode<BoolT>>(t3656));
Branch(implicit_cast<TNode<BoolT>>(t3656), label__True_1218, label__False_1219);
    BIND(label__False_1219);
    Print("assert 'nArg < 64 || (32 <= minRunLength && minRunLength <= 64)' failed at ../../third_party/v8/builtins/array-sort.tq:1554:5");
    Unreachable();
    BIND(label__True_1218);
    // ../../third_party/v8/builtins/array-sort.tq:1555:5
    *_return_495 = implicit_cast<TNode<Smi>>((*minRunLength_1120));
    Goto(label_macro_end_1880);
  }
  BIND(label_macro_end_1880);
  return implicit_cast<TNode<Smi>>((*_return_495).value());
}

compiler::TNode<BoolT> ArrayBuiltinsFromDSLAssembler::RunInvariantEstablished(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n) {
  TVARIABLE(BoolT, _return_498_impl);
  auto _return_498 = &_return_498_impl;
  USE(_return_498);
  Label label_macro_end_1882_impl(this, {_return_498}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1882 = &label_macro_end_1882_impl;
  USE(label_macro_end_1882);
  // ../../third_party/v8/builtins/array-sort.tq:1559:72
  {
    // ../../third_party/v8/builtins/array-sort.tq:1560:5
    {
      Label label__True_1222_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1222 = &label__True_1222_impl;
      USE(label__True_1222);
      Label label__False_1223_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1223 = &label__False_1223_impl;
      USE(label__False_1223);
      int31_t t3657 = 2;
      TNode<Smi> t3658 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3657)));
      TNode<BoolT> t3659 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3658)));
      USE(implicit_cast<TNode<BoolT>>(t3659));
      Branch(implicit_cast<TNode<BoolT>>(t3659), label__True_1222, label__False_1223);
      if (label__True_1222->is_used())
      {
        BIND(label__True_1222);
        // ../../third_party/v8/builtins/array-sort.tq:1560:16
        TNode<BoolT> t3660 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
        *_return_498 = implicit_cast<TNode<BoolT>>(t3660);
        Goto(label_macro_end_1882);
      }
      BIND(label__False_1223);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1562:5
    TNode<Smi> t3661 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(p_n)));
    USE(implicit_cast<TNode<Smi>>(t3661));
    TNode<Smi> runLengthN_1121_impl;
    auto runLengthN_1121 = &runLengthN_1121_impl;
    USE(runLengthN_1121);
    *runLengthN_1121 = implicit_cast<TNode<Smi>>(t3661);
    // ../../third_party/v8/builtins/array-sort.tq:1563:5
    int31_t t3662 = 1;
    TNode<Smi> t3663 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3662)));
    TNode<Smi> t3664 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3663)));
    USE(implicit_cast<TNode<Smi>>(t3664));
    TNode<Smi> t3665 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3664)));
    USE(implicit_cast<TNode<Smi>>(t3665));
    TNode<Smi> runLengthNM_1122_impl;
    auto runLengthNM_1122 = &runLengthNM_1122_impl;
    USE(runLengthNM_1122);
    *runLengthNM_1122 = implicit_cast<TNode<Smi>>(t3665);
    // ../../third_party/v8/builtins/array-sort.tq:1564:5
    int31_t t3666 = 2;
    TNode<Smi> t3667 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3666)));
    TNode<Smi> t3668 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3667)));
    USE(implicit_cast<TNode<Smi>>(t3668));
    TNode<Smi> t3669 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3668)));
    USE(implicit_cast<TNode<Smi>>(t3669));
    TNode<Smi> runLengthNMM_1123_impl;
    auto runLengthNMM_1123 = &runLengthNMM_1123_impl;
    USE(runLengthNMM_1123);
    *runLengthNMM_1123 = implicit_cast<TNode<Smi>>(t3669);
    // ../../third_party/v8/builtins/array-sort.tq:1566:5
    TNode<Smi> t3670 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*runLengthNM_1122)), implicit_cast<TNode<Smi>>((*runLengthN_1121))));
    USE(implicit_cast<TNode<Smi>>(t3670));
    TNode<BoolT> t3671 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*runLengthNMM_1123)), implicit_cast<TNode<Smi>>(t3670)));
    USE(implicit_cast<TNode<BoolT>>(t3671));
    *_return_498 = implicit_cast<TNode<BoolT>>(t3671);
    Goto(label_macro_end_1882);
  }
  BIND(label_macro_end_1882);
  return implicit_cast<TNode<BoolT>>((*_return_498).value());
}

void ArrayBuiltinsFromDSLAssembler::MergeCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_1224) {
  Label label_macro_end_1883_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1883 = &label_macro_end_1883_impl;
  USE(label_macro_end_1883);
  // ../../third_party/v8/builtins/array-sort.tq:1579:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1580:5
    TNode<Object> t3672 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3673 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t3672)));
    USE(implicit_cast<TNode<FixedArray>>(t3673));
    TNode<FixedArray> pendingRuns_1124_impl;
    auto pendingRuns_1124 = &pendingRuns_1124_impl;
    USE(pendingRuns_1124);
    *pendingRuns_1124 = implicit_cast<TNode<FixedArray>>(t3673);
    // ../../third_party/v8/builtins/array-sort.tq:1584:5
    {
      Label label__True_1225_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1225 = &label__True_1225_impl;
      USE(label__True_1225);
      Label label__False_1226_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1226 = &label__False_1226_impl;
      USE(label__False_1226);
      Label label_header_1125_1884_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1125_1884 = &label_header_1125_1884_impl;
      USE(label_header_1125_1884);
      Goto(label_header_1125_1884);
      BIND(label_header_1125_1884);
      TNode<Smi> t3674 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3674));
      int31_t t3675 = 1;
      TNode<Smi> t3676 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3675)));
      TNode<BoolT> t3677 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3674), implicit_cast<TNode<Smi>>(t3676)));
      USE(implicit_cast<TNode<BoolT>>(t3677));
      Branch(implicit_cast<TNode<BoolT>>(t3677), label__True_1225, label__False_1226);
      if (label__True_1225->is_used())
      {
        BIND(label__True_1225);
        // ../../third_party/v8/builtins/array-sort.tq:1584:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1585:7
          TNode<Smi> t3678 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3678));
          int31_t t3679 = 2;
          TNode<Smi> t3680 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3679)));
          TNode<Smi> t3681 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3678), implicit_cast<TNode<Smi>>(t3680)));
          USE(implicit_cast<TNode<Smi>>(t3681));
          TVARIABLE(Smi, n_499_impl);
          auto n_499 = &n_499_impl;
          USE(n_499);
          *n_499 = implicit_cast<TNode<Smi>>(t3681);
          // ../../third_party/v8/builtins/array-sort.tq:1587:7
          {
            Label label__True_1227_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1227 = &label__True_1227_impl;
            USE(label__True_1227);
            Label label__False_1228_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1228 = &label__False_1228_impl;
            USE(label__False_1228);
            Label label_if_done_label_1126_1885_impl(this, {n_499}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1126_1885 = &label_if_done_label_1126_1885_impl;
            USE(label_if_done_label_1126_1885);
            Label label__False_1229_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1229 = &label__False_1229_impl;
            USE(label__False_1229);
            int31_t t3682 = 1;
            TNode<Smi> t3683 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3682)));
            TNode<Smi> t3684 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_499).value()), implicit_cast<TNode<Smi>>(t3683)));
            USE(implicit_cast<TNode<Smi>>(t3684));
            TNode<BoolT> t3685 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>(t3684)));
            USE(implicit_cast<TNode<BoolT>>(t3685));
            TNode<BoolT> t3686 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3685)));
            USE(implicit_cast<TNode<BoolT>>(t3686));
            GotoIf(implicit_cast<TNode<BoolT>>(t3686), label__True_1227);
            TNode<BoolT> t3687 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>((*n_499).value())));
            USE(implicit_cast<TNode<BoolT>>(t3687));
            TNode<BoolT> t3688 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3687)));
            USE(implicit_cast<TNode<BoolT>>(t3688));
Branch(implicit_cast<TNode<BoolT>>(t3688), label__True_1227, label__False_1228);
            if (label__True_1227->is_used())
            {
              BIND(label__True_1227);
              // ../../third_party/v8/builtins/array-sort.tq:1588:53
              {
                // ../../third_party/v8/builtins/array-sort.tq:1589:9
                {
                  Label label__True_1230_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1230 = &label__True_1230_impl;
                  USE(label__True_1230);
                  Label label__False_1231_impl(this, {n_499}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1231 = &label__False_1231_impl;
                  USE(label__False_1231);
                  int31_t t3689 = 1;
                  TNode<Smi> t3690 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3689)));
                  TNode<Smi> t3691 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_499).value()), implicit_cast<TNode<Smi>>(t3690)));
                  USE(implicit_cast<TNode<Smi>>(t3691));
                  TNode<Smi> t3692 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>(t3691)));
                  USE(implicit_cast<TNode<Smi>>(t3692));
                  int31_t t3693 = 1;
                  TNode<Smi> t3694 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3693)));
                  TNode<Smi> t3695 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_499).value()), implicit_cast<TNode<Smi>>(t3694)));
                  USE(implicit_cast<TNode<Smi>>(t3695));
                  TNode<Smi> t3696 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>(t3695)));
                  USE(implicit_cast<TNode<Smi>>(t3696));
                  TNode<BoolT> t3697 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3692), implicit_cast<TNode<Smi>>(t3696)));
                  USE(implicit_cast<TNode<BoolT>>(t3697));
                  Branch(implicit_cast<TNode<BoolT>>(t3697), label__True_1230, label__False_1231);
                  if (label__True_1230->is_used())
                  {
                    BIND(label__True_1230);
                    // ../../third_party/v8/builtins/array-sort.tq:1590:54
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1591:11
                      TNode<Smi> t3698 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3699 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_499).value()), implicit_cast<TNode<Smi>>(t3698)));
                      *n_499 = implicit_cast<TNode<Smi>>(t3699);
                    }
                    Goto(label__False_1231);
                  }
                  BIND(label__False_1231);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1594:9
                CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_499).value()), label_Bailout_1224);
              }
              Goto(label_if_done_label_1126_1885);
            }
            if (label__False_1228->is_used())
            {
              BIND(label__False_1228);
              // ../../third_party/v8/builtins/array-sort.tq:1595:14
              {
                Label label__True_1232_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1232 = &label__True_1232_impl;
                USE(label__True_1232);
                Label label__False_1233_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1233 = &label__False_1233_impl;
                USE(label__False_1233);
                Label label_if_done_label_1127_1886_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_if_done_label_1127_1886 = &label_if_done_label_1127_1886_impl;
                USE(label_if_done_label_1127_1886);
                TNode<Smi> t3700 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>((*n_499).value())));
                USE(implicit_cast<TNode<Smi>>(t3700));
                int31_t t3701 = 1;
                TNode<Smi> t3702 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3701)));
                TNode<Smi> t3703 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_499).value()), implicit_cast<TNode<Smi>>(t3702)));
                USE(implicit_cast<TNode<Smi>>(t3703));
                TNode<Smi> t3704 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_1124)), implicit_cast<TNode<Smi>>(t3703)));
                USE(implicit_cast<TNode<Smi>>(t3704));
                TNode<BoolT> t3705 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3700), implicit_cast<TNode<Smi>>(t3704)));
                USE(implicit_cast<TNode<BoolT>>(t3705));
                Branch(implicit_cast<TNode<BoolT>>(t3705), label__True_1232, label__False_1233);
                if (label__True_1232->is_used())
                {
                  BIND(label__True_1232);
                  // ../../third_party/v8/builtins/array-sort.tq:1597:52
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1598:9
                    CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_499).value()), label_Bailout_1224);
                  }
                  Goto(label_if_done_label_1127_1886);
                }
                if (label__False_1233->is_used())
                {
                  BIND(label__False_1233);
                  // ../../third_party/v8/builtins/array-sort.tq:1599:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1600:9
                    Goto(label__False_1226);
                  }
                }
                BIND(label_if_done_label_1127_1886);
              }
              Goto(label_if_done_label_1126_1885);
            }
            BIND(label_if_done_label_1126_1885);
          }
        }
        Goto(label_header_1125_1884);
      }
      BIND(label__False_1226);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeForceCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_1234) {
  Label label_macro_end_1887_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1887 = &label_macro_end_1887_impl;
  USE(label_macro_end_1887);
  // ../../third_party/v8/builtins/array-sort.tq:1608:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1609:5
    TNode<Object> t3706 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3707 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t3706)));
    USE(implicit_cast<TNode<FixedArray>>(t3707));
    TVARIABLE(FixedArray, pendingRuns_500_impl);
    auto pendingRuns_500 = &pendingRuns_500_impl;
    USE(pendingRuns_500);
    *pendingRuns_500 = implicit_cast<TNode<FixedArray>>(t3707);
    // ../../third_party/v8/builtins/array-sort.tq:1613:5
    {
      Label label__True_1235_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1235 = &label__True_1235_impl;
      USE(label__True_1235);
      Label label__False_1236_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1236 = &label__False_1236_impl;
      USE(label__False_1236);
      Label label_header_1128_1888_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1128_1888 = &label_header_1128_1888_impl;
      USE(label_header_1128_1888);
      Goto(label_header_1128_1888);
      BIND(label_header_1128_1888);
      TNode<Smi> t3708 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3708));
      int31_t t3709 = 1;
      TNode<Smi> t3710 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3709)));
      TNode<BoolT> t3711 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3708), implicit_cast<TNode<Smi>>(t3710)));
      USE(implicit_cast<TNode<BoolT>>(t3711));
      Branch(implicit_cast<TNode<BoolT>>(t3711), label__True_1235, label__False_1236);
      if (label__True_1235->is_used())
      {
        BIND(label__True_1235);
        // ../../third_party/v8/builtins/array-sort.tq:1613:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1614:7
          TNode<Smi> t3712 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3712));
          int31_t t3713 = 2;
          TNode<Smi> t3714 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3713)));
          TNode<Smi> t3715 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3712), implicit_cast<TNode<Smi>>(t3714)));
          USE(implicit_cast<TNode<Smi>>(t3715));
          TVARIABLE(Smi, n_501_impl);
          auto n_501 = &n_501_impl;
          USE(n_501);
          *n_501 = implicit_cast<TNode<Smi>>(t3715);
          // ../../third_party/v8/builtins/array-sort.tq:1616:7
          {
            Label label__True_1237_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1237 = &label__True_1237_impl;
            USE(label__True_1237);
            Label label__False_1238_impl(this, {n_501}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1238 = &label__False_1238_impl;
            USE(label__False_1238);
            Label label__True_1239_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1239 = &label__True_1239_impl;
            USE(label__True_1239);
            int31_t t3716 = 0;
            TNode<Smi> t3717 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3716)));
            TNode<BoolT> t3718 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*n_501).value()), implicit_cast<TNode<Smi>>(t3717)));
            USE(implicit_cast<TNode<BoolT>>(t3718));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3718), label__False_1238);
            int31_t t3719 = 1;
            TNode<Smi> t3720 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3719)));
            TNode<Smi> t3721 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_501).value()), implicit_cast<TNode<Smi>>(t3720)));
            USE(implicit_cast<TNode<Smi>>(t3721));
            TNode<Smi> t3722 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_500).value()), implicit_cast<TNode<Smi>>(t3721)));
            USE(implicit_cast<TNode<Smi>>(t3722));
            int31_t t3723 = 1;
            TNode<Smi> t3724 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3723)));
            TNode<Smi> t3725 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_501).value()), implicit_cast<TNode<Smi>>(t3724)));
            USE(implicit_cast<TNode<Smi>>(t3725));
            TNode<Smi> t3726 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pendingRuns_500).value()), implicit_cast<TNode<Smi>>(t3725)));
            USE(implicit_cast<TNode<Smi>>(t3726));
            TNode<BoolT> t3727 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3722), implicit_cast<TNode<Smi>>(t3726)));
            USE(implicit_cast<TNode<BoolT>>(t3727));
Branch(implicit_cast<TNode<BoolT>>(t3727), label__True_1237, label__False_1238);
            if (label__True_1237->is_used())
            {
              BIND(label__True_1237);
              // ../../third_party/v8/builtins/array-sort.tq:1618:56
              {
                // ../../third_party/v8/builtins/array-sort.tq:1619:9
                TNode<Smi> t3728 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3729 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_501).value()), implicit_cast<TNode<Smi>>(t3728)));
                *n_501 = implicit_cast<TNode<Smi>>(t3729);
              }
              Goto(label__False_1238);
            }
            BIND(label__False_1238);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1621:7
          CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_501).value()), label_Bailout_1234);
        }
        Goto(label_header_1128_1888);
      }
      BIND(label__False_1236);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortState(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1889_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1889 = &label_macro_end_1889_impl;
  USE(label_macro_end_1889);
  // ../../third_party/v8/builtins/array-sort.tq:1625:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:1626:5
    TNode<Smi> t3730 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(kMinGallopWins())));
    USE(implicit_cast<TNode<Smi>>(t3730));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>(t3730));
    // ../../third_party/v8/builtins/array-sort.tq:1627:5
    int31_t t3731 = 0;
    TNode<Smi> t3732 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t3731)));
    USE(implicit_cast<TNode<Smi>>(t3732));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>(t3732));
    // ../../third_party/v8/builtins/array-sort.tq:1629:5
    int31_t t3733 = 0;
    TNode<Smi> t3734 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3733)));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t3734));
    // ../../third_party/v8/builtins/array-sort.tq:1630:5
    TNode<IntPtrT> t3735 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<int31_t>(kMaxMergePending())));
    USE(implicit_cast<TNode<IntPtrT>>(t3735));
    TNode<FixedArray> t3736 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t3735)));
    USE(implicit_cast<TNode<FixedArray>>(t3736));
    TVARIABLE(FixedArray, pendingRuns_502_impl);
    auto pendingRuns_502 = &pendingRuns_502_impl;
    USE(pendingRuns_502);
    *pendingRuns_502 = implicit_cast<TNode<FixedArray>>(t3736);
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx()), implicit_cast<TNode<Object>>((*pendingRuns_502).value()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATGenericElementsAccessor(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1890_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1890 = &label_macro_end_1890_impl;
  USE(label_macro_end_1890);
  // ../../third_party/v8/builtins/array-sort.tq:1642:79
  {
    // ../../third_party/v8/builtins/array-sort.tq:1643:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kGenericElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1644:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1645:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1646:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::ArrayTimSortImpl(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_length, Label* label_Bailout_1240) {
  Label label_macro_end_1891_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1891 = &label_macro_end_1891_impl;
  USE(label_macro_end_1891);
  // ../../third_party/v8/builtins/array-sort.tq:1651:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1652:5
    InitializeSortState(implicit_cast<TNode<FixedArray>>(p_sortState));
    // ../../third_party/v8/builtins/array-sort.tq:1654:5
    {
      Label label__True_1241_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1241 = &label__True_1241_impl;
      USE(label__True_1241);
      Label label__False_1242_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1242 = &label__False_1242_impl;
      USE(label__False_1242);
      int31_t t3737 = 2;
      TNode<Smi> t3738 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3737)));
      TNode<BoolT> t3739 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3738)));
      USE(implicit_cast<TNode<BoolT>>(t3739));
      Branch(implicit_cast<TNode<BoolT>>(t3739), label__True_1241, label__False_1242);
      if (label__True_1241->is_used())
      {
        BIND(label__True_1241);
        // ../../third_party/v8/builtins/array-sort.tq:1654:21
        Goto(label_macro_end_1891);
      }
      BIND(label__False_1242);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1655:5
    TVARIABLE(Smi, remaining_503_impl);
    auto remaining_503 = &remaining_503_impl;
    USE(remaining_503);
    *remaining_503 = implicit_cast<TNode<Smi>>(p_length);
    // ../../third_party/v8/builtins/array-sort.tq:1659:5
    int31_t t3740 = 0;
    TVARIABLE(Smi, low_504_impl);
    auto low_504 = &low_504_impl;
    USE(low_504);
    TNode<Smi> t3741 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3740)));
    *low_504 = implicit_cast<TNode<Smi>>(t3741);
    // ../../third_party/v8/builtins/array-sort.tq:1660:5
    TNode<Smi> t3742 = UncheckedCast<Smi>(ComputeMinRunLength(implicit_cast<TNode<Smi>>((*remaining_503).value())));
    USE(implicit_cast<TNode<Smi>>(t3742));
    TNode<Smi> minRunLength_1129_impl;
    auto minRunLength_1129 = &minRunLength_1129_impl;
    USE(minRunLength_1129);
    *minRunLength_1129 = implicit_cast<TNode<Smi>>(t3742);
    // ../../third_party/v8/builtins/array-sort.tq:1661:5
    {
      Label label__True_1243_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1243 = &label__True_1243_impl;
      USE(label__True_1243);
      Label label__False_1244_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1244 = &label__False_1244_impl;
      USE(label__False_1244);
      Label label_header_1130_1892_impl(this, {low_504, remaining_503}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1130_1892 = &label_header_1130_1892_impl;
      USE(label_header_1130_1892);
      Goto(label_header_1130_1892);
      BIND(label_header_1130_1892);
      int31_t t3743 = 0;
      TNode<Smi> t3744 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3743)));
      TNode<BoolT> t3745 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*remaining_503).value()), implicit_cast<TNode<Smi>>(t3744)));
      USE(implicit_cast<TNode<BoolT>>(t3745));
      Branch(implicit_cast<TNode<BoolT>>(t3745), label__True_1243, label__False_1244);
      if (label__True_1243->is_used())
      {
        BIND(label__True_1243);
        // ../../third_party/v8/builtins/array-sort.tq:1661:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:1662:7
          TNode<Smi> t3746 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>((*remaining_503).value())));
          USE(implicit_cast<TNode<Smi>>(t3746));
          TNode<Smi> t3747 = UncheckedCast<Smi>(CountAndMakeRun(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>(t3746), label_Bailout_1240));
          USE(implicit_cast<TNode<Smi>>(t3747));
          TVARIABLE(Smi, currentRunLength_505_impl);
          auto currentRunLength_505 = &currentRunLength_505_impl;
          USE(currentRunLength_505);
          *currentRunLength_505 = implicit_cast<TNode<Smi>>(t3747);
          // ../../third_party/v8/builtins/array-sort.tq:1667:7
          {
            Label label__True_1245_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1245 = &label__True_1245_impl;
            USE(label__True_1245);
            Label label__False_1246_impl(this, {currentRunLength_505}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1246 = &label__False_1246_impl;
            USE(label__False_1246);
            TNode<BoolT> t3748 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*currentRunLength_505).value()), implicit_cast<TNode<Smi>>((*minRunLength_1129))));
            USE(implicit_cast<TNode<BoolT>>(t3748));
            Branch(implicit_cast<TNode<BoolT>>(t3748), label__True_1245, label__False_1246);
            if (label__True_1245->is_used())
            {
              BIND(label__True_1245);
              // ../../third_party/v8/builtins/array-sort.tq:1667:44
              {
                // ../../third_party/v8/builtins/array-sort.tq:1668:9
                TNode<Smi> t3749 = UncheckedCast<Smi>(SmiMin(implicit_cast<TNode<Smi>>((*minRunLength_1129)), implicit_cast<TNode<Smi>>((*remaining_503).value())));
                USE(implicit_cast<TNode<Smi>>(t3749));
                TNode<Smi> forcedRunLength_1131_impl;
                auto forcedRunLength_1131 = &forcedRunLength_1131_impl;
                USE(forcedRunLength_1131);
                *forcedRunLength_1131 = implicit_cast<TNode<Smi>>(t3749);
                // ../../third_party/v8/builtins/array-sort.tq:1669:9
                TNode<Smi> t3750 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>((*currentRunLength_505).value())));
                USE(implicit_cast<TNode<Smi>>(t3750));
                TNode<Smi> t3751 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>((*forcedRunLength_1131))));
                USE(implicit_cast<TNode<Smi>>(t3751));
                TNode<Smi> t3752 = UncheckedCast<Smi>(CallBuiltin(Builtins::kBinaryInsertionSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>(t3750), implicit_cast<TNode<Smi>>(t3751)));
                USE(implicit_cast<TNode<Smi>>(t3752));
                // ../../third_party/v8/builtins/array-sort.tq:1672:9
                EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_1240);
                // ../../third_party/v8/builtins/array-sort.tq:1673:9
                *currentRunLength_505 = implicit_cast<TNode<Smi>>((*forcedRunLength_1131));
              }
              Goto(label__False_1246);
            }
            BIND(label__False_1246);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1677:7
          PushRun(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>((*currentRunLength_505).value()));
          // ../../third_party/v8/builtins/array-sort.tq:1679:7
          MergeCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_1240);
          // ../../third_party/v8/builtins/array-sort.tq:1682:7
          TNode<Smi> t3753 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_504).value()), implicit_cast<TNode<Smi>>((*currentRunLength_505).value())));
          USE(implicit_cast<TNode<Smi>>(t3753));
          *low_504 = implicit_cast<TNode<Smi>>(t3753);
          // ../../third_party/v8/builtins/array-sort.tq:1683:7
          TNode<Smi> t3754 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*remaining_503).value()), implicit_cast<TNode<Smi>>((*currentRunLength_505).value())));
          USE(implicit_cast<TNode<Smi>>(t3754));
          *remaining_503 = implicit_cast<TNode<Smi>>(t3754);
        }
        Goto(label_header_1130_1892);
      }
      BIND(label__False_1244);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1686:5
    MergeForceCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_1240);
    // ../../third_party/v8/builtins/array-sort.tq:1687:5
    Label label__True_1247_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1247 = &label__True_1247_impl;
    USE(label__True_1247);
    Label label__False_1248_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1248 = &label__False_1248_impl;
    USE(label__False_1248);
    TNode<Smi> t3755 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t3755));
    int31_t t3756 = 1;
    TNode<Smi> t3757 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3756)));
    TNode<BoolT> t3758 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3755), implicit_cast<TNode<Smi>>(t3757)));
    USE(implicit_cast<TNode<BoolT>>(t3758));
    Branch(implicit_cast<TNode<BoolT>>(t3758), label__True_1247, label__False_1248);
    BIND(label__False_1248);
    Print("assert 'GetPendingRunsSize(sortState) == 1' failed at ../../third_party/v8/builtins/array-sort.tq:1687:5");
    Unreachable();
    BIND(label__True_1247);
    // ../../third_party/v8/builtins/array-sort.tq:1688:5
    Label label__True_1249_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1249 = &label__True_1249_impl;
    USE(label__True_1249);
    Label label__False_1250_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1250 = &label__False_1250_impl;
    USE(label__False_1250);
    TNode<Object> t3759 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3760 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t3759)));
    USE(implicit_cast<TNode<FixedArray>>(t3760));
    int31_t t3761 = 0;
    TNode<Smi> t3762 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3761)));
    TNode<Smi> t3763 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(t3760), implicit_cast<TNode<Smi>>(t3762)));
    USE(implicit_cast<TNode<Smi>>(t3763));
    TNode<BoolT> t3764 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3763), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<BoolT>>(t3764));
    Branch(implicit_cast<TNode<BoolT>>(t3764), label__True_1249, label__False_1250);
    BIND(label__False_1250);
    Print("assert 'GetPendingRunLength( UnsafeCast<FixedArray>(sortState[kPendingRunsIdx]), 0) == length' failed at ../../third_party/v8/builtins/array-sort.tq:1688:5");
    Unreachable();
    BIND(label__True_1249);
  }
  Goto(label_macro_end_1891);
  BIND(label_macro_end_1891);
}

TF_BUILTIN(ArrayTimSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:1694:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:1695:5
    {
      Label label_try_done_1132_1893_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1132_1893 = &label_try_done_1132_1893_impl;
      USE(label_try_done_1132_1893);
      Label label_Slow_1251_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Slow_1251 = &label_Slow_1251_impl;
      USE(label_Slow_1251);
      Label label_try_begin_1133_1894_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1133_1894 = &label_try_begin_1133_1894_impl;
      USE(label_try_begin_1133_1894);
      Goto(label_try_begin_1133_1894);
      if (label_try_begin_1133_1894->is_used())
      {
        BIND(label_try_begin_1133_1894);
        // ../../third_party/v8/builtins/array-sort.tq:1695:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1696:7
          ArrayTimSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length), label_Slow_1251);
        }
        Goto(label_try_done_1132_1893);
      }
      if (label_Slow_1251->is_used())
      {
        BIND(label_Slow_1251);
        // ../../third_party/v8/builtins/array-sort.tq:1699:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1700:7
          {
            Label label__True_1252_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1252 = &label__True_1252_impl;
            USE(label__True_1252);
            Label label__False_1253_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1253 = &label__False_1253_impl;
            USE(label__False_1253);
            TNode<Object> t3765 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
            TNode<BoolT> t3766 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t3765), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
            USE(implicit_cast<TNode<BoolT>>(t3766));
            Branch(implicit_cast<TNode<BoolT>>(t3766), label__True_1252, label__False_1253);
            if (label__True_1252->is_used())
            {
              BIND(label__True_1252);
              // ../../third_party/v8/builtins/array-sort.tq:1700:66
              {
                // ../../third_party/v8/builtins/array-sort.tq:1702:9
                Print("halting because of 'unreachable' at ../../third_party/v8/builtins/array-sort.tq:1702:9");
                Unreachable();
              }
            }
            BIND(label__False_1253);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1704:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
          // ../../third_party/v8/builtins/array-sort.tq:1706:7
          InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>(p_sortState));
          // ../../third_party/v8/builtins/array-sort.tq:1707:7
          TNode<Object> t3767 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<Object>>(t3767));
        }
        Goto(label_try_done_1132_1893);
      }
      BIND(label_try_done_1132_1893);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1709:5
    Return(implicit_cast<TNode<Object>>(kSuccess()));
  }
}

TF_BUILTIN(ArrayPrototypeSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../third_party/v8/builtins/array-sort.tq:1728:65
  {
    // ../../third_party/v8/builtins/array-sort.tq:1731:5
    int31_t t3768 = 0;
    TNode<IntPtrT> t3769 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t3768)));
    TNode<Object> t3770 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t3769)));
    TNode<Object> comparefnObj_1134_impl;
    auto comparefnObj_1134 = &comparefnObj_1134_impl;
    USE(comparefnObj_1134);
    *comparefnObj_1134 = implicit_cast<TNode<Object>>(t3770);
    // ../../third_party/v8/builtins/array-sort.tq:1732:5
    {
      Label label__True_1254_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1254 = &label__True_1254_impl;
      USE(label__True_1254);
      Label label__False_1255_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1255 = &label__False_1255_impl;
      USE(label__False_1255);
      Label label__True_1256_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1256 = &label__True_1256_impl;
      USE(label__True_1256);
      TNode<BoolT> t3771 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1134)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3771));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t3771), label__False_1255);
      TNode<BoolT> t3772 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefnObj_1134))));
      USE(implicit_cast<TNode<BoolT>>(t3772));
      TNode<BoolT> t3773 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3772)));
      USE(implicit_cast<TNode<BoolT>>(t3773));
Branch(implicit_cast<TNode<BoolT>>(t3773), label__True_1254, label__False_1255);
      if (label__True_1254->is_used())
      {
        BIND(label__True_1254);
        // ../../third_party/v8/builtins/array-sort.tq:1732:71
        {
          // ../../third_party/v8/builtins/array-sort.tq:1733:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefnObj_1134)));
        }
      }
      BIND(label__False_1255);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1737:5
    TNode<JSReceiver> t3774 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t3774));
    TNode<JSReceiver> obj_1135_impl;
    auto obj_1135 = &obj_1135_impl;
    USE(obj_1135);
    *obj_1135 = implicit_cast<TNode<JSReceiver>>(t3774);
    // ../../third_party/v8/builtins/array-sort.tq:1738:5
    TNode<Map> t3775 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_1135))));
    TVARIABLE(Map, map_506_impl);
    auto map_506 = &map_506_impl;
    USE(map_506);
    *map_506 = implicit_cast<TNode<Map>>(t3775);
    // ../../third_party/v8/builtins/array-sort.tq:1740:5
    TNode<FixedArray> t3776 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(kSortStateSize())));
    USE(implicit_cast<TNode<FixedArray>>(t3776));
    TNode<FixedArray> sortState_1136_impl;
    auto sortState_1136 = &sortState_1136_impl;
    USE(sortState_1136);
    *sortState_1136 = implicit_cast<TNode<FixedArray>>(t3776);
    // ../../third_party/v8/builtins/array-sort.tq:1742:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kReceiverIdx()), implicit_cast<TNode<Object>>((*obj_1135)));
    // ../../third_party/v8/builtins/array-sort.tq:1743:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kUserCmpFnIdx()), implicit_cast<TNode<Object>>((*comparefnObj_1134)));
    // ../../third_party/v8/builtins/array-sort.tq:1744:5
    auto t3777 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareUserFn).code()));
    };
    auto t3778 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).code()));
    };
    TVARIABLE(Code, t3779_1137_impl);
    auto t3779_1137 = &t3779_1137_impl;
    USE(t3779_1137);
    {
      Label label__True_1257_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1257 = &label__True_1257_impl;
      USE(label__True_1257);
      Label label__False_1258_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1258 = &label__False_1258_impl;
      USE(label__False_1258);
      Label label__done_1138_1895_impl(this, {t3779_1137}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_1138_1895 = &label__done_1138_1895_impl;
      USE(label__done_1138_1895);
      TNode<BoolT> t3780 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1134)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3780));
      Branch(implicit_cast<TNode<BoolT>>(t3780), label__True_1257, label__False_1258);
      BIND(label__True_1257);
            *t3779_1137 = implicit_cast<TNode<Code>>(t3777());
      Goto(label__done_1138_1895);
      BIND(label__False_1258);
            *t3779_1137 = implicit_cast<TNode<Code>>(t3778());
      Goto(label__done_1138_1895);
      BIND(label__done_1138_1895);
    }
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kSortComparePtrIdx()), implicit_cast<TNode<Object>>((*t3779_1137).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1746:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kInitialReceiverMapIdx()), implicit_cast<TNode<Object>>((*map_506).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1747:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
    // ../../third_party/v8/builtins/array-sort.tq:1749:5
    {
      Label label_try_done_1139_1896_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1139_1896 = &label_try_done_1139_1896_impl;
      USE(label_try_done_1139_1896);
      Label label_Slow_1259_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Slow_1259 = &label_Slow_1259_impl;
      USE(label_Slow_1259);
      Label label_try_begin_1140_1897_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1140_1897 = &label_try_begin_1140_1897_impl;
      USE(label_try_begin_1140_1897);
      Goto(label_try_begin_1140_1897);
      if (label_try_begin_1140_1897->is_used())
      {
        BIND(label_try_begin_1140_1897);
        // ../../third_party/v8/builtins/array-sort.tq:1749:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1750:7
          TNode<JSArray> t3781 = UncheckedCast<JSArray>(Cast9ATJSArray(implicit_cast<TNode<HeapObject>>((*obj_1135)), label_Slow_1259));
          USE(implicit_cast<TNode<JSArray>>(t3781));
          TNode<JSArray> a_1141_impl;
          auto a_1141 = &a_1141_impl;
          USE(a_1141);
          *a_1141 = implicit_cast<TNode<JSArray>>(t3781);
          // ../../third_party/v8/builtins/array-sort.tq:1751:7
          TNode<Int32T> t3782 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_506).value())));
          TNode<Int32T> elementsKind_1142_impl;
          auto elementsKind_1142 = &elementsKind_1142_impl;
          USE(elementsKind_1142);
          *elementsKind_1142 = implicit_cast<TNode<Int32T>>(t3782);
          // ../../third_party/v8/builtins/array-sort.tq:1752:7
          {
            Label label__True_1260_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1260 = &label__True_1260_impl;
            USE(label__True_1260);
            Label label__False_1261_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1261 = &label__False_1261_impl;
            USE(label__False_1261);
            TNode<BoolT> t3783 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1142))));
            USE(implicit_cast<TNode<BoolT>>(t3783));
            TNode<BoolT> t3784 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3783)));
            USE(implicit_cast<TNode<BoolT>>(t3784));
            Branch(implicit_cast<TNode<BoolT>>(t3784), label__True_1260, label__False_1261);
            if (label__True_1260->is_used())
            {
              BIND(label__True_1260);
              // ../../third_party/v8/builtins/array-sort.tq:1752:46
              Goto(label_Slow_1259);
            }
            BIND(label__False_1261);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1755:7
          TNode<Smi> t3785 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_1141))));
          TNode<Smi> len_1143_impl;
          auto len_1143 = &len_1143_impl;
          USE(len_1143);
          *len_1143 = implicit_cast<TNode<Smi>>(t3785);
          // ../../third_party/v8/builtins/array-sort.tq:1756:7
          {
            Label label__True_1262_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1262 = &label__True_1262_impl;
            USE(label__True_1262);
            Label label__False_1263_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1263 = &label__False_1263_impl;
            USE(label__False_1263);
            int31_t t3786 = 2;
            TNode<Smi> t3787 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3786)));
            TNode<BoolT> t3788 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*len_1143)), implicit_cast<TNode<Smi>>(t3787)));
            USE(implicit_cast<TNode<BoolT>>(t3788));
            Branch(implicit_cast<TNode<BoolT>>(t3788), label__True_1262, label__False_1263);
            if (label__True_1262->is_used())
            {
              BIND(label__True_1262);
              // ../../third_party/v8/builtins/array-sort.tq:1756:20
              arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
            }
            BIND(label__False_1263);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1760:7
          TNode<Smi> t3789 = UncheckedCast<Smi>(CallRuntime(Runtime::kPrepareElementsForSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1135)), implicit_cast<TNode<Number>>((*len_1143))));
          USE(implicit_cast<TNode<Smi>>(t3789));
          TNode<Smi> nofNonUndefined_1144_impl;
          auto nofNonUndefined_1144 = &nofNonUndefined_1144_impl;
          USE(nofNonUndefined_1144);
          *nofNonUndefined_1144 = implicit_cast<TNode<Smi>>(t3789);
          // ../../third_party/v8/builtins/array-sort.tq:1761:7
          Label label__True_1264_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1264 = &label__True_1264_impl;
          USE(label__True_1264);
          Label label__False_1265_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1265 = &label__False_1265_impl;
          USE(label__False_1265);
          TNode<Map> t3790 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_1141))));
          TNode<BoolT> t3791 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t3790), implicit_cast<TNode<Object>>((*map_506).value())));
          USE(implicit_cast<TNode<BoolT>>(t3791));
          Branch(implicit_cast<TNode<BoolT>>(t3791), label__True_1264, label__False_1265);
          BIND(label__False_1265);
          Print("assert 'a.map == map' failed at ../../third_party/v8/builtins/array-sort.tq:1761:7");
          Unreachable();
          BIND(label__True_1264);
          // ../../third_party/v8/builtins/array-sort.tq:1763:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kInitialReceiverLengthIdx()), implicit_cast<TNode<Object>>((*len_1143)));
          // ../../third_party/v8/builtins/array-sort.tq:1765:7
          {
            Label label__True_1266_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1266 = &label__True_1266_impl;
            USE(label__True_1266);
            Label label__False_1267_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1267 = &label__False_1267_impl;
            USE(label__False_1267);
            Label label_if_done_label_1145_1898_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1145_1898 = &label_if_done_label_1145_1898_impl;
            USE(label_if_done_label_1145_1898);
            TNode<BoolT> t3792 = UncheckedCast<BoolT>(IsDoubleElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1142))));
            USE(implicit_cast<TNode<BoolT>>(t3792));
            Branch(implicit_cast<TNode<BoolT>>(t3792), label__True_1266, label__False_1267);
            if (label__True_1266->is_used())
            {
              BIND(label__True_1266);
              // ../../third_party/v8/builtins/array-sort.tq:1765:47
              {
                // ../../third_party/v8/builtins/array-sort.tq:1766:9
                InitializeSortStateAccessor20ATFastDoubleElements(implicit_cast<TNode<FixedArray>>((*sortState_1136)));
              }
              Goto(label_if_done_label_1145_1898);
            }
            if (label__False_1267->is_used())
            {
              BIND(label__False_1267);
              // ../../third_party/v8/builtins/array-sort.tq:1767:14
              {
                Label label__True_1268_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1268 = &label__True_1268_impl;
                USE(label__True_1268);
                Label label__False_1269_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1269 = &label__False_1269_impl;
                USE(label__False_1269);
                Label label_if_done_label_1146_1899_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_if_done_label_1146_1899 = &label_if_done_label_1146_1899_impl;
                USE(label_if_done_label_1146_1899);
                TNode<Int32T> t3793 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
                TNode<BoolT> t3794 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_1142)), implicit_cast<TNode<Int32T>>(t3793)));
                USE(implicit_cast<TNode<BoolT>>(t3794));
                Branch(implicit_cast<TNode<BoolT>>(t3794), label__True_1268, label__False_1269);
                if (label__True_1268->is_used())
                {
                  BIND(label__True_1268);
                  // ../../third_party/v8/builtins/array-sort.tq:1767:55
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1768:9
                    InitializeSortStateAccessor23ATFastPackedSmiElements(implicit_cast<TNode<FixedArray>>((*sortState_1136)));
                  }
                  Goto(label_if_done_label_1146_1899);
                }
                if (label__False_1269->is_used())
                {
                  BIND(label__False_1269);
                  // ../../third_party/v8/builtins/array-sort.tq:1769:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1770:9
                    InitializeSortStateAccessor25ATFastSmiOrObjectElements(implicit_cast<TNode<FixedArray>>((*sortState_1136)));
                  }
                  Goto(label_if_done_label_1146_1899);
                }
                BIND(label_if_done_label_1146_1899);
              }
              Goto(label_if_done_label_1145_1898);
            }
            BIND(label_if_done_label_1145_1898);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1772:7
          TNode<Object> t3795 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1144))));
          USE(implicit_cast<TNode<Object>>(t3795));
        }
        Goto(label_try_done_1139_1896);
      }
      if (label_Slow_1259->is_used())
      {
        BIND(label_Slow_1259);
        // ../../third_party/v8/builtins/array-sort.tq:1774:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1776:7
          TNode<Number> t3796 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1135))));
          USE(implicit_cast<TNode<Number>>(t3796));
          TNode<Number> len_1147_impl;
          auto len_1147 = &len_1147_impl;
          USE(len_1147);
          *len_1147 = implicit_cast<TNode<Number>>(t3796);
          // ../../third_party/v8/builtins/array-sort.tq:1778:7
          {
            Label label__True_1270_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1270 = &label__True_1270_impl;
            USE(label__True_1270);
            Label label__False_1271_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1271 = &label__False_1271_impl;
            USE(label__False_1271);
            int31_t t3797 = 2;
            TNode<Number> t3798 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3797)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*len_1147)), implicit_cast<TNode<Number>>(t3798), label__True_1270, label__False_1271);
            if (label__True_1270->is_used())
            {
              BIND(label__True_1270);
              // ../../third_party/v8/builtins/array-sort.tq:1778:20
              arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
            }
            BIND(label__False_1271);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1779:7
          TNode<Smi> t3799 = UncheckedCast<Smi>(CallRuntime(Runtime::kPrepareElementsForSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1135)), implicit_cast<TNode<Number>>((*len_1147))));
          USE(implicit_cast<TNode<Smi>>(t3799));
          TNode<Smi> nofNonUndefined_1148_impl;
          auto nofNonUndefined_1148 = &nofNonUndefined_1148_impl;
          USE(nofNonUndefined_1148);
          *nofNonUndefined_1148 = implicit_cast<TNode<Smi>>(t3799);
          // ../../third_party/v8/builtins/array-sort.tq:1781:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<int31_t>(kInitialReceiverLengthIdx()), implicit_cast<TNode<Object>>((*len_1147)));
          // ../../third_party/v8/builtins/array-sort.tq:1785:7
          TNode<Map> t3800 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_1135))));
          *map_506 = implicit_cast<TNode<Map>>(t3800);
          // ../../third_party/v8/builtins/array-sort.tq:1787:7
          {
            Label label__True_1272_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1272 = &label__True_1272_impl;
            USE(label__True_1272);
            Label label__False_1273_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1273 = &label__False_1273_impl;
            USE(label__False_1273);
            Label label_if_done_label_1149_1900_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_1149_1900 = &label_if_done_label_1149_1900_impl;
            USE(label_if_done_label_1149_1900);
            Label label__True_1274_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1274 = &label__True_1274_impl;
            USE(label__True_1274);
            Label label__True_1275_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1275 = &label__True_1275_impl;
            USE(label__True_1275);
            TNode<Int32T> t3801 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_506).value())));
            TNode<Int32T> t3802 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(DICTIONARY_ELEMENTS)));
            TNode<BoolT> t3803 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(t3801), implicit_cast<TNode<Int32T>>(t3802)));
            USE(implicit_cast<TNode<BoolT>>(t3803));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3803), label__False_1273);
            TNode<BoolT> t3804 = UncheckedCast<BoolT>(IsExtensibleMap(implicit_cast<TNode<Map>>((*map_506).value())));
            USE(implicit_cast<TNode<BoolT>>(t3804));
Branch(implicit_cast<TNode<BoolT>>(t3804), label__True_1274, label__False_1273);
            BIND(label__True_1274);
            TNode<Int32T> t3805 = UncheckedCast<Int32T>(LoadMapInstanceType(implicit_cast<TNode<Map>>((*map_506).value())));
            TNode<BoolT> t3806 = UncheckedCast<BoolT>(IsCustomElementsReceiverInstanceType(implicit_cast<TNode<Int32T>>(t3805)));
            USE(implicit_cast<TNode<BoolT>>(t3806));
            TNode<BoolT> t3807 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3806)));
            USE(implicit_cast<TNode<BoolT>>(t3807));
Branch(implicit_cast<TNode<BoolT>>(t3807), label__True_1272, label__False_1273);
            if (label__True_1272->is_used())
            {
              BIND(label__True_1272);
              // ../../third_party/v8/builtins/array-sort.tq:1788:69
              {
                // ../../third_party/v8/builtins/array-sort.tq:1789:9
                InitializeSortStateAccessor20ATDictionaryElements(implicit_cast<TNode<FixedArray>>((*sortState_1136)));
              }
              Goto(label_if_done_label_1149_1900);
            }
            if (label__False_1273->is_used())
            {
              BIND(label__False_1273);
              // ../../third_party/v8/builtins/array-sort.tq:1790:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1791:9
                InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>((*sortState_1136)));
              }
              Goto(label_if_done_label_1149_1900);
            }
            BIND(label_if_done_label_1149_1900);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1793:7
          TNode<Object> t3808 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sortState_1136)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1148))));
          USE(implicit_cast<TNode<Object>>(t3808));
        }
        Goto(label_try_done_1139_1896);
      }
      BIND(label_try_done_1139_1896);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1796:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_1286, TVariable<Smi>* Bailout0_518) {
  Label label_macro_end_1906_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1906 = &label_macro_end_1906_impl;
  USE(label_macro_end_1906);
  // ../../src/builtins/array-foreach.tq:78:27
  {
    // ../../src/builtins/array-foreach.tq:79:5
    int31_t t3816 = 0;
    TVARIABLE(Smi, k_519_impl);
    auto k_519 = &k_519_impl;
    USE(k_519);
    TNode<Smi> t3817 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3816)));
    *k_519 = implicit_cast<TNode<Smi>>(t3817);
    // ../../src/builtins/array-foreach.tq:80:5
    TNode<Map> t3818 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1150_impl;
    auto map_1150 = &map_1150_impl;
    USE(map_1150);
    *map_1150 = implicit_cast<TNode<Map>>(t3818);
    // ../../src/builtins/array-foreach.tq:82:5
    {
      Label label_try_done_1151_1907_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1151_1907 = &label_try_done_1151_1907_impl;
      USE(label_try_done_1151_1907);
      Label label_Slow_1287_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_Slow_1287 = &label_Slow_1287_impl;
      USE(label_Slow_1287);
      Label label_try_begin_1152_1908_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1152_1908 = &label_try_begin_1152_1908_impl;
      USE(label_try_begin_1152_1908);
      Goto(label_try_begin_1152_1908);
      if (label_try_begin_1152_1908->is_used())
      {
        BIND(label_try_begin_1152_1908);
        // ../../src/builtins/array-foreach.tq:82:9
        {
          // ../../src/builtins/array-foreach.tq:84:7
          Label label__True_1288_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1288 = &label__True_1288_impl;
          USE(label__True_1288);
          Label label__False_1289_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1289 = &label__False_1289_impl;
          USE(label__False_1289);
          Label label_header_1153_1909_impl(this, {k_519}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_1153_1909 = &label_header_1153_1909_impl;
          USE(label_header_1153_1909);
          Goto(label_header_1153_1909);
          BIND(label_header_1153_1909);
          Label label_action_1154_1910_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_action_1154_1910 = &label_action_1154_1910_impl;
          USE(label_action_1154_1910);
          TNode<BoolT> t3819 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_519).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3819));
          Branch(implicit_cast<TNode<BoolT>>(t3819), label__True_1288, label__False_1289);
          if (label__True_1288->is_used())
          {
            BIND(label__True_1288);
            // ../../src/builtins/array-foreach.tq:84:34
            {
              // ../../src/builtins/array-foreach.tq:86:9
              {
                Label label__True_1290_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1290 = &label__True_1290_impl;
                USE(label__True_1290);
                Label label__False_1291_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1291 = &label__False_1291_impl;
                USE(label__False_1291);
                TNode<Map> t3820 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3821 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1150)), implicit_cast<TNode<Object>>(t3820)));
                USE(implicit_cast<TNode<BoolT>>(t3821));
                Branch(implicit_cast<TNode<BoolT>>(t3821), label__True_1290, label__False_1291);
                if (label__True_1290->is_used())
                {
                  BIND(label__True_1290);
                  // ../../src/builtins/array-foreach.tq:86:27
                  Goto(label_Slow_1287);
                }
                BIND(label__False_1291);
              }
              // ../../src/builtins/array-foreach.tq:88:9
              {
                Label label__True_1292_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1292 = &label__True_1292_impl;
                USE(label__True_1292);
                Label label__False_1293_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1293 = &label__False_1293_impl;
                USE(label__False_1293);
                TNode<Number> t3822 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_519).value()), implicit_cast<TNode<Number>>(t3822), label__True_1292, label__False_1293);
                if (label__True_1292->is_used())
                {
                  BIND(label__True_1292);
                  // ../../src/builtins/array-foreach.tq:88:28
                  Goto(label_Slow_1287);
                }
                BIND(label__False_1293);
              }
              // ../../src/builtins/array-foreach.tq:90:9
              {
                Label label_try_done_1155_1911_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_try_done_1155_1911 = &label_try_done_1155_1911_impl;
                USE(label_try_done_1155_1911);
                Label label_FoundHole_1294_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_FoundHole_1294 = &label_FoundHole_1294_impl;
                USE(label_FoundHole_1294);
                Label label_try_begin_1156_1912_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_try_begin_1156_1912 = &label_try_begin_1156_1912_impl;
                USE(label_try_begin_1156_1912);
                Goto(label_try_begin_1156_1912);
                if (label_try_begin_1156_1912->is_used())
                {
                  BIND(label_try_begin_1156_1912);
                  // ../../src/builtins/array-foreach.tq:90:13
                  {
                    // ../../src/builtins/array-foreach.tq:91:11
                    TNode<Object> t3823 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_519).value()), label_FoundHole_1294));
                    USE(implicit_cast<TNode<Object>>(t3823));
                    TNode<Object> value_1157_impl;
                    auto value_1157 = &value_1157_impl;
                    USE(value_1157);
                    *value_1157 = implicit_cast<TNode<Object>>(t3823);
                    // ../../src/builtins/array-foreach.tq:93:11
                    TNode<Object> t3824 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1157)), implicit_cast<TNode<Object>>((*k_519).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3824));
                  }
                  Goto(label_try_done_1155_1911);
                }
                if (label_FoundHole_1294->is_used())
                {
                  BIND(label_FoundHole_1294);
                  // ../../src/builtins/array-foreach.tq:95:25
                  {
                    // ../../src/builtins/array-foreach.tq:100:11
                    {
                      Label label__True_1295_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1295 = &label__True_1295_impl;
                      USE(label__True_1295);
                      Label label__False_1296_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1296 = &label__False_1296_impl;
                      USE(label__False_1296);
                      TNode<BoolT> t3825 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3825));
                      Branch(implicit_cast<TNode<BoolT>>(t3825), label__True_1295, label__False_1296);
                      if (label__True_1295->is_used())
                      {
                        BIND(label__True_1295);
                        // ../../src/builtins/array-foreach.tq:100:51
                        *Bailout0_518 = implicit_cast<TNode<Smi>>((*k_519).value());
                        Goto(label_Bailout_1286);
                      }
                      BIND(label__False_1296);
                    }
                  }
                  Goto(label_try_done_1155_1911);
                }
                BIND(label_try_done_1155_1911);
              }
            }
            Goto(label_action_1154_1910);
          }
          {
            BIND(label_action_1154_1910);
            int31_t t3826 = 1;
            TNode<Smi> t3827 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3826)));
            TNode<Smi> t3828 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_519).value()), implicit_cast<TNode<Smi>>(t3827)));
            USE(implicit_cast<TNode<Smi>>(t3828));
            *k_519 = implicit_cast<TNode<Smi>>(t3828);
            Goto(label_header_1153_1909);
          }
          BIND(label__False_1289);
        }
        Goto(label_try_done_1151_1907);
      }
      if (label_Slow_1287->is_used())
      {
        BIND(label_Slow_1287);
        // ../../src/builtins/array-foreach.tq:104:16
        {
          // ../../src/builtins/array-foreach.tq:105:7
          *Bailout0_518 = implicit_cast<TNode<Smi>>((*k_519).value());
          Goto(label_Bailout_1286);
        }
      }
      BIND(label_try_done_1151_1907);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_1297, TVariable<Smi>* Bailout0_520) {
  Label label_macro_end_1913_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1913 = &label_macro_end_1913_impl;
  USE(label_macro_end_1913);
  // ../../src/builtins/array-foreach.tq:78:27
  {
    // ../../src/builtins/array-foreach.tq:79:5
    int31_t t3829 = 0;
    TVARIABLE(Smi, k_521_impl);
    auto k_521 = &k_521_impl;
    USE(k_521);
    TNode<Smi> t3830 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3829)));
    *k_521 = implicit_cast<TNode<Smi>>(t3830);
    // ../../src/builtins/array-foreach.tq:80:5
    TNode<Map> t3831 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1158_impl;
    auto map_1158 = &map_1158_impl;
    USE(map_1158);
    *map_1158 = implicit_cast<TNode<Map>>(t3831);
    // ../../src/builtins/array-foreach.tq:82:5
    {
      Label label_try_done_1159_1914_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_1159_1914 = &label_try_done_1159_1914_impl;
      USE(label_try_done_1159_1914);
      Label label_Slow_1298_impl(this, compiler::CodeAssemblerLabel::kDeferred);
      Label* label_Slow_1298 = &label_Slow_1298_impl;
      USE(label_Slow_1298);
      Label label_try_begin_1160_1915_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_1160_1915 = &label_try_begin_1160_1915_impl;
      USE(label_try_begin_1160_1915);
      Goto(label_try_begin_1160_1915);
      if (label_try_begin_1160_1915->is_used())
      {
        BIND(label_try_begin_1160_1915);
        // ../../src/builtins/array-foreach.tq:82:9
        {
          // ../../src/builtins/array-foreach.tq:84:7
          Label label__True_1299_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_1299 = &label__True_1299_impl;
          USE(label__True_1299);
          Label label__False_1300_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_1300 = &label__False_1300_impl;
          USE(label__False_1300);
          Label label_header_1161_1916_impl(this, {k_521}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_1161_1916 = &label_header_1161_1916_impl;
          USE(label_header_1161_1916);
          Goto(label_header_1161_1916);
          BIND(label_header_1161_1916);
          Label label_action_1162_1917_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_action_1162_1917 = &label_action_1162_1917_impl;
          USE(label_action_1162_1917);
          TNode<BoolT> t3832 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_521).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3832));
          Branch(implicit_cast<TNode<BoolT>>(t3832), label__True_1299, label__False_1300);
          if (label__True_1299->is_used())
          {
            BIND(label__True_1299);
            // ../../src/builtins/array-foreach.tq:84:34
            {
              // ../../src/builtins/array-foreach.tq:86:9
              {
                Label label__True_1301_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1301 = &label__True_1301_impl;
                USE(label__True_1301);
                Label label__False_1302_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1302 = &label__False_1302_impl;
                USE(label__False_1302);
                TNode<Map> t3833 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3834 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1158)), implicit_cast<TNode<Object>>(t3833)));
                USE(implicit_cast<TNode<BoolT>>(t3834));
                Branch(implicit_cast<TNode<BoolT>>(t3834), label__True_1301, label__False_1302);
                if (label__True_1301->is_used())
                {
                  BIND(label__True_1301);
                  // ../../src/builtins/array-foreach.tq:86:27
                  Goto(label_Slow_1298);
                }
                BIND(label__False_1302);
              }
              // ../../src/builtins/array-foreach.tq:88:9
              {
                Label label__True_1303_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_1303 = &label__True_1303_impl;
                USE(label__True_1303);
                Label label__False_1304_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_1304 = &label__False_1304_impl;
                USE(label__False_1304);
                TNode<Number> t3835 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_521).value()), implicit_cast<TNode<Number>>(t3835), label__True_1303, label__False_1304);
                if (label__True_1303->is_used())
                {
                  BIND(label__True_1303);
                  // ../../src/builtins/array-foreach.tq:88:28
                  Goto(label_Slow_1298);
                }
                BIND(label__False_1304);
              }
              // ../../src/builtins/array-foreach.tq:90:9
              {
                Label label_try_done_1163_1918_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_try_done_1163_1918 = &label_try_done_1163_1918_impl;
                USE(label_try_done_1163_1918);
                Label label_FoundHole_1305_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_FoundHole_1305 = &label_FoundHole_1305_impl;
                USE(label_FoundHole_1305);
                Label label_try_begin_1164_1919_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_try_begin_1164_1919 = &label_try_begin_1164_1919_impl;
                USE(label_try_begin_1164_1919);
                Goto(label_try_begin_1164_1919);
                if (label_try_begin_1164_1919->is_used())
                {
                  BIND(label_try_begin_1164_1919);
                  // ../../src/builtins/array-foreach.tq:90:13
                  {
                    // ../../src/builtins/array-foreach.tq:91:11
                    TNode<Object> t3836 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_521).value()), label_FoundHole_1305));
                    USE(implicit_cast<TNode<Object>>(t3836));
                    TNode<Object> value_1165_impl;
                    auto value_1165 = &value_1165_impl;
                    USE(value_1165);
                    *value_1165 = implicit_cast<TNode<Object>>(t3836);
                    // ../../src/builtins/array-foreach.tq:93:11
                    TNode<Object> t3837 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1165)), implicit_cast<TNode<Object>>((*k_521).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3837));
                  }
                  Goto(label_try_done_1163_1918);
                }
                if (label_FoundHole_1305->is_used())
                {
                  BIND(label_FoundHole_1305);
                  // ../../src/builtins/array-foreach.tq:95:25
                  {
                    // ../../src/builtins/array-foreach.tq:100:11
                    {
                      Label label__True_1306_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1306 = &label__True_1306_impl;
                      USE(label__True_1306);
                      Label label__False_1307_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1307 = &label__False_1307_impl;
                      USE(label__False_1307);
                      TNode<BoolT> t3838 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3838));
                      Branch(implicit_cast<TNode<BoolT>>(t3838), label__True_1306, label__False_1307);
                      if (label__True_1306->is_used())
                      {
                        BIND(label__True_1306);
                        // ../../src/builtins/array-foreach.tq:100:51
                        *Bailout0_520 = implicit_cast<TNode<Smi>>((*k_521).value());
                        Goto(label_Bailout_1297);
                      }
                      BIND(label__False_1307);
                    }
                  }
                  Goto(label_try_done_1163_1918);
                }
                BIND(label_try_done_1163_1918);
              }
            }
            Goto(label_action_1162_1917);
          }
          {
            BIND(label_action_1162_1917);
            int31_t t3839 = 1;
            TNode<Smi> t3840 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3839)));
            TNode<Smi> t3841 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_521).value()), implicit_cast<TNode<Smi>>(t3840)));
            USE(implicit_cast<TNode<Smi>>(t3841));
            *k_521 = implicit_cast<TNode<Smi>>(t3841);
            Goto(label_header_1161_1916);
          }
          BIND(label__False_1300);
        }
        Goto(label_try_done_1159_1914);
      }
      if (label_Slow_1298->is_used())
      {
        BIND(label_Slow_1298);
        // ../../src/builtins/array-foreach.tq:104:16
        {
          // ../../src/builtins/array-foreach.tq:105:7
          *Bailout0_520 = implicit_cast<TNode<Smi>>((*k_521).value());
          Goto(label_Bailout_1297);
        }
      }
      BIND(label_try_done_1159_1914);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::FastArrayLastIndexOf12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  TVARIABLE(Smi, _return_522_impl);
  auto _return_522 = &_return_522_impl;
  USE(_return_522);
  Label label_macro_end_1920_impl(this, {_return_522}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1920 = &label_macro_end_1920_impl;
  USE(label_macro_end_1920);
  // ../../src/builtins/array-lastindexof.tq:29:35
  {
    // ../../src/builtins/array-lastindexof.tq:30:5
    TNode<FixedArrayBase> t3842 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_1166_impl;
    auto elements_1166 = &elements_1166_impl;
    USE(elements_1166);
    *elements_1166 = implicit_cast<TNode<FixedArrayBase>>(t3842);
    // ../../src/builtins/array-lastindexof.tq:31:5
    TVARIABLE(Smi, k_523_impl);
    auto k_523 = &k_523_impl;
    USE(k_523);
    *k_523 = implicit_cast<TNode<Smi>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:32:5
    {
      Label label__True_1308_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1308 = &label__True_1308_impl;
      USE(label__True_1308);
      Label label__False_1309_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1309 = &label__False_1309_impl;
      USE(label__False_1309);
      Label label_header_1167_1921_impl(this, {k_523}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1167_1921 = &label_header_1167_1921_impl;
      USE(label_header_1167_1921);
      Goto(label_header_1167_1921);
      BIND(label_header_1167_1921);
      int31_t t3843 = 0;
      TNode<Smi> t3844 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3843)));
      TNode<BoolT> t3845 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_523).value()), implicit_cast<TNode<Smi>>(t3844)));
      USE(implicit_cast<TNode<BoolT>>(t3845));
      Branch(implicit_cast<TNode<BoolT>>(t3845), label__True_1308, label__False_1309);
      if (label__True_1308->is_used())
      {
        BIND(label__True_1308);
        // ../../src/builtins/array-lastindexof.tq:32:20
        {
          // ../../src/builtins/array-lastindexof.tq:33:7
          {
            Label label_try_done_1168_1922_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_done_1168_1922 = &label_try_done_1168_1922_impl;
            USE(label_try_done_1168_1922);
            Label label_Hole_1310_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_Hole_1310 = &label_Hole_1310_impl;
            USE(label_Hole_1310);
            Label label_try_begin_1169_1923_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_begin_1169_1923 = &label_try_begin_1169_1923_impl;
            USE(label_try_begin_1169_1923);
            Goto(label_try_begin_1169_1923);
            if (label_try_begin_1169_1923->is_used())
            {
              BIND(label_try_begin_1169_1923);
              // ../../src/builtins/array-lastindexof.tq:33:11
              {
                // ../../src/builtins/array-lastindexof.tq:34:9
                TNode<Object> t3846 = UncheckedCast<Object>(LoadWithHoleCheck12ATFixedArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1166)), implicit_cast<TNode<Smi>>((*k_523).value()), label_Hole_1310));
                USE(implicit_cast<TNode<Object>>(t3846));
                TNode<Object> element_1170_impl;
                auto element_1170 = &element_1170_impl;
                USE(element_1170);
                *element_1170 = implicit_cast<TNode<Object>>(t3846);
                // ../../src/builtins/array-lastindexof.tq:37:9
                TNode<Oddball> t3847 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_1170))));
                USE(implicit_cast<TNode<Oddball>>(t3847));
                TNode<Oddball> same_1171_impl;
                auto same_1171 = &same_1171_impl;
                USE(same_1171);
                *same_1171 = implicit_cast<TNode<Oddball>>(t3847);
                // ../../src/builtins/array-lastindexof.tq:38:9
                {
                  Label label__True_1311_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1311 = &label__True_1311_impl;
                  USE(label__True_1311);
                  Label label__False_1312_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1312 = &label__False_1312_impl;
                  USE(label__False_1312);
                  TNode<BoolT> t3848 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_1171)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t3848));
                  Branch(implicit_cast<TNode<BoolT>>(t3848), label__True_1311, label__False_1312);
                  if (label__True_1311->is_used())
                  {
                    BIND(label__True_1311);
                    // ../../src/builtins/array-lastindexof.tq:38:27
                    {
                      // ../../src/builtins/array-lastindexof.tq:39:11
                      Label label__True_1313_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1313 = &label__True_1313_impl;
                      USE(label__True_1313);
                      Label label__False_1314_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1314 = &label__False_1314_impl;
                      USE(label__False_1314);
                      TNode<BoolT> t3849 = UncheckedCast<BoolT>(IsFastJSArray(implicit_cast<TNode<Object>>(p_array), implicit_cast<TNode<Context>>(p_context)));
                      USE(implicit_cast<TNode<BoolT>>(t3849));
                      Branch(implicit_cast<TNode<BoolT>>(t3849), label__True_1313, label__False_1314);
                      BIND(label__False_1314);
                      Print("assert 'IsFastJSArray(array, context)' failed at ../../src/builtins/array-lastindexof.tq:39:11");
                      Unreachable();
                      BIND(label__True_1313);
                      // ../../src/builtins/array-lastindexof.tq:40:11
                      *_return_522 = implicit_cast<TNode<Smi>>((*k_523).value());
                      Goto(label_macro_end_1920);
                    }
                  }
                  BIND(label__False_1312);
                }
              }
              Goto(label_try_done_1168_1922);
            }
            if (label_Hole_1310->is_used())
            {
              BIND(label_Hole_1310);
              // ../../src/builtins/array-lastindexof.tq:43:18
              {
              }
              Goto(label_try_done_1168_1922);
            }
            BIND(label_try_done_1168_1922);
          }
          // ../../src/builtins/array-lastindexof.tq:45:7
          TNode<Smi> t3850 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3851 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_523).value()), implicit_cast<TNode<Smi>>(t3850)));
          *k_523 = implicit_cast<TNode<Smi>>(t3851);
        }
        Goto(label_header_1167_1921);
      }
      BIND(label__False_1309);
    }
    // ../../src/builtins/array-lastindexof.tq:48:5
    Label label__True_1315_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1315 = &label__True_1315_impl;
    USE(label__True_1315);
    Label label__False_1316_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1316 = &label__False_1316_impl;
    USE(label__False_1316);
    TNode<BoolT> t3852 = UncheckedCast<BoolT>(IsFastJSArray(implicit_cast<TNode<Object>>(p_array), implicit_cast<TNode<Context>>(p_context)));
    USE(implicit_cast<TNode<BoolT>>(t3852));
    Branch(implicit_cast<TNode<BoolT>>(t3852), label__True_1315, label__False_1316);
    BIND(label__False_1316);
    Print("assert 'IsFastJSArray(array, context)' failed at ../../src/builtins/array-lastindexof.tq:48:5");
    Unreachable();
    BIND(label__True_1315);
    // ../../src/builtins/array-lastindexof.tq:49:5
    int31_t t3853 = -1;
    TNode<Smi> t3854 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3853)));
    *_return_522 = implicit_cast<TNode<Smi>>(t3854);
    Goto(label_macro_end_1920);
  }
  BIND(label_macro_end_1920);
  return implicit_cast<TNode<Smi>>((*_return_522).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::FastArrayLastIndexOf18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_array, TNode<Smi> p_length, TNode<Smi> p_from, TNode<Object> p_searchElement) {
  TVARIABLE(Smi, _return_524_impl);
  auto _return_524 = &_return_524_impl;
  USE(_return_524);
  Label label_macro_end_1924_impl(this, {_return_524}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1924 = &label_macro_end_1924_impl;
  USE(label_macro_end_1924);
  // ../../src/builtins/array-lastindexof.tq:29:35
  {
    // ../../src/builtins/array-lastindexof.tq:30:5
    TNode<FixedArrayBase> t3855 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_1172_impl;
    auto elements_1172 = &elements_1172_impl;
    USE(elements_1172);
    *elements_1172 = implicit_cast<TNode<FixedArrayBase>>(t3855);
    // ../../src/builtins/array-lastindexof.tq:31:5
    TVARIABLE(Smi, k_525_impl);
    auto k_525 = &k_525_impl;
    USE(k_525);
    *k_525 = implicit_cast<TNode<Smi>>(p_from);
    // ../../src/builtins/array-lastindexof.tq:32:5
    {
      Label label__True_1317_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1317 = &label__True_1317_impl;
      USE(label__True_1317);
      Label label__False_1318_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1318 = &label__False_1318_impl;
      USE(label__False_1318);
      Label label_header_1173_1925_impl(this, {k_525}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1173_1925 = &label_header_1173_1925_impl;
      USE(label_header_1173_1925);
      Goto(label_header_1173_1925);
      BIND(label_header_1173_1925);
      int31_t t3856 = 0;
      TNode<Smi> t3857 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3856)));
      TNode<BoolT> t3858 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*k_525).value()), implicit_cast<TNode<Smi>>(t3857)));
      USE(implicit_cast<TNode<BoolT>>(t3858));
      Branch(implicit_cast<TNode<BoolT>>(t3858), label__True_1317, label__False_1318);
      if (label__True_1317->is_used())
      {
        BIND(label__True_1317);
        // ../../src/builtins/array-lastindexof.tq:32:20
        {
          // ../../src/builtins/array-lastindexof.tq:33:7
          {
            Label label_try_done_1174_1926_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_done_1174_1926 = &label_try_done_1174_1926_impl;
            USE(label_try_done_1174_1926);
            Label label_Hole_1319_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_Hole_1319 = &label_Hole_1319_impl;
            USE(label_Hole_1319);
            Label label_try_begin_1175_1927_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_try_begin_1175_1927 = &label_try_begin_1175_1927_impl;
            USE(label_try_begin_1175_1927);
            Goto(label_try_begin_1175_1927);
            if (label_try_begin_1175_1927->is_used())
            {
              BIND(label_try_begin_1175_1927);
              // ../../src/builtins/array-lastindexof.tq:33:11
              {
                // ../../src/builtins/array-lastindexof.tq:34:9
                TNode<Object> t3859 = UncheckedCast<Object>(LoadWithHoleCheck18ATFixedDoubleArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1172)), implicit_cast<TNode<Smi>>((*k_525).value()), label_Hole_1319));
                USE(implicit_cast<TNode<Object>>(t3859));
                TNode<Object> element_1176_impl;
                auto element_1176 = &element_1176_impl;
                USE(element_1176);
                *element_1176 = implicit_cast<TNode<Object>>(t3859);
                // ../../src/builtins/array-lastindexof.tq:37:9
                TNode<Oddball> t3860 = UncheckedCast<Oddball>(StrictEqual(implicit_cast<TNode<Object>>(p_searchElement), implicit_cast<TNode<Object>>((*element_1176))));
                USE(implicit_cast<TNode<Oddball>>(t3860));
                TNode<Oddball> same_1177_impl;
                auto same_1177 = &same_1177_impl;
                USE(same_1177);
                *same_1177 = implicit_cast<TNode<Oddball>>(t3860);
                // ../../src/builtins/array-lastindexof.tq:38:9
                {
                  Label label__True_1320_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_1320 = &label__True_1320_impl;
                  USE(label__True_1320);
                  Label label__False_1321_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_1321 = &label__False_1321_impl;
                  USE(label__False_1321);
                  TNode<BoolT> t3861 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*same_1177)), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t3861));
                  Branch(implicit_cast<TNode<BoolT>>(t3861), label__True_1320, label__False_1321);
                  if (label__True_1320->is_used())
                  {
                    BIND(label__True_1320);
                    // ../../src/builtins/array-lastindexof.tq:38:27
                    {
                      // ../../src/builtins/array-lastindexof.tq:39:11
                      Label label__True_1322_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_1322 = &label__True_1322_impl;
                      USE(label__True_1322);
                      Label label__False_1323_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_1323 = &label__False_1323_impl;
                      USE(label__False_1323);
                      TNode<BoolT> t3862 = UncheckedCast<BoolT>(IsFastJSArray(implicit_cast<TNode<Object>>(p_array), implicit_cast<TNode<Context>>(p_context)));
                      USE(implicit_cast<TNode<BoolT>>(t3862));
                      Branch(implicit_cast<TNode<BoolT>>(t3862), label__True_1322, label__False_1323);
                      BIND(label__False_1323);
                      Print("assert 'IsFastJSArray(array, context)' failed at ../../src/builtins/array-lastindexof.tq:39:11");
                      Unreachable();
                      BIND(label__True_1322);
                      // ../../src/builtins/array-lastindexof.tq:40:11
                      *_return_524 = implicit_cast<TNode<Smi>>((*k_525).value());
                      Goto(label_macro_end_1924);
                    }
                  }
                  BIND(label__False_1321);
                }
              }
              Goto(label_try_done_1174_1926);
            }
            if (label_Hole_1319->is_used())
            {
              BIND(label_Hole_1319);
              // ../../src/builtins/array-lastindexof.tq:43:18
              {
              }
              Goto(label_try_done_1174_1926);
            }
            BIND(label_try_done_1174_1926);
          }
          // ../../src/builtins/array-lastindexof.tq:45:7
          TNode<Smi> t3863 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3864 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_525).value()), implicit_cast<TNode<Smi>>(t3863)));
          *k_525 = implicit_cast<TNode<Smi>>(t3864);
        }
        Goto(label_header_1173_1925);
      }
      BIND(label__False_1318);
    }
    // ../../src/builtins/array-lastindexof.tq:48:5
    Label label__True_1324_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1324 = &label__True_1324_impl;
    USE(label__True_1324);
    Label label__False_1325_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1325 = &label__False_1325_impl;
    USE(label__False_1325);
    TNode<BoolT> t3865 = UncheckedCast<BoolT>(IsFastJSArray(implicit_cast<TNode<Object>>(p_array), implicit_cast<TNode<Context>>(p_context)));
    USE(implicit_cast<TNode<BoolT>>(t3865));
    Branch(implicit_cast<TNode<BoolT>>(t3865), label__True_1324, label__False_1325);
    BIND(label__False_1325);
    Print("assert 'IsFastJSArray(array, context)' failed at ../../src/builtins/array-lastindexof.tq:48:5");
    Unreachable();
    BIND(label__True_1324);
    // ../../src/builtins/array-lastindexof.tq:49:5
    int31_t t3866 = -1;
    TNode<Smi> t3867 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3866)));
    *_return_524 = implicit_cast<TNode<Smi>>(t3867);
    Goto(label_macro_end_1924);
  }
  BIND(label_macro_end_1924);
  return implicit_cast<TNode<Smi>>((*_return_524).value());
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1928_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1928 = &label_macro_end_1928_impl;
  USE(label_macro_end_1928);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3868 = 0;
    TVARIABLE(Smi, lower_526_impl);
    auto lower_526 = &lower_526_impl;
    USE(lower_526);
    TNode<Smi> t3869 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3868)));
    *lower_526 = implicit_cast<TNode<Smi>>(t3869);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3870 = 1;
    TNode<Smi> t3871 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3870)));
    TNode<Smi> t3872 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3871)));
    USE(implicit_cast<TNode<Smi>>(t3872));
    TVARIABLE(Smi, upper_527_impl);
    auto upper_527 = &upper_527_impl;
    USE(upper_527);
    *upper_527 = implicit_cast<TNode<Smi>>(t3872);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1326_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1326 = &label__True_1326_impl;
      USE(label__True_1326);
      Label label__False_1327_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1327 = &label__False_1327_impl;
      USE(label__False_1327);
      Label label_header_1178_1929_impl(this, {lower_526, upper_527}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1178_1929 = &label_header_1178_1929_impl;
      USE(label_header_1178_1929);
      Goto(label_header_1178_1929);
      BIND(label_header_1178_1929);
      TNode<BoolT> t3873 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_526).value()), implicit_cast<TNode<Smi>>((*upper_527).value())));
      USE(implicit_cast<TNode<BoolT>>(t3873));
      Branch(implicit_cast<TNode<BoolT>>(t3873), label__True_1326, label__False_1327);
      if (label__True_1326->is_used())
      {
        BIND(label__True_1326);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Smi> t3874 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_526).value())));
          USE(implicit_cast<TNode<Smi>>(t3874));
          TNode<Smi> lowerValue_1179_impl;
          auto lowerValue_1179 = &lowerValue_1179_impl;
          USE(lowerValue_1179);
          *lowerValue_1179 = implicit_cast<TNode<Smi>>(t3874);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Smi> t3875 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_527).value())));
          USE(implicit_cast<TNode<Smi>>(t3875));
          TNode<Smi> upperValue_1180_impl;
          auto upperValue_1180 = &upperValue_1180_impl;
          USE(upperValue_1180);
          *upperValue_1180 = implicit_cast<TNode<Smi>>(t3875);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_526).value()), implicit_cast<TNode<Smi>>((*upperValue_1180)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_527).value()), implicit_cast<TNode<Smi>>((*lowerValue_1179)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3876 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3877 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_526).value()), implicit_cast<TNode<Smi>>(t3876)));
          *lower_526 = implicit_cast<TNode<Smi>>(t3877);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3878 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3879 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_527).value()), implicit_cast<TNode<Smi>>(t3878)));
          *upper_527 = implicit_cast<TNode<Smi>>(t3879);
        }
        Goto(label_header_1178_1929);
      }
      BIND(label__False_1327);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1930_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1930 = &label_macro_end_1930_impl;
  USE(label_macro_end_1930);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3880 = 0;
    TVARIABLE(Smi, lower_528_impl);
    auto lower_528 = &lower_528_impl;
    USE(lower_528);
    TNode<Smi> t3881 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3880)));
    *lower_528 = implicit_cast<TNode<Smi>>(t3881);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3882 = 1;
    TNode<Smi> t3883 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3882)));
    TNode<Smi> t3884 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3883)));
    USE(implicit_cast<TNode<Smi>>(t3884));
    TVARIABLE(Smi, upper_529_impl);
    auto upper_529 = &upper_529_impl;
    USE(upper_529);
    *upper_529 = implicit_cast<TNode<Smi>>(t3884);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1328_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1328 = &label__True_1328_impl;
      USE(label__True_1328);
      Label label__False_1329_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1329 = &label__False_1329_impl;
      USE(label__False_1329);
      Label label_header_1181_1931_impl(this, {lower_528, upper_529}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1181_1931 = &label_header_1181_1931_impl;
      USE(label_header_1181_1931);
      Goto(label_header_1181_1931);
      BIND(label_header_1181_1931);
      TNode<BoolT> t3885 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_528).value()), implicit_cast<TNode<Smi>>((*upper_529).value())));
      USE(implicit_cast<TNode<BoolT>>(t3885));
      Branch(implicit_cast<TNode<BoolT>>(t3885), label__True_1328, label__False_1329);
      if (label__True_1328->is_used())
      {
        BIND(label__True_1328);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Object> t3886 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_528).value())));
          USE(implicit_cast<TNode<Object>>(t3886));
          TNode<Object> lowerValue_1182_impl;
          auto lowerValue_1182 = &lowerValue_1182_impl;
          USE(lowerValue_1182);
          *lowerValue_1182 = implicit_cast<TNode<Object>>(t3886);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Object> t3887 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_529).value())));
          USE(implicit_cast<TNode<Object>>(t3887));
          TNode<Object> upperValue_1183_impl;
          auto upperValue_1183 = &upperValue_1183_impl;
          USE(upperValue_1183);
          *upperValue_1183 = implicit_cast<TNode<Object>>(t3887);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_528).value()), implicit_cast<TNode<Object>>((*upperValue_1183)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_529).value()), implicit_cast<TNode<Object>>((*lowerValue_1182)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3888 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3889 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_528).value()), implicit_cast<TNode<Smi>>(t3888)));
          *lower_528 = implicit_cast<TNode<Smi>>(t3889);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3890 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3891 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_529).value()), implicit_cast<TNode<Smi>>(t3890)));
          *upper_529 = implicit_cast<TNode<Smi>>(t3891);
        }
        Goto(label_header_1181_1931);
      }
      BIND(label__False_1329);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1932_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1932 = &label_macro_end_1932_impl;
  USE(label_macro_end_1932);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3892 = 0;
    TVARIABLE(Smi, lower_530_impl);
    auto lower_530 = &lower_530_impl;
    USE(lower_530);
    TNode<Smi> t3893 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3892)));
    *lower_530 = implicit_cast<TNode<Smi>>(t3893);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3894 = 1;
    TNode<Smi> t3895 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3894)));
    TNode<Smi> t3896 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3895)));
    USE(implicit_cast<TNode<Smi>>(t3896));
    TVARIABLE(Smi, upper_531_impl);
    auto upper_531 = &upper_531_impl;
    USE(upper_531);
    *upper_531 = implicit_cast<TNode<Smi>>(t3896);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_1330_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1330 = &label__True_1330_impl;
      USE(label__True_1330);
      Label label__False_1331_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1331 = &label__False_1331_impl;
      USE(label__False_1331);
      Label label_header_1184_1933_impl(this, {lower_530, upper_531}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1184_1933 = &label_header_1184_1933_impl;
      USE(label_header_1184_1933);
      Goto(label_header_1184_1933);
      BIND(label_header_1184_1933);
      TNode<BoolT> t3897 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_530).value()), implicit_cast<TNode<Smi>>((*upper_531).value())));
      USE(implicit_cast<TNode<BoolT>>(t3897));
      Branch(implicit_cast<TNode<BoolT>>(t3897), label__True_1330, label__False_1331);
      if (label__True_1330->is_used())
      {
        BIND(label__True_1330);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Float64T> t3898 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_530).value())));
          USE(implicit_cast<TNode<Float64T>>(t3898));
          TNode<Float64T> lowerValue_1185_impl;
          auto lowerValue_1185 = &lowerValue_1185_impl;
          USE(lowerValue_1185);
          *lowerValue_1185 = implicit_cast<TNode<Float64T>>(t3898);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Float64T> t3899 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_531).value())));
          USE(implicit_cast<TNode<Float64T>>(t3899));
          TNode<Float64T> upperValue_1186_impl;
          auto upperValue_1186 = &upperValue_1186_impl;
          USE(upperValue_1186);
          *upperValue_1186 = implicit_cast<TNode<Float64T>>(t3899);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_530).value()), implicit_cast<TNode<Float64T>>((*upperValue_1186)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_531).value()), implicit_cast<TNode<Float64T>>((*lowerValue_1185)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3900 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3901 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_530).value()), implicit_cast<TNode<Smi>>(t3900)));
          *lower_530 = implicit_cast<TNode<Smi>>(t3901);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3902 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3903 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_531).value()), implicit_cast<TNode<Smi>>(t3902)));
          *upper_531 = implicit_cast<TNode<Smi>>(t3903);
        }
        Goto(label_header_1184_1933);
      }
      BIND(label__False_1331);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastSplice12ATFixedArray22UT12ATHeapObject5ATSmi(CodeStubArguments* p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_lengthDelta, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount, Label* label_Bailout_1332) {
  Label label_macro_end_1934_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1934 = &label_macro_end_1934_impl;
  USE(label_macro_end_1934);
  // ../../src/builtins/array-splice.tq:31:22
  {
    // ../../src/builtins/array-splice.tq:32:5
    TNode<FixedArrayBase> t3904 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
    TNode<FixedArrayBase> elements_1187_impl;
    auto elements_1187 = &elements_1187_impl;
    USE(elements_1187);
    *elements_1187 = implicit_cast<TNode<FixedArrayBase>>(t3904);
    // ../../src/builtins/array-splice.tq:33:5
    TNode<Map> t3905 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_1187))));
    TNode<Map> elementsMap_1188_impl;
    auto elementsMap_1188 = &elementsMap_1188_impl;
    USE(elementsMap_1188);
    *elementsMap_1188 = implicit_cast<TNode<Map>>(t3905);
    // ../../src/builtins/array-splice.tq:37:5
    TVARIABLE(FixedArrayBase, newElements_535_impl);
    auto newElements_535 = &newElements_535_impl;
    USE(newElements_535);
    *newElements_535 = implicit_cast<TNode<FixedArrayBase>>((*elements_1187));
    // ../../src/builtins/array-splice.tq:38:5
    {
      Label label__True_1333_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1333 = &label__True_1333_impl;
      USE(label__True_1333);
      Label label__False_1334_impl(this, {newElements_535}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1334 = &label__False_1334_impl;
      USE(label__False_1334);
      Label label__False_1335_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1335 = &label__False_1335_impl;
      USE(label__False_1335);
      TNode<BoolT> t3906 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_1188)), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t3906));
      GotoIf(implicit_cast<TNode<BoolT>>(t3906), label__True_1333);
      int31_t t3907 = 0;
      TNode<Smi> t3908 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3907)));
      TNode<BoolT> t3909 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_lengthDelta), implicit_cast<TNode<Smi>>(t3908)));
      USE(implicit_cast<TNode<BoolT>>(t3909));
Branch(implicit_cast<TNode<BoolT>>(t3909), label__True_1333, label__False_1334);
      if (label__True_1333->is_used())
      {
        BIND(label__True_1333);
        // ../../src/builtins/array-splice.tq:38:52
        {
          // ../../src/builtins/array-splice.tq:39:7
          int31_t t3910 = 0;
          TNode<Smi> t3911 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3910)));
          TNode<FixedArray> t3912 = UncheckedCast<FixedArray>(Extract12ATFixedArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1187)), implicit_cast<TNode<Smi>>(t3911), implicit_cast<TNode<Smi>>(p_actualStart), implicit_cast<TNode<Smi>>(p_newLength)));
          USE(implicit_cast<TNode<FixedArray>>(t3912));
          *newElements_535 = implicit_cast<TNode<FixedArrayBase>>(t3912);
          // ../../src/builtins/array-splice.tq:41:7
          {
            Label label__True_1336_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1336 = &label__True_1336_impl;
            USE(label__True_1336);
            Label label__False_1337_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1337 = &label__False_1337_impl;
            USE(label__False_1337);
            TNode<BoolT> t3913 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_1188)), implicit_cast<TNode<Object>>(kCOWMap())));
            USE(implicit_cast<TNode<BoolT>>(t3913));
            Branch(implicit_cast<TNode<BoolT>>(t3913), label__True_1336, label__False_1337);
            if (label__True_1336->is_used())
            {
              BIND(label__True_1336);
              // ../../src/builtins/array-splice.tq:41:35
              {
                // ../../src/builtins/array-splice.tq:42:9
                StoreMap(implicit_cast<TNode<HeapObject>>((*newElements_535).value()), implicit_cast<TNode<Map>>((*elementsMap_1188)));
              }
              Goto(label__False_1337);
            }
            BIND(label__False_1337);
          }
          // ../../src/builtins/array-splice.tq:44:7
          StoreElements(implicit_cast<TNode<JSObject>>(p_a), implicit_cast<TNode<FixedArrayBase>>((*newElements_535).value()));
        }
        Goto(label__False_1334);
      }
      BIND(label__False_1334);
    }
    // ../../src/builtins/array-splice.tq:48:5
    TVARIABLE(Smi, k_536_impl);
    auto k_536 = &k_536_impl;
    USE(k_536);
    *k_536 = implicit_cast<TNode<Smi>>(p_actualStart);
    // ../../src/builtins/array-splice.tq:49:5
    {
      Label label__True_1338_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1338 = &label__True_1338_impl;
      USE(label__True_1338);
      Label label__False_1339_impl(this, {k_536}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1339 = &label__False_1339_impl;
      USE(label__False_1339);
      int31_t t3914 = 0;
      TNode<Smi> t3915 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3914)));
      TNode<BoolT> t3916 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>(t3915)));
      USE(implicit_cast<TNode<BoolT>>(t3916));
      Branch(implicit_cast<TNode<BoolT>>(t3916), label__True_1338, label__False_1339);
      if (label__True_1338->is_used())
      {
        BIND(label__True_1338);
        // ../../src/builtins/array-splice.tq:49:26
        {
          // ../../src/builtins/array-splice.tq:50:7
          TNode<FixedArray> t3917 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>((*newElements_535).value())));
          USE(implicit_cast<TNode<FixedArray>>(t3917));
          TNode<FixedArray> typedNewElements_1189_impl;
          auto typedNewElements_1189 = &typedNewElements_1189_impl;
          USE(typedNewElements_1189);
          *typedNewElements_1189 = implicit_cast<TNode<FixedArray>>(t3917);
          // ../../src/builtins/array-splice.tq:52:7
          int31_t t3918 = 2;
          TNode<IntPtrT> t3919 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_1190_1935_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_body_1190_1935 = &label_body_1190_1935_impl;
          USE(label_body_1190_1935);
          Label label_increment_1191_1936_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_increment_1191_1936 = &label_increment_1191_1936_impl;
          USE(label_increment_1191_1936);
          Label label_exit_1192_1937_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_exit_1192_1937 = &label_exit_1192_1937_impl;
          USE(label_exit_1192_1937);
          TVARIABLE(IntPtrT, _for_index_t3920_1193_impl);
          auto _for_index_t3920_1193 = &_for_index_t3920_1193_impl;
          USE(_for_index_t3920_1193);
          TNode<IntPtrT> t3921 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t3918)));
          *_for_index_t3920_1193 = implicit_cast<TNode<IntPtrT>>(t3921);
          Label label_header_1194_1938_impl(this, {_for_index_t3920_1193, k_536}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_1194_1938 = &label_header_1194_1938_impl;
          USE(label_header_1194_1938);
          Goto(label_header_1194_1938);
          BIND(label_header_1194_1938);
          TNode<BoolT> t3922 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t3920_1193).value()), implicit_cast<TNode<IntPtrT>>(t3919)));
          Branch(implicit_cast<TNode<BoolT>>(t3922), label_body_1190_1935, label_exit_1192_1937);
          BIND(label_body_1190_1935);
          TNode<Object> t3923 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t3920_1193).value())));
          TVARIABLE(Object, e_537_impl);
          auto e_537 = &e_537_impl;
          USE(e_537);
          *e_537 = implicit_cast<TNode<Object>>(t3923);
          // ../../src/builtins/array-splice.tq:52:41
          {
            // ../../src/builtins/array-splice.tq:55:9
            TNode<Smi> t3924 = implicit_cast<TNode<Smi>>((*k_536).value());
            USE(t3924);
            TNode<Smi> t3925 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t3926 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(t3925)));
            *k_536 = implicit_cast<TNode<Smi>>(t3926);
            TNode<Object> t3927 = UncheckedCast<Object>(UnsafeCast22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>((*e_537).value())));
            USE(implicit_cast<TNode<Object>>(t3927));
            StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*typedNewElements_1189)), implicit_cast<TNode<Smi>>(t3924), implicit_cast<TNode<Object>>(t3927));
          }
          Goto(label_increment_1191_1936);
          BIND(label_increment_1191_1936);
          TNode<IntPtrT> t3928 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t3929 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t3920_1193).value()), implicit_cast<TNode<IntPtrT>>(t3928)));
          *_for_index_t3920_1193 = implicit_cast<TNode<IntPtrT>>(t3929);
          Goto(label_header_1194_1938);
          BIND(label_exit_1192_1937);
        }
        Goto(label__False_1339);
      }
      BIND(label__False_1339);
    }
    // ../../src/builtins/array-splice.tq:60:5
    TNode<Smi> t3930 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_actualStart)));
    USE(implicit_cast<TNode<Smi>>(t3930));
    TNode<Smi> t3931 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3930), implicit_cast<TNode<Smi>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<Smi>>(t3931));
    TVARIABLE(Smi, count_538_impl);
    auto count_538 = &count_538_impl;
    USE(count_538);
    *count_538 = implicit_cast<TNode<Smi>>(t3931);
    // ../../src/builtins/array-splice.tq:61:5
    {
      Label label__True_1340_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1340 = &label__True_1340_impl;
      USE(label__True_1340);
      Label label__False_1341_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1341 = &label__False_1341_impl;
      USE(label__False_1341);
      Label label_header_1195_1939_impl(this, {count_538, k_536}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1195_1939 = &label_header_1195_1939_impl;
      USE(label_header_1195_1939);
      Goto(label_header_1195_1939);
      BIND(label_header_1195_1939);
      int31_t t3932 = 0;
      TNode<Smi> t3933 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3932)));
      TNode<BoolT> t3934 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*count_538).value()), implicit_cast<TNode<Smi>>(t3933)));
      USE(implicit_cast<TNode<BoolT>>(t3934));
      Branch(implicit_cast<TNode<BoolT>>(t3934), label__True_1340, label__False_1341);
      if (label__True_1340->is_used())
      {
        BIND(label__True_1340);
        // ../../src/builtins/array-splice.tq:61:23
        {
          // ../../src/builtins/array-splice.tq:62:7
          TNode<FixedArray> t3935 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>((*elements_1187))));
          USE(implicit_cast<TNode<FixedArray>>(t3935));
          TNode<FixedArray> typedElements_1196_impl;
          auto typedElements_1196 = &typedElements_1196_impl;
          USE(typedElements_1196);
          *typedElements_1196 = implicit_cast<TNode<FixedArray>>(t3935);
          // ../../src/builtins/array-splice.tq:64:7
          TNode<FixedArray> t3936 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>((*newElements_535).value())));
          USE(implicit_cast<TNode<FixedArray>>(t3936));
          TNode<FixedArray> typedNewElements_1197_impl;
          auto typedNewElements_1197 = &typedNewElements_1197_impl;
          USE(typedNewElements_1197);
          *typedNewElements_1197 = implicit_cast<TNode<FixedArray>>(t3936);
          // ../../src/builtins/array-splice.tq:66:7
          TNode<Smi> t3937 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(p_lengthDelta)));
          USE(implicit_cast<TNode<Smi>>(t3937));
          CopyArrayElement(implicit_cast<TNode<FixedArray>>((*typedElements_1196)), implicit_cast<TNode<FixedArray>>((*typedNewElements_1197)), implicit_cast<TNode<Smi>>(t3937), implicit_cast<TNode<Smi>>((*k_536).value()));
          // ../../src/builtins/array-splice.tq:67:7
          TNode<Smi> t3938 = implicit_cast<TNode<Smi>>((*k_536).value());
          USE(t3938);
          TNode<Smi> t3939 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3940 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(t3939)));
          *k_536 = implicit_cast<TNode<Smi>>(t3940);
          // ../../src/builtins/array-splice.tq:68:7
          TNode<Smi> t3941 = implicit_cast<TNode<Smi>>((*count_538).value());
          USE(t3941);
          TNode<Smi> t3942 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3943 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*count_538).value()), implicit_cast<TNode<Smi>>(t3942)));
          *count_538 = implicit_cast<TNode<Smi>>(t3943);
        }
        Goto(label_header_1195_1939);
      }
      BIND(label__False_1341);
    }
    // ../../src/builtins/array-splice.tq:74:5
    {
      Label label__True_1342_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1342 = &label__True_1342_impl;
      USE(label__True_1342);
      Label label__False_1343_impl(this, {k_536}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1343 = &label__False_1343_impl;
      USE(label__False_1343);
      TNode<BoolT> t3944 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elements_1187)), implicit_cast<TNode<Object>>((*newElements_535).value())));
      USE(implicit_cast<TNode<BoolT>>(t3944));
      Branch(implicit_cast<TNode<BoolT>>(t3944), label__True_1342, label__False_1343);
      if (label__True_1342->is_used())
      {
        BIND(label__True_1342);
        // ../../src/builtins/array-splice.tq:74:34
        {
          // ../../src/builtins/array-splice.tq:75:7
          TNode<FixedArray> t3945 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>((*newElements_535).value())));
          USE(implicit_cast<TNode<FixedArray>>(t3945));
          TNode<FixedArray> typedNewElements_1198_impl;
          auto typedNewElements_1198 = &typedNewElements_1198_impl;
          USE(typedNewElements_1198);
          *typedNewElements_1198 = implicit_cast<TNode<FixedArray>>(t3945);
          // ../../src/builtins/array-splice.tq:77:7
          TNode<Smi> t3946 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*elements_1187))));
          TNode<Smi> limit_1199_impl;
          auto limit_1199 = &limit_1199_impl;
          USE(limit_1199);
          *limit_1199 = implicit_cast<TNode<Smi>>(t3946);
          // ../../src/builtins/array-splice.tq:78:7
          {
            Label label__True_1344_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1344 = &label__True_1344_impl;
            USE(label__True_1344);
            Label label__False_1345_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1345 = &label__False_1345_impl;
            USE(label__False_1345);
            Label label_header_1200_1940_impl(this, {k_536}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1200_1940 = &label_header_1200_1940_impl;
            USE(label_header_1200_1940);
            Goto(label_header_1200_1940);
            BIND(label_header_1200_1940);
            TNode<BoolT> t3947 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>((*limit_1199))));
            USE(implicit_cast<TNode<BoolT>>(t3947));
            Branch(implicit_cast<TNode<BoolT>>(t3947), label__True_1344, label__False_1345);
            if (label__True_1344->is_used())
            {
              BIND(label__True_1344);
              // ../../src/builtins/array-splice.tq:78:25
              {
                // ../../src/builtins/array-splice.tq:79:9
                StoreArrayHole(implicit_cast<TNode<FixedArray>>((*typedNewElements_1198)), implicit_cast<TNode<Smi>>((*k_536).value()));
                // ../../src/builtins/array-splice.tq:80:9
                TNode<Smi> t3948 = implicit_cast<TNode<Smi>>((*k_536).value());
                USE(t3948);
                TNode<Smi> t3949 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3950 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(t3949)));
                *k_536 = implicit_cast<TNode<Smi>>(t3950);
              }
              Goto(label_header_1200_1940);
            }
            BIND(label__False_1345);
          }
        }
        Goto(label__False_1343);
      }
      BIND(label__False_1343);
    }
    // ../../src/builtins/array-splice.tq:85:5
    StoreJSArrayLength(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>(p_newLength));
  }
}

void ArrayBuiltinsFromDSLAssembler::FastSplice18ATFixedDoubleArray22UT12ATHeapNumber5ATSmi(CodeStubArguments* p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_lengthDelta, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount, Label* label_Bailout_1346) {
  Label label_macro_end_1941_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1941 = &label_macro_end_1941_impl;
  USE(label_macro_end_1941);
  // ../../src/builtins/array-splice.tq:31:22
  {
    // ../../src/builtins/array-splice.tq:32:5
    TNode<FixedArrayBase> t3951 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_a)));
    TNode<FixedArrayBase> elements_1201_impl;
    auto elements_1201 = &elements_1201_impl;
    USE(elements_1201);
    *elements_1201 = implicit_cast<TNode<FixedArrayBase>>(t3951);
    // ../../src/builtins/array-splice.tq:33:5
    TNode<Map> t3952 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_1201))));
    TNode<Map> elementsMap_1202_impl;
    auto elementsMap_1202 = &elementsMap_1202_impl;
    USE(elementsMap_1202);
    *elementsMap_1202 = implicit_cast<TNode<Map>>(t3952);
    // ../../src/builtins/array-splice.tq:37:5
    TVARIABLE(FixedArrayBase, newElements_539_impl);
    auto newElements_539 = &newElements_539_impl;
    USE(newElements_539);
    *newElements_539 = implicit_cast<TNode<FixedArrayBase>>((*elements_1201));
    // ../../src/builtins/array-splice.tq:38:5
    {
      Label label__True_1347_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1347 = &label__True_1347_impl;
      USE(label__True_1347);
      Label label__False_1348_impl(this, {newElements_539}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1348 = &label__False_1348_impl;
      USE(label__False_1348);
      Label label__False_1349_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1349 = &label__False_1349_impl;
      USE(label__False_1349);
      TNode<BoolT> t3953 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_1202)), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t3953));
      GotoIf(implicit_cast<TNode<BoolT>>(t3953), label__True_1347);
      int31_t t3954 = 0;
      TNode<Smi> t3955 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3954)));
      TNode<BoolT> t3956 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_lengthDelta), implicit_cast<TNode<Smi>>(t3955)));
      USE(implicit_cast<TNode<BoolT>>(t3956));
Branch(implicit_cast<TNode<BoolT>>(t3956), label__True_1347, label__False_1348);
      if (label__True_1347->is_used())
      {
        BIND(label__True_1347);
        // ../../src/builtins/array-splice.tq:38:52
        {
          // ../../src/builtins/array-splice.tq:39:7
          int31_t t3957 = 0;
          TNode<Smi> t3958 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3957)));
          TNode<FixedDoubleArray> t3959 = UncheckedCast<FixedDoubleArray>(Extract18ATFixedDoubleArray(implicit_cast<TNode<FixedArrayBase>>((*elements_1201)), implicit_cast<TNode<Smi>>(t3958), implicit_cast<TNode<Smi>>(p_actualStart), implicit_cast<TNode<Smi>>(p_newLength)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t3959));
          *newElements_539 = implicit_cast<TNode<FixedArrayBase>>(t3959);
          // ../../src/builtins/array-splice.tq:41:7
          {
            Label label__True_1350_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1350 = &label__True_1350_impl;
            USE(label__True_1350);
            Label label__False_1351_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1351 = &label__False_1351_impl;
            USE(label__False_1351);
            TNode<BoolT> t3960 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_1202)), implicit_cast<TNode<Object>>(kCOWMap())));
            USE(implicit_cast<TNode<BoolT>>(t3960));
            Branch(implicit_cast<TNode<BoolT>>(t3960), label__True_1350, label__False_1351);
            if (label__True_1350->is_used())
            {
              BIND(label__True_1350);
              // ../../src/builtins/array-splice.tq:41:35
              {
                // ../../src/builtins/array-splice.tq:42:9
                StoreMap(implicit_cast<TNode<HeapObject>>((*newElements_539).value()), implicit_cast<TNode<Map>>((*elementsMap_1202)));
              }
              Goto(label__False_1351);
            }
            BIND(label__False_1351);
          }
          // ../../src/builtins/array-splice.tq:44:7
          StoreElements(implicit_cast<TNode<JSObject>>(p_a), implicit_cast<TNode<FixedArrayBase>>((*newElements_539).value()));
        }
        Goto(label__False_1348);
      }
      BIND(label__False_1348);
    }
    // ../../src/builtins/array-splice.tq:48:5
    TVARIABLE(Smi, k_540_impl);
    auto k_540 = &k_540_impl;
    USE(k_540);
    *k_540 = implicit_cast<TNode<Smi>>(p_actualStart);
    // ../../src/builtins/array-splice.tq:49:5
    {
      Label label__True_1352_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1352 = &label__True_1352_impl;
      USE(label__True_1352);
      Label label__False_1353_impl(this, {k_540}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1353 = &label__False_1353_impl;
      USE(label__False_1353);
      int31_t t3961 = 0;
      TNode<Smi> t3962 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3961)));
      TNode<BoolT> t3963 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>(t3962)));
      USE(implicit_cast<TNode<BoolT>>(t3963));
      Branch(implicit_cast<TNode<BoolT>>(t3963), label__True_1352, label__False_1353);
      if (label__True_1352->is_used())
      {
        BIND(label__True_1352);
        // ../../src/builtins/array-splice.tq:49:26
        {
          // ../../src/builtins/array-splice.tq:50:7
          TNode<FixedDoubleArray> t3964 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>((*newElements_539).value())));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t3964));
          TNode<FixedDoubleArray> typedNewElements_1203_impl;
          auto typedNewElements_1203 = &typedNewElements_1203_impl;
          USE(typedNewElements_1203);
          *typedNewElements_1203 = implicit_cast<TNode<FixedDoubleArray>>(t3964);
          // ../../src/builtins/array-splice.tq:52:7
          int31_t t3965 = 2;
          TNode<IntPtrT> t3966 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_1204_1942_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_body_1204_1942 = &label_body_1204_1942_impl;
          USE(label_body_1204_1942);
          Label label_increment_1205_1943_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_increment_1205_1943 = &label_increment_1205_1943_impl;
          USE(label_increment_1205_1943);
          Label label_exit_1206_1944_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_exit_1206_1944 = &label_exit_1206_1944_impl;
          USE(label_exit_1206_1944);
          TVARIABLE(IntPtrT, _for_index_t3967_1207_impl);
          auto _for_index_t3967_1207 = &_for_index_t3967_1207_impl;
          USE(_for_index_t3967_1207);
          TNode<IntPtrT> t3968 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t3965)));
          *_for_index_t3967_1207 = implicit_cast<TNode<IntPtrT>>(t3968);
          Label label_header_1208_1945_impl(this, {_for_index_t3967_1207, k_540}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_1208_1945 = &label_header_1208_1945_impl;
          USE(label_header_1208_1945);
          Goto(label_header_1208_1945);
          BIND(label_header_1208_1945);
          TNode<BoolT> t3969 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t3967_1207).value()), implicit_cast<TNode<IntPtrT>>(t3966)));
          Branch(implicit_cast<TNode<BoolT>>(t3969), label_body_1204_1942, label_exit_1206_1944);
          BIND(label_body_1204_1942);
          TNode<Object> t3970 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t3967_1207).value())));
          TVARIABLE(Object, e_541_impl);
          auto e_541 = &e_541_impl;
          USE(e_541);
          *e_541 = implicit_cast<TNode<Object>>(t3970);
          // ../../src/builtins/array-splice.tq:52:41
          {
            // ../../src/builtins/array-splice.tq:55:9
            TNode<Smi> t3971 = implicit_cast<TNode<Smi>>((*k_540).value());
            USE(t3971);
            TNode<Smi> t3972 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t3973 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_540).value()), implicit_cast<TNode<Smi>>(t3972)));
            *k_540 = implicit_cast<TNode<Smi>>(t3973);
            TNode<Number> t3974 = UncheckedCast<Number>(UnsafeCast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>((*e_541).value())));
            USE(implicit_cast<TNode<Number>>(t3974));
            StoreFixedDoubleArrayNumber(implicit_cast<TNode<FixedDoubleArray>>((*typedNewElements_1203)), implicit_cast<TNode<Smi>>(t3971), implicit_cast<TNode<Number>>(t3974));
          }
          Goto(label_increment_1205_1943);
          BIND(label_increment_1205_1943);
          TNode<IntPtrT> t3975 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t3976 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t3967_1207).value()), implicit_cast<TNode<IntPtrT>>(t3975)));
          *_for_index_t3967_1207 = implicit_cast<TNode<IntPtrT>>(t3976);
          Goto(label_header_1208_1945);
          BIND(label_exit_1206_1944);
        }
        Goto(label__False_1353);
      }
      BIND(label__False_1353);
    }
    // ../../src/builtins/array-splice.tq:60:5
    TNode<Smi> t3977 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_actualStart)));
    USE(implicit_cast<TNode<Smi>>(t3977));
    TNode<Smi> t3978 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3977), implicit_cast<TNode<Smi>>(p_actualDeleteCount)));
    USE(implicit_cast<TNode<Smi>>(t3978));
    TVARIABLE(Smi, count_542_impl);
    auto count_542 = &count_542_impl;
    USE(count_542);
    *count_542 = implicit_cast<TNode<Smi>>(t3978);
    // ../../src/builtins/array-splice.tq:61:5
    {
      Label label__True_1354_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1354 = &label__True_1354_impl;
      USE(label__True_1354);
      Label label__False_1355_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1355 = &label__False_1355_impl;
      USE(label__False_1355);
      Label label_header_1209_1946_impl(this, {count_542, k_540}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_1209_1946 = &label_header_1209_1946_impl;
      USE(label_header_1209_1946);
      Goto(label_header_1209_1946);
      BIND(label_header_1209_1946);
      int31_t t3979 = 0;
      TNode<Smi> t3980 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t3979)));
      TNode<BoolT> t3981 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*count_542).value()), implicit_cast<TNode<Smi>>(t3980)));
      USE(implicit_cast<TNode<BoolT>>(t3981));
      Branch(implicit_cast<TNode<BoolT>>(t3981), label__True_1354, label__False_1355);
      if (label__True_1354->is_used())
      {
        BIND(label__True_1354);
        // ../../src/builtins/array-splice.tq:61:23
        {
          // ../../src/builtins/array-splice.tq:62:7
          TNode<FixedDoubleArray> t3982 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>((*elements_1201))));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t3982));
          TNode<FixedDoubleArray> typedElements_1210_impl;
          auto typedElements_1210 = &typedElements_1210_impl;
          USE(typedElements_1210);
          *typedElements_1210 = implicit_cast<TNode<FixedDoubleArray>>(t3982);
          // ../../src/builtins/array-splice.tq:64:7
          TNode<FixedDoubleArray> t3983 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>((*newElements_539).value())));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t3983));
          TNode<FixedDoubleArray> typedNewElements_1211_impl;
          auto typedNewElements_1211 = &typedNewElements_1211_impl;
          USE(typedNewElements_1211);
          *typedNewElements_1211 = implicit_cast<TNode<FixedDoubleArray>>(t3983);
          // ../../src/builtins/array-splice.tq:66:7
          TNode<Smi> t3984 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_540).value()), implicit_cast<TNode<Smi>>(p_lengthDelta)));
          USE(implicit_cast<TNode<Smi>>(t3984));
          CopyArrayElement(implicit_cast<TNode<FixedDoubleArray>>((*typedElements_1210)), implicit_cast<TNode<FixedDoubleArray>>((*typedNewElements_1211)), implicit_cast<TNode<Smi>>(t3984), implicit_cast<TNode<Smi>>((*k_540).value()));
          // ../../src/builtins/array-splice.tq:67:7
          TNode<Smi> t3985 = implicit_cast<TNode<Smi>>((*k_540).value());
          USE(t3985);
          TNode<Smi> t3986 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3987 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_540).value()), implicit_cast<TNode<Smi>>(t3986)));
          *k_540 = implicit_cast<TNode<Smi>>(t3987);
          // ../../src/builtins/array-splice.tq:68:7
          TNode<Smi> t3988 = implicit_cast<TNode<Smi>>((*count_542).value());
          USE(t3988);
          TNode<Smi> t3989 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3990 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*count_542).value()), implicit_cast<TNode<Smi>>(t3989)));
          *count_542 = implicit_cast<TNode<Smi>>(t3990);
        }
        Goto(label_header_1209_1946);
      }
      BIND(label__False_1355);
    }
    // ../../src/builtins/array-splice.tq:74:5
    {
      Label label__True_1356_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1356 = &label__True_1356_impl;
      USE(label__True_1356);
      Label label__False_1357_impl(this, {k_540}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1357 = &label__False_1357_impl;
      USE(label__False_1357);
      TNode<BoolT> t3991 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elements_1201)), implicit_cast<TNode<Object>>((*newElements_539).value())));
      USE(implicit_cast<TNode<BoolT>>(t3991));
      Branch(implicit_cast<TNode<BoolT>>(t3991), label__True_1356, label__False_1357);
      if (label__True_1356->is_used())
      {
        BIND(label__True_1356);
        // ../../src/builtins/array-splice.tq:74:34
        {
          // ../../src/builtins/array-splice.tq:75:7
          TNode<FixedDoubleArray> t3992 = UncheckedCast<FixedDoubleArray>(UnsafeCast18ATFixedDoubleArray(implicit_cast<TNode<Object>>((*newElements_539).value())));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t3992));
          TNode<FixedDoubleArray> typedNewElements_1212_impl;
          auto typedNewElements_1212 = &typedNewElements_1212_impl;
          USE(typedNewElements_1212);
          *typedNewElements_1212 = implicit_cast<TNode<FixedDoubleArray>>(t3992);
          // ../../src/builtins/array-splice.tq:77:7
          TNode<Smi> t3993 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*elements_1201))));
          TNode<Smi> limit_1213_impl;
          auto limit_1213 = &limit_1213_impl;
          USE(limit_1213);
          *limit_1213 = implicit_cast<TNode<Smi>>(t3993);
          // ../../src/builtins/array-splice.tq:78:7
          {
            Label label__True_1358_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_1358 = &label__True_1358_impl;
            USE(label__True_1358);
            Label label__False_1359_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_1359 = &label__False_1359_impl;
            USE(label__False_1359);
            Label label_header_1214_1947_impl(this, {k_540}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_header_1214_1947 = &label_header_1214_1947_impl;
            USE(label_header_1214_1947);
            Goto(label_header_1214_1947);
            BIND(label_header_1214_1947);
            TNode<BoolT> t3994 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_540).value()), implicit_cast<TNode<Smi>>((*limit_1213))));
            USE(implicit_cast<TNode<BoolT>>(t3994));
            Branch(implicit_cast<TNode<BoolT>>(t3994), label__True_1358, label__False_1359);
            if (label__True_1358->is_used())
            {
              BIND(label__True_1358);
              // ../../src/builtins/array-splice.tq:78:25
              {
                // ../../src/builtins/array-splice.tq:79:9
                StoreArrayHole(implicit_cast<TNode<FixedDoubleArray>>((*typedNewElements_1212)), implicit_cast<TNode<Smi>>((*k_540).value()));
                // ../../src/builtins/array-splice.tq:80:9
                TNode<Smi> t3995 = implicit_cast<TNode<Smi>>((*k_540).value());
                USE(t3995);
                TNode<Smi> t3996 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3997 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_540).value()), implicit_cast<TNode<Smi>>(t3996)));
                *k_540 = implicit_cast<TNode<Smi>>(t3997);
              }
              Goto(label_header_1214_1947);
            }
            BIND(label__False_1359);
          }
        }
        Goto(label__False_1357);
      }
      BIND(label__False_1357);
    }
    // ../../src/builtins/array-splice.tq:85:5
    StoreJSArrayLength(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>(p_newLength));
  }
}

TF_BUILTIN(Load25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:129:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:130:5
    TNode<Object> t4077 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t4077));
    Return(implicit_cast<TNode<Object>>(t4077));
  }
}

TF_BUILTIN(Store25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:198:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:199:5
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:200:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATFastDoubleElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1959_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1959 = &label_macro_end_1959_impl;
  USE(label_macro_end_1959);
  // ../../third_party/v8/builtins/array-sort.tq:1635:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:1636:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1639:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATFastDoubleElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor23ATFastPackedSmiElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1960_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1960 = &label_macro_end_1960_impl;
  USE(label_macro_end_1960);
  // ../../third_party/v8/builtins/array-sort.tq:1635:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:1636:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1639:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor23ATFastPackedSmiElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATFastSmiOrObjectElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1961_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1961 = &label_macro_end_1961_impl;
  USE(label_macro_end_1961);
  // ../../third_party/v8/builtins/array-sort.tq:1635:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:1636:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1639:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATFastSmiOrObjectElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATDictionaryElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1962_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1962 = &label_macro_end_1962_impl;
  USE(label_macro_end_1962);
  // ../../third_party/v8/builtins/array-sort.tq:1635:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:1636:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1639:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATDictionaryElements).code())));
  }
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::Extract12ATFixedArray(TNode<FixedArrayBase> p_elements, TNode<Smi> p_first, TNode<Smi> p_count, TNode<Smi> p_capacity) {
  TVARIABLE(FixedArray, _return_555_impl);
  auto _return_555 = &_return_555_impl;
  USE(_return_555);
  Label label_macro_end_1963_impl(this, {_return_555}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1963 = &label_macro_end_1963_impl;
  USE(label_macro_end_1963);
  // ../../src/builtins/array-splice.tq:12:38
  {
    // ../../src/builtins/array-splice.tq:13:5
    TNode<FixedArrayBase> t4078 = UncheckedCast<FixedArrayBase>(ExtractFixedArray(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>(p_first), implicit_cast<TNode<Smi>>(p_count), implicit_cast<TNode<Smi>>(p_capacity)));
    USE(implicit_cast<TNode<FixedArrayBase>>(t4078));
    TNode<FixedArray> t4079 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(implicit_cast<TNode<Object>>(t4078)));
    USE(implicit_cast<TNode<FixedArray>>(t4079));
    *_return_555 = implicit_cast<TNode<FixedArray>>(t4079);
    Goto(label_macro_end_1963);
  }
  BIND(label_macro_end_1963);
  return implicit_cast<TNode<FixedArray>>((*_return_555).value());
}

TF_BUILTIN(CanUseSameAccessor20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:327:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:328:5
    Label label__True_1364_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1364 = &label__True_1364_impl;
    USE(label__True_1364);
    Label label__False_1365_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1365 = &label__False_1365_impl;
    USE(label__False_1365);
    TNode<BoolT> t4080 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>(p_receiver)));
    USE(implicit_cast<TNode<BoolT>>(t4080));
    Branch(implicit_cast<TNode<BoolT>>(t4080), label__True_1364, label__False_1365);
    BIND(label__False_1365);
    Print("assert 'IsJSArray(receiver)' failed at ../../third_party/v8/builtins/array-sort.tq:328:5");
    Unreachable();
    BIND(label__True_1364);
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    TNode<JSArray> t4081 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t4081));
    TVARIABLE(JSArray, a_556_impl);
    auto a_556 = &a_556_impl;
    USE(a_556);
    *a_556 = implicit_cast<TNode<JSArray>>(t4081);
    // ../../third_party/v8/builtins/array-sort.tq:331:5
    {
      Label label__True_1366_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1366 = &label__True_1366_impl;
      USE(label__True_1366);
      Label label__False_1367_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1367 = &label__False_1367_impl;
      USE(label__False_1367);
      TNode<Map> t4082 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_556).value())));
      TNode<BoolT> t4083 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t4082), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t4083));
      Branch(implicit_cast<TNode<BoolT>>(t4083), label__True_1366, label__False_1367);
      if (label__True_1366->is_used())
      {
        BIND(label__True_1366);
        // ../../third_party/v8/builtins/array-sort.tq:331:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1367);
    }
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    Label label__True_1368_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1368 = &label__True_1368_impl;
    USE(label__True_1368);
    Label label__False_1369_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1369 = &label__False_1369_impl;
    USE(label__False_1369);
    TNode<BoolT> t4084 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<BoolT>>(t4084));
    Branch(implicit_cast<TNode<BoolT>>(t4084), label__True_1368, label__False_1369);
    BIND(label__False_1369);
    Print("assert 'TaggedIsSmi(initialReceiverLength)' failed at ../../third_party/v8/builtins/array-sort.tq:333:5");
    Unreachable();
    BIND(label__True_1368);
    // ../../third_party/v8/builtins/array-sort.tq:334:5
    TNode<Smi> t4085 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t4085));
    TVARIABLE(Smi, originalLength_557_impl);
    auto originalLength_557 = &originalLength_557_impl;
    USE(originalLength_557);
    *originalLength_557 = implicit_cast<TNode<Smi>>(t4085);
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    {
      Label label__True_1370_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1370 = &label__True_1370_impl;
      USE(label__True_1370);
      Label label__False_1371_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1371 = &label__False_1371_impl;
      USE(label__False_1371);
      TNode<Smi> t4086 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_556).value())));
      TNode<BoolT> t4087 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t4086), implicit_cast<TNode<Smi>>((*originalLength_557).value())));
      USE(implicit_cast<TNode<BoolT>>(t4087));
      Branch(implicit_cast<TNode<BoolT>>(t4087), label__True_1370, label__False_1371);
      if (label__True_1370->is_used())
      {
        BIND(label__True_1370);
        // ../../third_party/v8/builtins/array-sort.tq:335:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1371);
    }
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:327:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:328:5
    Label label__True_1372_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1372 = &label__True_1372_impl;
    USE(label__True_1372);
    Label label__False_1373_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1373 = &label__False_1373_impl;
    USE(label__False_1373);
    TNode<BoolT> t4088 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>(p_receiver)));
    USE(implicit_cast<TNode<BoolT>>(t4088));
    Branch(implicit_cast<TNode<BoolT>>(t4088), label__True_1372, label__False_1373);
    BIND(label__False_1373);
    Print("assert 'IsJSArray(receiver)' failed at ../../third_party/v8/builtins/array-sort.tq:328:5");
    Unreachable();
    BIND(label__True_1372);
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    TNode<JSArray> t4089 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t4089));
    TVARIABLE(JSArray, a_558_impl);
    auto a_558 = &a_558_impl;
    USE(a_558);
    *a_558 = implicit_cast<TNode<JSArray>>(t4089);
    // ../../third_party/v8/builtins/array-sort.tq:331:5
    {
      Label label__True_1374_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1374 = &label__True_1374_impl;
      USE(label__True_1374);
      Label label__False_1375_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1375 = &label__False_1375_impl;
      USE(label__False_1375);
      TNode<Map> t4090 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_558).value())));
      TNode<BoolT> t4091 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t4090), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t4091));
      Branch(implicit_cast<TNode<BoolT>>(t4091), label__True_1374, label__False_1375);
      if (label__True_1374->is_used())
      {
        BIND(label__True_1374);
        // ../../third_party/v8/builtins/array-sort.tq:331:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1375);
    }
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    Label label__True_1376_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1376 = &label__True_1376_impl;
    USE(label__True_1376);
    Label label__False_1377_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1377 = &label__False_1377_impl;
    USE(label__False_1377);
    TNode<BoolT> t4092 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<BoolT>>(t4092));
    Branch(implicit_cast<TNode<BoolT>>(t4092), label__True_1376, label__False_1377);
    BIND(label__False_1377);
    Print("assert 'TaggedIsSmi(initialReceiverLength)' failed at ../../third_party/v8/builtins/array-sort.tq:333:5");
    Unreachable();
    BIND(label__True_1376);
    // ../../third_party/v8/builtins/array-sort.tq:334:5
    TNode<Smi> t4093 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t4093));
    TVARIABLE(Smi, originalLength_559_impl);
    auto originalLength_559 = &originalLength_559_impl;
    USE(originalLength_559);
    *originalLength_559 = implicit_cast<TNode<Smi>>(t4093);
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    {
      Label label__True_1378_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1378 = &label__True_1378_impl;
      USE(label__True_1378);
      Label label__False_1379_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1379 = &label__False_1379_impl;
      USE(label__False_1379);
      TNode<Smi> t4094 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_558).value())));
      TNode<BoolT> t4095 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t4094), implicit_cast<TNode<Smi>>((*originalLength_559).value())));
      USE(implicit_cast<TNode<BoolT>>(t4095));
      Branch(implicit_cast<TNode<BoolT>>(t4095), label__True_1378, label__False_1379);
      if (label__True_1378->is_used())
      {
        BIND(label__True_1378);
        // ../../third_party/v8/builtins/array-sort.tq:335:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1379);
    }
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:327:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:328:5
    Label label__True_1380_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1380 = &label__True_1380_impl;
    USE(label__True_1380);
    Label label__False_1381_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1381 = &label__False_1381_impl;
    USE(label__False_1381);
    TNode<BoolT> t4096 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>(p_receiver)));
    USE(implicit_cast<TNode<BoolT>>(t4096));
    Branch(implicit_cast<TNode<BoolT>>(t4096), label__True_1380, label__False_1381);
    BIND(label__False_1381);
    Print("assert 'IsJSArray(receiver)' failed at ../../third_party/v8/builtins/array-sort.tq:328:5");
    Unreachable();
    BIND(label__True_1380);
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    TNode<JSArray> t4097 = UncheckedCast<JSArray>(UnsafeCast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t4097));
    TVARIABLE(JSArray, a_560_impl);
    auto a_560 = &a_560_impl;
    USE(a_560);
    *a_560 = implicit_cast<TNode<JSArray>>(t4097);
    // ../../third_party/v8/builtins/array-sort.tq:331:5
    {
      Label label__True_1382_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1382 = &label__True_1382_impl;
      USE(label__True_1382);
      Label label__False_1383_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1383 = &label__False_1383_impl;
      USE(label__False_1383);
      TNode<Map> t4098 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_560).value())));
      TNode<BoolT> t4099 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t4098), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t4099));
      Branch(implicit_cast<TNode<BoolT>>(t4099), label__True_1382, label__False_1383);
      if (label__True_1382->is_used())
      {
        BIND(label__True_1382);
        // ../../third_party/v8/builtins/array-sort.tq:331:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1383);
    }
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    Label label__True_1384_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_1384 = &label__True_1384_impl;
    USE(label__True_1384);
    Label label__False_1385_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_1385 = &label__False_1385_impl;
    USE(label__False_1385);
    TNode<BoolT> t4100 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<BoolT>>(t4100));
    Branch(implicit_cast<TNode<BoolT>>(t4100), label__True_1384, label__False_1385);
    BIND(label__False_1385);
    Print("assert 'TaggedIsSmi(initialReceiverLength)' failed at ../../third_party/v8/builtins/array-sort.tq:333:5");
    Unreachable();
    BIND(label__True_1384);
    // ../../third_party/v8/builtins/array-sort.tq:334:5
    TNode<Smi> t4101 = UncheckedCast<Smi>(UnsafeCast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t4101));
    TVARIABLE(Smi, originalLength_561_impl);
    auto originalLength_561 = &originalLength_561_impl;
    USE(originalLength_561);
    *originalLength_561 = implicit_cast<TNode<Smi>>(t4101);
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    {
      Label label__True_1386_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_1386 = &label__True_1386_impl;
      USE(label__True_1386);
      Label label__False_1387_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_1387 = &label__False_1387_impl;
      USE(label__False_1387);
      TNode<Smi> t4102 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_560).value())));
      TNode<BoolT> t4103 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t4102), implicit_cast<TNode<Smi>>((*originalLength_561).value())));
      USE(implicit_cast<TNode<BoolT>>(t4103));
      Branch(implicit_cast<TNode<BoolT>>(t4103), label__True_1386, label__False_1387);
      if (label__True_1386->is_used())
      {
        BIND(label__True_1386);
        // ../../third_party/v8/builtins/array-sort.tq:335:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_1387);
    }
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

}  // namespace internal
}  // namespace v8

