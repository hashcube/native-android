#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-typed-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  ElementsKind _return_124_impl;
  auto _return_124 = &_return_124_impl;
  USE(_return_124);
  Label label_macro_end_1568_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1568 = &label_macro_end_1568_impl;
  USE(label_macro_end_1568);
  // ../../src/builtins/typed-array.tq:20:63
  {
    // ../../src/builtins/typed-array.tq:21:5
    *_return_124 = implicit_cast<ElementsKind>(UINT8_ELEMENTS);
    Goto(label_macro_end_1568);
  }
  BIND(label_macro_end_1568);
  return implicit_cast<ElementsKind>((*_return_124));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  ElementsKind _return_125_impl;
  auto _return_125 = &_return_125_impl;
  USE(_return_125);
  Label label_macro_end_1569_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1569 = &label_macro_end_1569_impl;
  USE(label_macro_end_1569);
  // ../../src/builtins/typed-array.tq:23:62
  {
    // ../../src/builtins/typed-array.tq:24:5
    *_return_125 = implicit_cast<ElementsKind>(INT8_ELEMENTS);
    Goto(label_macro_end_1569);
  }
  BIND(label_macro_end_1569);
  return implicit_cast<ElementsKind>((*_return_125));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  ElementsKind _return_126_impl;
  auto _return_126 = &_return_126_impl;
  USE(_return_126);
  Label label_macro_end_1570_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1570 = &label_macro_end_1570_impl;
  USE(label_macro_end_1570);
  // ../../src/builtins/typed-array.tq:26:64
  {
    // ../../src/builtins/typed-array.tq:27:5
    *_return_126 = implicit_cast<ElementsKind>(UINT16_ELEMENTS);
    Goto(label_macro_end_1570);
  }
  BIND(label_macro_end_1570);
  return implicit_cast<ElementsKind>((*_return_126));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  ElementsKind _return_127_impl;
  auto _return_127 = &_return_127_impl;
  USE(_return_127);
  Label label_macro_end_1571_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1571 = &label_macro_end_1571_impl;
  USE(label_macro_end_1571);
  // ../../src/builtins/typed-array.tq:29:63
  {
    // ../../src/builtins/typed-array.tq:30:5
    *_return_127 = implicit_cast<ElementsKind>(INT16_ELEMENTS);
    Goto(label_macro_end_1571);
  }
  BIND(label_macro_end_1571);
  return implicit_cast<ElementsKind>((*_return_127));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  ElementsKind _return_128_impl;
  auto _return_128 = &_return_128_impl;
  USE(_return_128);
  Label label_macro_end_1572_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1572 = &label_macro_end_1572_impl;
  USE(label_macro_end_1572);
  // ../../src/builtins/typed-array.tq:32:64
  {
    // ../../src/builtins/typed-array.tq:33:5
    *_return_128 = implicit_cast<ElementsKind>(UINT32_ELEMENTS);
    Goto(label_macro_end_1572);
  }
  BIND(label_macro_end_1572);
  return implicit_cast<ElementsKind>((*_return_128));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  ElementsKind _return_129_impl;
  auto _return_129 = &_return_129_impl;
  USE(_return_129);
  Label label_macro_end_1573_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1573 = &label_macro_end_1573_impl;
  USE(label_macro_end_1573);
  // ../../src/builtins/typed-array.tq:35:63
  {
    // ../../src/builtins/typed-array.tq:36:5
    *_return_129 = implicit_cast<ElementsKind>(INT32_ELEMENTS);
    Goto(label_macro_end_1573);
  }
  BIND(label_macro_end_1573);
  return implicit_cast<ElementsKind>((*_return_129));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  ElementsKind _return_130_impl;
  auto _return_130 = &_return_130_impl;
  USE(_return_130);
  Label label_macro_end_1574_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1574 = &label_macro_end_1574_impl;
  USE(label_macro_end_1574);
  // ../../src/builtins/typed-array.tq:38:65
  {
    // ../../src/builtins/typed-array.tq:39:5
    *_return_130 = implicit_cast<ElementsKind>(FLOAT32_ELEMENTS);
    Goto(label_macro_end_1574);
  }
  BIND(label_macro_end_1574);
  return implicit_cast<ElementsKind>((*_return_130));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  ElementsKind _return_131_impl;
  auto _return_131 = &_return_131_impl;
  USE(_return_131);
  Label label_macro_end_1575_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1575 = &label_macro_end_1575_impl;
  USE(label_macro_end_1575);
  // ../../src/builtins/typed-array.tq:41:65
  {
    // ../../src/builtins/typed-array.tq:42:5
    *_return_131 = implicit_cast<ElementsKind>(FLOAT64_ELEMENTS);
    Goto(label_macro_end_1575);
  }
  BIND(label_macro_end_1575);
  return implicit_cast<ElementsKind>((*_return_131));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  ElementsKind _return_132_impl;
  auto _return_132 = &_return_132_impl;
  USE(_return_132);
  Label label_macro_end_1576_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1576 = &label_macro_end_1576_impl;
  USE(label_macro_end_1576);
  // ../../src/builtins/typed-array.tq:44:70
  {
    // ../../src/builtins/typed-array.tq:45:5
    *_return_132 = implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS);
    Goto(label_macro_end_1576);
  }
  BIND(label_macro_end_1576);
  return implicit_cast<ElementsKind>((*_return_132));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  ElementsKind _return_133_impl;
  auto _return_133 = &_return_133_impl;
  USE(_return_133);
  Label label_macro_end_1577_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1577 = &label_macro_end_1577_impl;
  USE(label_macro_end_1577);
  // ../../src/builtins/typed-array.tq:47:67
  {
    // ../../src/builtins/typed-array.tq:48:5
    *_return_133 = implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS);
    Goto(label_macro_end_1577);
  }
  BIND(label_macro_end_1577);
  return implicit_cast<ElementsKind>((*_return_133));
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  ElementsKind _return_134_impl;
  auto _return_134 = &_return_134_impl;
  USE(_return_134);
  Label label_macro_end_1578_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1578 = &label_macro_end_1578_impl;
  USE(label_macro_end_1578);
  // ../../src/builtins/typed-array.tq:50:66
  {
    // ../../src/builtins/typed-array.tq:51:5
    *_return_134 = implicit_cast<ElementsKind>(BIGINT64_ELEMENTS);
    Goto(label_macro_end_1578);
  }
  BIND(label_macro_end_1578);
  return implicit_cast<ElementsKind>((*_return_134));
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_205) {
  TVARIABLE(Number, _return_135_impl);
  auto _return_135 = &_return_135_impl;
  USE(_return_135);
  Label label_macro_end_1579_impl(this, {_return_135}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1579 = &label_macro_end_1579_impl;
  USE(label_macro_end_1579);
  // ../../src/builtins/typed-array.tq:73:23
  {
    // ../../src/builtins/typed-array.tq:75:5
    TNode<Object> t584 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_a), implicit_cast<TNode<Object>>(p_b)));
    USE(implicit_cast<TNode<Object>>(t584));
    TNode<Number> t585 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t584)));
    USE(implicit_cast<TNode<Number>>(t585));
    TNode<Number> v_746_impl;
    auto v_746 = &v_746_impl;
    USE(v_746);
    *v_746 = implicit_cast<TNode<Number>>(t585);
    // ../../src/builtins/typed-array.tq:79:5
    {
      Label label__True_206_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_206 = &label__True_206_impl;
      USE(label__True_206);
      Label label__False_207_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_207 = &label__False_207_impl;
      USE(label__False_207);
      TNode<JSArrayBuffer> t586 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t587 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t586)));
      USE(implicit_cast<TNode<BoolT>>(t587));
      Branch(implicit_cast<TNode<BoolT>>(t587), label__True_206, label__False_207);
      if (label__True_206->is_used())
      {
        BIND(label__True_206);
        // ../../src/builtins/typed-array.tq:79:41
        Goto(label_Detached_205);
      }
      BIND(label__False_207);
    }
    // ../../src/builtins/typed-array.tq:82:5
    {
      Label label__True_208_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_208 = &label__True_208_impl;
      USE(label__True_208);
      Label label__False_209_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_209 = &label__False_209_impl;
      USE(label__False_209);
      TNode<BoolT> t588 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_746))));
      USE(implicit_cast<TNode<BoolT>>(t588));
      Branch(implicit_cast<TNode<BoolT>>(t588), label__True_208, label__False_209);
      if (label__True_208->is_used())
      {
        BIND(label__True_208);
        // ../../src/builtins/typed-array.tq:82:25
        int31_t t589 = 0;
        TNode<Number> t590 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t589)));
        *_return_135 = implicit_cast<TNode<Number>>(t590);
        Goto(label_macro_end_1579);
      }
      BIND(label__False_209);
    }
    // ../../src/builtins/typed-array.tq:85:5
    *_return_135 = implicit_cast<TNode<Number>>((*v_746));
    Goto(label_macro_end_1579);
  }
  BIND(label_macro_end_1579);
  return implicit_cast<TNode<Number>>((*_return_135).value());
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_fromArg, TNode<Smi> p_toArg, TNode<JSReceiver> p_comparefn, TNode<Code> p_load, TNode<Code> p_store, Label* label_Detached_210) {
  Label label_macro_end_1580_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1580 = &label_macro_end_1580_impl;
  USE(label_macro_end_1580);
  // ../../src/builtins/typed-array.tq:92:19
  {
    // ../../src/builtins/typed-array.tq:93:5
    TVARIABLE(Smi, from_136_impl);
    auto from_136 = &from_136_impl;
    USE(from_136);
    *from_136 = implicit_cast<TNode<Smi>>(p_fromArg);
    // ../../src/builtins/typed-array.tq:94:5
    TVARIABLE(Smi, to_137_impl);
    auto to_137 = &to_137_impl;
    USE(to_137);
    *to_137 = implicit_cast<TNode<Smi>>(p_toArg);
    // ../../src/builtins/typed-array.tq:96:5
    {
      Label label__True_211_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_211 = &label__True_211_impl;
      USE(label__True_211);
      Label label__False_212_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_212 = &label__False_212_impl;
      USE(label__False_212);
      TNode<JSArrayBuffer> t591 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
      TNode<BoolT> t592 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t591)));
      USE(implicit_cast<TNode<BoolT>>(t592));
      Branch(implicit_cast<TNode<BoolT>>(t592), label__True_211, label__False_212);
      if (label__True_211->is_used())
      {
        BIND(label__True_211);
        // ../../src/builtins/typed-array.tq:96:41
        Goto(label_Detached_210);
      }
      BIND(label__False_212);
    }
    // ../../src/builtins/typed-array.tq:98:5
    int31_t t593 = 1;
    TNode<Smi> t594 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t593)));
    TNode<Smi> t595 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_136).value()), implicit_cast<TNode<Smi>>(t594)));
    USE(implicit_cast<TNode<Smi>>(t595));
    TVARIABLE(Smi, i_138_impl);
    auto i_138 = &i_138_impl;
    USE(i_138);
    *i_138 = implicit_cast<TNode<Smi>>(t595);
    Label label__True_213_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__True_213 = &label__True_213_impl;
    USE(label__True_213);
    Label label__False_214_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label__False_214 = &label__False_214_impl;
    USE(label__False_214);
    Label label_header_747_1581_impl(this, {i_138}, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_header_747_1581 = &label_header_747_1581_impl;
    USE(label_header_747_1581);
    Goto(label_header_747_1581);
    BIND(label_header_747_1581);
    Label label_action_748_1582_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Label* label_action_748_1582 = &label_action_748_1582_impl;
    USE(label_action_748_1582);
    TNode<BoolT> t596 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_138).value()), implicit_cast<TNode<Smi>>((*to_137).value())));
    USE(implicit_cast<TNode<BoolT>>(t596));
    Branch(implicit_cast<TNode<BoolT>>(t596), label__True_213, label__False_214);
    if (label__True_213->is_used())
    {
      BIND(label__True_213);
      // ../../src/builtins/typed-array.tq:98:46
      {
        // ../../src/builtins/typed-array.tq:99:7
        TNode<Object> t597 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*i_138).value())));
        USE(implicit_cast<TNode<Object>>(t597));
        TNode<Object> element_749_impl;
        auto element_749 = &element_749_impl;
        USE(element_749);
        *element_749 = implicit_cast<TNode<Object>>(t597);
        // ../../src/builtins/typed-array.tq:100:7
        int31_t t598 = 1;
        TNode<Smi> t599 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t598)));
        TNode<Smi> t600 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*i_138).value()), implicit_cast<TNode<Smi>>(t599)));
        USE(implicit_cast<TNode<Smi>>(t600));
        TVARIABLE(Smi, j_139_impl);
        auto j_139 = &j_139_impl;
        USE(j_139);
        *j_139 = implicit_cast<TNode<Smi>>(t600);
        // ../../src/builtins/typed-array.tq:101:7
        Label label__True_215_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__True_215 = &label__True_215_impl;
        USE(label__True_215);
        Label label__False_216_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label__False_216 = &label__False_216_impl;
        USE(label__False_216);
        Label label_header_750_1583_impl(this, {j_139}, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_header_750_1583 = &label_header_750_1583_impl;
        USE(label_header_750_1583);
        Goto(label_header_750_1583);
        BIND(label_header_750_1583);
        Label label_action_751_1584_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
        Label* label_action_751_1584 = &label_action_751_1584_impl;
        USE(label_action_751_1584);
        TNode<BoolT> t601 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*j_139).value()), implicit_cast<TNode<Smi>>((*from_136).value())));
        USE(implicit_cast<TNode<BoolT>>(t601));
        Branch(implicit_cast<TNode<BoolT>>(t601), label__True_215, label__False_216);
        if (label__True_215->is_used())
        {
          BIND(label__True_215);
          // ../../src/builtins/typed-array.tq:101:30
          {
            // ../../src/builtins/typed-array.tq:102:9
            TNode<Object> t602 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*j_139).value())));
            USE(implicit_cast<TNode<Object>>(t602));
            TNode<Object> tmp_752_impl;
            auto tmp_752 = &tmp_752_impl;
            USE(tmp_752);
            *tmp_752 = implicit_cast<TNode<Object>>(t602);
            // ../../src/builtins/typed-array.tq:103:9
            TNode<Number> t603 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*tmp_752)), implicit_cast<TNode<Object>>((*element_749)), label_Detached_210));
            USE(implicit_cast<TNode<Number>>(t603));
            TNode<Number> order_753_impl;
            auto order_753 = &order_753_impl;
            USE(order_753);
            *order_753 = implicit_cast<TNode<Number>>(t603);
            // ../../src/builtins/typed-array.tq:105:9
            {
              Label label__True_217_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__True_217 = &label__True_217_impl;
              USE(label__True_217);
              Label label__False_218_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label__False_218 = &label__False_218_impl;
              USE(label__False_218);
              Label label_if_done_label_754_1585_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
              Label* label_if_done_label_754_1585 = &label_if_done_label_754_1585_impl;
              USE(label_if_done_label_754_1585);
              int31_t t604 = 0;
              TNode<Number> t605 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t604)));
              BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_753)), implicit_cast<TNode<Number>>(t605), label__True_217, label__False_218);
              if (label__True_217->is_used())
              {
                BIND(label__True_217);
                // ../../src/builtins/typed-array.tq:105:24
                {
                  // ../../src/builtins/typed-array.tq:106:11
                  int31_t t606 = 1;
                  TNode<Smi> t607 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t606)));
                  TNode<Smi> t608 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_139).value()), implicit_cast<TNode<Smi>>(t607)));
                  USE(implicit_cast<TNode<Smi>>(t608));
                  TNode<Object> t609 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t608), implicit_cast<TNode<Object>>((*tmp_752))));
                  USE(implicit_cast<TNode<Object>>(t609));
                }
                Goto(label_if_done_label_754_1585);
              }
              if (label__False_218->is_used())
              {
                BIND(label__False_218);
                // ../../src/builtins/typed-array.tq:107:16
                {
                  // ../../src/builtins/typed-array.tq:108:11
                  Goto(label__False_216);
                }
              }
              BIND(label_if_done_label_754_1585);
            }
          }
          Goto(label_action_751_1584);
        }
        {
          BIND(label_action_751_1584);
          TNode<Smi> t610 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t611 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*j_139).value()), implicit_cast<TNode<Smi>>(t610)));
          *j_139 = implicit_cast<TNode<Smi>>(t611);
          Goto(label_header_750_1583);
        }
        BIND(label__False_216);
        // ../../src/builtins/typed-array.tq:111:7
        int31_t t612 = 1;
        TNode<Smi> t613 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t612)));
        TNode<Smi> t614 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_139).value()), implicit_cast<TNode<Smi>>(t613)));
        USE(implicit_cast<TNode<Smi>>(t614));
        TNode<Object> t615 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t614), implicit_cast<TNode<Object>>((*element_749))));
        USE(implicit_cast<TNode<Object>>(t615));
      }
      Goto(label_action_748_1582);
    }
    {
      BIND(label_action_748_1582);
      TNode<Smi> t616 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t617 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_138).value()), implicit_cast<TNode<Smi>>(t616)));
      *i_138 = implicit_cast<TNode<Smi>>(t617);
      Goto(label_header_747_1581);
    }
    BIND(label__False_214);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_fromArg, TNode<Smi> p_toArg, TNode<JSReceiver> p_comparefn, TNode<Code> p_load, TNode<Code> p_store, Label* label_Detached_219) {
  Label label_macro_end_1586_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1586 = &label_macro_end_1586_impl;
  USE(label_macro_end_1586);
  // ../../src/builtins/typed-array.tq:118:19
  {
    // ../../src/builtins/typed-array.tq:119:5
    TVARIABLE(Smi, from_140_impl);
    auto from_140 = &from_140_impl;
    USE(from_140);
    *from_140 = implicit_cast<TNode<Smi>>(p_fromArg);
    // ../../src/builtins/typed-array.tq:120:5
    TVARIABLE(Smi, to_141_impl);
    auto to_141 = &to_141_impl;
    USE(to_141);
    *to_141 = implicit_cast<TNode<Smi>>(p_toArg);
    // ../../src/builtins/typed-array.tq:122:5
    {
      Label label__True_220_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_220 = &label__True_220_impl;
      USE(label__True_220);
      Label label__False_221_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_221 = &label__False_221_impl;
      USE(label__False_221);
      Label label_header_755_1587_impl(this, {from_140, to_141}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_header_755_1587 = &label_header_755_1587_impl;
      USE(label_header_755_1587);
      Goto(label_header_755_1587);
      BIND(label_header_755_1587);
      TNode<Smi> t618 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>((*from_140).value())));
      USE(implicit_cast<TNode<Smi>>(t618));
      int31_t t619 = 1;
      TNode<Smi> t620 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t619)));
      TNode<BoolT> t621 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t618), implicit_cast<TNode<Smi>>(t620)));
      USE(implicit_cast<TNode<BoolT>>(t621));
      Branch(implicit_cast<TNode<BoolT>>(t621), label__True_220, label__False_221);
      if (label__True_220->is_used())
      {
        BIND(label__True_220);
        // ../../src/builtins/typed-array.tq:122:27
        {
          // ../../src/builtins/typed-array.tq:123:7
          {
            Label label__True_222_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_222 = &label__True_222_impl;
            USE(label__True_222);
            Label label__False_223_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_223 = &label__False_223_impl;
            USE(label__False_223);
            TNode<Smi> t622 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>((*from_140).value())));
            USE(implicit_cast<TNode<Smi>>(t622));
            int31_t t623 = 10;
            TNode<Smi> t624 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t623)));
            TNode<BoolT> t625 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t622), implicit_cast<TNode<Smi>>(t624)));
            USE(implicit_cast<TNode<BoolT>>(t625));
            Branch(implicit_cast<TNode<BoolT>>(t625), label__True_222, label__False_223);
            if (label__True_222->is_used())
            {
              BIND(label__True_222);
              // ../../src/builtins/typed-array.tq:123:28
              {
                // ../../src/builtins/typed-array.tq:127:9
                TypedArrayInsertionSort(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_140).value()), implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Code>>(p_store), label_Detached_219);
                // ../../src/builtins/typed-array.tq:130:9
                Goto(label__False_221);
              }
            }
            BIND(label__False_223);
          }
          // ../../src/builtins/typed-array.tq:135:7
          TNode<Smi> t626 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>((*from_140).value())));
          USE(implicit_cast<TNode<Smi>>(t626));
          int31_t t627 = 1;
          TNode<Smi> t628 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t626), implicit_cast<int31_t>(t627)));
          USE(implicit_cast<TNode<Smi>>(t628));
          TNode<Smi> t629 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_140).value()), implicit_cast<TNode<Smi>>(t628)));
          USE(implicit_cast<TNode<Smi>>(t629));
          TNode<Smi> thirdIndex_756_impl;
          auto thirdIndex_756 = &thirdIndex_756_impl;
          USE(thirdIndex_756);
          *thirdIndex_756 = implicit_cast<TNode<Smi>>(t629);
          // ../../src/builtins/typed-array.tq:137:7
          {
            Label label__True_224_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_224 = &label__True_224_impl;
            USE(label__True_224);
            Label label__False_225_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_225 = &label__False_225_impl;
            USE(label__False_225);
            TNode<JSArrayBuffer> t630 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(implicit_cast<TNode<JSTypedArray>>(p_array)));
            TNode<BoolT> t631 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t630)));
            USE(implicit_cast<TNode<BoolT>>(t631));
            Branch(implicit_cast<TNode<BoolT>>(t631), label__True_224, label__False_225);
            if (label__True_224->is_used())
            {
              BIND(label__True_224);
              // ../../src/builtins/typed-array.tq:137:43
              Goto(label_Detached_219);
            }
            BIND(label__False_225);
          }
          // ../../src/builtins/typed-array.tq:140:7
          TNode<Object> t632 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_140).value())));
          USE(implicit_cast<TNode<Object>>(t632));
          TVARIABLE(Object, v0_142_impl);
          auto v0_142 = &v0_142_impl;
          USE(v0_142);
          *v0_142 = implicit_cast<TNode<Object>>(t632);
          // ../../src/builtins/typed-array.tq:141:7
          int31_t t633 = 1;
          TNode<Smi> t634 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t633)));
          TNode<Smi> t635 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>(t634)));
          USE(implicit_cast<TNode<Smi>>(t635));
          TNode<Object> t636 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t635)));
          USE(implicit_cast<TNode<Object>>(t636));
          TVARIABLE(Object, v1_143_impl);
          auto v1_143 = &v1_143_impl;
          USE(v1_143);
          *v1_143 = implicit_cast<TNode<Object>>(t636);
          // ../../src/builtins/typed-array.tq:142:7
          TNode<Object> t637 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*thirdIndex_756))));
          USE(implicit_cast<TNode<Object>>(t637));
          TVARIABLE(Object, v2_144_impl);
          auto v2_144 = &v2_144_impl;
          USE(v2_144);
          *v2_144 = implicit_cast<TNode<Object>>(t637);
          // ../../src/builtins/typed-array.tq:144:7
          TNode<Number> t638 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_142).value()), implicit_cast<TNode<Object>>((*v1_143).value()), label_Detached_219));
          USE(implicit_cast<TNode<Number>>(t638));
          TNode<Number> c01_757_impl;
          auto c01_757 = &c01_757_impl;
          USE(c01_757);
          *c01_757 = implicit_cast<TNode<Number>>(t638);
          // ../../src/builtins/typed-array.tq:146:7
          {
            Label label__True_226_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_226 = &label__True_226_impl;
            USE(label__True_226);
            Label label__False_227_impl(this, {v0_142, v1_143}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_227 = &label__False_227_impl;
            USE(label__False_227);
            int31_t t639 = 0;
            TNode<Number> t640 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t639)));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c01_757)), implicit_cast<TNode<Number>>(t640), label__True_226, label__False_227);
            if (label__True_226->is_used())
            {
              BIND(label__True_226);
              // ../../src/builtins/typed-array.tq:146:20
              {
                // ../../src/builtins/typed-array.tq:148:9
                TVARIABLE(Object, tmp_145_impl);
                auto tmp_145 = &tmp_145_impl;
                USE(tmp_145);
                *tmp_145 = implicit_cast<TNode<Object>>((*v0_142).value());
                // ../../src/builtins/typed-array.tq:149:9
                *v0_142 = implicit_cast<TNode<Object>>((*v1_143).value());
                // ../../src/builtins/typed-array.tq:150:9
                *v1_143 = implicit_cast<TNode<Object>>((*tmp_145).value());
              }
              Goto(label__False_227);
            }
            BIND(label__False_227);
          }
          // ../../src/builtins/typed-array.tq:153:7
          TNode<Number> t641 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v0_142).value()), implicit_cast<TNode<Object>>((*v2_144).value()), label_Detached_219));
          USE(implicit_cast<TNode<Number>>(t641));
          TNode<Number> c02_758_impl;
          auto c02_758 = &c02_758_impl;
          USE(c02_758);
          *c02_758 = implicit_cast<TNode<Number>>(t641);
          // ../../src/builtins/typed-array.tq:155:7
          {
            Label label__True_228_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_228 = &label__True_228_impl;
            USE(label__True_228);
            Label label__False_229_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_229 = &label__False_229_impl;
            USE(label__False_229);
            Label label_if_done_label_759_1588_impl(this, {v0_142, v1_143, v2_144}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_759_1588 = &label_if_done_label_759_1588_impl;
            USE(label_if_done_label_759_1588);
            int31_t t642 = 0;
            TNode<Number> t643 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t642)));
            BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*c02_758)), implicit_cast<TNode<Number>>(t643), label__True_228, label__False_229);
            if (label__True_228->is_used())
            {
              BIND(label__True_228);
              // ../../src/builtins/typed-array.tq:155:21
              {
                // ../../src/builtins/typed-array.tq:157:9
                TNode<Object> tmp_760_impl;
                auto tmp_760 = &tmp_760_impl;
                USE(tmp_760);
                *tmp_760 = implicit_cast<TNode<Object>>((*v0_142).value());
                // ../../src/builtins/typed-array.tq:158:9
                *v0_142 = implicit_cast<TNode<Object>>((*v2_144).value());
                // ../../src/builtins/typed-array.tq:159:9
                *v2_144 = implicit_cast<TNode<Object>>((*v1_143).value());
                // ../../src/builtins/typed-array.tq:160:9
                *v1_143 = implicit_cast<TNode<Object>>((*tmp_760));
              }
              Goto(label_if_done_label_759_1588);
            }
            if (label__False_229->is_used())
            {
              BIND(label__False_229);
              // ../../src/builtins/typed-array.tq:161:14
              {
                // ../../src/builtins/typed-array.tq:163:9
                TNode<Number> t644 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*v1_143).value()), implicit_cast<TNode<Object>>((*v2_144).value()), label_Detached_219));
                USE(implicit_cast<TNode<Number>>(t644));
                TNode<Number> c12_761_impl;
                auto c12_761 = &c12_761_impl;
                USE(c12_761);
                *c12_761 = implicit_cast<TNode<Number>>(t644);
                // ../../src/builtins/typed-array.tq:165:9
                {
                  Label label__True_230_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_230 = &label__True_230_impl;
                  USE(label__True_230);
                  Label label__False_231_impl(this, {v1_143, v2_144}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_231 = &label__False_231_impl;
                  USE(label__False_231);
                  int31_t t645 = 0;
                  TNode<Number> t646 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t645)));
                  BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*c12_761)), implicit_cast<TNode<Number>>(t646), label__True_230, label__False_231);
                  if (label__True_230->is_used())
                  {
                    BIND(label__True_230);
                    // ../../src/builtins/typed-array.tq:165:22
                    {
                      // ../../src/builtins/typed-array.tq:167:11
                      TNode<Object> tmp_762_impl;
                      auto tmp_762 = &tmp_762_impl;
                      USE(tmp_762);
                      *tmp_762 = implicit_cast<TNode<Object>>((*v1_143).value());
                      // ../../src/builtins/typed-array.tq:168:11
                      *v1_143 = implicit_cast<TNode<Object>>((*v2_144).value());
                      // ../../src/builtins/typed-array.tq:169:11
                      *v2_144 = implicit_cast<TNode<Object>>((*tmp_762));
                    }
                    Goto(label__False_231);
                  }
                  BIND(label__False_231);
                }
              }
              Goto(label_if_done_label_759_1588);
            }
            BIND(label_if_done_label_759_1588);
          }
          // ../../src/builtins/typed-array.tq:174:7
          TNode<Object> t647 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_140).value()), implicit_cast<TNode<Object>>((*v0_142).value())));
          USE(implicit_cast<TNode<Object>>(t647));
          // ../../src/builtins/typed-array.tq:175:7
          int31_t t648 = 1;
          TNode<Smi> t649 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t648)));
          TNode<Smi> t650 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>(t649)));
          USE(implicit_cast<TNode<Smi>>(t650));
          TNode<Object> t651 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(t650), implicit_cast<TNode<Object>>((*v2_144).value())));
          USE(implicit_cast<TNode<Object>>(t651));
          // ../../src/builtins/typed-array.tq:177:7
          TNode<Object> pivot_763_impl;
          auto pivot_763 = &pivot_763_impl;
          USE(pivot_763);
          *pivot_763 = implicit_cast<TNode<Object>>((*v1_143).value());
          // ../../src/builtins/typed-array.tq:178:7
          int31_t t652 = 1;
          TNode<Smi> t653 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t652)));
          TNode<Smi> t654 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*from_140).value()), implicit_cast<TNode<Smi>>(t653)));
          USE(implicit_cast<TNode<Smi>>(t654));
          TVARIABLE(Smi, lowEnd_146_impl);
          auto lowEnd_146 = &lowEnd_146_impl;
          USE(lowEnd_146);
          *lowEnd_146 = implicit_cast<TNode<Smi>>(t654);
          // ../../src/builtins/typed-array.tq:179:7
          int31_t t655 = 1;
          TNode<Smi> t656 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t655)));
          TNode<Smi> t657 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>(t656)));
          USE(implicit_cast<TNode<Smi>>(t657));
          TVARIABLE(Smi, highStart_147_impl);
          auto highStart_147 = &highStart_147_impl;
          USE(highStart_147);
          *highStart_147 = implicit_cast<TNode<Smi>>(t657);
          // ../../src/builtins/typed-array.tq:181:7
          TNode<Object> t658 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value())));
          USE(implicit_cast<TNode<Object>>(t658));
          TVARIABLE(Object, lowEndValue_148_impl);
          auto lowEndValue_148 = &lowEndValue_148_impl;
          USE(lowEndValue_148);
          *lowEndValue_148 = implicit_cast<TNode<Object>>(t658);
          // ../../src/builtins/typed-array.tq:182:7
          TNode<Object> t659 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*thirdIndex_756)), implicit_cast<TNode<Object>>((*lowEndValue_148).value())));
          USE(implicit_cast<TNode<Object>>(t659));
          // ../../src/builtins/typed-array.tq:183:7
          TNode<Object> t660 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Object>>((*pivot_763))));
          USE(implicit_cast<TNode<Object>>(t660));
          // ../../src/builtins/typed-array.tq:187:7
          int31_t t661 = 1;
          TNode<Smi> t662 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t661)));
          TNode<Smi> t663 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Smi>>(t662)));
          USE(implicit_cast<TNode<Smi>>(t663));
          TVARIABLE(Smi, idx_149_impl);
          auto idx_149 = &idx_149_impl;
          USE(idx_149);
          *idx_149 = implicit_cast<TNode<Smi>>(t663);
          Label label__True_232_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__True_232 = &label__True_232_impl;
          USE(label__True_232);
          Label label__False_233_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label__False_233 = &label__False_233_impl;
          USE(label__False_233);
          Label label_header_764_1589_impl(this, {highStart_147, idx_149, lowEndValue_148, lowEnd_146}, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_header_764_1589 = &label_header_764_1589_impl;
          USE(label_header_764_1589);
          Goto(label_header_764_1589);
          BIND(label_header_764_1589);
          Label label_action_765_1590_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
          Label* label_action_765_1590 = &label_action_765_1590_impl;
          USE(label_action_765_1590);
          TNode<BoolT> t664 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_149).value()), implicit_cast<TNode<Smi>>((*highStart_147).value())));
          USE(implicit_cast<TNode<BoolT>>(t664));
          Branch(implicit_cast<TNode<BoolT>>(t664), label__True_232, label__False_233);
          if (label__True_232->is_used())
          {
            BIND(label__True_232);
            // ../../src/builtins/typed-array.tq:187:63
            {
              // ../../src/builtins/typed-array.tq:188:9
              TNode<Object> t665 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_149).value())));
              USE(implicit_cast<TNode<Object>>(t665));
              TVARIABLE(Object, element_150_impl);
              auto element_150 = &element_150_impl;
              USE(element_150);
              *element_150 = implicit_cast<TNode<Object>>(t665);
              // ../../src/builtins/typed-array.tq:189:9
              TNode<Number> t666 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*element_150).value()), implicit_cast<TNode<Object>>((*pivot_763)), label_Detached_219));
              USE(implicit_cast<TNode<Number>>(t666));
              TVARIABLE(Number, order_151_impl);
              auto order_151 = &order_151_impl;
              USE(order_151);
              *order_151 = implicit_cast<TNode<Number>>(t666);
              // ../../src/builtins/typed-array.tq:192:9
              {
                Label label__True_234_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__True_234 = &label__True_234_impl;
                USE(label__True_234);
                Label label__False_235_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_235 = &label__False_235_impl;
                USE(label__False_235);
                Label label_if_done_label_766_1591_impl(this, {element_150, highStart_147, lowEndValue_148, lowEnd_146, order_151}, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label_if_done_label_766_1591 = &label_if_done_label_766_1591_impl;
                USE(label_if_done_label_766_1591);
                int31_t t667 = 0;
                TNode<Number> t668 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t667)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_151).value()), implicit_cast<TNode<Number>>(t668), label__True_234, label__False_235);
                if (label__True_234->is_used())
                {
                  BIND(label__True_234);
                  // ../../src/builtins/typed-array.tq:192:24
                  {
                    // ../../src/builtins/typed-array.tq:193:11
                    TNode<Object> t669 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value())));
                    USE(implicit_cast<TNode<Object>>(t669));
                    *lowEndValue_148 = implicit_cast<TNode<Object>>(t669);
                    // ../../src/builtins/typed-array.tq:194:11
                    TNode<Object> t670 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_149).value()), implicit_cast<TNode<Object>>((*lowEndValue_148).value())));
                    USE(implicit_cast<TNode<Object>>(t670));
                    // ../../src/builtins/typed-array.tq:195:11
                    TNode<Object> t671 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Object>>((*element_150).value())));
                    USE(implicit_cast<TNode<Object>>(t671));
                    // ../../src/builtins/typed-array.tq:196:11
                    TNode<Smi> t672 = implicit_cast<TNode<Smi>>((*lowEnd_146).value());
                    USE(t672);
                    TNode<Smi> t673 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                    TNode<Smi> t674 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Smi>>(t673)));
                    *lowEnd_146 = implicit_cast<TNode<Smi>>(t674);
                  }
                  Goto(label_if_done_label_766_1591);
                }
                if (label__False_235->is_used())
                {
                  BIND(label__False_235);
                  // ../../src/builtins/typed-array.tq:197:16
                  {
                    Label label__True_236_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__True_236 = &label__True_236_impl;
                    USE(label__True_236);
                    Label label__False_237_impl(this, {element_150, highStart_147, lowEndValue_148, lowEnd_146, order_151}, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__False_237 = &label__False_237_impl;
                    USE(label__False_237);
                    int31_t t675 = 0;
                    TNode<Number> t676 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t675)));
                    BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_151).value()), implicit_cast<TNode<Number>>(t676), label__True_236, label__False_237);
                    if (label__True_236->is_used())
                    {
                      BIND(label__True_236);
                      // ../../src/builtins/typed-array.tq:197:31
                      {
                        // ../../src/builtins/typed-array.tq:198:11
                        TVARIABLE(BoolT, breakFor_152_impl);
                        auto breakFor_152 = &breakFor_152_impl;
                        USE(breakFor_152);
                        TNode<BoolT> t677 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
                        *breakFor_152 = implicit_cast<TNode<BoolT>>(t677);
                        // ../../src/builtins/typed-array.tq:200:11
                        {
                          Label label__True_238_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__True_238 = &label__True_238_impl;
                          USE(label__True_238);
                          Label label__False_239_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__False_239 = &label__False_239_impl;
                          USE(label__False_239);
                          Label label_header_767_1592_impl(this, {breakFor_152, highStart_147, order_151}, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label_header_767_1592 = &label_header_767_1592_impl;
                          USE(label_header_767_1592);
                          Goto(label_header_767_1592);
                          BIND(label_header_767_1592);
                          int31_t t678 = 0;
                          TNode<Number> t679 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t678)));
                          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*order_151).value()), implicit_cast<TNode<Number>>(t679), label__True_238, label__False_239);
                          if (label__True_238->is_used())
                          {
                            BIND(label__True_238);
                            // ../../src/builtins/typed-array.tq:200:29
                            {
                              // ../../src/builtins/typed-array.tq:201:13
                              TNode<Smi> t680 = implicit_cast<TNode<Smi>>((*highStart_147).value());
                              USE(t680);
                              TNode<Smi> t681 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t682 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*highStart_147).value()), implicit_cast<TNode<Smi>>(t681)));
                              *highStart_147 = implicit_cast<TNode<Smi>>(t682);
                              // ../../src/builtins/typed-array.tq:202:13
                              {
                                Label label__True_240_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                Label* label__True_240 = &label__True_240_impl;
                                USE(label__True_240);
                                Label label__False_241_impl(this, {breakFor_152}, compiler::CodeAssemblerLabel::kNonDeferred);
                                Label* label__False_241 = &label__False_241_impl;
                                USE(label__False_241);
                                TNode<BoolT> t683 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*highStart_147).value()), implicit_cast<TNode<Smi>>((*idx_149).value())));
                                USE(implicit_cast<TNode<BoolT>>(t683));
                                Branch(implicit_cast<TNode<BoolT>>(t683), label__True_240, label__False_241);
                                if (label__True_240->is_used())
                                {
                                  BIND(label__True_240);
                                  // ../../src/builtins/typed-array.tq:202:35
                                  {
                                    // ../../src/builtins/typed-array.tq:203:15
                                    TNode<BoolT> t684 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                                    *breakFor_152 = implicit_cast<TNode<BoolT>>(t684);
                                    // ../../src/builtins/typed-array.tq:204:15
                                    Goto(label__False_239);
                                  }
                                }
                                BIND(label__False_241);
                              }
                              // ../../src/builtins/typed-array.tq:207:13
                              TNode<Object> t685 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*highStart_147).value())));
                              USE(implicit_cast<TNode<Object>>(t685));
                              TNode<Object> topElement_768_impl;
                              auto topElement_768 = &topElement_768_impl;
                              USE(topElement_768);
                              *topElement_768 = implicit_cast<TNode<Object>>(t685);
                              // ../../src/builtins/typed-array.tq:208:13
                              TNode<Number> t686 = UncheckedCast<Number>(CallCompareWithDetachedCheck(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Object>>((*topElement_768)), implicit_cast<TNode<Object>>((*pivot_763)), label_Detached_219));
                              USE(implicit_cast<TNode<Number>>(t686));
                              *order_151 = implicit_cast<TNode<Number>>(t686);
                            }
                            Goto(label_header_767_1592);
                          }
                          BIND(label__False_239);
                        }
                        // ../../src/builtins/typed-array.tq:213:11
                        {
                          Label label__True_242_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__True_242 = &label__True_242_impl;
                          USE(label__True_242);
                          Label label__False_243_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__False_243 = &label__False_243_impl;
                          USE(label__False_243);
                          Branch(implicit_cast<TNode<BoolT>>((*breakFor_152).value()), label__True_242, label__False_243);
                          if (label__True_242->is_used())
                          {
                            BIND(label__True_242);
                            // ../../src/builtins/typed-array.tq:213:25
                            {
                              // ../../src/builtins/typed-array.tq:214:13
                              Goto(label__False_233);
                            }
                          }
                          BIND(label__False_243);
                        }
                        // ../../src/builtins/typed-array.tq:217:11
                        TNode<Object> t687 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*highStart_147).value())));
                        USE(implicit_cast<TNode<Object>>(t687));
                        TNode<Object> highStartValue_769_impl;
                        auto highStartValue_769 = &highStartValue_769_impl;
                        USE(highStartValue_769);
                        *highStartValue_769 = implicit_cast<TNode<Object>>(t687);
                        // ../../src/builtins/typed-array.tq:218:11
                        TNode<Object> t688 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_149).value()), implicit_cast<TNode<Object>>((*highStartValue_769))));
                        USE(implicit_cast<TNode<Object>>(t688));
                        // ../../src/builtins/typed-array.tq:219:11
                        TNode<Object> t689 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*highStart_147).value()), implicit_cast<TNode<Object>>((*element_150).value())));
                        USE(implicit_cast<TNode<Object>>(t689));
                        // ../../src/builtins/typed-array.tq:221:11
                        {
                          Label label__True_244_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__True_244 = &label__True_244_impl;
                          USE(label__True_244);
                          Label label__False_245_impl(this, {element_150, lowEndValue_148, lowEnd_146}, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__False_245 = &label__False_245_impl;
                          USE(label__False_245);
                          int31_t t690 = 0;
                          TNode<Number> t691 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t690)));
                          BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_151).value()), implicit_cast<TNode<Number>>(t691), label__True_244, label__False_245);
                          if (label__True_244->is_used())
                          {
                            BIND(label__True_244);
                            // ../../src/builtins/typed-array.tq:221:26
                            {
                              // ../../src/builtins/typed-array.tq:222:13
                              TNode<Object> t692 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_149).value())));
                              USE(implicit_cast<TNode<Object>>(t692));
                              *element_150 = implicit_cast<TNode<Object>>(t692);
                              // ../../src/builtins/typed-array.tq:224:13
                              TNode<Object> t693 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value())));
                              USE(implicit_cast<TNode<Object>>(t693));
                              *lowEndValue_148 = implicit_cast<TNode<Object>>(t693);
                              // ../../src/builtins/typed-array.tq:225:13
                              TNode<Object> t694 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*idx_149).value()), implicit_cast<TNode<Object>>((*lowEndValue_148).value())));
                              USE(implicit_cast<TNode<Object>>(t694));
                              // ../../src/builtins/typed-array.tq:226:13
                              TNode<Object> t695 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), implicit_cast<TNode<Code>>(p_store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Object>>((*element_150).value())));
                              USE(implicit_cast<TNode<Object>>(t695));
                              // ../../src/builtins/typed-array.tq:227:13
                              TNode<Smi> t696 = implicit_cast<TNode<Smi>>((*lowEnd_146).value());
                              USE(t696);
                              TNode<Smi> t697 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
                              TNode<Smi> t698 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Smi>>(t697)));
                              *lowEnd_146 = implicit_cast<TNode<Smi>>(t698);
                            }
                            Goto(label__False_245);
                          }
                          BIND(label__False_245);
                        }
                      }
                      Goto(label__False_237);
                    }
                    BIND(label__False_237);
                  }
                  Goto(label_if_done_label_766_1591);
                }
                BIND(label_if_done_label_766_1591);
              }
            }
            Goto(label_action_765_1590);
          }
          {
            BIND(label_action_765_1590);
            TNode<Smi> t699 = implicit_cast<TNode<Smi>>((*idx_149).value());
            USE(t699);
            TNode<Smi> t700 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t701 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_149).value()), implicit_cast<TNode<Smi>>(t700)));
            *idx_149 = implicit_cast<TNode<Smi>>(t701);
            Goto(label_header_764_1589);
          }
          BIND(label__False_233);
          // ../../src/builtins/typed-array.tq:232:7
          {
            Label label__True_246_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_246 = &label__True_246_impl;
            USE(label__True_246);
            Label label__False_247_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_247 = &label__False_247_impl;
            USE(label__False_247);
            Label label_if_done_label_770_1593_impl(this, {from_140, to_141}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_770_1593 = &label_if_done_label_770_1593_impl;
            USE(label_if_done_label_770_1593);
            TNode<Smi> t702 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<Smi>>((*highStart_147).value())));
            USE(implicit_cast<TNode<Smi>>(t702));
            TNode<Smi> t703 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<Smi>>((*from_140).value())));
            USE(implicit_cast<TNode<Smi>>(t703));
            TNode<BoolT> t704 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t702), implicit_cast<TNode<Smi>>(t703)));
            USE(implicit_cast<TNode<BoolT>>(t704));
            Branch(implicit_cast<TNode<BoolT>>(t704), label__True_246, label__False_247);
            if (label__True_246->is_used())
            {
              BIND(label__True_246);
              // ../../src/builtins/typed-array.tq:232:47
              {
                // ../../src/builtins/typed-array.tq:233:9
                TNode<JSTypedArray> t705 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*highStart_147).value()), implicit_cast<TNode<Smi>>((*to_141).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Code>>(p_store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t705));
                // ../../src/builtins/typed-array.tq:235:9
                *to_141 = implicit_cast<TNode<Smi>>((*lowEnd_146).value());
              }
              Goto(label_if_done_label_770_1593);
            }
            if (label__False_247->is_used())
            {
              BIND(label__False_247);
              // ../../src/builtins/typed-array.tq:236:14
              {
                // ../../src/builtins/typed-array.tq:237:9
                TNode<JSTypedArray> t706 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>((*from_140).value()), implicit_cast<TNode<Smi>>((*lowEnd_146).value()), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Code>>(p_store)));
                USE(implicit_cast<TNode<JSTypedArray>>(t706));
                // ../../src/builtins/typed-array.tq:239:9
                *from_140 = implicit_cast<TNode<Smi>>((*highStart_147).value());
              }
              Goto(label_if_done_label_770_1593);
            }
            BIND(label_if_done_label_770_1593);
          }
        }
        Goto(label_header_755_1587);
      }
      BIND(label__False_221);
    }
  }
}

TF_BUILTIN(TypedArrayQuickSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_from = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(p_from);
  TNode<Smi> p_to = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(p_to);
  TNode<JSReceiver> p_comparefn = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Code> p_load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_load);
  TNode<Code> p_store = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(p_store);
  // ../../src/builtins/typed-array.tq:246:72
  {
    // ../../src/builtins/typed-array.tq:247:5
    {
      Label label_try_done_771_1594_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_771_1594 = &label_try_done_771_1594_impl;
      USE(label_try_done_771_1594);
      Label label_Detached_248_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_Detached_248 = &label_Detached_248_impl;
      USE(label_Detached_248);
      Label label_try_begin_772_1595_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_772_1595 = &label_try_begin_772_1595_impl;
      USE(label_try_begin_772_1595);
      Goto(label_try_begin_772_1595);
      if (label_try_begin_772_1595->is_used())
      {
        BIND(label_try_begin_772_1595);
        // ../../src/builtins/typed-array.tq:247:9
        {
          // ../../src/builtins/typed-array.tq:248:7
          TypedArrayQuickSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>(p_array), implicit_cast<TNode<Smi>>(p_from), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<JSReceiver>>(p_comparefn), implicit_cast<TNode<Code>>(p_load), implicit_cast<TNode<Code>>(p_store), label_Detached_248);
        }
        Goto(label_try_done_771_1594);
      }
      if (label_Detached_248->is_used())
      {
        BIND(label_Detached_248);
        // ../../src/builtins/typed-array.tq:251:20
        {
          // ../../src/builtins/typed-array.tq:252:7
          const char* t707 = "%TypedArray%.prototype.sort";
          TNode<Object> t708 = UncheckedCast<Object>(FromConstexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t707)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t708));
        }
      }
      BIND(label_try_done_771_1594);
    }
    // ../../src/builtins/typed-array.tq:255:5
    Return(implicit_cast<TNode<JSTypedArray>>(p_array));
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/typed-array.tq:260:71
  {
    // ../../src/builtins/typed-array.tq:263:5
    auto t709 = [=]() {
      int31_t t711 = 0;
      TNode<IntPtrT> t712 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t711)));
      TNode<Object> t713 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t712)));
      return implicit_cast<TNode<Object>>(t713);
    };
    auto t710 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t714_773_impl);
    auto t714_773 = &t714_773_impl;
    USE(t714_773);
    {
      Label label__True_249_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_249 = &label__True_249_impl;
      USE(label__True_249);
      Label label__False_250_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_250 = &label__False_250_impl;
      USE(label__False_250);
      Label label__done_774_1596_impl(this, {t714_773}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_774_1596 = &label__done_774_1596_impl;
      USE(label__done_774_1596);
      TNode<IntPtrT> t715 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t716 = 0;
      TNode<IntPtrT> t717 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t716)));
      TNode<BoolT> t718 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t715), implicit_cast<TNode<IntPtrT>>(t717)));
      USE(implicit_cast<TNode<BoolT>>(t718));
      Branch(implicit_cast<TNode<BoolT>>(t718), label__True_249, label__False_250);
      BIND(label__True_249);
            *t714_773 = implicit_cast<TNode<Object>>(t709());
      Goto(label__done_774_1596);
      BIND(label__False_250);
            *t714_773 = implicit_cast<TNode<Object>>(t710());
      Goto(label__done_774_1596);
      BIND(label__done_774_1596);
    }
    TNode<Object> comparefnObj_775_impl;
    auto comparefnObj_775 = &comparefnObj_775_impl;
    USE(comparefnObj_775);
    *comparefnObj_775 = implicit_cast<TNode<Object>>((*t714_773).value());
    // ../../src/builtins/typed-array.tq:265:5
    {
      Label label__True_251_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_251 = &label__True_251_impl;
      USE(label__True_251);
      Label label__False_252_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_252 = &label__False_252_impl;
      USE(label__False_252);
      Label label__True_253_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_253 = &label__True_253_impl;
      USE(label__True_253);
      TNode<BoolT> t719 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_775)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t719));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t719), label__False_252);
      TNode<BoolT> t720 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefnObj_775))));
      USE(implicit_cast<TNode<BoolT>>(t720));
      TNode<BoolT> t721 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t720)));
      USE(implicit_cast<TNode<BoolT>>(t721));
Branch(implicit_cast<TNode<BoolT>>(t721), label__True_251, label__False_252);
      if (label__True_251->is_used())
      {
        BIND(label__True_251);
        // ../../src/builtins/typed-array.tq:265:71
        {
          // ../../src/builtins/typed-array.tq:266:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefnObj_775)));
        }
      }
      BIND(label__False_252);
    }
    // ../../src/builtins/typed-array.tq:270:5
    TNode<Object> obj_776_impl;
    auto obj_776 = &obj_776_impl;
    USE(obj_776);
    *obj_776 = implicit_cast<TNode<Object>>(p_receiver);
    // ../../src/builtins/typed-array.tq:274:5
    const char* t722 = "%TypedArray%.prototype.sort";
    TNode<JSTypedArray> t723 = UncheckedCast<JSTypedArray>(ValidateTypedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_776)), implicit_cast<const char*>(t722)));
    USE(implicit_cast<TNode<JSTypedArray>>(t723));
    TNode<JSTypedArray> array_777_impl;
    auto array_777 = &array_777_impl;
    USE(array_777);
    *array_777 = implicit_cast<TNode<JSTypedArray>>(t723);
    // ../../src/builtins/typed-array.tq:278:5
    {
      Label label__True_254_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_254 = &label__True_254_impl;
      USE(label__True_254);
      Label label__False_255_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_255 = &label__False_255_impl;
      USE(label__False_255);
      TNode<BoolT> t724 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*comparefnObj_775)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t724));
      Branch(implicit_cast<TNode<BoolT>>(t724), label__True_254, label__False_255);
      if (label__True_254->is_used())
      {
        BIND(label__True_254);
        // ../../src/builtins/typed-array.tq:278:36
        {
          // ../../src/builtins/typed-array.tq:279:7
          TNode<JSTypedArray> t725 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_776))));
          USE(implicit_cast<TNode<JSTypedArray>>(t725));
          arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>(t725));
        }
      }
      BIND(label__False_255);
    }
    // ../../src/builtins/typed-array.tq:283:5
    TNode<Smi> t726 = UncheckedCast<Smi>(LoadJSTypedArrayLength(implicit_cast<TNode<JSTypedArray>>((*array_777))));
    TNode<Smi> len_778_impl;
    auto len_778 = &len_778_impl;
    USE(len_778);
    *len_778 = implicit_cast<TNode<Smi>>(t726);
    // ../../src/builtins/typed-array.tq:285:5
    {
      Label label_try_done_779_1597_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_779_1597 = &label_try_done_779_1597_impl;
      USE(label_try_done_779_1597);
      Label label_CastError_256_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_CastError_256 = &label_CastError_256_impl;
      USE(label_CastError_256);
      Label label_try_begin_780_1598_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_780_1598 = &label_try_begin_780_1598_impl;
      USE(label_try_begin_780_1598);
      Goto(label_try_begin_780_1598);
      if (label_try_begin_780_1598->is_used())
      {
        BIND(label_try_begin_780_1598);
        // ../../src/builtins/typed-array.tq:285:9
        {
          // ../../src/builtins/typed-array.tq:286:7
          TNode<JSReceiver> t727 = UncheckedCast<JSReceiver>(Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>((*comparefnObj_775)), label_CastError_256));
          USE(implicit_cast<TNode<JSReceiver>>(t727));
          TNode<JSReceiver> comparefn_781_impl;
          auto comparefn_781 = &comparefn_781_impl;
          USE(comparefn_781);
          *comparefn_781 = implicit_cast<TNode<JSReceiver>>(t727);
          // ../../src/builtins/typed-array.tq:288:7
          TVARIABLE(Code, loadfn_153_impl);
          auto loadfn_153 = &loadfn_153_impl;
          USE(loadfn_153);
          // ../../src/builtins/typed-array.tq:289:7
          TVARIABLE(Code, storefn_154_impl);
          auto storefn_154 = &storefn_154_impl;
          USE(storefn_154);
          // ../../src/builtins/typed-array.tq:291:7
          TNode<Int32T> t728 = UncheckedCast<Int32T>(LoadElementsKind(implicit_cast<TNode<JSTypedArray>>((*array_777))));
          TVARIABLE(Int32T, elementsKind_155_impl);
          auto elementsKind_155 = &elementsKind_155_impl;
          USE(elementsKind_155);
          *elementsKind_155 = implicit_cast<TNode<Int32T>>(t728);
          // ../../src/builtins/typed-array.tq:293:7
          {
            Label label__True_257_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_257 = &label__True_257_impl;
            USE(label__True_257);
            Label label__False_258_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_258 = &label__False_258_impl;
            USE(label__False_258);
            Label label_if_done_label_782_1599_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label_if_done_label_782_1599 = &label_if_done_label_782_1599_impl;
            USE(label_if_done_label_782_1599);
            TNode<BoolT> t729 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t729));
            Branch(implicit_cast<TNode<BoolT>>(t729), label__True_257, label__False_258);
            if (label__True_257->is_used())
            {
              BIND(label__True_257);
              // ../../src/builtins/typed-array.tq:293:69
              {
                // ../../src/builtins/typed-array.tq:294:9
                {
                  Label label__True_259_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_259 = &label__True_259_impl;
                  USE(label__True_259);
                  Label label__False_260_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_260 = &label__False_260_impl;
                  USE(label__False_260);
                  Label label_if_done_label_783_1600_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_783_1600 = &label_if_done_label_783_1600_impl;
                  USE(label_if_done_label_783_1600);
                  TNode<Int32T> t730 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(INT32_ELEMENTS)));
                  TNode<BoolT> t731 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t730)));
                  USE(implicit_cast<TNode<BoolT>>(t731));
                  Branch(implicit_cast<TNode<BoolT>>(t731), label__True_259, label__False_260);
                  if (label__True_259->is_used())
                  {
                    BIND(label__True_259);
                    // ../../src/builtins/typed-array.tq:294:45
                    {
                      // ../../src/builtins/typed-array.tq:295:11
                      *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code()));
                      // ../../src/builtins/typed-array.tq:296:11
                      *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code()));
                    }
                    Goto(label_if_done_label_783_1600);
                  }
                  if (label__False_260->is_used())
                  {
                    BIND(label__False_260);
                    // ../../src/builtins/typed-array.tq:297:16
                    {
                      Label label__True_261_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_261 = &label__True_261_impl;
                      USE(label__True_261);
                      Label label__False_262_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_262 = &label__False_262_impl;
                      USE(label__False_262);
                      Label label_if_done_label_784_1601_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label_if_done_label_784_1601 = &label_if_done_label_784_1601_impl;
                      USE(label_if_done_label_784_1601);
                      TNode<Int32T> t732 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
                      TNode<BoolT> t733 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t732)));
                      USE(implicit_cast<TNode<BoolT>>(t733));
                      Branch(implicit_cast<TNode<BoolT>>(t733), label__True_261, label__False_262);
                      if (label__True_261->is_used())
                      {
                        BIND(label__True_261);
                        // ../../src/builtins/typed-array.tq:297:54
                        {
                          // ../../src/builtins/typed-array.tq:298:11
                          *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code()));
                          // ../../src/builtins/typed-array.tq:299:11
                          *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code()));
                        }
                        Goto(label_if_done_label_784_1601);
                      }
                      if (label__False_262->is_used())
                      {
                        BIND(label__False_262);
                        // ../../src/builtins/typed-array.tq:300:16
                        {
                          Label label__True_263_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__True_263 = &label__True_263_impl;
                          USE(label__True_263);
                          Label label__False_264_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__False_264 = &label__False_264_impl;
                          USE(label__False_264);
                          Label label_if_done_label_785_1602_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label_if_done_label_785_1602 = &label_if_done_label_785_1602_impl;
                          USE(label_if_done_label_785_1602);
                          TNode<Int32T> t734 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
                          TNode<BoolT> t735 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t734)));
                          USE(implicit_cast<TNode<BoolT>>(t735));
                          Branch(implicit_cast<TNode<BoolT>>(t735), label__True_263, label__False_264);
                          if (label__True_263->is_used())
                          {
                            BIND(label__True_263);
                            // ../../src/builtins/typed-array.tq:300:54
                            {
                              // ../../src/builtins/typed-array.tq:301:11
                              *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code()));
                              // ../../src/builtins/typed-array.tq:302:11
                              *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code()));
                            }
                            Goto(label_if_done_label_785_1602);
                          }
                          if (label__False_264->is_used())
                          {
                            BIND(label__False_264);
                            // ../../src/builtins/typed-array.tq:303:16
                            {
                              Label label__True_265_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_265 = &label__True_265_impl;
                              USE(label__True_265);
                              Label label__False_266_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_266 = &label__False_266_impl;
                              USE(label__False_266);
                              Label label_if_done_label_786_1603_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label_if_done_label_786_1603 = &label_if_done_label_786_1603_impl;
                              USE(label_if_done_label_786_1603);
                              TNode<Int32T> t736 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_CLAMPED_ELEMENTS)));
                              TNode<BoolT> t737 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t736)));
                              USE(implicit_cast<TNode<BoolT>>(t737));
                              Branch(implicit_cast<TNode<BoolT>>(t737), label__True_265, label__False_266);
                              if (label__True_265->is_used())
                              {
                                BIND(label__True_265);
                                // ../../src/builtins/typed-array.tq:303:60
                                {
                                  // ../../src/builtins/typed-array.tq:304:11
                                  *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code()));
                                  // ../../src/builtins/typed-array.tq:305:11
                                  *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code()));
                                }
                                Goto(label_if_done_label_786_1603);
                              }
                              if (label__False_266->is_used())
                              {
                                BIND(label__False_266);
                                // ../../src/builtins/typed-array.tq:306:16
                                {
                                  Label label__True_267_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label__True_267 = &label__True_267_impl;
                                  USE(label__True_267);
                                  Label label__False_268_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label__False_268 = &label__False_268_impl;
                                  USE(label__False_268);
                                  Label label_if_done_label_787_1604_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label_if_done_label_787_1604 = &label_if_done_label_787_1604_impl;
                                  USE(label_if_done_label_787_1604);
                                  TNode<Int32T> t738 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
                                  TNode<BoolT> t739 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t738)));
                                  USE(implicit_cast<TNode<BoolT>>(t739));
                                  Branch(implicit_cast<TNode<BoolT>>(t739), label__True_267, label__False_268);
                                  if (label__True_267->is_used())
                                  {
                                    BIND(label__True_267);
                                    // ../../src/builtins/typed-array.tq:306:56
                                    {
                                      // ../../src/builtins/typed-array.tq:307:11
                                      *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code()));
                                      // ../../src/builtins/typed-array.tq:308:11
                                      *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code()));
                                    }
                                    Goto(label_if_done_label_787_1604);
                                  }
                                  if (label__False_268->is_used())
                                  {
                                    BIND(label__False_268);
                                    // ../../src/builtins/typed-array.tq:309:16
                                    {
                                      Label label__True_269_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                      Label* label__True_269 = &label__True_269_impl;
                                      USE(label__True_269);
                                      Label label__False_270_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                      Label* label__False_270 = &label__False_270_impl;
                                      USE(label__False_270);
                                      Label label_if_done_label_788_1605_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                                      Label* label_if_done_label_788_1605 = &label_if_done_label_788_1605_impl;
                                      USE(label_if_done_label_788_1605);
                                      TNode<Int32T> t740 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
                                      TNode<BoolT> t741 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t740)));
                                      USE(implicit_cast<TNode<BoolT>>(t741));
                                      Branch(implicit_cast<TNode<BoolT>>(t741), label__True_269, label__False_270);
                                      if (label__True_269->is_used())
                                      {
                                        BIND(label__True_269);
                                        // ../../src/builtins/typed-array.tq:309:55
                                        {
                                          // ../../src/builtins/typed-array.tq:310:11
                                          *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code()));
                                          // ../../src/builtins/typed-array.tq:311:11
                                          *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code()));
                                        }
                                        Goto(label_if_done_label_788_1605);
                                      }
                                      if (label__False_270->is_used())
                                      {
                                        BIND(label__False_270);
                                        // ../../src/builtins/typed-array.tq:312:16
                                        {
                                          // ../../src/builtins/typed-array.tq:313:11
                                          Print("halting because of 'unreachable' at ../../src/builtins/typed-array.tq:313:11");
                                          Unreachable();
                                        }
                                      }
                                      BIND(label_if_done_label_788_1605);
                                    }
                                    Goto(label_if_done_label_787_1604);
                                  }
                                  BIND(label_if_done_label_787_1604);
                                }
                                Goto(label_if_done_label_786_1603);
                              }
                              BIND(label_if_done_label_786_1603);
                            }
                            Goto(label_if_done_label_785_1602);
                          }
                          BIND(label_if_done_label_785_1602);
                        }
                        Goto(label_if_done_label_784_1601);
                      }
                      BIND(label_if_done_label_784_1601);
                    }
                    Goto(label_if_done_label_783_1600);
                  }
                  BIND(label_if_done_label_783_1600);
                }
              }
              Goto(label_if_done_label_782_1599);
            }
            if (label__False_258->is_used())
            {
              BIND(label__False_258);
              // ../../src/builtins/typed-array.tq:315:14
              {
                // ../../src/builtins/typed-array.tq:316:9
                {
                  Label label__True_271_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_271 = &label__True_271_impl;
                  USE(label__True_271);
                  Label label__False_272_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_272 = &label__False_272_impl;
                  USE(label__False_272);
                  Label label_if_done_label_789_1606_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_789_1606 = &label_if_done_label_789_1606_impl;
                  USE(label_if_done_label_789_1606);
                  TNode<Int32T> t742 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
                  TNode<BoolT> t743 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t742)));
                  USE(implicit_cast<TNode<BoolT>>(t743));
                  Branch(implicit_cast<TNode<BoolT>>(t743), label__True_271, label__False_272);
                  if (label__True_271->is_used())
                  {
                    BIND(label__True_271);
                    // ../../src/builtins/typed-array.tq:316:45
                    {
                      // ../../src/builtins/typed-array.tq:317:11
                      *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code()));
                      // ../../src/builtins/typed-array.tq:318:11
                      *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code()));
                    }
                    Goto(label_if_done_label_789_1606);
                  }
                  if (label__False_272->is_used())
                  {
                    BIND(label__False_272);
                    // ../../src/builtins/typed-array.tq:319:16
                    {
                      Label label__True_273_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__True_273 = &label__True_273_impl;
                      USE(label__True_273);
                      Label label__False_274_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label__False_274 = &label__False_274_impl;
                      USE(label__False_274);
                      Label label_if_done_label_790_1607_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                      Label* label_if_done_label_790_1607 = &label_if_done_label_790_1607_impl;
                      USE(label_if_done_label_790_1607);
                      TNode<Int32T> t744 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(INT8_ELEMENTS)));
                      TNode<BoolT> t745 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t744)));
                      USE(implicit_cast<TNode<BoolT>>(t745));
                      Branch(implicit_cast<TNode<BoolT>>(t745), label__True_273, label__False_274);
                      if (label__True_273->is_used())
                      {
                        BIND(label__True_273);
                        // ../../src/builtins/typed-array.tq:319:51
                        {
                          // ../../src/builtins/typed-array.tq:320:11
                          *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code()));
                          // ../../src/builtins/typed-array.tq:321:11
                          *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code()));
                        }
                        Goto(label_if_done_label_790_1607);
                      }
                      if (label__False_274->is_used())
                      {
                        BIND(label__False_274);
                        // ../../src/builtins/typed-array.tq:322:16
                        {
                          Label label__True_275_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__True_275 = &label__True_275_impl;
                          USE(label__True_275);
                          Label label__False_276_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label__False_276 = &label__False_276_impl;
                          USE(label__False_276);
                          Label label_if_done_label_791_1608_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                          Label* label_if_done_label_791_1608 = &label_if_done_label_791_1608_impl;
                          USE(label_if_done_label_791_1608);
                          TNode<Int32T> t746 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
                          TNode<BoolT> t747 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t746)));
                          USE(implicit_cast<TNode<BoolT>>(t747));
                          Branch(implicit_cast<TNode<BoolT>>(t747), label__True_275, label__False_276);
                          if (label__True_275->is_used())
                          {
                            BIND(label__True_275);
                            // ../../src/builtins/typed-array.tq:322:53
                            {
                              // ../../src/builtins/typed-array.tq:323:11
                              *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code()));
                              // ../../src/builtins/typed-array.tq:324:11
                              *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code()));
                            }
                            Goto(label_if_done_label_791_1608);
                          }
                          if (label__False_276->is_used())
                          {
                            BIND(label__False_276);
                            // ../../src/builtins/typed-array.tq:325:16
                            {
                              Label label__True_277_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__True_277 = &label__True_277_impl;
                              USE(label__True_277);
                              Label label__False_278_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label__False_278 = &label__False_278_impl;
                              USE(label__False_278);
                              Label label_if_done_label_792_1609_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                              Label* label_if_done_label_792_1609 = &label_if_done_label_792_1609_impl;
                              USE(label_if_done_label_792_1609);
                              TNode<Int32T> t748 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(INT16_ELEMENTS)));
                              TNode<BoolT> t749 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t748)));
                              USE(implicit_cast<TNode<BoolT>>(t749));
                              Branch(implicit_cast<TNode<BoolT>>(t749), label__True_277, label__False_278);
                              if (label__True_277->is_used())
                              {
                                BIND(label__True_277);
                                // ../../src/builtins/typed-array.tq:325:52
                                {
                                  // ../../src/builtins/typed-array.tq:326:11
                                  *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code()));
                                  // ../../src/builtins/typed-array.tq:327:11
                                  *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code()));
                                }
                                Goto(label_if_done_label_792_1609);
                              }
                              if (label__False_278->is_used())
                              {
                                BIND(label__False_278);
                                // ../../src/builtins/typed-array.tq:328:16
                                {
                                  Label label__True_279_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label__True_279 = &label__True_279_impl;
                                  USE(label__True_279);
                                  Label label__False_280_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label__False_280 = &label__False_280_impl;
                                  USE(label__False_280);
                                  Label label_if_done_label_793_1610_impl(this, {loadfn_153, storefn_154}, compiler::CodeAssemblerLabel::kNonDeferred);
                                  Label* label_if_done_label_793_1610 = &label_if_done_label_793_1610_impl;
                                  USE(label_if_done_label_793_1610);
                                  TNode<Int32T> t750 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
                                  TNode<BoolT> t751 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_155).value()), implicit_cast<TNode<Int32T>>(t750)));
                                  USE(implicit_cast<TNode<BoolT>>(t751));
                                  Branch(implicit_cast<TNode<BoolT>>(t751), label__True_279, label__False_280);
                                  if (label__True_279->is_used())
                                  {
                                    BIND(label__True_279);
                                    // ../../src/builtins/typed-array.tq:328:53
                                    {
                                      // ../../src/builtins/typed-array.tq:329:11
                                      *loadfn_153 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code()));
                                      // ../../src/builtins/typed-array.tq:330:11
                                      *storefn_154 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code()));
                                    }
                                    Goto(label_if_done_label_793_1610);
                                  }
                                  if (label__False_280->is_used())
                                  {
                                    BIND(label__False_280);
                                    // ../../src/builtins/typed-array.tq:331:16
                                    {
                                      // ../../src/builtins/typed-array.tq:332:11
                                      Print("halting because of 'unreachable' at ../../src/builtins/typed-array.tq:332:11");
                                      Unreachable();
                                    }
                                  }
                                  BIND(label_if_done_label_793_1610);
                                }
                                Goto(label_if_done_label_792_1609);
                              }
                              BIND(label_if_done_label_792_1609);
                            }
                            Goto(label_if_done_label_791_1608);
                          }
                          BIND(label_if_done_label_791_1608);
                        }
                        Goto(label_if_done_label_790_1607);
                      }
                      BIND(label_if_done_label_790_1607);
                    }
                    Goto(label_if_done_label_789_1606);
                  }
                  BIND(label_if_done_label_789_1606);
                }
              }
              Goto(label_if_done_label_782_1599);
            }
            BIND(label_if_done_label_782_1599);
          }
          // ../../src/builtins/typed-array.tq:336:7
          int31_t t752 = 0;
          TNode<Smi> t753 = UncheckedCast<Smi>(FromConstexpr5ATSmi(implicit_cast<int31_t>(t752)));
          TNode<JSTypedArray> t754 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSTypedArray>>((*array_777)), implicit_cast<TNode<Smi>>(t753), implicit_cast<TNode<Smi>>((*len_778)), implicit_cast<TNode<JSReceiver>>((*comparefn_781)), implicit_cast<TNode<Code>>((*loadfn_153).value()), implicit_cast<TNode<Code>>((*storefn_154).value())));
          USE(implicit_cast<TNode<JSTypedArray>>(t754));
        }
        Goto(label_try_done_779_1597);
      }
      if (label_CastError_256->is_used())
      {
        BIND(label_CastError_256);
        // ../../src/builtins/typed-array.tq:338:21
        {
          // ../../src/builtins/typed-array.tq:339:7
          Print("halting because of 'unreachable' at ../../src/builtins/typed-array.tq:339:7");
          Unreachable();
        }
      }
      BIND(label_try_done_779_1597);
    }
    // ../../src/builtins/typed-array.tq:341:5
    arguments->PopAndReturn(implicit_cast<TNode<JSTypedArray>>((*array_777)));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t3998 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t3999 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t3999));
    TNode<Object> t4000 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t3998), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t3999), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4000));
    Return(implicit_cast<TNode<Object>>(t4000));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4001 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4002 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4001)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4002));
    TNode<FixedTypedArrayBase> elements_1215_impl;
    auto elements_1215 = &elements_1215_impl;
    USE(elements_1215);
    *elements_1215 = implicit_cast<TNode<FixedTypedArrayBase>>(t4002);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4003 = KindForArrayType17ATFixedInt32Array();
    USE(implicit_cast<ElementsKind>(t4003));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1215)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4003), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4004 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4005 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t4005));
    TNode<Object> t4006 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4004), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4005), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4006));
    Return(implicit_cast<TNode<Object>>(t4006));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4007 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4008 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4007)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4008));
    TNode<FixedTypedArrayBase> elements_1216_impl;
    auto elements_1216 = &elements_1216_impl;
    USE(elements_1216);
    *elements_1216 = implicit_cast<TNode<FixedTypedArrayBase>>(t4008);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4009 = KindForArrayType19ATFixedFloat32Array();
    USE(implicit_cast<ElementsKind>(t4009));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1216)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4009), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4010 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4011 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t4011));
    TNode<Object> t4012 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4010), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4011), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4012));
    Return(implicit_cast<TNode<Object>>(t4012));
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4013 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4014 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4013)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4014));
    TNode<FixedTypedArrayBase> elements_1217_impl;
    auto elements_1217 = &elements_1217_impl;
    USE(elements_1217);
    *elements_1217 = implicit_cast<TNode<FixedTypedArrayBase>>(t4014);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4015 = KindForArrayType19ATFixedFloat64Array();
    USE(implicit_cast<ElementsKind>(t4015));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1217)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4015), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4016 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4017 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t4017));
    TNode<Object> t4018 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4016), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4017), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4018));
    Return(implicit_cast<TNode<Object>>(t4018));
  }
}

TF_BUILTIN(StoreFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4019 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4020 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4019)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4020));
    TNode<FixedTypedArrayBase> elements_1218_impl;
    auto elements_1218 = &elements_1218_impl;
    USE(elements_1218);
    *elements_1218 = implicit_cast<TNode<FixedTypedArrayBase>>(t4020);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4021 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(implicit_cast<ElementsKind>(t4021));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1218)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4021), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4022 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4023 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t4023));
    TNode<Object> t4024 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4022), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4023), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4024));
    Return(implicit_cast<TNode<Object>>(t4024));
  }
}

TF_BUILTIN(StoreFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4025 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4026 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4025)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4026));
    TNode<FixedTypedArrayBase> elements_1219_impl;
    auto elements_1219 = &elements_1219_impl;
    USE(elements_1219);
    *elements_1219 = implicit_cast<TNode<FixedTypedArrayBase>>(t4026);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4027 = KindForArrayType21ATFixedBigUint64Array();
    USE(implicit_cast<ElementsKind>(t4027));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1219)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4027), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4028 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4029 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t4029));
    TNode<Object> t4030 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4028), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4029), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4030));
    Return(implicit_cast<TNode<Object>>(t4030));
  }
}

TF_BUILTIN(StoreFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4031 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4032 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4031)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4032));
    TNode<FixedTypedArrayBase> elements_1220_impl;
    auto elements_1220 = &elements_1220_impl;
    USE(elements_1220);
    *elements_1220 = implicit_cast<TNode<FixedTypedArrayBase>>(t4032);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4033 = KindForArrayType20ATFixedBigInt64Array();
    USE(implicit_cast<ElementsKind>(t4033));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1220)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4033), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4034 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4035 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t4035));
    TNode<Object> t4036 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4034), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4035), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4036));
    Return(implicit_cast<TNode<Object>>(t4036));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4037 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4038 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4037)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4038));
    TNode<FixedTypedArrayBase> elements_1221_impl;
    auto elements_1221 = &elements_1221_impl;
    USE(elements_1221);
    *elements_1221 = implicit_cast<TNode<FixedTypedArrayBase>>(t4038);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4039 = KindForArrayType17ATFixedUint8Array();
    USE(implicit_cast<ElementsKind>(t4039));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1221)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4039), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4040 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4041 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t4041));
    TNode<Object> t4042 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4040), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4041), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4042));
    Return(implicit_cast<TNode<Object>>(t4042));
  }
}

TF_BUILTIN(StoreFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4043 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4044 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4043)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4044));
    TNode<FixedTypedArrayBase> elements_1222_impl;
    auto elements_1222 = &elements_1222_impl;
    USE(elements_1222);
    *elements_1222 = implicit_cast<TNode<FixedTypedArrayBase>>(t4044);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4045 = KindForArrayType16ATFixedInt8Array();
    USE(implicit_cast<ElementsKind>(t4045));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1222)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4045), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4046 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4047 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t4047));
    TNode<Object> t4048 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4046), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4047), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4048));
    Return(implicit_cast<TNode<Object>>(t4048));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4049 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4050 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4049)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4050));
    TNode<FixedTypedArrayBase> elements_1223_impl;
    auto elements_1223 = &elements_1223_impl;
    USE(elements_1223);
    *elements_1223 = implicit_cast<TNode<FixedTypedArrayBase>>(t4050);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4051 = KindForArrayType18ATFixedUint16Array();
    USE(implicit_cast<ElementsKind>(t4051));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1223)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4051), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4052 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4053 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t4053));
    TNode<Object> t4054 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4052), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4053), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4054));
    Return(implicit_cast<TNode<Object>>(t4054));
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4055 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4056 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4055)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4056));
    TNode<FixedTypedArrayBase> elements_1224_impl;
    auto elements_1224 = &elements_1224_impl;
    USE(elements_1224);
    *elements_1224 = implicit_cast<TNode<FixedTypedArrayBase>>(t4056);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4057 = KindForArrayType17ATFixedInt16Array();
    USE(implicit_cast<ElementsKind>(t4057));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1224)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4057), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:66
  {
    // ../../src/builtins/typed-array.tq:56:5
    TNode<RawPtrT> t4058 = UncheckedCast<RawPtrT>(LoadDataPtr(implicit_cast<TNode<JSTypedArray>>(p_array)));
    ElementsKind t4059 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t4059));
    TNode<Object> t4060 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(implicit_cast<TNode<RawPtrT>>(t4058), implicit_cast<TNode<Smi>>(p_index), implicit_cast<ElementsKind>(t4059), implicit_cast<ParameterMode>(SMI_PARAMETERS)));
    USE(implicit_cast<TNode<Object>>(t4060));
    Return(implicit_cast<TNode<Object>>(t4060));
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:30
  {
    // ../../src/builtins/typed-array.tq:63:5
    TNode<FixedArrayBase> t4061 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedTypedArrayBase> t4062 = UncheckedCast<FixedTypedArrayBase>(UnsafeCast21ATFixedTypedArrayBase(implicit_cast<TNode<Object>>(t4061)));
    USE(implicit_cast<TNode<FixedTypedArrayBase>>(t4062));
    TNode<FixedTypedArrayBase> elements_1225_impl;
    auto elements_1225 = &elements_1225_impl;
    USE(elements_1225);
    *elements_1225 = implicit_cast<TNode<FixedTypedArrayBase>>(t4062);
    // ../../src/builtins/typed-array.tq:65:5
    ElementsKind t4063 = KindForArrayType18ATFixedUint32Array();
    USE(implicit_cast<ElementsKind>(t4063));
    StoreFixedTypedArrayElementFromTagged(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedTypedArrayBase>>((*elements_1225)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<ElementsKind>(t4063), implicit_cast<ParameterMode>(SMI_PARAMETERS));
    // ../../src/builtins/typed-array.tq:67:5
    Return(implicit_cast<TNode<Object>>(Undefined()));
  }
}

}  // namespace internal
}  // namespace v8

