#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-typed-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  ElementsKind _return_139_impl;
  auto _return_139 = &_return_139_impl;
  USE(_return_139);
  Label label_macro_end_635_impl(this, {});
  Label* label_macro_end_635 = &label_macro_end_635_impl;
  USE(label_macro_end_635);
  // ../../src/builtins/typed-array.tq:20:62
  {
    // ../../src/builtins/typed-array.tq:21:4
    *_return_139 = UINT8_ELEMENTS;
    Goto(label_macro_end_635);
  }
  BIND(label_macro_end_635);
  return (*_return_139);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  ElementsKind _return_140_impl;
  auto _return_140 = &_return_140_impl;
  USE(_return_140);
  Label label_macro_end_636_impl(this, {});
  Label* label_macro_end_636 = &label_macro_end_636_impl;
  USE(label_macro_end_636);
  // ../../src/builtins/typed-array.tq:23:61
  {
    // ../../src/builtins/typed-array.tq:24:4
    *_return_140 = INT8_ELEMENTS;
    Goto(label_macro_end_636);
  }
  BIND(label_macro_end_636);
  return (*_return_140);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  ElementsKind _return_141_impl;
  auto _return_141 = &_return_141_impl;
  USE(_return_141);
  Label label_macro_end_637_impl(this, {});
  Label* label_macro_end_637 = &label_macro_end_637_impl;
  USE(label_macro_end_637);
  // ../../src/builtins/typed-array.tq:26:63
  {
    // ../../src/builtins/typed-array.tq:27:4
    *_return_141 = UINT16_ELEMENTS;
    Goto(label_macro_end_637);
  }
  BIND(label_macro_end_637);
  return (*_return_141);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  ElementsKind _return_142_impl;
  auto _return_142 = &_return_142_impl;
  USE(_return_142);
  Label label_macro_end_638_impl(this, {});
  Label* label_macro_end_638 = &label_macro_end_638_impl;
  USE(label_macro_end_638);
  // ../../src/builtins/typed-array.tq:29:62
  {
    // ../../src/builtins/typed-array.tq:30:4
    *_return_142 = INT16_ELEMENTS;
    Goto(label_macro_end_638);
  }
  BIND(label_macro_end_638);
  return (*_return_142);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  ElementsKind _return_143_impl;
  auto _return_143 = &_return_143_impl;
  USE(_return_143);
  Label label_macro_end_639_impl(this, {});
  Label* label_macro_end_639 = &label_macro_end_639_impl;
  USE(label_macro_end_639);
  // ../../src/builtins/typed-array.tq:32:63
  {
    // ../../src/builtins/typed-array.tq:33:4
    *_return_143 = UINT32_ELEMENTS;
    Goto(label_macro_end_639);
  }
  BIND(label_macro_end_639);
  return (*_return_143);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  ElementsKind _return_144_impl;
  auto _return_144 = &_return_144_impl;
  USE(_return_144);
  Label label_macro_end_640_impl(this, {});
  Label* label_macro_end_640 = &label_macro_end_640_impl;
  USE(label_macro_end_640);
  // ../../src/builtins/typed-array.tq:35:62
  {
    // ../../src/builtins/typed-array.tq:36:4
    *_return_144 = INT32_ELEMENTS;
    Goto(label_macro_end_640);
  }
  BIND(label_macro_end_640);
  return (*_return_144);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  ElementsKind _return_145_impl;
  auto _return_145 = &_return_145_impl;
  USE(_return_145);
  Label label_macro_end_641_impl(this, {});
  Label* label_macro_end_641 = &label_macro_end_641_impl;
  USE(label_macro_end_641);
  // ../../src/builtins/typed-array.tq:38:64
  {
    // ../../src/builtins/typed-array.tq:39:4
    *_return_145 = FLOAT32_ELEMENTS;
    Goto(label_macro_end_641);
  }
  BIND(label_macro_end_641);
  return (*_return_145);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  ElementsKind _return_146_impl;
  auto _return_146 = &_return_146_impl;
  USE(_return_146);
  Label label_macro_end_642_impl(this, {});
  Label* label_macro_end_642 = &label_macro_end_642_impl;
  USE(label_macro_end_642);
  // ../../src/builtins/typed-array.tq:41:64
  {
    // ../../src/builtins/typed-array.tq:42:4
    *_return_146 = FLOAT64_ELEMENTS;
    Goto(label_macro_end_642);
  }
  BIND(label_macro_end_642);
  return (*_return_146);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  ElementsKind _return_147_impl;
  auto _return_147 = &_return_147_impl;
  USE(_return_147);
  Label label_macro_end_643_impl(this, {});
  Label* label_macro_end_643 = &label_macro_end_643_impl;
  USE(label_macro_end_643);
  // ../../src/builtins/typed-array.tq:44:69
  {
    // ../../src/builtins/typed-array.tq:45:4
    *_return_147 = UINT8_CLAMPED_ELEMENTS;
    Goto(label_macro_end_643);
  }
  BIND(label_macro_end_643);
  return (*_return_147);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  ElementsKind _return_148_impl;
  auto _return_148 = &_return_148_impl;
  USE(_return_148);
  Label label_macro_end_644_impl(this, {});
  Label* label_macro_end_644 = &label_macro_end_644_impl;
  USE(label_macro_end_644);
  // ../../src/builtins/typed-array.tq:47:66
  {
    // ../../src/builtins/typed-array.tq:48:4
    *_return_148 = BIGUINT64_ELEMENTS;
    Goto(label_macro_end_644);
  }
  BIND(label_macro_end_644);
  return (*_return_148);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  ElementsKind _return_149_impl;
  auto _return_149 = &_return_149_impl;
  USE(_return_149);
  Label label_macro_end_645_impl(this, {});
  Label* label_macro_end_645 = &label_macro_end_645_impl;
  USE(label_macro_end_645);
  // ../../src/builtins/typed-array.tq:50:65
  {
    // ../../src/builtins/typed-array.tq:51:4
    *_return_149 = BIGINT64_ELEMENTS;
    Goto(label_macro_end_645);
  }
  BIND(label_macro_end_645);
  return (*_return_149);
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_108) {
  TVARIABLE(Number, _return_150_impl);
  auto _return_150 = &_return_150_impl;
  USE(_return_150);
  Label label_macro_end_646_impl(this, {_return_150});
  Label* label_macro_end_646 = &label_macro_end_646_impl;
  USE(label_macro_end_646);
  // ../../src/builtins/typed-array.tq:72:41
  {
    // ../../src/builtins/typed-array.tq:74:4
    TNode<Object> t363 = UncheckedCast<Object>(Call(p_context, p_comparefn, Undefined(), p_a, p_b));
    USE(t363);
    TNode<Number> t364 = UncheckedCast<Number>(ToNumber_Inline(p_context, t363));
    USE(t364);
    TVARIABLE(Number, v_151_impl);
    auto v_151 = &v_151_impl;
    USE(v_151);
    *v_151 = t364;
    // ../../src/builtins/typed-array.tq:78:4
    {
      Label label__True_109_impl(this);
      Label* label__True_109 = &label__True_109_impl;
      USE(label__True_109);
      Label label__False_110_impl(this, {});
      Label* label__False_110 = &label__False_110_impl;
      USE(label__False_110);
      TNode<JSArrayBuffer> t365 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t366 = UncheckedCast<BoolT>(IsDetachedBuffer(t365));
      USE(t366);
      Branch(t366, label__True_109, label__False_110);
      if (label__True_109->is_used())
      {
        BIND(label__True_109);
        // ../../src/builtins/typed-array.tq:78:40
        Goto(label_Detached_108);
      }
      BIND(label__False_110);
    }
    // ../../src/builtins/typed-array.tq:81:4
    {
      Label label__True_111_impl(this);
      Label* label__True_111 = &label__True_111_impl;
      USE(label__True_111);
      Label label__False_112_impl(this, {});
      Label* label__False_112 = &label__False_112_impl;
      USE(label__False_112);
      TNode<BoolT> t367 = UncheckedCast<BoolT>(NumberIsNaN((*v_151).value()));
      USE(t367);
      Branch(t367, label__True_111, label__False_112);
      if (label__True_111->is_used())
      {
        BIND(label__True_111);
        // ../../src/builtins/typed-array.tq:81:24
        int31_t t368 = 0;
        TNode<Number> t369 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t368));
        *_return_150 = t369;
        Goto(label_macro_end_646);
      }
      BIND(label__False_112);
    }
    // ../../src/builtins/typed-array.tq:84:4
    *_return_150 = (*v_151).value();
    Goto(label_macro_end_646);
  }
  BIND(label_macro_end_646);
  return (*_return_150).value();
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_113) {
  Label label_macro_end_647_impl(this, {});
  Label* label_macro_end_647 = &label_macro_end_647_impl;
  USE(label_macro_end_647);
  // ../../src/builtins/typed-array.tq:91:18
  {
    // ../../src/builtins/typed-array.tq:92:4
    TVARIABLE(Smi, from_152_impl);
    auto from_152 = &from_152_impl;
    USE(from_152);
    *from_152 = p_from_arg;
    // ../../src/builtins/typed-array.tq:93:4
    TVARIABLE(Smi, to_153_impl);
    auto to_153 = &to_153_impl;
    USE(to_153);
    *to_153 = p_to_arg;
    // ../../src/builtins/typed-array.tq:95:4
    {
      Label label__True_114_impl(this);
      Label* label__True_114 = &label__True_114_impl;
      USE(label__True_114);
      Label label__False_115_impl(this, {});
      Label* label__False_115 = &label__False_115_impl;
      USE(label__False_115);
      TNode<JSArrayBuffer> t370 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t371 = UncheckedCast<BoolT>(IsDetachedBuffer(t370));
      USE(t371);
      Branch(t371, label__True_114, label__False_115);
      if (label__True_114->is_used())
      {
        BIND(label__True_114);
        // ../../src/builtins/typed-array.tq:95:40
        Goto(label_Detached_113);
      }
      BIND(label__False_115);
    }
    // ../../src/builtins/typed-array.tq:97:4
    int31_t t372 = 1;
    TNode<Smi> t373 = UncheckedCast<Smi>(from_constexpr5ATSmi(t372));
    TNode<Smi> t374 = UncheckedCast<Smi>(SmiAdd((*from_152).value(), t373));
    USE(t374);
    TVARIABLE(Smi, i_154_impl);
    auto i_154 = &i_154_impl;
    USE(i_154);
    *i_154 = t374;
    Label label__True_116_impl(this);
    Label* label__True_116 = &label__True_116_impl;
    USE(label__True_116);
    Label label__False_117_impl(this);
    Label* label__False_117 = &label__False_117_impl;
    USE(label__False_117);
    Label label_header_509_648_impl(this, {i_154});
    Label* label_header_509_648 = &label_header_509_648_impl;
    USE(label_header_509_648);
    Goto(label_header_509_648);
    BIND(label_header_509_648);
    Label label_assignment_510_649_impl(this);
    Label* label_assignment_510_649 = &label_assignment_510_649_impl;
    USE(label_assignment_510_649);
    TNode<BoolT> t375 = UncheckedCast<BoolT>(SmiLessThan((*i_154).value(), (*to_153).value()));
    USE(t375);
    Branch(t375, label__True_116, label__False_117);
    if (label__True_116->is_used())
    {
      BIND(label__True_116);
      // ../../src/builtins/typed-array.tq:97:45
      {
        // ../../src/builtins/typed-array.tq:98:6
        TNode<Object> t376 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*i_154).value()));
        USE(t376);
        TVARIABLE(Object, element_155_impl);
        auto element_155 = &element_155_impl;
        USE(element_155);
        *element_155 = t376;
        // ../../src/builtins/typed-array.tq:99:6
        int31_t t377 = 1;
        TNode<Smi> t378 = UncheckedCast<Smi>(from_constexpr5ATSmi(t377));
        TNode<Smi> t379 = UncheckedCast<Smi>(SmiSub((*i_154).value(), t378));
        USE(t379);
        TVARIABLE(Smi, j_156_impl);
        auto j_156 = &j_156_impl;
        USE(j_156);
        *j_156 = t379;
        // ../../src/builtins/typed-array.tq:100:6
        Label label__True_118_impl(this);
        Label* label__True_118 = &label__True_118_impl;
        USE(label__True_118);
        Label label__False_119_impl(this);
        Label* label__False_119 = &label__False_119_impl;
        USE(label__False_119);
        Label label_header_511_650_impl(this, {j_156});
        Label* label_header_511_650 = &label_header_511_650_impl;
        USE(label_header_511_650);
        Goto(label_header_511_650);
        BIND(label_header_511_650);
        Label label_assignment_512_651_impl(this);
        Label* label_assignment_512_651 = &label_assignment_512_651_impl;
        USE(label_assignment_512_651);
        TNode<BoolT> t380 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual((*j_156).value(), (*from_152).value()));
        USE(t380);
        Branch(t380, label__True_118, label__False_119);
        if (label__True_118->is_used())
        {
          BIND(label__True_118);
          // ../../src/builtins/typed-array.tq:100:29
          {
            // ../../src/builtins/typed-array.tq:101:8
            TNode<Object> t381 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*j_156).value()));
            USE(t381);
            TVARIABLE(Object, tmp_157_impl);
            auto tmp_157 = &tmp_157_impl;
            USE(tmp_157);
            *tmp_157 = t381;
            // ../../src/builtins/typed-array.tq:102:8
            TNode<Number> t382 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*tmp_157).value(), (*element_155).value(), label_Detached_113));
            USE(t382);
            TVARIABLE(Number, order_158_impl);
            auto order_158 = &order_158_impl;
            USE(order_158);
            *order_158 = t382;
            // ../../src/builtins/typed-array.tq:104:8
            {
              Label label__True_120_impl(this);
              Label* label__True_120 = &label__True_120_impl;
              USE(label__True_120);
              Label label__False_121_impl(this);
              Label* label__False_121 = &label__False_121_impl;
              USE(label__False_121);
              Label label_if_done_label_513_652_impl(this, {});
              Label* label_if_done_label_513_652 = &label_if_done_label_513_652_impl;
              USE(label_if_done_label_513_652);
              int31_t t383 = 0;
              TNode<Number> t384 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t383));
              BranchIfNumberGreaterThan((*order_158).value(), t384, label__True_120, label__False_121);
              if (label__True_120->is_used())
              {
                BIND(label__True_120);
                // ../../src/builtins/typed-array.tq:104:23
                {
                  // ../../src/builtins/typed-array.tq:105:10
                  int31_t t385 = 1;
                  TNode<Smi> t386 = UncheckedCast<Smi>(from_constexpr5ATSmi(t385));
                  TNode<Smi> t387 = UncheckedCast<Smi>(SmiAdd((*j_156).value(), t386));
                  USE(t387);
                  TNode<Object> t388 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t387, (*tmp_157).value()));
                  USE(t388);
                }
                Goto(label_if_done_label_513_652);
              }
              if (label__False_121->is_used())
              {
                BIND(label__False_121);
                // ../../src/builtins/typed-array.tq:106:15
                {
                  // ../../src/builtins/typed-array.tq:107:10
                  Goto(label__False_119);
                }
              }
              BIND(label_if_done_label_513_652);
            }
          }
          Goto(label_assignment_512_651);
        }
        {
          BIND(label_assignment_512_651);
          TNode<Smi> t389 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t390 = UncheckedCast<Smi>(SmiSub((*j_156).value(), t389));
          *j_156 = t390;
          Goto(label_header_511_650);
        }
        BIND(label__False_119);
        // ../../src/builtins/typed-array.tq:110:6
        int31_t t391 = 1;
        TNode<Smi> t392 = UncheckedCast<Smi>(from_constexpr5ATSmi(t391));
        TNode<Smi> t393 = UncheckedCast<Smi>(SmiAdd((*j_156).value(), t392));
        USE(t393);
        TNode<Object> t394 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t393, (*element_155).value()));
        USE(t394);
      }
      Goto(label_assignment_510_649);
    }
    {
      BIND(label_assignment_510_649);
      TNode<Smi> t395 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
      TNode<Smi> t396 = UncheckedCast<Smi>(SmiAdd((*i_154).value(), t395));
      *i_154 = t396;
      Goto(label_header_509_648);
    }
    BIND(label__False_117);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_122) {
  Label label_macro_end_653_impl(this, {});
  Label* label_macro_end_653 = &label_macro_end_653_impl;
  USE(label_macro_end_653);
  // ../../src/builtins/typed-array.tq:117:18
  {
    // ../../src/builtins/typed-array.tq:118:4
    TVARIABLE(Smi, from_159_impl);
    auto from_159 = &from_159_impl;
    USE(from_159);
    *from_159 = p_from_arg;
    // ../../src/builtins/typed-array.tq:119:4
    TVARIABLE(Smi, to_160_impl);
    auto to_160 = &to_160_impl;
    USE(to_160);
    *to_160 = p_to_arg;
    // ../../src/builtins/typed-array.tq:121:4
    {
      Label label__True_123_impl(this);
      Label* label__True_123 = &label__True_123_impl;
      USE(label__True_123);
      Label label__False_124_impl(this);
      Label* label__False_124 = &label__False_124_impl;
      USE(label__False_124);
      Label label_header_514_654_impl(this, {from_159, to_160});
      Label* label_header_514_654 = &label_header_514_654_impl;
      USE(label_header_514_654);
      Goto(label_header_514_654);
      BIND(label_header_514_654);
      TNode<Smi> t397 = UncheckedCast<Smi>(SmiSub((*to_160).value(), (*from_159).value()));
      USE(t397);
      int31_t t398 = 1;
      TNode<Smi> t399 = UncheckedCast<Smi>(from_constexpr5ATSmi(t398));
      TNode<BoolT> t400 = UncheckedCast<BoolT>(SmiGreaterThan(t397, t399));
      USE(t400);
      Branch(t400, label__True_123, label__False_124);
      if (label__True_123->is_used())
      {
        BIND(label__True_123);
        // ../../src/builtins/typed-array.tq:121:26
        {
          // ../../src/builtins/typed-array.tq:122:6
          {
            Label label__True_125_impl(this);
            Label* label__True_125 = &label__True_125_impl;
            USE(label__True_125);
            Label label__False_126_impl(this, {});
            Label* label__False_126 = &label__False_126_impl;
            USE(label__False_126);
            TNode<Smi> t401 = UncheckedCast<Smi>(SmiSub((*to_160).value(), (*from_159).value()));
            USE(t401);
            int31_t t402 = 10;
            TNode<Smi> t403 = UncheckedCast<Smi>(from_constexpr5ATSmi(t402));
            TNode<BoolT> t404 = UncheckedCast<BoolT>(SmiLessThanOrEqual(t401, t403));
            USE(t404);
            Branch(t404, label__True_125, label__False_126);
            if (label__True_125->is_used())
            {
              BIND(label__True_125);
              // ../../src/builtins/typed-array.tq:122:27
              {
                // ../../src/builtins/typed-array.tq:126:8
                TypedArrayInsertionSort(p_context, p_array, (*from_159).value(), (*to_160).value(), p_comparefn, p_Load, p_Store, label_Detached_122);
                // ../../src/builtins/typed-array.tq:129:8
                Goto(label__False_124);
              }
            }
            BIND(label__False_126);
          }
          // ../../src/builtins/typed-array.tq:134:6
          TNode<Smi> t405 = UncheckedCast<Smi>(SmiSub((*to_160).value(), (*from_159).value()));
          USE(t405);
          int31_t t406 = 1;
          TNode<Smi> t407 = UncheckedCast<Smi>(SmiShr(t405, t406));
          USE(t407);
          TNode<Smi> t408 = UncheckedCast<Smi>(SmiAdd((*from_159).value(), t407));
          USE(t408);
          TVARIABLE(Smi, third_index_161_impl);
          auto third_index_161 = &third_index_161_impl;
          USE(third_index_161);
          *third_index_161 = t408;
          // ../../src/builtins/typed-array.tq:136:6
          {
            Label label__True_127_impl(this);
            Label* label__True_127 = &label__True_127_impl;
            USE(label__True_127);
            Label label__False_128_impl(this, {});
            Label* label__False_128 = &label__False_128_impl;
            USE(label__False_128);
            TNode<JSArrayBuffer> t409 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
            TNode<BoolT> t410 = UncheckedCast<BoolT>(IsDetachedBuffer(t409));
            USE(t410);
            Branch(t410, label__True_127, label__False_128);
            if (label__True_127->is_used())
            {
              BIND(label__True_127);
              // ../../src/builtins/typed-array.tq:136:42
              Goto(label_Detached_122);
            }
            BIND(label__False_128);
          }
          // ../../src/builtins/typed-array.tq:139:6
          TNode<Object> t411 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*from_159).value()));
          USE(t411);
          TVARIABLE(Object, v0_162_impl);
          auto v0_162 = &v0_162_impl;
          USE(v0_162);
          *v0_162 = t411;
          // ../../src/builtins/typed-array.tq:140:6
          int31_t t412 = 1;
          TNode<Smi> t413 = UncheckedCast<Smi>(from_constexpr5ATSmi(t412));
          TNode<Smi> t414 = UncheckedCast<Smi>(SmiSub((*to_160).value(), t413));
          USE(t414);
          TNode<Object> t415 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, t414));
          USE(t415);
          TVARIABLE(Object, v1_163_impl);
          auto v1_163 = &v1_163_impl;
          USE(v1_163);
          *v1_163 = t415;
          // ../../src/builtins/typed-array.tq:141:6
          TNode<Object> t416 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*third_index_161).value()));
          USE(t416);
          TVARIABLE(Object, v2_164_impl);
          auto v2_164 = &v2_164_impl;
          USE(v2_164);
          *v2_164 = t416;
          // ../../src/builtins/typed-array.tq:143:6
          TNode<Number> t417 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v0_162).value(), (*v1_163).value(), label_Detached_122));
          USE(t417);
          TVARIABLE(Number, c01_165_impl);
          auto c01_165 = &c01_165_impl;
          USE(c01_165);
          *c01_165 = t417;
          // ../../src/builtins/typed-array.tq:145:6
          {
            Label label__True_129_impl(this);
            Label* label__True_129 = &label__True_129_impl;
            USE(label__True_129);
            Label label__False_130_impl(this, {v0_162, v1_163});
            Label* label__False_130 = &label__False_130_impl;
            USE(label__False_130);
            int31_t t418 = 0;
            TNode<Number> t419 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t418));
            BranchIfNumberGreaterThan((*c01_165).value(), t419, label__True_129, label__False_130);
            if (label__True_129->is_used())
            {
              BIND(label__True_129);
              // ../../src/builtins/typed-array.tq:145:19
              {
                // ../../src/builtins/typed-array.tq:147:8
                TVARIABLE(Object, tmp_166_impl);
                auto tmp_166 = &tmp_166_impl;
                USE(tmp_166);
                *tmp_166 = (*v0_162).value();
                // ../../src/builtins/typed-array.tq:148:8
                *v0_162 = (*v1_163).value();
                // ../../src/builtins/typed-array.tq:149:8
                *v1_163 = (*tmp_166).value();
              }
              Goto(label__False_130);
            }
            BIND(label__False_130);
          }
          // ../../src/builtins/typed-array.tq:152:6
          TNode<Number> t420 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v0_162).value(), (*v2_164).value(), label_Detached_122));
          USE(t420);
          TVARIABLE(Number, c02_167_impl);
          auto c02_167 = &c02_167_impl;
          USE(c02_167);
          *c02_167 = t420;
          // ../../src/builtins/typed-array.tq:154:6
          {
            Label label__True_131_impl(this);
            Label* label__True_131 = &label__True_131_impl;
            USE(label__True_131);
            Label label__False_132_impl(this);
            Label* label__False_132 = &label__False_132_impl;
            USE(label__False_132);
            Label label_if_done_label_515_655_impl(this, {v0_162, v1_163, v2_164});
            Label* label_if_done_label_515_655 = &label_if_done_label_515_655_impl;
            USE(label_if_done_label_515_655);
            int31_t t421 = 0;
            TNode<Number> t422 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t421));
            BranchIfNumberGreaterThanOrEqual((*c02_167).value(), t422, label__True_131, label__False_132);
            if (label__True_131->is_used())
            {
              BIND(label__True_131);
              // ../../src/builtins/typed-array.tq:154:20
              {
                // ../../src/builtins/typed-array.tq:156:8
                TVARIABLE(Object, tmp_168_impl);
                auto tmp_168 = &tmp_168_impl;
                USE(tmp_168);
                *tmp_168 = (*v0_162).value();
                // ../../src/builtins/typed-array.tq:157:8
                *v0_162 = (*v2_164).value();
                // ../../src/builtins/typed-array.tq:158:8
                *v2_164 = (*v1_163).value();
                // ../../src/builtins/typed-array.tq:159:8
                *v1_163 = (*tmp_168).value();
              }
              Goto(label_if_done_label_515_655);
            }
            if (label__False_132->is_used())
            {
              BIND(label__False_132);
              // ../../src/builtins/typed-array.tq:160:13
              {
                // ../../src/builtins/typed-array.tq:162:8
                TNode<Number> t423 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v1_163).value(), (*v2_164).value(), label_Detached_122));
                USE(t423);
                TVARIABLE(Number, c12_169_impl);
                auto c12_169 = &c12_169_impl;
                USE(c12_169);
                *c12_169 = t423;
                // ../../src/builtins/typed-array.tq:164:8
                {
                  Label label__True_133_impl(this);
                  Label* label__True_133 = &label__True_133_impl;
                  USE(label__True_133);
                  Label label__False_134_impl(this, {v1_163, v2_164});
                  Label* label__False_134 = &label__False_134_impl;
                  USE(label__False_134);
                  int31_t t424 = 0;
                  TNode<Number> t425 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t424));
                  BranchIfNumberGreaterThan((*c12_169).value(), t425, label__True_133, label__False_134);
                  if (label__True_133->is_used())
                  {
                    BIND(label__True_133);
                    // ../../src/builtins/typed-array.tq:164:21
                    {
                      // ../../src/builtins/typed-array.tq:166:10
                      TVARIABLE(Object, tmp_170_impl);
                      auto tmp_170 = &tmp_170_impl;
                      USE(tmp_170);
                      *tmp_170 = (*v1_163).value();
                      // ../../src/builtins/typed-array.tq:167:10
                      *v1_163 = (*v2_164).value();
                      // ../../src/builtins/typed-array.tq:168:10
                      *v2_164 = (*tmp_170).value();
                    }
                    Goto(label__False_134);
                  }
                  BIND(label__False_134);
                }
              }
              Goto(label_if_done_label_515_655);
            }
            BIND(label_if_done_label_515_655);
          }
          // ../../src/builtins/typed-array.tq:173:6
          TNode<Object> t426 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*from_159).value(), (*v0_162).value()));
          USE(t426);
          // ../../src/builtins/typed-array.tq:174:6
          int31_t t427 = 1;
          TNode<Smi> t428 = UncheckedCast<Smi>(from_constexpr5ATSmi(t427));
          TNode<Smi> t429 = UncheckedCast<Smi>(SmiSub((*to_160).value(), t428));
          USE(t429);
          TNode<Object> t430 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t429, (*v2_164).value()));
          USE(t430);
          // ../../src/builtins/typed-array.tq:176:6
          TVARIABLE(Object, pivot_171_impl);
          auto pivot_171 = &pivot_171_impl;
          USE(pivot_171);
          *pivot_171 = (*v1_163).value();
          // ../../src/builtins/typed-array.tq:177:6
          int31_t t431 = 1;
          TNode<Smi> t432 = UncheckedCast<Smi>(from_constexpr5ATSmi(t431));
          TNode<Smi> t433 = UncheckedCast<Smi>(SmiAdd((*from_159).value(), t432));
          USE(t433);
          TVARIABLE(Smi, low_end_172_impl);
          auto low_end_172 = &low_end_172_impl;
          USE(low_end_172);
          *low_end_172 = t433;
          // ../../src/builtins/typed-array.tq:178:6
          int31_t t434 = 1;
          TNode<Smi> t435 = UncheckedCast<Smi>(from_constexpr5ATSmi(t434));
          TNode<Smi> t436 = UncheckedCast<Smi>(SmiSub((*to_160).value(), t435));
          USE(t436);
          TVARIABLE(Smi, high_start_173_impl);
          auto high_start_173 = &high_start_173_impl;
          USE(high_start_173);
          *high_start_173 = t436;
          // ../../src/builtins/typed-array.tq:180:6
          TNode<Object> t437 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_172).value()));
          USE(t437);
          TVARIABLE(Object, low_end_value_174_impl);
          auto low_end_value_174 = &low_end_value_174_impl;
          USE(low_end_value_174);
          *low_end_value_174 = t437;
          // ../../src/builtins/typed-array.tq:181:6
          TNode<Object> t438 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*third_index_161).value(), (*low_end_value_174).value()));
          USE(t438);
          // ../../src/builtins/typed-array.tq:182:6
          TNode<Object> t439 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_172).value(), (*pivot_171).value()));
          USE(t439);
          // ../../src/builtins/typed-array.tq:186:6
          int31_t t440 = 1;
          TNode<Smi> t441 = UncheckedCast<Smi>(from_constexpr5ATSmi(t440));
          TNode<Smi> t442 = UncheckedCast<Smi>(SmiAdd((*low_end_172).value(), t441));
          USE(t442);
          TVARIABLE(Smi, idx_175_impl);
          auto idx_175 = &idx_175_impl;
          USE(idx_175);
          *idx_175 = t442;
          Label label__True_135_impl(this);
          Label* label__True_135 = &label__True_135_impl;
          USE(label__True_135);
          Label label__False_136_impl(this);
          Label* label__False_136 = &label__False_136_impl;
          USE(label__False_136);
          Label label_header_516_656_impl(this, {low_end_172, high_start_173, low_end_value_174, idx_175});
          Label* label_header_516_656 = &label_header_516_656_impl;
          USE(label_header_516_656);
          Goto(label_header_516_656);
          BIND(label_header_516_656);
          Label label_assignment_517_657_impl(this);
          Label* label_assignment_517_657 = &label_assignment_517_657_impl;
          USE(label_assignment_517_657);
          TNode<BoolT> t443 = UncheckedCast<BoolT>(SmiLessThan((*idx_175).value(), (*high_start_173).value()));
          USE(t443);
          Branch(t443, label__True_135, label__False_136);
          if (label__True_135->is_used())
          {
            BIND(label__True_135);
            // ../../src/builtins/typed-array.tq:186:64
            {
              // ../../src/builtins/typed-array.tq:187:8
              TNode<Object> t444 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*idx_175).value()));
              USE(t444);
              TVARIABLE(Object, element_176_impl);
              auto element_176 = &element_176_impl;
              USE(element_176);
              *element_176 = t444;
              // ../../src/builtins/typed-array.tq:188:8
              TNode<Number> t445 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*element_176).value(), (*pivot_171).value(), label_Detached_122));
              USE(t445);
              TVARIABLE(Number, order_177_impl);
              auto order_177 = &order_177_impl;
              USE(order_177);
              *order_177 = t445;
              // ../../src/builtins/typed-array.tq:191:8
              {
                Label label__True_137_impl(this);
                Label* label__True_137 = &label__True_137_impl;
                USE(label__True_137);
                Label label__False_138_impl(this);
                Label* label__False_138 = &label__False_138_impl;
                USE(label__False_138);
                Label label_if_done_label_518_658_impl(this, {low_end_172, high_start_173, low_end_value_174, element_176, order_177});
                Label* label_if_done_label_518_658 = &label_if_done_label_518_658_impl;
                USE(label_if_done_label_518_658);
                int31_t t446 = 0;
                TNode<Number> t447 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t446));
                BranchIfNumberLessThan((*order_177).value(), t447, label__True_137, label__False_138);
                if (label__True_137->is_used())
                {
                  BIND(label__True_137);
                  // ../../src/builtins/typed-array.tq:191:23
                  {
                    // ../../src/builtins/typed-array.tq:192:10
                    TNode<Object> t448 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_172).value()));
                    USE(t448);
                    *low_end_value_174 = t448;
                    // ../../src/builtins/typed-array.tq:193:10
                    TNode<Object> t449 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_175).value(), (*low_end_value_174).value()));
                    USE(t449);
                    // ../../src/builtins/typed-array.tq:194:10
                    TNode<Object> t450 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_172).value(), (*element_176).value()));
                    USE(t450);
                    // ../../src/builtins/typed-array.tq:195:10
                    TNode<Smi> t451 = (*low_end_172).value();
                    USE(t451);
                    TNode<Smi> t452 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                    TNode<Smi> t453 = UncheckedCast<Smi>(SmiAdd((*low_end_172).value(), t452));
                    *low_end_172 = t453;
                  }
                  Goto(label_if_done_label_518_658);
                }
                if (label__False_138->is_used())
                {
                  BIND(label__False_138);
                  // ../../src/builtins/typed-array.tq:196:15
                  {
                    Label label__True_139_impl(this);
                    Label* label__True_139 = &label__True_139_impl;
                    USE(label__True_139);
                    Label label__False_140_impl(this, {low_end_172, high_start_173, low_end_value_174, element_176, order_177});
                    Label* label__False_140 = &label__False_140_impl;
                    USE(label__False_140);
                    int31_t t454 = 0;
                    TNode<Number> t455 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t454));
                    BranchIfNumberGreaterThan((*order_177).value(), t455, label__True_139, label__False_140);
                    if (label__True_139->is_used())
                    {
                      BIND(label__True_139);
                      // ../../src/builtins/typed-array.tq:196:30
                      {
                        // ../../src/builtins/typed-array.tq:197:10
                        TVARIABLE(BoolT, break_for_178_impl);
                        auto break_for_178 = &break_for_178_impl;
                        USE(break_for_178);
                        TNode<BoolT> t456 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                        *break_for_178 = t456;
                        // ../../src/builtins/typed-array.tq:199:10
                        {
                          Label label__True_141_impl(this);
                          Label* label__True_141 = &label__True_141_impl;
                          USE(label__True_141);
                          Label label__False_142_impl(this);
                          Label* label__False_142 = &label__False_142_impl;
                          USE(label__False_142);
                          Label label_header_519_659_impl(this, {high_start_173, order_177, break_for_178});
                          Label* label_header_519_659 = &label_header_519_659_impl;
                          USE(label_header_519_659);
                          Goto(label_header_519_659);
                          BIND(label_header_519_659);
                          int31_t t457 = 0;
                          TNode<Number> t458 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t457));
                          BranchIfNumberGreaterThan((*order_177).value(), t458, label__True_141, label__False_142);
                          if (label__True_141->is_used())
                          {
                            BIND(label__True_141);
                            // ../../src/builtins/typed-array.tq:199:28
                            {
                              // ../../src/builtins/typed-array.tq:200:12
                              TNode<Smi> t459 = (*high_start_173).value();
                              USE(t459);
                              TNode<Smi> t460 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                              TNode<Smi> t461 = UncheckedCast<Smi>(SmiSub((*high_start_173).value(), t460));
                              *high_start_173 = t461;
                              // ../../src/builtins/typed-array.tq:201:12
                              {
                                Label label__True_143_impl(this);
                                Label* label__True_143 = &label__True_143_impl;
                                USE(label__True_143);
                                Label label__False_144_impl(this, {break_for_178});
                                Label* label__False_144 = &label__False_144_impl;
                                USE(label__False_144);
                                TNode<BoolT> t462 = UncheckedCast<BoolT>(SmiEqual((*high_start_173).value(), (*idx_175).value()));
                                USE(t462);
                                Branch(t462, label__True_143, label__False_144);
                                if (label__True_143->is_used())
                                {
                                  BIND(label__True_143);
                                  // ../../src/builtins/typed-array.tq:201:35
                                  {
                                    // ../../src/builtins/typed-array.tq:202:14
                                    TNode<BoolT> t463 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                                    *break_for_178 = t463;
                                    // ../../src/builtins/typed-array.tq:203:14
                                    Goto(label__False_142);
                                  }
                                }
                                BIND(label__False_144);
                              }
                              // ../../src/builtins/typed-array.tq:206:12
                              TNode<Object> t464 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*high_start_173).value()));
                              USE(t464);
                              TVARIABLE(Object, top_elem_179_impl);
                              auto top_elem_179 = &top_elem_179_impl;
                              USE(top_elem_179);
                              *top_elem_179 = t464;
                              // ../../src/builtins/typed-array.tq:207:12
                              TNode<Number> t465 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*top_elem_179).value(), (*pivot_171).value(), label_Detached_122));
                              USE(t465);
                              *order_177 = t465;
                            }
                            Goto(label_header_519_659);
                          }
                          BIND(label__False_142);
                        }
                        // ../../src/builtins/typed-array.tq:211:10
                        {
                          Label label__True_145_impl(this);
                          Label* label__True_145 = &label__True_145_impl;
                          USE(label__True_145);
                          Label label__False_146_impl(this, {});
                          Label* label__False_146 = &label__False_146_impl;
                          USE(label__False_146);
                          Branch((*break_for_178).value(), label__True_145, label__False_146);
                          if (label__True_145->is_used())
                          {
                            BIND(label__True_145);
                            // ../../src/builtins/typed-array.tq:211:25
                            {
                              // ../../src/builtins/typed-array.tq:212:12
                              Goto(label__False_136);
                            }
                          }
                          BIND(label__False_146);
                        }
                        // ../../src/builtins/typed-array.tq:215:10
                        TNode<Object> t466 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*high_start_173).value()));
                        USE(t466);
                        TVARIABLE(Object, high_start_value_180_impl);
                        auto high_start_value_180 = &high_start_value_180_impl;
                        USE(high_start_value_180);
                        *high_start_value_180 = t466;
                        // ../../src/builtins/typed-array.tq:216:10
                        TNode<Object> t467 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_175).value(), (*high_start_value_180).value()));
                        USE(t467);
                        // ../../src/builtins/typed-array.tq:217:10
                        TNode<Object> t468 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*high_start_173).value(), (*element_176).value()));
                        USE(t468);
                        // ../../src/builtins/typed-array.tq:219:10
                        {
                          Label label__True_147_impl(this);
                          Label* label__True_147 = &label__True_147_impl;
                          USE(label__True_147);
                          Label label__False_148_impl(this, {low_end_172, low_end_value_174, element_176});
                          Label* label__False_148 = &label__False_148_impl;
                          USE(label__False_148);
                          int31_t t469 = 0;
                          TNode<Number> t470 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t469));
                          BranchIfNumberLessThan((*order_177).value(), t470, label__True_147, label__False_148);
                          if (label__True_147->is_used())
                          {
                            BIND(label__True_147);
                            // ../../src/builtins/typed-array.tq:219:25
                            {
                              // ../../src/builtins/typed-array.tq:220:12
                              TNode<Object> t471 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*idx_175).value()));
                              USE(t471);
                              *element_176 = t471;
                              // ../../src/builtins/typed-array.tq:222:12
                              TNode<Object> t472 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_172).value()));
                              USE(t472);
                              *low_end_value_174 = t472;
                              // ../../src/builtins/typed-array.tq:223:12
                              TNode<Object> t473 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_175).value(), (*low_end_value_174).value()));
                              USE(t473);
                              // ../../src/builtins/typed-array.tq:224:12
                              TNode<Object> t474 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_172).value(), (*element_176).value()));
                              USE(t474);
                              // ../../src/builtins/typed-array.tq:225:12
                              TNode<Smi> t475 = (*low_end_172).value();
                              USE(t475);
                              TNode<Smi> t476 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                              TNode<Smi> t477 = UncheckedCast<Smi>(SmiAdd((*low_end_172).value(), t476));
                              *low_end_172 = t477;
                            }
                            Goto(label__False_148);
                          }
                          BIND(label__False_148);
                        }
                      }
                      Goto(label__False_140);
                    }
                    BIND(label__False_140);
                  }
                  Goto(label_if_done_label_518_658);
                }
                BIND(label_if_done_label_518_658);
              }
            }
            Goto(label_assignment_517_657);
          }
          {
            BIND(label_assignment_517_657);
            TNode<Smi> t478 = (*idx_175).value();
            USE(t478);
            TNode<Smi> t479 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
            TNode<Smi> t480 = UncheckedCast<Smi>(SmiAdd((*idx_175).value(), t479));
            *idx_175 = t480;
            Goto(label_header_516_656);
          }
          BIND(label__False_136);
          // ../../src/builtins/typed-array.tq:230:6
          {
            Label label__True_149_impl(this);
            Label* label__True_149 = &label__True_149_impl;
            USE(label__True_149);
            Label label__False_150_impl(this);
            Label* label__False_150 = &label__False_150_impl;
            USE(label__False_150);
            Label label_if_done_label_520_660_impl(this, {from_159, to_160});
            Label* label_if_done_label_520_660 = &label_if_done_label_520_660_impl;
            USE(label_if_done_label_520_660);
            TNode<Smi> t481 = UncheckedCast<Smi>(SmiSub((*to_160).value(), (*high_start_173).value()));
            USE(t481);
            TNode<Smi> t482 = UncheckedCast<Smi>(SmiSub((*low_end_172).value(), (*from_159).value()));
            USE(t482);
            TNode<BoolT> t483 = UncheckedCast<BoolT>(SmiLessThan(t481, t482));
            USE(t483);
            Branch(t483, label__True_149, label__False_150);
            if (label__True_149->is_used())
            {
              BIND(label__True_149);
              // ../../src/builtins/typed-array.tq:230:48
              {
                // ../../src/builtins/typed-array.tq:231:8
                TNode<JSTypedArray> t484 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, (*high_start_173).value(), (*to_160).value(), p_comparefn, p_Load, p_Store));
                USE(t484);
                // ../../src/builtins/typed-array.tq:233:8
                *to_160 = (*low_end_172).value();
              }
              Goto(label_if_done_label_520_660);
            }
            if (label__False_150->is_used())
            {
              BIND(label__False_150);
              // ../../src/builtins/typed-array.tq:234:13
              {
                // ../../src/builtins/typed-array.tq:235:8
                TNode<JSTypedArray> t485 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, (*from_159).value(), (*low_end_172).value(), p_comparefn, p_Load, p_Store));
                USE(t485);
                // ../../src/builtins/typed-array.tq:237:8
                *from_159 = (*high_start_173).value();
              }
              Goto(label_if_done_label_520_660);
            }
            BIND(label_if_done_label_520_660);
          }
        }
        Goto(label_header_514_654);
      }
      BIND(label__False_124);
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
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Code> p_Store = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(p_Store);
  // ../../src/builtins/typed-array.tq:244:71
  {
    // ../../src/builtins/typed-array.tq:245:4
    {
      Label label_try_done_521_661_impl(this);
      Label* label_try_done_521_661 = &label_try_done_521_661_impl;
      USE(label_try_done_521_661);
      Label label_Detached_151_impl(this);
      Label* label_Detached_151 = &label_Detached_151_impl;
      USE(label_Detached_151);
      Label label_try_begin_522_662_impl(this);
      Label* label_try_begin_522_662 = &label_try_begin_522_662_impl;
      USE(label_try_begin_522_662);
      Goto(label_try_begin_522_662);
      if (label_try_begin_522_662->is_used())
      {
        BIND(label_try_begin_522_662);
        // ../../src/builtins/typed-array.tq:245:8
        {
          // ../../src/builtins/typed-array.tq:246:6
          TypedArrayQuickSortImpl(p_context, p_array, p_from, p_to, p_comparefn, p_Load, p_Store, label_Detached_151);
        }
        Goto(label_try_done_521_661);
      }
      if (label_Detached_151->is_used())
      {
        BIND(label_Detached_151);
        // ../../src/builtins/typed-array.tq:249:19
        {
          // ../../src/builtins/typed-array.tq:250:6
          const char* t486 = "%TypedArray%.prototype.sort";
          TNode<Object> t487 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t486));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t487);
        }
      }
      BIND(label_try_done_521_661);
    }
    // ../../src/builtins/typed-array.tq:253:4
    Return(p_array);
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
  // ../../src/builtins/typed-array.tq:258:70
  {
    // ../../src/builtins/typed-array.tq:261:4
    auto t488 = [=]() {
      int31_t t490 = 0;
      TNode<IntPtrT> t491 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t490));
      TNode<Object> t492 = UncheckedCast<Object>(GetArgumentValue(arguments, t491));
      return t492;
    };
    auto t489 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t493_523_impl);
    auto t493_523 = &t493_523_impl;
    USE(t493_523);
    {
      Label label__True_152_impl(this);
      Label* label__True_152 = &label__True_152_impl;
      USE(label__True_152);
      Label label__False_153_impl(this);
      Label* label__False_153 = &label__False_153_impl;
      USE(label__False_153);
      Label label__done_524_663_impl(this, {t493_523});
      Label* label__done_524_663 = &label__done_524_663_impl;
      USE(label__done_524_663);
      TNode<IntPtrT> t494 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t495 = 0;
      TNode<IntPtrT> t496 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t495));
      TNode<BoolT> t497 = UncheckedCast<BoolT>(IntPtrGreaterThan(t494, t496));
      USE(t497);
      Branch(t497, label__True_152, label__False_153);
      BIND(label__True_152);
            *t493_523 = t488();
      Goto(label__done_524_663);
      BIND(label__False_153);
            *t493_523 = t489();
      Goto(label__done_524_663);
      BIND(label__done_524_663);
    }
    TVARIABLE(Object, comparefn_obj_181_impl);
    auto comparefn_obj_181 = &comparefn_obj_181_impl;
    USE(comparefn_obj_181);
    *comparefn_obj_181 = (*t493_523).value();
    // ../../src/builtins/typed-array.tq:262:4
    {
      Label label__True_154_impl(this);
      Label* label__True_154 = &label__True_154_impl;
      USE(label__True_154);
      Label label__False_155_impl(this, {});
      Label* label__False_155 = &label__False_155_impl;
      USE(label__False_155);
      Label label__True_156_impl(this);
      Label* label__True_156 = &label__True_156_impl;
      USE(label__True_156);
      TNode<BoolT> t498 = UncheckedCast<BoolT>(WordNotEqual((*comparefn_obj_181).value(), Undefined()));
      USE(t498);
      GotoIfNot(t498, label__False_155);
      TNode<BoolT> t499 = UncheckedCast<BoolT>(TaggedIsCallable((*comparefn_obj_181).value()));
      USE(t499);
      TNode<BoolT> t500 = UncheckedCast<BoolT>(Word32BinaryNot(t499));
      USE(t500);
      Branch(t500, label__True_154, label__False_155);
      if (label__True_154->is_used())
      {
        BIND(label__True_154);
        // ../../src/builtins/typed-array.tq:262:72
        {
          // ../../src/builtins/typed-array.tq:263:6
          ThrowTypeError(p_context, MessageTemplate::kBadSortComparisonFunction, (*comparefn_obj_181).value());
        }
      }
      BIND(label__False_155);
    }
    // ../../src/builtins/typed-array.tq:267:4
    TVARIABLE(Object, obj_182_impl);
    auto obj_182 = &obj_182_impl;
    USE(obj_182);
    *obj_182 = p_receiver;
    // ../../src/builtins/typed-array.tq:271:4
    const char* t501 = "%TypedArray%.prototype.sort";
    TNode<JSTypedArray> t502 = UncheckedCast<JSTypedArray>(ValidateTypedArray(p_context, (*obj_182).value(), t501));
    USE(t502);
    TVARIABLE(JSTypedArray, array_183_impl);
    auto array_183 = &array_183_impl;
    USE(array_183);
    *array_183 = t502;
    // ../../src/builtins/typed-array.tq:275:4
    {
      Label label__True_157_impl(this);
      Label* label__True_157 = &label__True_157_impl;
      USE(label__True_157);
      Label label__False_158_impl(this, {});
      Label* label__False_158 = &label__False_158_impl;
      USE(label__False_158);
      TNode<BoolT> t503 = UncheckedCast<BoolT>(WordEqual((*comparefn_obj_181).value(), Undefined()));
      USE(t503);
      Branch(t503, label__True_157, label__False_158);
      if (label__True_157->is_used())
      {
        BIND(label__True_157);
        // ../../src/builtins/typed-array.tq:275:36
        {
          // ../../src/builtins/typed-array.tq:276:6
          TNode<JSTypedArray> t504 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, p_context, (*obj_182).value()));
          USE(t504);
          arguments->PopAndReturn(t504);
        }
      }
      BIND(label__False_158);
    }
    // ../../src/builtins/typed-array.tq:280:4
    TNode<Smi> t505 = UncheckedCast<Smi>(LoadTypedArrayLength((*array_183).value()));
    TVARIABLE(Smi, len_184_impl);
    auto len_184 = &len_184_impl;
    USE(len_184);
    *len_184 = t505;
    // ../../src/builtins/typed-array.tq:282:4
    {
      Label label_try_done_525_664_impl(this);
      Label* label_try_done_525_664 = &label_try_done_525_664_impl;
      USE(label_try_done_525_664);
      Label label_CastError_159_impl(this);
      Label* label_CastError_159 = &label_CastError_159_impl;
      USE(label_CastError_159);
      Label label_try_begin_526_665_impl(this);
      Label* label_try_begin_526_665 = &label_try_begin_526_665_impl;
      USE(label_try_begin_526_665);
      Goto(label_try_begin_526_665);
      if (label_try_begin_526_665->is_used())
      {
        BIND(label_try_begin_526_665);
        // ../../src/builtins/typed-array.tq:282:8
        {
          // ../../src/builtins/typed-array.tq:283:6
          TNode<JSReceiver> t506 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy((*comparefn_obj_181).value(), label_CastError_159));
          USE(t506);
          TVARIABLE(JSReceiver, comparefn_185_impl);
          auto comparefn_185 = &comparefn_185_impl;
          USE(comparefn_185);
          *comparefn_185 = t506;
          // ../../src/builtins/typed-array.tq:285:6
          TVARIABLE(Code, loadfn_186_impl);
          auto loadfn_186 = &loadfn_186_impl;
          USE(loadfn_186);
          // ../../src/builtins/typed-array.tq:286:6
          TVARIABLE(Code, storefn_187_impl);
          auto storefn_187 = &storefn_187_impl;
          USE(storefn_187);
          // ../../src/builtins/typed-array.tq:288:6
          TNode<Int32T> t507 = UncheckedCast<Int32T>(LoadElementsKind((*array_183).value()));
          TVARIABLE(Int32T, elements_kind_188_impl);
          auto elements_kind_188 = &elements_kind_188_impl;
          USE(elements_kind_188);
          *elements_kind_188 = t507;
          // ../../src/builtins/typed-array.tq:290:6
          {
            Label label__True_160_impl(this);
            Label* label__True_160 = &label__True_160_impl;
            USE(label__True_160);
            Label label__False_161_impl(this);
            Label* label__False_161 = &label__False_161_impl;
            USE(label__False_161);
            Label label_if_done_label_527_666_impl(this, {loadfn_186, storefn_187});
            Label* label_if_done_label_527_666 = &label_if_done_label_527_666_impl;
            USE(label_if_done_label_527_666);
            TNode<BoolT> t508 = UncheckedCast<BoolT>(IsElementsKindGreaterThan((*elements_kind_188).value(), UINT32_ELEMENTS));
            USE(t508);
            Branch(t508, label__True_160, label__False_161);
            if (label__True_160->is_used())
            {
              BIND(label__True_160);
              // ../../src/builtins/typed-array.tq:290:69
              {
                // ../../src/builtins/typed-array.tq:291:8
                {
                  Label label__True_162_impl(this);
                  Label* label__True_162 = &label__True_162_impl;
                  USE(label__True_162);
                  Label label__False_163_impl(this);
                  Label* label__False_163 = &label__False_163_impl;
                  USE(label__False_163);
                  Label label_if_done_label_528_667_impl(this, {loadfn_186, storefn_187});
                  Label* label_if_done_label_528_667 = &label_if_done_label_528_667_impl;
                  USE(label_if_done_label_528_667);
                  TNode<Int32T> t509 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT32_ELEMENTS));
                  TNode<BoolT> t510 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t509));
                  USE(t510);
                  Branch(t510, label__True_162, label__False_163);
                  if (label__True_162->is_used())
                  {
                    BIND(label__True_162);
                    // ../../src/builtins/typed-array.tq:291:45
                    {
                      // ../../src/builtins/typed-array.tq:292:10
                      *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code());
                      // ../../src/builtins/typed-array.tq:293:10
                      *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code());
                    }
                    Goto(label_if_done_label_528_667);
                  }
                  if (label__False_163->is_used())
                  {
                    BIND(label__False_163);
                    // ../../src/builtins/typed-array.tq:294:15
                    {
                      Label label__True_164_impl(this);
                      Label* label__True_164 = &label__True_164_impl;
                      USE(label__True_164);
                      Label label__False_165_impl(this);
                      Label* label__False_165 = &label__False_165_impl;
                      USE(label__False_165);
                      Label label_if_done_label_529_668_impl(this, {loadfn_186, storefn_187});
                      Label* label_if_done_label_529_668 = &label_if_done_label_529_668_impl;
                      USE(label_if_done_label_529_668);
                      TNode<Int32T> t511 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(FLOAT32_ELEMENTS));
                      TNode<BoolT> t512 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t511));
                      USE(t512);
                      Branch(t512, label__True_164, label__False_165);
                      if (label__True_164->is_used())
                      {
                        BIND(label__True_164);
                        // ../../src/builtins/typed-array.tq:294:54
                        {
                          // ../../src/builtins/typed-array.tq:295:10
                          *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code());
                          // ../../src/builtins/typed-array.tq:296:10
                          *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code());
                        }
                        Goto(label_if_done_label_529_668);
                      }
                      if (label__False_165->is_used())
                      {
                        BIND(label__False_165);
                        // ../../src/builtins/typed-array.tq:297:15
                        {
                          Label label__True_166_impl(this);
                          Label* label__True_166 = &label__True_166_impl;
                          USE(label__True_166);
                          Label label__False_167_impl(this);
                          Label* label__False_167 = &label__False_167_impl;
                          USE(label__False_167);
                          Label label_if_done_label_530_669_impl(this, {loadfn_186, storefn_187});
                          Label* label_if_done_label_530_669 = &label_if_done_label_530_669_impl;
                          USE(label_if_done_label_530_669);
                          TNode<Int32T> t513 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(FLOAT64_ELEMENTS));
                          TNode<BoolT> t514 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t513));
                          USE(t514);
                          Branch(t514, label__True_166, label__False_167);
                          if (label__True_166->is_used())
                          {
                            BIND(label__True_166);
                            // ../../src/builtins/typed-array.tq:297:54
                            {
                              // ../../src/builtins/typed-array.tq:298:10
                              *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code());
                              // ../../src/builtins/typed-array.tq:299:10
                              *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code());
                            }
                            Goto(label_if_done_label_530_669);
                          }
                          if (label__False_167->is_used())
                          {
                            BIND(label__False_167);
                            // ../../src/builtins/typed-array.tq:300:15
                            {
                              Label label__True_168_impl(this);
                              Label* label__True_168 = &label__True_168_impl;
                              USE(label__True_168);
                              Label label__False_169_impl(this);
                              Label* label__False_169 = &label__False_169_impl;
                              USE(label__False_169);
                              Label label_if_done_label_531_670_impl(this, {loadfn_186, storefn_187});
                              Label* label_if_done_label_531_670 = &label_if_done_label_531_670_impl;
                              USE(label_if_done_label_531_670);
                              TNode<Int32T> t515 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT8_CLAMPED_ELEMENTS));
                              TNode<BoolT> t516 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t515));
                              USE(t516);
                              Branch(t516, label__True_168, label__False_169);
                              if (label__True_168->is_used())
                              {
                                BIND(label__True_168);
                                // ../../src/builtins/typed-array.tq:300:60
                                {
                                  // ../../src/builtins/typed-array.tq:301:10
                                  *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code());
                                  // ../../src/builtins/typed-array.tq:302:10
                                  *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code());
                                }
                                Goto(label_if_done_label_531_670);
                              }
                              if (label__False_169->is_used())
                              {
                                BIND(label__False_169);
                                // ../../src/builtins/typed-array.tq:303:15
                                {
                                  Label label__True_170_impl(this);
                                  Label* label__True_170 = &label__True_170_impl;
                                  USE(label__True_170);
                                  Label label__False_171_impl(this);
                                  Label* label__False_171 = &label__False_171_impl;
                                  USE(label__False_171);
                                  Label label_if_done_label_532_671_impl(this, {loadfn_186, storefn_187});
                                  Label* label_if_done_label_532_671 = &label_if_done_label_532_671_impl;
                                  USE(label_if_done_label_532_671);
                                  TNode<Int32T> t517 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(BIGUINT64_ELEMENTS));
                                  TNode<BoolT> t518 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t517));
                                  USE(t518);
                                  Branch(t518, label__True_170, label__False_171);
                                  if (label__True_170->is_used())
                                  {
                                    BIND(label__True_170);
                                    // ../../src/builtins/typed-array.tq:303:56
                                    {
                                      // ../../src/builtins/typed-array.tq:304:10
                                      *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code());
                                      // ../../src/builtins/typed-array.tq:305:10
                                      *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code());
                                    }
                                    Goto(label_if_done_label_532_671);
                                  }
                                  if (label__False_171->is_used())
                                  {
                                    BIND(label__False_171);
                                    // ../../src/builtins/typed-array.tq:306:15
                                    {
                                      Label label__True_172_impl(this);
                                      Label* label__True_172 = &label__True_172_impl;
                                      USE(label__True_172);
                                      Label label__False_173_impl(this);
                                      Label* label__False_173 = &label__False_173_impl;
                                      USE(label__False_173);
                                      Label label_if_done_label_533_672_impl(this, {loadfn_186, storefn_187});
                                      Label* label_if_done_label_533_672 = &label_if_done_label_533_672_impl;
                                      USE(label_if_done_label_533_672);
                                      TNode<Int32T> t519 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(BIGINT64_ELEMENTS));
                                      TNode<BoolT> t520 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t519));
                                      USE(t520);
                                      Branch(t520, label__True_172, label__False_173);
                                      if (label__True_172->is_used())
                                      {
                                        BIND(label__True_172);
                                        // ../../src/builtins/typed-array.tq:306:55
                                        {
                                          // ../../src/builtins/typed-array.tq:307:10
                                          *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code());
                                          // ../../src/builtins/typed-array.tq:308:10
                                          *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code());
                                        }
                                        Goto(label_if_done_label_533_672);
                                      }
                                      if (label__False_173->is_used())
                                      {
                                        BIND(label__False_173);
                                        // ../../src/builtins/typed-array.tq:309:15
                                        {
                                          // ../../src/builtins/typed-array.tq:310:10
                                          Unreachable();
                                        }
                                      }
                                      BIND(label_if_done_label_533_672);
                                    }
                                    Goto(label_if_done_label_532_671);
                                  }
                                  BIND(label_if_done_label_532_671);
                                }
                                Goto(label_if_done_label_531_670);
                              }
                              BIND(label_if_done_label_531_670);
                            }
                            Goto(label_if_done_label_530_669);
                          }
                          BIND(label_if_done_label_530_669);
                        }
                        Goto(label_if_done_label_529_668);
                      }
                      BIND(label_if_done_label_529_668);
                    }
                    Goto(label_if_done_label_528_667);
                  }
                  BIND(label_if_done_label_528_667);
                }
              }
              Goto(label_if_done_label_527_666);
            }
            if (label__False_161->is_used())
            {
              BIND(label__False_161);
              // ../../src/builtins/typed-array.tq:312:13
              {
                // ../../src/builtins/typed-array.tq:313:8
                {
                  Label label__True_174_impl(this);
                  Label* label__True_174 = &label__True_174_impl;
                  USE(label__True_174);
                  Label label__False_175_impl(this);
                  Label* label__False_175 = &label__False_175_impl;
                  USE(label__False_175);
                  Label label_if_done_label_534_673_impl(this, {loadfn_186, storefn_187});
                  Label* label_if_done_label_534_673 = &label_if_done_label_534_673_impl;
                  USE(label_if_done_label_534_673);
                  TNode<Int32T> t521 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT8_ELEMENTS));
                  TNode<BoolT> t522 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t521));
                  USE(t522);
                  Branch(t522, label__True_174, label__False_175);
                  if (label__True_174->is_used())
                  {
                    BIND(label__True_174);
                    // ../../src/builtins/typed-array.tq:313:45
                    {
                      // ../../src/builtins/typed-array.tq:314:10
                      *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code());
                      // ../../src/builtins/typed-array.tq:315:10
                      *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code());
                    }
                    Goto(label_if_done_label_534_673);
                  }
                  if (label__False_175->is_used())
                  {
                    BIND(label__False_175);
                    // ../../src/builtins/typed-array.tq:316:15
                    {
                      Label label__True_176_impl(this);
                      Label* label__True_176 = &label__True_176_impl;
                      USE(label__True_176);
                      Label label__False_177_impl(this);
                      Label* label__False_177 = &label__False_177_impl;
                      USE(label__False_177);
                      Label label_if_done_label_535_674_impl(this, {loadfn_186, storefn_187});
                      Label* label_if_done_label_535_674 = &label_if_done_label_535_674_impl;
                      USE(label_if_done_label_535_674);
                      TNode<Int32T> t523 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT8_ELEMENTS));
                      TNode<BoolT> t524 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t523));
                      USE(t524);
                      Branch(t524, label__True_176, label__False_177);
                      if (label__True_176->is_used())
                      {
                        BIND(label__True_176);
                        // ../../src/builtins/typed-array.tq:316:51
                        {
                          // ../../src/builtins/typed-array.tq:317:10
                          *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code());
                          // ../../src/builtins/typed-array.tq:318:10
                          *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code());
                        }
                        Goto(label_if_done_label_535_674);
                      }
                      if (label__False_177->is_used())
                      {
                        BIND(label__False_177);
                        // ../../src/builtins/typed-array.tq:319:15
                        {
                          Label label__True_178_impl(this);
                          Label* label__True_178 = &label__True_178_impl;
                          USE(label__True_178);
                          Label label__False_179_impl(this);
                          Label* label__False_179 = &label__False_179_impl;
                          USE(label__False_179);
                          Label label_if_done_label_536_675_impl(this, {loadfn_186, storefn_187});
                          Label* label_if_done_label_536_675 = &label_if_done_label_536_675_impl;
                          USE(label_if_done_label_536_675);
                          TNode<Int32T> t525 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT16_ELEMENTS));
                          TNode<BoolT> t526 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t525));
                          USE(t526);
                          Branch(t526, label__True_178, label__False_179);
                          if (label__True_178->is_used())
                          {
                            BIND(label__True_178);
                            // ../../src/builtins/typed-array.tq:319:53
                            {
                              // ../../src/builtins/typed-array.tq:320:10
                              *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code());
                              // ../../src/builtins/typed-array.tq:321:10
                              *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code());
                            }
                            Goto(label_if_done_label_536_675);
                          }
                          if (label__False_179->is_used())
                          {
                            BIND(label__False_179);
                            // ../../src/builtins/typed-array.tq:322:15
                            {
                              Label label__True_180_impl(this);
                              Label* label__True_180 = &label__True_180_impl;
                              USE(label__True_180);
                              Label label__False_181_impl(this);
                              Label* label__False_181 = &label__False_181_impl;
                              USE(label__False_181);
                              Label label_if_done_label_537_676_impl(this, {loadfn_186, storefn_187});
                              Label* label_if_done_label_537_676 = &label_if_done_label_537_676_impl;
                              USE(label_if_done_label_537_676);
                              TNode<Int32T> t527 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT16_ELEMENTS));
                              TNode<BoolT> t528 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t527));
                              USE(t528);
                              Branch(t528, label__True_180, label__False_181);
                              if (label__True_180->is_used())
                              {
                                BIND(label__True_180);
                                // ../../src/builtins/typed-array.tq:322:52
                                {
                                  // ../../src/builtins/typed-array.tq:323:10
                                  *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code());
                                  // ../../src/builtins/typed-array.tq:324:10
                                  *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code());
                                }
                                Goto(label_if_done_label_537_676);
                              }
                              if (label__False_181->is_used())
                              {
                                BIND(label__False_181);
                                // ../../src/builtins/typed-array.tq:325:15
                                {
                                  Label label__True_182_impl(this);
                                  Label* label__True_182 = &label__True_182_impl;
                                  USE(label__True_182);
                                  Label label__False_183_impl(this);
                                  Label* label__False_183 = &label__False_183_impl;
                                  USE(label__False_183);
                                  Label label_if_done_label_538_677_impl(this, {loadfn_186, storefn_187});
                                  Label* label_if_done_label_538_677 = &label_if_done_label_538_677_impl;
                                  USE(label_if_done_label_538_677);
                                  TNode<Int32T> t529 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT32_ELEMENTS));
                                  TNode<BoolT> t530 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_188).value(), t529));
                                  USE(t530);
                                  Branch(t530, label__True_182, label__False_183);
                                  if (label__True_182->is_used())
                                  {
                                    BIND(label__True_182);
                                    // ../../src/builtins/typed-array.tq:325:53
                                    {
                                      // ../../src/builtins/typed-array.tq:326:10
                                      *loadfn_186 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code());
                                      // ../../src/builtins/typed-array.tq:327:10
                                      *storefn_187 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code());
                                    }
                                    Goto(label_if_done_label_538_677);
                                  }
                                  if (label__False_183->is_used())
                                  {
                                    BIND(label__False_183);
                                    // ../../src/builtins/typed-array.tq:328:15
                                    {
                                      // ../../src/builtins/typed-array.tq:329:10
                                      Unreachable();
                                    }
                                  }
                                  BIND(label_if_done_label_538_677);
                                }
                                Goto(label_if_done_label_537_676);
                              }
                              BIND(label_if_done_label_537_676);
                            }
                            Goto(label_if_done_label_536_675);
                          }
                          BIND(label_if_done_label_536_675);
                        }
                        Goto(label_if_done_label_535_674);
                      }
                      BIND(label_if_done_label_535_674);
                    }
                    Goto(label_if_done_label_534_673);
                  }
                  BIND(label_if_done_label_534_673);
                }
              }
              Goto(label_if_done_label_527_666);
            }
            BIND(label_if_done_label_527_666);
          }
          // ../../src/builtins/typed-array.tq:333:6
          int31_t t531 = 0;
          TNode<Smi> t532 = UncheckedCast<Smi>(from_constexpr5ATSmi(t531));
          TNode<JSTypedArray> t533 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, (*array_183).value(), t532, (*len_184).value(), (*comparefn_185).value(), (*loadfn_186).value(), (*storefn_187).value()));
          USE(t533);
        }
        Goto(label_try_done_525_664);
      }
      if (label_CastError_159->is_used())
      {
        BIND(label_CastError_159);
        // ../../src/builtins/typed-array.tq:335:20
        {
          // ../../src/builtins/typed-array.tq:336:6
          Unreachable();
        }
      }
      BIND(label_try_done_525_664);
    }
    // ../../src/builtins/typed-array.tq:338:4
    arguments->PopAndReturn((*array_183).value());
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1916 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1917 = KindForArrayType17ATFixedInt32Array();
    USE(t1917);
    TNode<Object> t1918 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1916, p_index, t1917, SMI_PARAMETERS));
    USE(t1918);
    Return(t1918);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1919 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1920 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1919));
    USE(t1920);
    TVARIABLE(FixedTypedArrayBase, elements_441_impl);
    auto elements_441 = &elements_441_impl;
    USE(elements_441);
    *elements_441 = t1920;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1921 = KindForArrayType17ATFixedInt32Array();
    USE(t1921);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_441).value(), p_index, p_value, t1921, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1922 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1923 = KindForArrayType19ATFixedFloat32Array();
    USE(t1923);
    TNode<Object> t1924 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1922, p_index, t1923, SMI_PARAMETERS));
    USE(t1924);
    Return(t1924);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1925 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1926 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1925));
    USE(t1926);
    TVARIABLE(FixedTypedArrayBase, elements_442_impl);
    auto elements_442 = &elements_442_impl;
    USE(elements_442);
    *elements_442 = t1926;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1927 = KindForArrayType19ATFixedFloat32Array();
    USE(t1927);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_442).value(), p_index, p_value, t1927, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1928 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1929 = KindForArrayType19ATFixedFloat64Array();
    USE(t1929);
    TNode<Object> t1930 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1928, p_index, t1929, SMI_PARAMETERS));
    USE(t1930);
    Return(t1930);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1931 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1932 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1931));
    USE(t1932);
    TVARIABLE(FixedTypedArrayBase, elements_443_impl);
    auto elements_443 = &elements_443_impl;
    USE(elements_443);
    *elements_443 = t1932;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1933 = KindForArrayType19ATFixedFloat64Array();
    USE(t1933);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_443).value(), p_index, p_value, t1933, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1934 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1935 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(t1935);
    TNode<Object> t1936 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1934, p_index, t1935, SMI_PARAMETERS));
    USE(t1936);
    Return(t1936);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1937 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1938 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1937));
    USE(t1938);
    TVARIABLE(FixedTypedArrayBase, elements_444_impl);
    auto elements_444 = &elements_444_impl;
    USE(elements_444);
    *elements_444 = t1938;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1939 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(t1939);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_444).value(), p_index, p_value, t1939, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1940 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1941 = KindForArrayType21ATFixedBigUint64Array();
    USE(t1941);
    TNode<Object> t1942 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1940, p_index, t1941, SMI_PARAMETERS));
    USE(t1942);
    Return(t1942);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1943 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1944 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1943));
    USE(t1944);
    TVARIABLE(FixedTypedArrayBase, elements_445_impl);
    auto elements_445 = &elements_445_impl;
    USE(elements_445);
    *elements_445 = t1944;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1945 = KindForArrayType21ATFixedBigUint64Array();
    USE(t1945);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_445).value(), p_index, p_value, t1945, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1946 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1947 = KindForArrayType20ATFixedBigInt64Array();
    USE(t1947);
    TNode<Object> t1948 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1946, p_index, t1947, SMI_PARAMETERS));
    USE(t1948);
    Return(t1948);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1949 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1950 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1949));
    USE(t1950);
    TVARIABLE(FixedTypedArrayBase, elements_446_impl);
    auto elements_446 = &elements_446_impl;
    USE(elements_446);
    *elements_446 = t1950;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1951 = KindForArrayType20ATFixedBigInt64Array();
    USE(t1951);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_446).value(), p_index, p_value, t1951, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1952 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1953 = KindForArrayType17ATFixedUint8Array();
    USE(t1953);
    TNode<Object> t1954 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1952, p_index, t1953, SMI_PARAMETERS));
    USE(t1954);
    Return(t1954);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1955 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1956 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1955));
    USE(t1956);
    TVARIABLE(FixedTypedArrayBase, elements_447_impl);
    auto elements_447 = &elements_447_impl;
    USE(elements_447);
    *elements_447 = t1956;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1957 = KindForArrayType17ATFixedUint8Array();
    USE(t1957);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_447).value(), p_index, p_value, t1957, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1958 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1959 = KindForArrayType16ATFixedInt8Array();
    USE(t1959);
    TNode<Object> t1960 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1958, p_index, t1959, SMI_PARAMETERS));
    USE(t1960);
    Return(t1960);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1961 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1962 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1961));
    USE(t1962);
    TVARIABLE(FixedTypedArrayBase, elements_448_impl);
    auto elements_448 = &elements_448_impl;
    USE(elements_448);
    *elements_448 = t1962;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1963 = KindForArrayType16ATFixedInt8Array();
    USE(t1963);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_448).value(), p_index, p_value, t1963, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1964 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1965 = KindForArrayType18ATFixedUint16Array();
    USE(t1965);
    TNode<Object> t1966 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1964, p_index, t1965, SMI_PARAMETERS));
    USE(t1966);
    Return(t1966);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1967 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1968 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1967));
    USE(t1968);
    TVARIABLE(FixedTypedArrayBase, elements_449_impl);
    auto elements_449 = &elements_449_impl;
    USE(elements_449);
    *elements_449 = t1968;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1969 = KindForArrayType18ATFixedUint16Array();
    USE(t1969);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_449).value(), p_index, p_value, t1969, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1970 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1971 = KindForArrayType17ATFixedInt16Array();
    USE(t1971);
    TNode<Object> t1972 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1970, p_index, t1971, SMI_PARAMETERS));
    USE(t1972);
    Return(t1972);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1973 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1974 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1973));
    USE(t1974);
    TVARIABLE(FixedTypedArrayBase, elements_450_impl);
    auto elements_450 = &elements_450_impl;
    USE(elements_450);
    *elements_450 = t1974;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1975 = KindForArrayType17ATFixedInt16Array();
    USE(t1975);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_450).value(), p_index, p_value, t1975, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1976 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1977 = KindForArrayType18ATFixedUint32Array();
    USE(t1977);
    TNode<Object> t1978 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1976, p_index, t1977, SMI_PARAMETERS));
    USE(t1978);
    Return(t1978);
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
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1979 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1980 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1979));
    USE(t1980);
    TVARIABLE(FixedTypedArrayBase, elements_451_impl);
    auto elements_451 = &elements_451_impl;
    USE(elements_451);
    *elements_451 = t1980;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1981 = KindForArrayType18ATFixedUint32Array();
    USE(t1981);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_451).value(), p_index, p_value, t1981, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

}  // namepsace internal
}  // namespace v8

