#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewGetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_156_impl);
  auto _return_156 = &_return_156_impl;
  USE(_return_156);
  Label label_macro_end_1611_impl(this, {_return_156}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1611 = &label_macro_end_1611_impl;
  USE(label_macro_end_1611);
  // ../../src/builtins/data-view.tq:15:76
  {
    // ../../src/builtins/data-view.tq:16:5
    {
      bool t755 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t755));
      if ((implicit_cast<bool>(t755))) {
        // ../../src/builtins/data-view.tq:16:43
        {
          // ../../src/builtins/data-view.tq:17:7
          const char* t756 = "DataView.prototype.getUint8";
          TNode<String> t757 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t756)));
          *_return_156 = implicit_cast<TNode<String>>(t757);
          Goto(label_macro_end_1611);
        }
      } else {
        // ../../src/builtins/data-view.tq:18:12
        {
          bool t758 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t758));
          if ((implicit_cast<bool>(t758))) {
            // ../../src/builtins/data-view.tq:18:49
            {
              // ../../src/builtins/data-view.tq:19:7
              const char* t759 = "DataView.prototype.getInt8";
              TNode<String> t760 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t759)));
              *_return_156 = implicit_cast<TNode<String>>(t760);
              Goto(label_macro_end_1611);
            }
          } else {
            // ../../src/builtins/data-view.tq:20:12
            {
              bool t761 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t761));
              if ((implicit_cast<bool>(t761))) {
                // ../../src/builtins/data-view.tq:20:51
                {
                  // ../../src/builtins/data-view.tq:21:7
                  const char* t762 = "DataView.prototype.getUint16";
                  TNode<String> t763 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t762)));
                  *_return_156 = implicit_cast<TNode<String>>(t763);
                  Goto(label_macro_end_1611);
                }
              } else {
                // ../../src/builtins/data-view.tq:22:12
                {
                  bool t764 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t764));
                  if ((implicit_cast<bool>(t764))) {
                    // ../../src/builtins/data-view.tq:22:50
                    {
                      // ../../src/builtins/data-view.tq:23:7
                      const char* t765 = "DataView.prototype.getInt16";
                      TNode<String> t766 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t765)));
                      *_return_156 = implicit_cast<TNode<String>>(t766);
                      Goto(label_macro_end_1611);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:24:12
                    {
                      bool t767 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t767));
                      if ((implicit_cast<bool>(t767))) {
                        // ../../src/builtins/data-view.tq:24:51
                        {
                          // ../../src/builtins/data-view.tq:25:7
                          const char* t768 = "DataView.prototype.getUint32";
                          TNode<String> t769 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t768)));
                          *_return_156 = implicit_cast<TNode<String>>(t769);
                          Goto(label_macro_end_1611);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:26:12
                        {
                          bool t770 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t770));
                          if ((implicit_cast<bool>(t770))) {
                            // ../../src/builtins/data-view.tq:26:50
                            {
                              // ../../src/builtins/data-view.tq:27:7
                              const char* t771 = "DataView.prototype.getInt32";
                              TNode<String> t772 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t771)));
                              *_return_156 = implicit_cast<TNode<String>>(t772);
                              Goto(label_macro_end_1611);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:28:12
                            {
                              bool t773 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t773));
                              if ((implicit_cast<bool>(t773))) {
                                // ../../src/builtins/data-view.tq:28:52
                                {
                                  // ../../src/builtins/data-view.tq:29:7
                                  const char* t774 = "DataView.prototype.getFloat32";
                                  TNode<String> t775 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t774)));
                                  *_return_156 = implicit_cast<TNode<String>>(t775);
                                  Goto(label_macro_end_1611);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:30:12
                                {
                                  bool t776 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t776));
                                  if ((implicit_cast<bool>(t776))) {
                                    // ../../src/builtins/data-view.tq:30:52
                                    {
                                      // ../../src/builtins/data-view.tq:31:7
                                      const char* t777 = "DataView.prototype.getFloat64";
                                      TNode<String> t778 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t777)));
                                      *_return_156 = implicit_cast<TNode<String>>(t778);
                                      Goto(label_macro_end_1611);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:32:12
                                    {
                                      bool t779 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t779));
                                      if ((implicit_cast<bool>(t779))) {
                                        // ../../src/builtins/data-view.tq:32:53
                                        {
                                          // ../../src/builtins/data-view.tq:33:7
                                          const char* t780 = "DataView.prototype.getBigInt64";
                                          TNode<String> t781 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t780)));
                                          *_return_156 = implicit_cast<TNode<String>>(t781);
                                          Goto(label_macro_end_1611);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:34:12
                                        {
                                          bool t782 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t782));
                                          if ((implicit_cast<bool>(t782))) {
                                            // ../../src/builtins/data-view.tq:34:54
                                            {
                                              // ../../src/builtins/data-view.tq:35:7
                                              const char* t783 = "DataView.prototype.getBigUint64";
                                              TNode<String> t784 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t783)));
                                              *_return_156 = implicit_cast<TNode<String>>(t784);
                                              Goto(label_macro_end_1611);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:36:12
                                            {
                                              // ../../src/builtins/data-view.tq:37:7
                                              Print("halting because of 'unreachable' at ../../src/builtins/data-view.tq:37:7");
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
  BIND(label_macro_end_1611);
  return implicit_cast<TNode<String>>((*_return_156).value());
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_157_impl);
  auto _return_157 = &_return_157_impl;
  USE(_return_157);
  Label label_macro_end_1612_impl(this, {_return_157}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1612 = &label_macro_end_1612_impl;
  USE(label_macro_end_1612);
  // ../../src/builtins/data-view.tq:41:76
  {
    // ../../src/builtins/data-view.tq:42:5
    {
      bool t785 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t785));
      if ((implicit_cast<bool>(t785))) {
        // ../../src/builtins/data-view.tq:42:43
        {
          // ../../src/builtins/data-view.tq:43:7
          const char* t786 = "DataView.prototype.setUint8";
          TNode<String> t787 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t786)));
          *_return_157 = implicit_cast<TNode<String>>(t787);
          Goto(label_macro_end_1612);
        }
      } else {
        // ../../src/builtins/data-view.tq:44:12
        {
          bool t788 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t788));
          if ((implicit_cast<bool>(t788))) {
            // ../../src/builtins/data-view.tq:44:49
            {
              // ../../src/builtins/data-view.tq:45:7
              const char* t789 = "DataView.prototype.setInt8";
              TNode<String> t790 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t789)));
              *_return_157 = implicit_cast<TNode<String>>(t790);
              Goto(label_macro_end_1612);
            }
          } else {
            // ../../src/builtins/data-view.tq:46:12
            {
              bool t791 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t791));
              if ((implicit_cast<bool>(t791))) {
                // ../../src/builtins/data-view.tq:46:51
                {
                  // ../../src/builtins/data-view.tq:47:7
                  const char* t792 = "DataView.prototype.setUint16";
                  TNode<String> t793 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t792)));
                  *_return_157 = implicit_cast<TNode<String>>(t793);
                  Goto(label_macro_end_1612);
                }
              } else {
                // ../../src/builtins/data-view.tq:48:12
                {
                  bool t794 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t794));
                  if ((implicit_cast<bool>(t794))) {
                    // ../../src/builtins/data-view.tq:48:50
                    {
                      // ../../src/builtins/data-view.tq:49:7
                      const char* t795 = "DataView.prototype.setInt16";
                      TNode<String> t796 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t795)));
                      *_return_157 = implicit_cast<TNode<String>>(t796);
                      Goto(label_macro_end_1612);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:50:12
                    {
                      bool t797 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t797));
                      if ((implicit_cast<bool>(t797))) {
                        // ../../src/builtins/data-view.tq:50:51
                        {
                          // ../../src/builtins/data-view.tq:51:7
                          const char* t798 = "DataView.prototype.setUint32";
                          TNode<String> t799 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t798)));
                          *_return_157 = implicit_cast<TNode<String>>(t799);
                          Goto(label_macro_end_1612);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:52:12
                        {
                          bool t800 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t800));
                          if ((implicit_cast<bool>(t800))) {
                            // ../../src/builtins/data-view.tq:52:50
                            {
                              // ../../src/builtins/data-view.tq:53:7
                              const char* t801 = "DataView.prototype.setInt32";
                              TNode<String> t802 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t801)));
                              *_return_157 = implicit_cast<TNode<String>>(t802);
                              Goto(label_macro_end_1612);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:54:12
                            {
                              bool t803 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t803));
                              if ((implicit_cast<bool>(t803))) {
                                // ../../src/builtins/data-view.tq:54:52
                                {
                                  // ../../src/builtins/data-view.tq:55:7
                                  const char* t804 = "DataView.prototype.setFloat32";
                                  TNode<String> t805 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t804)));
                                  *_return_157 = implicit_cast<TNode<String>>(t805);
                                  Goto(label_macro_end_1612);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:56:12
                                {
                                  bool t806 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t806));
                                  if ((implicit_cast<bool>(t806))) {
                                    // ../../src/builtins/data-view.tq:56:52
                                    {
                                      // ../../src/builtins/data-view.tq:57:7
                                      const char* t807 = "DataView.prototype.setFloat64";
                                      TNode<String> t808 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t807)));
                                      *_return_157 = implicit_cast<TNode<String>>(t808);
                                      Goto(label_macro_end_1612);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:58:12
                                    {
                                      bool t809 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t809));
                                      if ((implicit_cast<bool>(t809))) {
                                        // ../../src/builtins/data-view.tq:58:53
                                        {
                                          // ../../src/builtins/data-view.tq:59:7
                                          const char* t810 = "DataView.prototype.setBigInt64";
                                          TNode<String> t811 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t810)));
                                          *_return_157 = implicit_cast<TNode<String>>(t811);
                                          Goto(label_macro_end_1612);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:60:12
                                        {
                                          bool t812 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t812));
                                          if ((implicit_cast<bool>(t812))) {
                                            // ../../src/builtins/data-view.tq:60:54
                                            {
                                              // ../../src/builtins/data-view.tq:61:7
                                              const char* t813 = "DataView.prototype.setBigUint64";
                                              TNode<String> t814 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t813)));
                                              *_return_157 = implicit_cast<TNode<String>>(t814);
                                              Goto(label_macro_end_1612);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:62:12
                                            {
                                              // ../../src/builtins/data-view.tq:63:7
                                              Print("halting because of 'unreachable' at ../../src/builtins/data-view.tq:63:7");
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
  BIND(label_macro_end_1612);
  return implicit_cast<TNode<String>>((*_return_157).value());
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_158_impl);
  auto _return_158 = &_return_158_impl;
  USE(_return_158);
  Label label_macro_end_1613_impl(this, {_return_158}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1613 = &label_macro_end_1613_impl;
  USE(label_macro_end_1613);
  // ../../src/builtins/data-view.tq:67:52
  {
    // ../../src/builtins/data-view.tq:68:5
    TNode<JSArrayBuffer> t815 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>(p_view)));
    TNode<BoolT> t816 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t815)));
    USE(implicit_cast<TNode<BoolT>>(t816));
    *_return_158 = implicit_cast<TNode<BoolT>>(t816);
    Goto(label_macro_end_1613);
  }
  BIND(label_macro_end_1613);
  return implicit_cast<TNode<BoolT>>((*_return_158).value());
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_159_impl);
  auto _return_159 = &_return_159_impl;
  USE(_return_159);
  Label label_macro_end_1614_impl(this, {_return_159}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1614 = &label_macro_end_1614_impl;
  USE(label_macro_end_1614);
  // ../../src/builtins/data-view.tq:72:64
  {
    // ../../src/builtins/data-view.tq:73:5
    {
      Label label_try_done_794_1615_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_794_1615 = &label_try_done_794_1615_impl;
      USE(label_try_done_794_1615);
      Label label_CastError_321_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_CastError_321 = &label_CastError_321_impl;
      USE(label_CastError_321);
      Label label_try_begin_795_1616_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_795_1616 = &label_try_begin_795_1616_impl;
      USE(label_try_begin_795_1616);
      Goto(label_try_begin_795_1616);
      if (label_try_begin_795_1616->is_used())
      {
        BIND(label_try_begin_795_1616);
        // ../../src/builtins/data-view.tq:73:9
        {
          // ../../src/builtins/data-view.tq:74:7
          TNode<JSDataView> t817 = UncheckedCast<JSDataView>(Cast12ATJSDataView(implicit_cast<TNode<Object>>(p_o), label_CastError_321));
          USE(implicit_cast<TNode<JSDataView>>(t817));
          *_return_159 = implicit_cast<TNode<JSDataView>>(t817);
          Goto(label_macro_end_1614);
        }
      }
      if (label_CastError_321->is_used())
      {
        BIND(label_CastError_321);
        // ../../src/builtins/data-view.tq:76:21
        {
          // ../../src/builtins/data-view.tq:77:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kIncompatibleMethodReceiver), implicit_cast<TNode<Object>>(p_method));
        }
      }
    }
  }
  BIND(label_macro_end_1614);
  return implicit_cast<TNode<JSDataView>>((*_return_159).value());
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
  // ../../src/builtins/data-view.tq:83:72
  {
    // ../../src/builtins/data-view.tq:84:5
    const char* t818 = "get DataView.prototype.buffer";
    TNode<String> t819 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t818)));
    TNode<JSDataView> t820 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t819)));
    USE(implicit_cast<TNode<JSDataView>>(t820));
    TVARIABLE(JSDataView, dataView_160_impl);
    auto dataView_160 = &dataView_160_impl;
    USE(dataView_160);
    *dataView_160 = implicit_cast<TNode<JSDataView>>(t820);
    // ../../src/builtins/data-view.tq:86:5
    TNode<JSArrayBuffer> t821 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*dataView_160).value())));
    arguments->PopAndReturn(implicit_cast<TNode<JSArrayBuffer>>(t821));
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
  // ../../src/builtins/data-view.tq:91:65
  {
    // ../../src/builtins/data-view.tq:92:5
    const char* t822 = "get DataView.prototype.byte_length";
    TNode<String> t823 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t822)));
    TNode<JSDataView> t824 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t823)));
    USE(implicit_cast<TNode<JSDataView>>(t824));
    TVARIABLE(JSDataView, dataView_161_impl);
    auto dataView_161 = &dataView_161_impl;
    USE(dataView_161);
    *dataView_161 = implicit_cast<TNode<JSDataView>>(t824);
    // ../../src/builtins/data-view.tq:94:5
    {
      Label label__True_322_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_322 = &label__True_322_impl;
      USE(label__True_322);
      Label label__False_323_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_323 = &label__False_323_impl;
      USE(label__False_323);
      TNode<BoolT> t825 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*dataView_161).value())));
      USE(implicit_cast<TNode<BoolT>>(t825));
      Branch(implicit_cast<TNode<BoolT>>(t825), label__True_322, label__False_323);
      if (label__True_322->is_used())
      {
        BIND(label__True_322);
        // ../../src/builtins/data-view.tq:94:32
        {
          // ../../src/builtins/data-view.tq:97:7
          int31_t t826 = 0;
          TNode<Number> t827 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t826)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t827));
        }
      }
      BIND(label__False_323);
    }
    // ../../src/builtins/data-view.tq:99:5
    TNode<UintPtrT> t828 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(implicit_cast<TNode<JSArrayBufferView>>((*dataView_161).value())));
    TNode<Number> t829 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<UintPtrT>>(t828)));
    USE(implicit_cast<TNode<Number>>(t829));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t829));
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
  // ../../src/builtins/data-view.tq:104:65
  {
    // ../../src/builtins/data-view.tq:105:5
    const char* t830 = "get DataView.prototype.byte_offset";
    TNode<String> t831 = UncheckedCast<String>(FromConstexpr8ATString(implicit_cast<const char*>(t830)));
    TNode<JSDataView> t832 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t831)));
    USE(implicit_cast<TNode<JSDataView>>(t832));
    TVARIABLE(JSDataView, dataView_162_impl);
    auto dataView_162 = &dataView_162_impl;
    USE(dataView_162);
    *dataView_162 = implicit_cast<TNode<JSDataView>>(t832);
    // ../../src/builtins/data-view.tq:107:5
    {
      Label label__True_324_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_324 = &label__True_324_impl;
      USE(label__True_324);
      Label label__False_325_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_325 = &label__False_325_impl;
      USE(label__False_325);
      TNode<BoolT> t833 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*dataView_162).value())));
      USE(implicit_cast<TNode<BoolT>>(t833));
      Branch(implicit_cast<TNode<BoolT>>(t833), label__True_324, label__False_325);
      if (label__True_324->is_used())
      {
        BIND(label__True_324);
        // ../../src/builtins/data-view.tq:107:32
        {
          // ../../src/builtins/data-view.tq:110:7
          int31_t t834 = 0;
          TNode<Number> t835 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t834)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t835));
        }
      }
      BIND(label__False_325);
    }
    // ../../src/builtins/data-view.tq:112:5
    TNode<UintPtrT> t836 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(implicit_cast<TNode<JSArrayBufferView>>((*dataView_162).value())));
    TNode<Number> t837 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<UintPtrT>>(t836)));
    USE(implicit_cast<TNode<Number>>(t837));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t837));
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed) {
  TVARIABLE(Smi, _return_163_impl);
  auto _return_163 = &_return_163_impl;
  USE(_return_163);
  Label label_macro_end_1617_impl(this, {_return_163}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1617 = &label_macro_end_1617_impl;
  USE(label_macro_end_1617);
  // ../../src/builtins/data-view.tq:126:76
  {
    // ../../src/builtins/data-view.tq:127:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:127:27
        {
          // ../../src/builtins/data-view.tq:128:7
          TNode<RawPtrT> t838 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Int32T> t839 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>(t838), implicit_cast<TNode<UintPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t839));
          TNode<Smi> t840 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<Int32T>>(t839)));
          USE(implicit_cast<TNode<Smi>>(t840));
          *_return_163 = implicit_cast<TNode<Smi>>(t840);
          Goto(label_macro_end_1617);
        }
      } else {
        // ../../src/builtins/data-view.tq:129:12
        {
          // ../../src/builtins/data-view.tq:130:7
          TNode<RawPtrT> t841 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Uint32T> t842 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>(t841), implicit_cast<TNode<UintPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t842));
          TNode<Smi> t843 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<Uint32T>>(t842)));
          USE(implicit_cast<TNode<Smi>>(t843));
          *_return_163 = implicit_cast<TNode<Smi>>(t843);
          Goto(label_macro_end_1617);
        }
      }
    }
  }
  BIND(label_macro_end_1617);
  return implicit_cast<TNode<Smi>>((*_return_163).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  TVARIABLE(Number, _return_164_impl);
  auto _return_164 = &_return_164_impl;
  USE(_return_164);
  Label label_macro_end_1618_impl(this, {_return_164}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1618 = &label_macro_end_1618_impl;
  USE(label_macro_end_1618);
  // ../../src/builtins/data-view.tq:136:39
  {
    // ../../src/builtins/data-view.tq:137:5
    TNode<RawPtrT> t844 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_165_impl);
    auto dataPointer_165 = &dataPointer_165_impl;
    USE(dataPointer_165);
    *dataPointer_165 = implicit_cast<TNode<RawPtrT>>(t844);
    // ../../src/builtins/data-view.tq:139:5
    TVARIABLE(Int32T, b0_166_impl);
    auto b0_166 = &b0_166_impl;
    USE(b0_166);
    // ../../src/builtins/data-view.tq:140:5
    TVARIABLE(Int32T, b1_167_impl);
    auto b1_167 = &b1_167_impl;
    USE(b1_167);
    // ../../src/builtins/data-view.tq:141:5
    TVARIABLE(Int32T, result_168_impl);
    auto result_168 = &result_168_impl;
    USE(result_168);
    // ../../src/builtins/data-view.tq:144:5
    {
      Label label__True_328_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_328 = &label__True_328_impl;
      USE(label__True_328);
      Label label__False_329_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_329 = &label__False_329_impl;
      USE(label__False_329);
      Label label_if_done_label_796_1619_impl(this, {b0_166, b1_167, result_168}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_796_1619 = &label_if_done_label_796_1619_impl;
      USE(label_if_done_label_796_1619);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_328, label__False_329);
      if (label__True_328->is_used())
      {
        BIND(label__True_328);
        // ../../src/builtins/data-view.tq:144:32
        {
          // ../../src/builtins/data-view.tq:145:7
          TNode<Uint32T> t845 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_165).value()), implicit_cast<TNode<UintPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t845));
          TNode<Int32T> t846 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t845)));
          USE(implicit_cast<TNode<Int32T>>(t846));
          *b0_166 = implicit_cast<TNode<Int32T>>(t846);
          // ../../src/builtins/data-view.tq:146:7
          int31_t t847 = 1;
          TNode<UintPtrT> t848 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t847)));
          TNode<UintPtrT> t849 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t848)));
          USE(implicit_cast<TNode<UintPtrT>>(t849));
          TNode<Int32T> t850 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*dataPointer_165).value()), implicit_cast<TNode<UintPtrT>>(t849)));
          USE(implicit_cast<TNode<Int32T>>(t850));
          *b1_167 = implicit_cast<TNode<Int32T>>(t850);
          // ../../src/builtins/data-view.tq:147:7
          int31_t t851 = 8;
          TNode<Int32T> t852 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t851)));
          TNode<Int32T> t853 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b1_167).value()), implicit_cast<TNode<Int32T>>(t852)));
          USE(implicit_cast<TNode<Int32T>>(t853));
          TNode<Int32T> t854 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t853), implicit_cast<TNode<Int32T>>((*b0_166).value())));
          USE(implicit_cast<TNode<Int32T>>(t854));
          *result_168 = implicit_cast<TNode<Int32T>>(t854);
        }
        Goto(label_if_done_label_796_1619);
      }
      if (label__False_329->is_used())
      {
        BIND(label__False_329);
        // ../../src/builtins/data-view.tq:148:12
        {
          // ../../src/builtins/data-view.tq:149:7
          TNode<Int32T> t855 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*dataPointer_165).value()), implicit_cast<TNode<UintPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t855));
          *b0_166 = implicit_cast<TNode<Int32T>>(t855);
          // ../../src/builtins/data-view.tq:150:7
          int31_t t856 = 1;
          TNode<UintPtrT> t857 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t856)));
          TNode<UintPtrT> t858 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t857)));
          USE(implicit_cast<TNode<UintPtrT>>(t858));
          TNode<Uint32T> t859 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_165).value()), implicit_cast<TNode<UintPtrT>>(t858)));
          USE(implicit_cast<TNode<Uint32T>>(t859));
          TNode<Int32T> t860 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t859)));
          USE(implicit_cast<TNode<Int32T>>(t860));
          *b1_167 = implicit_cast<TNode<Int32T>>(t860);
          // ../../src/builtins/data-view.tq:151:7
          int31_t t861 = 8;
          TNode<Int32T> t862 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t861)));
          TNode<Int32T> t863 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b0_166).value()), implicit_cast<TNode<Int32T>>(t862)));
          USE(implicit_cast<TNode<Int32T>>(t863));
          TNode<Int32T> t864 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t863), implicit_cast<TNode<Int32T>>((*b1_167).value())));
          USE(implicit_cast<TNode<Int32T>>(t864));
          *result_168 = implicit_cast<TNode<Int32T>>(t864);
        }
        Goto(label_if_done_label_796_1619);
      }
      BIND(label_if_done_label_796_1619);
    }
    // ../../src/builtins/data-view.tq:153:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:153:27
        {
          // ../../src/builtins/data-view.tq:154:7
          TNode<Smi> t865 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<Int32T>>((*result_168).value())));
          USE(implicit_cast<TNode<Smi>>(t865));
          *_return_164 = implicit_cast<TNode<Number>>(t865);
          Goto(label_macro_end_1618);
        }
      } else {
        // ../../src/builtins/data-view.tq:155:12
        {
          // ../../src/builtins/data-view.tq:157:7
          int31_t t866 = 0xFFFF;
          TNode<Int32T> t867 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t866)));
          TNode<Int32T> t868 = UncheckedCast<Int32T>(Word32And(implicit_cast<TNode<Int32T>>((*result_168).value()), implicit_cast<TNode<Int32T>>(t867)));
          USE(implicit_cast<TNode<Int32T>>(t868));
          TNode<Smi> t869 = UncheckedCast<Smi>(Convert5ATSmi(implicit_cast<TNode<Int32T>>(t868)));
          USE(implicit_cast<TNode<Smi>>(t869));
          *_return_164 = implicit_cast<TNode<Number>>(t869);
          Goto(label_macro_end_1618);
        }
      }
    }
  }
  BIND(label_macro_end_1618);
  return implicit_cast<TNode<Number>>((*_return_164).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  TVARIABLE(Number, _return_169_impl);
  auto _return_169 = &_return_169_impl;
  USE(_return_169);
  Label label_macro_end_1620_impl(this, {_return_169}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1620 = &label_macro_end_1620_impl;
  USE(label_macro_end_1620);
  // ../../src/builtins/data-view.tq:163:45
  {
    // ../../src/builtins/data-view.tq:164:5
    TNode<RawPtrT> t870 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_170_impl);
    auto dataPointer_170 = &dataPointer_170_impl;
    USE(dataPointer_170);
    *dataPointer_170 = implicit_cast<TNode<RawPtrT>>(t870);
    // ../../src/builtins/data-view.tq:166:5
    TNode<Uint32T> t871 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_170).value()), implicit_cast<TNode<UintPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t871));
    TVARIABLE(Uint32T, b0_171_impl);
    auto b0_171 = &b0_171_impl;
    USE(b0_171);
    *b0_171 = implicit_cast<TNode<Uint32T>>(t871);
    // ../../src/builtins/data-view.tq:167:5
    int31_t t872 = 1;
    TNode<UintPtrT> t873 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t872)));
    TNode<UintPtrT> t874 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t873)));
    USE(implicit_cast<TNode<UintPtrT>>(t874));
    TNode<Uint32T> t875 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_170).value()), implicit_cast<TNode<UintPtrT>>(t874)));
    USE(implicit_cast<TNode<Uint32T>>(t875));
    TVARIABLE(Uint32T, b1_172_impl);
    auto b1_172 = &b1_172_impl;
    USE(b1_172);
    *b1_172 = implicit_cast<TNode<Uint32T>>(t875);
    // ../../src/builtins/data-view.tq:168:5
    int31_t t876 = 2;
    TNode<UintPtrT> t877 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t876)));
    TNode<UintPtrT> t878 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t877)));
    USE(implicit_cast<TNode<UintPtrT>>(t878));
    TNode<Uint32T> t879 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_170).value()), implicit_cast<TNode<UintPtrT>>(t878)));
    USE(implicit_cast<TNode<Uint32T>>(t879));
    TVARIABLE(Uint32T, b2_173_impl);
    auto b2_173 = &b2_173_impl;
    USE(b2_173);
    *b2_173 = implicit_cast<TNode<Uint32T>>(t879);
    // ../../src/builtins/data-view.tq:169:5
    int31_t t880 = 3;
    TNode<UintPtrT> t881 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t880)));
    TNode<UintPtrT> t882 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t881)));
    USE(implicit_cast<TNode<UintPtrT>>(t882));
    TNode<Uint32T> t883 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_170).value()), implicit_cast<TNode<UintPtrT>>(t882)));
    USE(implicit_cast<TNode<Uint32T>>(t883));
    TVARIABLE(Uint32T, b3_174_impl);
    auto b3_174 = &b3_174_impl;
    USE(b3_174);
    *b3_174 = implicit_cast<TNode<Uint32T>>(t883);
    // ../../src/builtins/data-view.tq:170:5
    TVARIABLE(Uint32T, result_175_impl);
    auto result_175 = &result_175_impl;
    USE(result_175);
    // ../../src/builtins/data-view.tq:172:5
    {
      Label label__True_332_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_332 = &label__True_332_impl;
      USE(label__True_332);
      Label label__False_333_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_333 = &label__False_333_impl;
      USE(label__False_333);
      Label label_if_done_label_797_1621_impl(this, {result_175}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_797_1621 = &label_if_done_label_797_1621_impl;
      USE(label_if_done_label_797_1621);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_332, label__False_333);
      if (label__True_332->is_used())
      {
        BIND(label__True_332);
        // ../../src/builtins/data-view.tq:172:32
        {
          // ../../src/builtins/data-view.tq:173:7
          int31_t t884 = 24;
          TNode<Uint32T> t885 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t884)));
          TNode<Uint32T> t886 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_174).value()), implicit_cast<TNode<Uint32T>>(t885)));
          USE(implicit_cast<TNode<Uint32T>>(t886));
          int31_t t887 = 16;
          TNode<Uint32T> t888 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t887)));
          TNode<Uint32T> t889 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_173).value()), implicit_cast<TNode<Uint32T>>(t888)));
          USE(implicit_cast<TNode<Uint32T>>(t889));
          TNode<Uint32T> t890 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t886), implicit_cast<TNode<Uint32T>>(t889)));
          USE(implicit_cast<TNode<Uint32T>>(t890));
          int31_t t891 = 8;
          TNode<Uint32T> t892 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t891)));
          TNode<Uint32T> t893 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_172).value()), implicit_cast<TNode<Uint32T>>(t892)));
          USE(implicit_cast<TNode<Uint32T>>(t893));
          TNode<Uint32T> t894 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t890), implicit_cast<TNode<Uint32T>>(t893)));
          USE(implicit_cast<TNode<Uint32T>>(t894));
          TNode<Uint32T> t895 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t894), implicit_cast<TNode<Uint32T>>((*b0_171).value())));
          USE(implicit_cast<TNode<Uint32T>>(t895));
          *result_175 = implicit_cast<TNode<Uint32T>>(t895);
        }
        Goto(label_if_done_label_797_1621);
      }
      if (label__False_333->is_used())
      {
        BIND(label__False_333);
        // ../../src/builtins/data-view.tq:174:12
        {
          // ../../src/builtins/data-view.tq:175:7
          int31_t t896 = 24;
          TNode<Uint32T> t897 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t896)));
          TNode<Uint32T> t898 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_171).value()), implicit_cast<TNode<Uint32T>>(t897)));
          USE(implicit_cast<TNode<Uint32T>>(t898));
          int31_t t899 = 16;
          TNode<Uint32T> t900 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t899)));
          TNode<Uint32T> t901 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_172).value()), implicit_cast<TNode<Uint32T>>(t900)));
          USE(implicit_cast<TNode<Uint32T>>(t901));
          TNode<Uint32T> t902 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t898), implicit_cast<TNode<Uint32T>>(t901)));
          USE(implicit_cast<TNode<Uint32T>>(t902));
          int31_t t903 = 8;
          TNode<Uint32T> t904 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t903)));
          TNode<Uint32T> t905 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_173).value()), implicit_cast<TNode<Uint32T>>(t904)));
          USE(implicit_cast<TNode<Uint32T>>(t905));
          TNode<Uint32T> t906 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t902), implicit_cast<TNode<Uint32T>>(t905)));
          USE(implicit_cast<TNode<Uint32T>>(t906));
          TNode<Uint32T> t907 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t906), implicit_cast<TNode<Uint32T>>((*b3_174).value())));
          USE(implicit_cast<TNode<Uint32T>>(t907));
          *result_175 = implicit_cast<TNode<Uint32T>>(t907);
        }
        Goto(label_if_done_label_797_1621);
      }
      BIND(label_if_done_label_797_1621);
    }
    // ../../src/builtins/data-view.tq:178:5
    {
      bool t908 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
      USE(implicit_cast<bool>(t908));
      if ((implicit_cast<bool>(t908))) {
        // ../../src/builtins/data-view.tq:178:43
        {
          // ../../src/builtins/data-view.tq:179:7
          TNode<Int32T> t909 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*result_175).value())));
          USE(implicit_cast<TNode<Int32T>>(t909));
          TNode<Number> t910 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Int32T>>(t909)));
          USE(implicit_cast<TNode<Number>>(t910));
          *_return_169 = implicit_cast<TNode<Number>>(t910);
          Goto(label_macro_end_1620);
        }
      } else {
        // ../../src/builtins/data-view.tq:180:12
        {
          bool t911 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
          USE(implicit_cast<bool>(t911));
          if ((implicit_cast<bool>(t911))) {
            // ../../src/builtins/data-view.tq:180:51
            {
              // ../../src/builtins/data-view.tq:181:7
              TNode<Number> t912 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Uint32T>>((*result_175).value())));
              USE(implicit_cast<TNode<Number>>(t912));
              *_return_169 = implicit_cast<TNode<Number>>(t912);
              Goto(label_macro_end_1620);
            }
          } else {
            // ../../src/builtins/data-view.tq:182:12
            {
              bool t913 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
              USE(implicit_cast<bool>(t913));
              if ((implicit_cast<bool>(t913))) {
                // ../../src/builtins/data-view.tq:182:52
                {
                  // ../../src/builtins/data-view.tq:183:7
                  TNode<Float32T> t914 = UncheckedCast<Float32T>(BitcastInt32ToFloat32(implicit_cast<TNode<Uint32T>>((*result_175).value())));
                  USE(implicit_cast<TNode<Float32T>>(t914));
                  TNode<Float64T> t915 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<Float32T>>(t914)));
                  USE(implicit_cast<TNode<Float64T>>(t915));
                  TVARIABLE(Float64T, floatRes_176_impl);
                  auto floatRes_176 = &floatRes_176_impl;
                  USE(floatRes_176);
                  *floatRes_176 = implicit_cast<TNode<Float64T>>(t915);
                  // ../../src/builtins/data-view.tq:184:7
                  TNode<Number> t916 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*floatRes_176).value())));
                  USE(implicit_cast<TNode<Number>>(t916));
                  *_return_169 = implicit_cast<TNode<Number>>(t916);
                  Goto(label_macro_end_1620);
                }
              } else {
                // ../../src/builtins/data-view.tq:185:12
                {
                  // ../../src/builtins/data-view.tq:186:7
                  Print("halting because of 'unreachable' at ../../src/builtins/data-view.tq:186:7");
                  Unreachable();
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1620);
  return implicit_cast<TNode<Number>>((*_return_169).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian) {
  TVARIABLE(Number, _return_177_impl);
  auto _return_177 = &_return_177_impl;
  USE(_return_177);
  Label label_macro_end_1622_impl(this, {_return_177}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1622 = &label_macro_end_1622_impl;
  USE(label_macro_end_1622);
  // ../../src/builtins/data-view.tq:192:44
  {
    // ../../src/builtins/data-view.tq:193:5
    TNode<RawPtrT> t917 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_178_impl);
    auto dataPointer_178 = &dataPointer_178_impl;
    USE(dataPointer_178);
    *dataPointer_178 = implicit_cast<TNode<RawPtrT>>(t917);
    // ../../src/builtins/data-view.tq:195:5
    TNode<Uint32T> t918 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t918));
    TVARIABLE(Uint32T, b0_179_impl);
    auto b0_179 = &b0_179_impl;
    USE(b0_179);
    *b0_179 = implicit_cast<TNode<Uint32T>>(t918);
    // ../../src/builtins/data-view.tq:196:5
    int31_t t919 = 1;
    TNode<UintPtrT> t920 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t919)));
    TNode<UintPtrT> t921 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t920)));
    USE(implicit_cast<TNode<UintPtrT>>(t921));
    TNode<Uint32T> t922 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t921)));
    USE(implicit_cast<TNode<Uint32T>>(t922));
    TVARIABLE(Uint32T, b1_180_impl);
    auto b1_180 = &b1_180_impl;
    USE(b1_180);
    *b1_180 = implicit_cast<TNode<Uint32T>>(t922);
    // ../../src/builtins/data-view.tq:197:5
    int31_t t923 = 2;
    TNode<UintPtrT> t924 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t923)));
    TNode<UintPtrT> t925 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t924)));
    USE(implicit_cast<TNode<UintPtrT>>(t925));
    TNode<Uint32T> t926 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t925)));
    USE(implicit_cast<TNode<Uint32T>>(t926));
    TVARIABLE(Uint32T, b2_181_impl);
    auto b2_181 = &b2_181_impl;
    USE(b2_181);
    *b2_181 = implicit_cast<TNode<Uint32T>>(t926);
    // ../../src/builtins/data-view.tq:198:5
    int31_t t927 = 3;
    TNode<UintPtrT> t928 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t927)));
    TNode<UintPtrT> t929 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t928)));
    USE(implicit_cast<TNode<UintPtrT>>(t929));
    TNode<Uint32T> t930 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t929)));
    USE(implicit_cast<TNode<Uint32T>>(t930));
    TVARIABLE(Uint32T, b3_182_impl);
    auto b3_182 = &b3_182_impl;
    USE(b3_182);
    *b3_182 = implicit_cast<TNode<Uint32T>>(t930);
    // ../../src/builtins/data-view.tq:199:5
    int31_t t931 = 4;
    TNode<UintPtrT> t932 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t931)));
    TNode<UintPtrT> t933 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t932)));
    USE(implicit_cast<TNode<UintPtrT>>(t933));
    TNode<Uint32T> t934 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t933)));
    USE(implicit_cast<TNode<Uint32T>>(t934));
    TVARIABLE(Uint32T, b4_183_impl);
    auto b4_183 = &b4_183_impl;
    USE(b4_183);
    *b4_183 = implicit_cast<TNode<Uint32T>>(t934);
    // ../../src/builtins/data-view.tq:200:5
    int31_t t935 = 5;
    TNode<UintPtrT> t936 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t935)));
    TNode<UintPtrT> t937 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t936)));
    USE(implicit_cast<TNode<UintPtrT>>(t937));
    TNode<Uint32T> t938 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t937)));
    USE(implicit_cast<TNode<Uint32T>>(t938));
    TVARIABLE(Uint32T, b5_184_impl);
    auto b5_184 = &b5_184_impl;
    USE(b5_184);
    *b5_184 = implicit_cast<TNode<Uint32T>>(t938);
    // ../../src/builtins/data-view.tq:201:5
    int31_t t939 = 6;
    TNode<UintPtrT> t940 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t939)));
    TNode<UintPtrT> t941 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t940)));
    USE(implicit_cast<TNode<UintPtrT>>(t941));
    TNode<Uint32T> t942 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t941)));
    USE(implicit_cast<TNode<Uint32T>>(t942));
    TVARIABLE(Uint32T, b6_185_impl);
    auto b6_185 = &b6_185_impl;
    USE(b6_185);
    *b6_185 = implicit_cast<TNode<Uint32T>>(t942);
    // ../../src/builtins/data-view.tq:202:5
    int31_t t943 = 7;
    TNode<UintPtrT> t944 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t943)));
    TNode<UintPtrT> t945 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t944)));
    USE(implicit_cast<TNode<UintPtrT>>(t945));
    TNode<Uint32T> t946 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_178).value()), implicit_cast<TNode<UintPtrT>>(t945)));
    USE(implicit_cast<TNode<Uint32T>>(t946));
    TVARIABLE(Uint32T, b7_186_impl);
    auto b7_186 = &b7_186_impl;
    USE(b7_186);
    *b7_186 = implicit_cast<TNode<Uint32T>>(t946);
    // ../../src/builtins/data-view.tq:203:5
    TVARIABLE(Uint32T, lowWord_187_impl);
    auto lowWord_187 = &lowWord_187_impl;
    USE(lowWord_187);
    // ../../src/builtins/data-view.tq:204:5
    TVARIABLE(Uint32T, highWord_188_impl);
    auto highWord_188 = &highWord_188_impl;
    USE(highWord_188);
    // ../../src/builtins/data-view.tq:206:5
    {
      Label label__True_340_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_340 = &label__True_340_impl;
      USE(label__True_340);
      Label label__False_341_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_341 = &label__False_341_impl;
      USE(label__False_341);
      Label label_if_done_label_798_1623_impl(this, {highWord_188, lowWord_187}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_798_1623 = &label_if_done_label_798_1623_impl;
      USE(label_if_done_label_798_1623);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_340, label__False_341);
      if (label__True_340->is_used())
      {
        BIND(label__True_340);
        // ../../src/builtins/data-view.tq:206:32
        {
          // ../../src/builtins/data-view.tq:207:7
          int31_t t947 = 24;
          TNode<Uint32T> t948 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t947)));
          TNode<Uint32T> t949 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_182).value()), implicit_cast<TNode<Uint32T>>(t948)));
          USE(implicit_cast<TNode<Uint32T>>(t949));
          int31_t t950 = 16;
          TNode<Uint32T> t951 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t950)));
          TNode<Uint32T> t952 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_181).value()), implicit_cast<TNode<Uint32T>>(t951)));
          USE(implicit_cast<TNode<Uint32T>>(t952));
          TNode<Uint32T> t953 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t949), implicit_cast<TNode<Uint32T>>(t952)));
          USE(implicit_cast<TNode<Uint32T>>(t953));
          int31_t t954 = 8;
          TNode<Uint32T> t955 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t954)));
          TNode<Uint32T> t956 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_180).value()), implicit_cast<TNode<Uint32T>>(t955)));
          USE(implicit_cast<TNode<Uint32T>>(t956));
          TNode<Uint32T> t957 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t953), implicit_cast<TNode<Uint32T>>(t956)));
          USE(implicit_cast<TNode<Uint32T>>(t957));
          TNode<Uint32T> t958 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t957), implicit_cast<TNode<Uint32T>>((*b0_179).value())));
          USE(implicit_cast<TNode<Uint32T>>(t958));
          *lowWord_187 = implicit_cast<TNode<Uint32T>>(t958);
          // ../../src/builtins/data-view.tq:208:7
          int31_t t959 = 24;
          TNode<Uint32T> t960 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t959)));
          TNode<Uint32T> t961 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_186).value()), implicit_cast<TNode<Uint32T>>(t960)));
          USE(implicit_cast<TNode<Uint32T>>(t961));
          int31_t t962 = 16;
          TNode<Uint32T> t963 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t962)));
          TNode<Uint32T> t964 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_185).value()), implicit_cast<TNode<Uint32T>>(t963)));
          USE(implicit_cast<TNode<Uint32T>>(t964));
          TNode<Uint32T> t965 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t961), implicit_cast<TNode<Uint32T>>(t964)));
          USE(implicit_cast<TNode<Uint32T>>(t965));
          int31_t t966 = 8;
          TNode<Uint32T> t967 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t966)));
          TNode<Uint32T> t968 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_184).value()), implicit_cast<TNode<Uint32T>>(t967)));
          USE(implicit_cast<TNode<Uint32T>>(t968));
          TNode<Uint32T> t969 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t965), implicit_cast<TNode<Uint32T>>(t968)));
          USE(implicit_cast<TNode<Uint32T>>(t969));
          TNode<Uint32T> t970 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t969), implicit_cast<TNode<Uint32T>>((*b4_183).value())));
          USE(implicit_cast<TNode<Uint32T>>(t970));
          *highWord_188 = implicit_cast<TNode<Uint32T>>(t970);
        }
        Goto(label_if_done_label_798_1623);
      }
      if (label__False_341->is_used())
      {
        BIND(label__False_341);
        // ../../src/builtins/data-view.tq:209:12
        {
          // ../../src/builtins/data-view.tq:210:7
          int31_t t971 = 24;
          TNode<Uint32T> t972 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t971)));
          TNode<Uint32T> t973 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_179).value()), implicit_cast<TNode<Uint32T>>(t972)));
          USE(implicit_cast<TNode<Uint32T>>(t973));
          int31_t t974 = 16;
          TNode<Uint32T> t975 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t974)));
          TNode<Uint32T> t976 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_180).value()), implicit_cast<TNode<Uint32T>>(t975)));
          USE(implicit_cast<TNode<Uint32T>>(t976));
          TNode<Uint32T> t977 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t973), implicit_cast<TNode<Uint32T>>(t976)));
          USE(implicit_cast<TNode<Uint32T>>(t977));
          int31_t t978 = 8;
          TNode<Uint32T> t979 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t978)));
          TNode<Uint32T> t980 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_181).value()), implicit_cast<TNode<Uint32T>>(t979)));
          USE(implicit_cast<TNode<Uint32T>>(t980));
          TNode<Uint32T> t981 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t977), implicit_cast<TNode<Uint32T>>(t980)));
          USE(implicit_cast<TNode<Uint32T>>(t981));
          TNode<Uint32T> t982 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t981), implicit_cast<TNode<Uint32T>>((*b3_182).value())));
          USE(implicit_cast<TNode<Uint32T>>(t982));
          *highWord_188 = implicit_cast<TNode<Uint32T>>(t982);
          // ../../src/builtins/data-view.tq:211:7
          int31_t t983 = 24;
          TNode<Uint32T> t984 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t983)));
          TNode<Uint32T> t985 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_183).value()), implicit_cast<TNode<Uint32T>>(t984)));
          USE(implicit_cast<TNode<Uint32T>>(t985));
          int31_t t986 = 16;
          TNode<Uint32T> t987 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t986)));
          TNode<Uint32T> t988 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_184).value()), implicit_cast<TNode<Uint32T>>(t987)));
          USE(implicit_cast<TNode<Uint32T>>(t988));
          TNode<Uint32T> t989 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t985), implicit_cast<TNode<Uint32T>>(t988)));
          USE(implicit_cast<TNode<Uint32T>>(t989));
          int31_t t990 = 8;
          TNode<Uint32T> t991 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t990)));
          TNode<Uint32T> t992 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_185).value()), implicit_cast<TNode<Uint32T>>(t991)));
          USE(implicit_cast<TNode<Uint32T>>(t992));
          TNode<Uint32T> t993 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t989), implicit_cast<TNode<Uint32T>>(t992)));
          USE(implicit_cast<TNode<Uint32T>>(t993));
          TNode<Uint32T> t994 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t993), implicit_cast<TNode<Uint32T>>((*b7_186).value())));
          USE(implicit_cast<TNode<Uint32T>>(t994));
          *lowWord_187 = implicit_cast<TNode<Uint32T>>(t994);
        }
        Goto(label_if_done_label_798_1623);
      }
      BIND(label_if_done_label_798_1623);
    }
    // ../../src/builtins/data-view.tq:214:5
    int31_t t995 = 0;
    TVARIABLE(Float64T, result_189_impl);
    auto result_189 = &result_189_impl;
    USE(result_189);
    TNode<Float64T> t996 = UncheckedCast<Float64T>(FromConstexpr9ATfloat64(implicit_cast<int31_t>(t995)));
    *result_189 = implicit_cast<TNode<Float64T>>(t996);
    // ../../src/builtins/data-view.tq:215:5
    TNode<Float64T> t997 = UncheckedCast<Float64T>(Float64InsertLowWord32(implicit_cast<TNode<Float64T>>((*result_189).value()), implicit_cast<TNode<Uint32T>>((*lowWord_187).value())));
    USE(implicit_cast<TNode<Float64T>>(t997));
    *result_189 = implicit_cast<TNode<Float64T>>(t997);
    // ../../src/builtins/data-view.tq:216:5
    TNode<Float64T> t998 = UncheckedCast<Float64T>(Float64InsertHighWord32(implicit_cast<TNode<Float64T>>((*result_189).value()), implicit_cast<TNode<Uint32T>>((*highWord_188).value())));
    USE(implicit_cast<TNode<Float64T>>(t998));
    *result_189 = implicit_cast<TNode<Float64T>>(t998);
    // ../../src/builtins/data-view.tq:218:5
    TNode<Number> t999 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*result_189).value())));
    USE(implicit_cast<TNode<Number>>(t999));
    *_return_177 = implicit_cast<TNode<Number>>(t999);
    Goto(label_macro_end_1622);
  }
  BIND(label_macro_end_1622);
  return implicit_cast<TNode<Number>>((*_return_177).value());
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  return implicit_cast<bool>(false);
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  return implicit_cast<bool>(true);
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  int31_t t1000 = 0;
  return implicit_cast<int31_t>(t1000);
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  int31_t t1001 = 1;
  return implicit_cast<int31_t>(t1001);
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  int31_t t1002 = 2;
  return implicit_cast<int31_t>(t1002);
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_isPositive, int31_t p_length) {
  TVARIABLE(BigInt, _return_190_impl);
  auto _return_190 = &_return_190_impl;
  USE(_return_190);
  Label label_macro_end_1624_impl(this, {_return_190}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1624 = &label_macro_end_1624_impl;
  USE(label_macro_end_1624);
  // ../../src/builtins/data-view.tq:233:78
  {
    // ../../src/builtins/data-view.tq:235:5
    TNode<IntPtrT> t1003 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(p_length)));
    TNode<BigInt> t1004 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t1003)));
    USE(implicit_cast<TNode<BigInt>>(t1004));
    TVARIABLE(BigInt, result_191_impl);
    auto result_191 = &result_191_impl;
    USE(result_191);
    *result_191 = implicit_cast<TNode<BigInt>>(t1004);
    // ../../src/builtins/data-view.tq:238:5
    {
      Label label__True_342_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_342 = &label__True_342_impl;
      USE(label__True_342);
      Label label__False_343_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_343 = &label__False_343_impl;
      USE(label__False_343);
      Label label_if_done_label_799_1625_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_799_1625 = &label_if_done_label_799_1625_impl;
      USE(label_if_done_label_799_1625);
      Branch(implicit_cast<TNode<BoolT>>(p_isPositive), label__True_342, label__False_343);
      if (label__True_342->is_used())
      {
        BIND(label__True_342);
        // ../../src/builtins/data-view.tq:238:21
        {
          // ../../src/builtins/data-view.tq:239:7
          TNode<IntPtrT> t1005 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kPositiveBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t1005));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_191).value()), implicit_cast<TNode<IntPtrT>>(t1005));
        }
        Goto(label_if_done_label_799_1625);
      }
      if (label__False_343->is_used())
      {
        BIND(label__False_343);
        // ../../src/builtins/data-view.tq:241:12
        {
          // ../../src/builtins/data-view.tq:242:7
          TNode<IntPtrT> t1006 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kNegativeBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t1006));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_191).value()), implicit_cast<TNode<IntPtrT>>(t1006));
        }
        Goto(label_if_done_label_799_1625);
      }
      BIND(label_if_done_label_799_1625);
    }
    // ../../src/builtins/data-view.tq:246:5
    *_return_190 = implicit_cast<TNode<BigInt>>((*result_191).value());
    Goto(label_macro_end_1624);
  }
  BIND(label_macro_end_1624);
  return implicit_cast<TNode<BigInt>>((*_return_190).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  TVARIABLE(BigInt, _return_192_impl);
  auto _return_192 = &_return_192_impl;
  USE(_return_192);
  Label label_macro_end_1626_impl(this, {_return_192}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1626 = &label_macro_end_1626_impl;
  USE(label_macro_end_1626);
  // ../../src/builtins/data-view.tq:251:74
  {
    // ../../src/builtins/data-view.tq:253:5
    {
      Label label__True_344_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_344 = &label__True_344_impl;
      USE(label__True_344);
      Label label__False_345_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_345 = &label__False_345_impl;
      USE(label__False_345);
      Label label__True_346_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_346 = &label__True_346_impl;
      USE(label__True_346);
      int31_t t1007 = 0;
      TNode<Uint32T> t1008 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1007)));
      TNode<BoolT> t1009 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1008)));
      USE(implicit_cast<TNode<BoolT>>(t1009));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t1009), label__False_345);
      int31_t t1010 = 0;
      TNode<Uint32T> t1011 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1010)));
      TNode<BoolT> t1012 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1011)));
      USE(implicit_cast<TNode<BoolT>>(t1012));
Branch(implicit_cast<TNode<BoolT>>(t1012), label__True_344, label__False_345);
      if (label__True_344->is_used())
      {
        BIND(label__True_344);
        // ../../src/builtins/data-view.tq:253:40
        {
          // ../../src/builtins/data-view.tq:254:7
          TNode<IntPtrT> t1013 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t1014 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t1013)));
          USE(implicit_cast<TNode<BigInt>>(t1014));
          *_return_192 = implicit_cast<TNode<BigInt>>(t1014);
          Goto(label_macro_end_1626);
        }
      }
      BIND(label__False_345);
    }
    // ../../src/builtins/data-view.tq:257:5
    TVARIABLE(BoolT, isPositive_193_impl);
    auto isPositive_193 = &isPositive_193_impl;
    USE(isPositive_193);
    TNode<BoolT> t1015 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    *isPositive_193 = implicit_cast<TNode<BoolT>>(t1015);
    // ../../src/builtins/data-view.tq:258:5
    TNode<UintPtrT> t1016 = UncheckedCast<UintPtrT>(Convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_highWord)));
    USE(implicit_cast<TNode<UintPtrT>>(t1016));
    TNode<IntPtrT> t1017 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1016)));
    USE(implicit_cast<TNode<IntPtrT>>(t1017));
    TVARIABLE(IntPtrT, highPart_194_impl);
    auto highPart_194 = &highPart_194_impl;
    USE(highPart_194);
    *highPart_194 = implicit_cast<TNode<IntPtrT>>(t1017);
    // ../../src/builtins/data-view.tq:259:5
    TNode<UintPtrT> t1018 = UncheckedCast<UintPtrT>(Convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_lowWord)));
    USE(implicit_cast<TNode<UintPtrT>>(t1018));
    TNode<IntPtrT> t1019 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1018)));
    USE(implicit_cast<TNode<IntPtrT>>(t1019));
    TVARIABLE(IntPtrT, lowPart_195_impl);
    auto lowPart_195 = &lowPart_195_impl;
    USE(lowPart_195);
    *lowPart_195 = implicit_cast<TNode<IntPtrT>>(t1019);
    // ../../src/builtins/data-view.tq:260:5
    int31_t t1020 = 32;
    TNode<IntPtrT> t1021 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1020)));
    TNode<IntPtrT> t1022 = UncheckedCast<IntPtrT>(WordShl(implicit_cast<TNode<IntPtrT>>((*highPart_194).value()), implicit_cast<TNode<IntPtrT>>(t1021)));
    USE(implicit_cast<TNode<IntPtrT>>(t1022));
    TNode<IntPtrT> t1023 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t1022), implicit_cast<TNode<IntPtrT>>((*lowPart_195).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1023));
    TVARIABLE(IntPtrT, rawValue_196_impl);
    auto rawValue_196 = &rawValue_196_impl;
    USE(rawValue_196);
    *rawValue_196 = implicit_cast<TNode<IntPtrT>>(t1023);
    // ../../src/builtins/data-view.tq:262:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:262:27
        {
          // ../../src/builtins/data-view.tq:263:7
          {
            Label label__True_349_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_349 = &label__True_349_impl;
            USE(label__True_349);
            Label label__False_350_impl(this, {isPositive_193, rawValue_196}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_350 = &label__False_350_impl;
            USE(label__False_350);
            int31_t t1024 = 0;
            TNode<IntPtrT> t1025 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1024)));
            TNode<BoolT> t1026 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*rawValue_196).value()), implicit_cast<TNode<IntPtrT>>(t1025)));
            USE(implicit_cast<TNode<BoolT>>(t1026));
            Branch(implicit_cast<TNode<BoolT>>(t1026), label__True_349, label__False_350);
            if (label__True_349->is_used())
            {
              BIND(label__True_349);
              // ../../src/builtins/data-view.tq:263:25
              {
                // ../../src/builtins/data-view.tq:264:9
                TNode<BoolT> t1027 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
                *isPositive_193 = implicit_cast<TNode<BoolT>>(t1027);
                // ../../src/builtins/data-view.tq:266:9
                int31_t t1028 = 0;
                TNode<IntPtrT> t1029 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1028)));
                TNode<IntPtrT> t1030 = UncheckedCast<IntPtrT>(IntPtrSub(implicit_cast<TNode<IntPtrT>>(t1029), implicit_cast<TNode<IntPtrT>>((*rawValue_196).value())));
                USE(implicit_cast<TNode<IntPtrT>>(t1030));
                *rawValue_196 = implicit_cast<TNode<IntPtrT>>(t1030);
              }
              Goto(label__False_350);
            }
            BIND(label__False_350);
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:271:5
    TNode<BigInt> t1031 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*isPositive_193).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
    USE(implicit_cast<TNode<BigInt>>(t1031));
    TVARIABLE(BigInt, result_197_impl);
    auto result_197 = &result_197_impl;
    USE(result_197);
    *result_197 = implicit_cast<TNode<BigInt>>(t1031);
    // ../../src/builtins/data-view.tq:273:5
    int31_t t1032 = 0;
    TNode<UintPtrT> t1033 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>((*rawValue_196).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1033));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_197).value()), implicit_cast<int31_t>(t1032), implicit_cast<TNode<UintPtrT>>(t1033));
    // ../../src/builtins/data-view.tq:275:5
    *_return_192 = implicit_cast<TNode<BigInt>>((*result_197).value());
    Goto(label_macro_end_1626);
  }
  BIND(label_macro_end_1626);
  return implicit_cast<TNode<BigInt>>((*_return_192).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  TVARIABLE(BigInt, _return_198_impl);
  auto _return_198 = &_return_198_impl;
  USE(_return_198);
  Label label_macro_end_1627_impl(this, {_return_198}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1627 = &label_macro_end_1627_impl;
  USE(label_macro_end_1627);
  // ../../src/builtins/data-view.tq:280:74
  {
    // ../../src/builtins/data-view.tq:282:5
    {
      Label label__True_351_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_351 = &label__True_351_impl;
      USE(label__True_351);
      Label label__False_352_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_352 = &label__False_352_impl;
      USE(label__False_352);
      Label label__True_353_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_353 = &label__True_353_impl;
      USE(label__True_353);
      int31_t t1034 = 0;
      TNode<Uint32T> t1035 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1034)));
      TNode<BoolT> t1036 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1035)));
      USE(implicit_cast<TNode<BoolT>>(t1036));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t1036), label__False_352);
      int31_t t1037 = 0;
      TNode<Uint32T> t1038 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1037)));
      TNode<BoolT> t1039 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1038)));
      USE(implicit_cast<TNode<BoolT>>(t1039));
Branch(implicit_cast<TNode<BoolT>>(t1039), label__True_351, label__False_352);
      if (label__True_351->is_used())
      {
        BIND(label__True_351);
        // ../../src/builtins/data-view.tq:282:40
        {
          // ../../src/builtins/data-view.tq:283:7
          TNode<IntPtrT> t1040 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t1041 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t1040)));
          USE(implicit_cast<TNode<BigInt>>(t1041));
          *_return_198 = implicit_cast<TNode<BigInt>>(t1041);
          Goto(label_macro_end_1627);
        }
      }
      BIND(label__False_352);
    }
    // ../../src/builtins/data-view.tq:287:5
    TVARIABLE(BoolT, needTwoDigits_199_impl);
    auto needTwoDigits_199 = &needTwoDigits_199_impl;
    USE(needTwoDigits_199);
    TNode<BoolT> t1042 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
    *needTwoDigits_199 = implicit_cast<TNode<BoolT>>(t1042);
    // ../../src/builtins/data-view.tq:288:5
    TVARIABLE(BoolT, isPositive_200_impl);
    auto isPositive_200 = &isPositive_200_impl;
    USE(isPositive_200);
    TNode<BoolT> t1043 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
    *isPositive_200 = implicit_cast<TNode<BoolT>>(t1043);
    // ../../src/builtins/data-view.tq:292:5
    TNode<Int32T> t1044 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_lowWord)));
    USE(implicit_cast<TNode<Int32T>>(t1044));
    TVARIABLE(Int32T, lowPart_201_impl);
    auto lowPart_201 = &lowPart_201_impl;
    USE(lowPart_201);
    *lowPart_201 = implicit_cast<TNode<Int32T>>(t1044);
    // ../../src/builtins/data-view.tq:293:5
    TNode<Int32T> t1045 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_highWord)));
    USE(implicit_cast<TNode<Int32T>>(t1045));
    TVARIABLE(Int32T, highPart_202_impl);
    auto highPart_202 = &highPart_202_impl;
    USE(highPart_202);
    *highPart_202 = implicit_cast<TNode<Int32T>>(t1045);
    // ../../src/builtins/data-view.tq:298:5
    {
      Label label__True_354_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_354 = &label__True_354_impl;
      USE(label__True_354);
      Label label__False_355_impl(this, {highPart_202, isPositive_200, lowPart_201, needTwoDigits_199}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_355 = &label__False_355_impl;
      USE(label__False_355);
      int31_t t1046 = 0;
      TNode<Uint32T> t1047 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1046)));
      TNode<BoolT> t1048 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1047)));
      USE(implicit_cast<TNode<BoolT>>(t1048));
      Branch(implicit_cast<TNode<BoolT>>(t1048), label__True_354, label__False_355);
      if (label__True_354->is_used())
      {
        BIND(label__True_354);
        // ../../src/builtins/data-view.tq:298:24
        {
          // ../../src/builtins/data-view.tq:299:7
          {
            if ((implicit_cast<bool>(p_signed))) {
              // ../../src/builtins/data-view.tq:299:29
              {
                // ../../src/builtins/data-view.tq:301:9
                {
                  Label label__True_358_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_358 = &label__True_358_impl;
                  USE(label__True_358);
                  Label label__False_359_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_359 = &label__False_359_impl;
                  USE(label__False_359);
                  Label label_if_done_label_800_1628_impl(this, {highPart_202, isPositive_200, lowPart_201, needTwoDigits_199}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label_if_done_label_800_1628 = &label_if_done_label_800_1628_impl;
                  USE(label_if_done_label_800_1628);
                  int31_t t1049 = 0;
                  TNode<Int32T> t1050 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1049)));
                  TNode<BoolT> t1051 = UncheckedCast<BoolT>(Int32LessThan(implicit_cast<TNode<Int32T>>((*highPart_202).value()), implicit_cast<TNode<Int32T>>(t1050)));
                  USE(implicit_cast<TNode<BoolT>>(t1051));
                  Branch(implicit_cast<TNode<BoolT>>(t1051), label__True_358, label__False_359);
                  if (label__True_358->is_used())
                  {
                    BIND(label__True_358);
                    // ../../src/builtins/data-view.tq:301:27
                    {
                      // ../../src/builtins/data-view.tq:302:11
                      TNode<BoolT> t1052 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(false)));
                      *isPositive_200 = implicit_cast<TNode<BoolT>>(t1052);
                      // ../../src/builtins/data-view.tq:307:11
                      int31_t t1053 = 0;
                      TNode<Int32T> t1054 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1053)));
                      TNode<Int32T> t1055 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1054), implicit_cast<TNode<Int32T>>((*highPart_202).value())));
                      USE(implicit_cast<TNode<Int32T>>(t1055));
                      *highPart_202 = implicit_cast<TNode<Int32T>>(t1055);
                      // ../../src/builtins/data-view.tq:308:11
                      {
                        Label label__True_360_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_360 = &label__True_360_impl;
                        USE(label__True_360);
                        Label label__False_361_impl(this, {highPart_202}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_361 = &label__False_361_impl;
                        USE(label__False_361);
                        int31_t t1056 = 0;
                        TNode<Int32T> t1057 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1056)));
                        TNode<BoolT> t1058 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*lowPart_201).value()), implicit_cast<TNode<Int32T>>(t1057)));
                        USE(implicit_cast<TNode<BoolT>>(t1058));
                        Branch(implicit_cast<TNode<BoolT>>(t1058), label__True_360, label__False_361);
                        if (label__True_360->is_used())
                        {
                          BIND(label__True_360);
                          // ../../src/builtins/data-view.tq:308:29
                          {
                            // ../../src/builtins/data-view.tq:309:13
                            int31_t t1059 = 1;
                            TNode<Int32T> t1060 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1059)));
                            TNode<Int32T> t1061 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>((*highPart_202).value()), implicit_cast<TNode<Int32T>>(t1060)));
                            USE(implicit_cast<TNode<Int32T>>(t1061));
                            *highPart_202 = implicit_cast<TNode<Int32T>>(t1061);
                          }
                          Goto(label__False_361);
                        }
                        BIND(label__False_361);
                      }
                      // ../../src/builtins/data-view.tq:311:11
                      int31_t t1062 = 0;
                      TNode<Int32T> t1063 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1062)));
                      TNode<Int32T> t1064 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1063), implicit_cast<TNode<Int32T>>((*lowPart_201).value())));
                      USE(implicit_cast<TNode<Int32T>>(t1064));
                      *lowPart_201 = implicit_cast<TNode<Int32T>>(t1064);
                      // ../../src/builtins/data-view.tq:314:11
                      {
                        Label label__True_362_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__True_362 = &label__True_362_impl;
                        USE(label__True_362);
                        Label label__False_363_impl(this, {needTwoDigits_199}, compiler::CodeAssemblerLabel::kNonDeferred);
                        Label* label__False_363 = &label__False_363_impl;
                        USE(label__False_363);
                        int31_t t1065 = 0;
                        TNode<Int32T> t1066 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1065)));
                        TNode<BoolT> t1067 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*highPart_202).value()), implicit_cast<TNode<Int32T>>(t1066)));
                        USE(implicit_cast<TNode<BoolT>>(t1067));
                        Branch(implicit_cast<TNode<BoolT>>(t1067), label__True_362, label__False_363);
                        if (label__True_362->is_used())
                        {
                          BIND(label__True_362);
                          // ../../src/builtins/data-view.tq:314:30
                          {
                            // ../../src/builtins/data-view.tq:315:13
                            TNode<BoolT> t1068 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                            *needTwoDigits_199 = implicit_cast<TNode<BoolT>>(t1068);
                          }
                          Goto(label__False_363);
                        }
                        BIND(label__False_363);
                      }
                    }
                    Goto(label_if_done_label_800_1628);
                  }
                  if (label__False_359->is_used())
                  {
                    BIND(label__False_359);
                    // ../../src/builtins/data-view.tq:318:16
                    {
                      // ../../src/builtins/data-view.tq:320:11
                      TNode<BoolT> t1069 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                      *needTwoDigits_199 = implicit_cast<TNode<BoolT>>(t1069);
                    }
                    Goto(label_if_done_label_800_1628);
                  }
                  BIND(label_if_done_label_800_1628);
                }
              }
            } else {
              // ../../src/builtins/data-view.tq:323:14
              {
                // ../../src/builtins/data-view.tq:326:9
                TNode<BoolT> t1070 = UncheckedCast<BoolT>(FromConstexpr6ATbool(implicit_cast<bool>(true)));
                *needTwoDigits_199 = implicit_cast<TNode<BoolT>>(t1070);
              }
            }
          }
        }
        Goto(label__False_355);
      }
      BIND(label__False_355);
    }
    // ../../src/builtins/data-view.tq:331:5
    TVARIABLE(BigInt, result_203_impl);
    auto result_203 = &result_203_impl;
    USE(result_203);
    // ../../src/builtins/data-view.tq:332:5
    {
      Label label__True_364_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_364 = &label__True_364_impl;
      USE(label__True_364);
      Label label__False_365_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_365 = &label__False_365_impl;
      USE(label__False_365);
      Label label_if_done_label_801_1629_impl(this, {result_203}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_801_1629 = &label_if_done_label_801_1629_impl;
      USE(label_if_done_label_801_1629);
      Branch(implicit_cast<TNode<BoolT>>((*needTwoDigits_199).value()), label__True_364, label__False_365);
      if (label__True_364->is_used())
      {
        BIND(label__True_364);
        // ../../src/builtins/data-view.tq:332:24
        {
          // ../../src/builtins/data-view.tq:333:7
          TNode<BigInt> t1071 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*isPositive_200).value()), implicit_cast<int31_t>(kTwoDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t1071));
          *result_203 = implicit_cast<TNode<BigInt>>(t1071);
        }
        Goto(label_if_done_label_801_1629);
      }
      if (label__False_365->is_used())
      {
        BIND(label__False_365);
        // ../../src/builtins/data-view.tq:334:12
        {
          // ../../src/builtins/data-view.tq:335:7
          TNode<BigInt> t1072 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*isPositive_200).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t1072));
          *result_203 = implicit_cast<TNode<BigInt>>(t1072);
        }
        Goto(label_if_done_label_801_1629);
      }
      BIND(label_if_done_label_801_1629);
    }
    // ../../src/builtins/data-view.tq:339:5
    int31_t t1073 = 0;
    TNode<IntPtrT> t1074 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Int32T>>((*lowPart_201).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1074));
    TNode<UintPtrT> t1075 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t1074)));
    USE(implicit_cast<TNode<UintPtrT>>(t1075));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_203).value()), implicit_cast<int31_t>(t1073), implicit_cast<TNode<UintPtrT>>(t1075));
    // ../../src/builtins/data-view.tq:341:5
    {
      Label label__True_366_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_366 = &label__True_366_impl;
      USE(label__True_366);
      Label label__False_367_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_367 = &label__False_367_impl;
      USE(label__False_367);
      Branch(implicit_cast<TNode<BoolT>>((*needTwoDigits_199).value()), label__True_366, label__False_367);
      if (label__True_366->is_used())
      {
        BIND(label__True_366);
        // ../../src/builtins/data-view.tq:341:24
        {
          // ../../src/builtins/data-view.tq:342:7
          int31_t t1076 = 1;
          TNode<IntPtrT> t1077 = UncheckedCast<IntPtrT>(Convert8ATintptr(implicit_cast<TNode<Int32T>>((*highPart_202).value())));
          USE(implicit_cast<TNode<IntPtrT>>(t1077));
          TNode<UintPtrT> t1078 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t1077)));
          USE(implicit_cast<TNode<UintPtrT>>(t1078));
          StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_203).value()), implicit_cast<int31_t>(t1076), implicit_cast<TNode<UintPtrT>>(t1078));
        }
        Goto(label__False_367);
      }
      BIND(label__False_367);
    }
    // ../../src/builtins/data-view.tq:345:5
    *_return_198 = implicit_cast<TNode<BigInt>>((*result_203).value());
    Goto(label_macro_end_1627);
  }
  BIND(label_macro_end_1627);
  return implicit_cast<TNode<BigInt>>((*_return_198).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  TVARIABLE(BigInt, _return_204_impl);
  auto _return_204 = &_return_204_impl;
  USE(_return_204);
  Label label_macro_end_1630_impl(this, {_return_204}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1630 = &label_macro_end_1630_impl;
  USE(label_macro_end_1630);
  // ../../src/builtins/data-view.tq:349:74
  {
    // ../../src/builtins/data-view.tq:352:5
    {
      bool t1079 = Is64();
      USE(implicit_cast<bool>(t1079));
      if ((implicit_cast<bool>(t1079))) {
        // ../../src/builtins/data-view.tq:352:27
        {
          // ../../src/builtins/data-view.tq:353:7
          TNode<BigInt> t1080 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t1080));
          *_return_204 = implicit_cast<TNode<BigInt>>(t1080);
          Goto(label_macro_end_1630);
        }
      } else {
        // ../../src/builtins/data-view.tq:354:12
        {
          // ../../src/builtins/data-view.tq:355:7
          TNode<BigInt> t1081 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t1081));
          *_return_204 = implicit_cast<TNode<BigInt>>(t1081);
          Goto(label_macro_end_1630);
        }
      }
    }
  }
  BIND(label_macro_end_1630);
  return implicit_cast<TNode<BigInt>>((*_return_204).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  TVARIABLE(BigInt, _return_205_impl);
  auto _return_205 = &_return_205_impl;
  USE(_return_205);
  Label label_macro_end_1631_impl(this, {_return_205}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1631 = &label_macro_end_1631_impl;
  USE(label_macro_end_1631);
  // ../../src/builtins/data-view.tq:361:39
  {
    // ../../src/builtins/data-view.tq:362:5
    TNode<RawPtrT> t1082 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_206_impl);
    auto dataPointer_206 = &dataPointer_206_impl;
    USE(dataPointer_206);
    *dataPointer_206 = implicit_cast<TNode<RawPtrT>>(t1082);
    // ../../src/builtins/data-view.tq:364:5
    TNode<Uint32T> t1083 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t1083));
    TVARIABLE(Uint32T, b0_207_impl);
    auto b0_207 = &b0_207_impl;
    USE(b0_207);
    *b0_207 = implicit_cast<TNode<Uint32T>>(t1083);
    // ../../src/builtins/data-view.tq:365:5
    int31_t t1084 = 1;
    TNode<UintPtrT> t1085 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1084)));
    TNode<UintPtrT> t1086 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1085)));
    USE(implicit_cast<TNode<UintPtrT>>(t1086));
    TNode<Uint32T> t1087 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1086)));
    USE(implicit_cast<TNode<Uint32T>>(t1087));
    TVARIABLE(Uint32T, b1_208_impl);
    auto b1_208 = &b1_208_impl;
    USE(b1_208);
    *b1_208 = implicit_cast<TNode<Uint32T>>(t1087);
    // ../../src/builtins/data-view.tq:366:5
    int31_t t1088 = 2;
    TNode<UintPtrT> t1089 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1088)));
    TNode<UintPtrT> t1090 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1089)));
    USE(implicit_cast<TNode<UintPtrT>>(t1090));
    TNode<Uint32T> t1091 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1090)));
    USE(implicit_cast<TNode<Uint32T>>(t1091));
    TVARIABLE(Uint32T, b2_209_impl);
    auto b2_209 = &b2_209_impl;
    USE(b2_209);
    *b2_209 = implicit_cast<TNode<Uint32T>>(t1091);
    // ../../src/builtins/data-view.tq:367:5
    int31_t t1092 = 3;
    TNode<UintPtrT> t1093 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1092)));
    TNode<UintPtrT> t1094 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1093)));
    USE(implicit_cast<TNode<UintPtrT>>(t1094));
    TNode<Uint32T> t1095 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1094)));
    USE(implicit_cast<TNode<Uint32T>>(t1095));
    TVARIABLE(Uint32T, b3_210_impl);
    auto b3_210 = &b3_210_impl;
    USE(b3_210);
    *b3_210 = implicit_cast<TNode<Uint32T>>(t1095);
    // ../../src/builtins/data-view.tq:368:5
    int31_t t1096 = 4;
    TNode<UintPtrT> t1097 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1096)));
    TNode<UintPtrT> t1098 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1097)));
    USE(implicit_cast<TNode<UintPtrT>>(t1098));
    TNode<Uint32T> t1099 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1098)));
    USE(implicit_cast<TNode<Uint32T>>(t1099));
    TVARIABLE(Uint32T, b4_211_impl);
    auto b4_211 = &b4_211_impl;
    USE(b4_211);
    *b4_211 = implicit_cast<TNode<Uint32T>>(t1099);
    // ../../src/builtins/data-view.tq:369:5
    int31_t t1100 = 5;
    TNode<UintPtrT> t1101 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1100)));
    TNode<UintPtrT> t1102 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1101)));
    USE(implicit_cast<TNode<UintPtrT>>(t1102));
    TNode<Uint32T> t1103 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1102)));
    USE(implicit_cast<TNode<Uint32T>>(t1103));
    TVARIABLE(Uint32T, b5_212_impl);
    auto b5_212 = &b5_212_impl;
    USE(b5_212);
    *b5_212 = implicit_cast<TNode<Uint32T>>(t1103);
    // ../../src/builtins/data-view.tq:370:5
    int31_t t1104 = 6;
    TNode<UintPtrT> t1105 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1104)));
    TNode<UintPtrT> t1106 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1105)));
    USE(implicit_cast<TNode<UintPtrT>>(t1106));
    TNode<Uint32T> t1107 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1106)));
    USE(implicit_cast<TNode<Uint32T>>(t1107));
    TVARIABLE(Uint32T, b6_213_impl);
    auto b6_213 = &b6_213_impl;
    USE(b6_213);
    *b6_213 = implicit_cast<TNode<Uint32T>>(t1107);
    // ../../src/builtins/data-view.tq:371:5
    int31_t t1108 = 7;
    TNode<UintPtrT> t1109 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1108)));
    TNode<UintPtrT> t1110 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1109)));
    USE(implicit_cast<TNode<UintPtrT>>(t1110));
    TNode<Uint32T> t1111 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*dataPointer_206).value()), implicit_cast<TNode<UintPtrT>>(t1110)));
    USE(implicit_cast<TNode<Uint32T>>(t1111));
    TVARIABLE(Uint32T, b7_214_impl);
    auto b7_214 = &b7_214_impl;
    USE(b7_214);
    *b7_214 = implicit_cast<TNode<Uint32T>>(t1111);
    // ../../src/builtins/data-view.tq:372:5
    TVARIABLE(Uint32T, lowWord_215_impl);
    auto lowWord_215 = &lowWord_215_impl;
    USE(lowWord_215);
    // ../../src/builtins/data-view.tq:373:5
    TVARIABLE(Uint32T, highWord_216_impl);
    auto highWord_216 = &highWord_216_impl;
    USE(highWord_216);
    // ../../src/builtins/data-view.tq:375:5
    {
      Label label__True_370_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_370 = &label__True_370_impl;
      USE(label__True_370);
      Label label__False_371_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_371 = &label__False_371_impl;
      USE(label__False_371);
      Label label_if_done_label_802_1632_impl(this, {highWord_216, lowWord_215}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_802_1632 = &label_if_done_label_802_1632_impl;
      USE(label_if_done_label_802_1632);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_370, label__False_371);
      if (label__True_370->is_used())
      {
        BIND(label__True_370);
        // ../../src/builtins/data-view.tq:375:32
        {
          // ../../src/builtins/data-view.tq:376:7
          int31_t t1112 = 24;
          TNode<Uint32T> t1113 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1112)));
          TNode<Uint32T> t1114 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_210).value()), implicit_cast<TNode<Uint32T>>(t1113)));
          USE(implicit_cast<TNode<Uint32T>>(t1114));
          int31_t t1115 = 16;
          TNode<Uint32T> t1116 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1115)));
          TNode<Uint32T> t1117 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_209).value()), implicit_cast<TNode<Uint32T>>(t1116)));
          USE(implicit_cast<TNode<Uint32T>>(t1117));
          TNode<Uint32T> t1118 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1114), implicit_cast<TNode<Uint32T>>(t1117)));
          USE(implicit_cast<TNode<Uint32T>>(t1118));
          int31_t t1119 = 8;
          TNode<Uint32T> t1120 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1119)));
          TNode<Uint32T> t1121 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_208).value()), implicit_cast<TNode<Uint32T>>(t1120)));
          USE(implicit_cast<TNode<Uint32T>>(t1121));
          TNode<Uint32T> t1122 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1118), implicit_cast<TNode<Uint32T>>(t1121)));
          USE(implicit_cast<TNode<Uint32T>>(t1122));
          TNode<Uint32T> t1123 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1122), implicit_cast<TNode<Uint32T>>((*b0_207).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1123));
          *lowWord_215 = implicit_cast<TNode<Uint32T>>(t1123);
          // ../../src/builtins/data-view.tq:377:7
          int31_t t1124 = 24;
          TNode<Uint32T> t1125 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1124)));
          TNode<Uint32T> t1126 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_214).value()), implicit_cast<TNode<Uint32T>>(t1125)));
          USE(implicit_cast<TNode<Uint32T>>(t1126));
          int31_t t1127 = 16;
          TNode<Uint32T> t1128 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1127)));
          TNode<Uint32T> t1129 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_213).value()), implicit_cast<TNode<Uint32T>>(t1128)));
          USE(implicit_cast<TNode<Uint32T>>(t1129));
          TNode<Uint32T> t1130 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1126), implicit_cast<TNode<Uint32T>>(t1129)));
          USE(implicit_cast<TNode<Uint32T>>(t1130));
          int31_t t1131 = 8;
          TNode<Uint32T> t1132 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1131)));
          TNode<Uint32T> t1133 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_212).value()), implicit_cast<TNode<Uint32T>>(t1132)));
          USE(implicit_cast<TNode<Uint32T>>(t1133));
          TNode<Uint32T> t1134 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1130), implicit_cast<TNode<Uint32T>>(t1133)));
          USE(implicit_cast<TNode<Uint32T>>(t1134));
          TNode<Uint32T> t1135 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1134), implicit_cast<TNode<Uint32T>>((*b4_211).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1135));
          *highWord_216 = implicit_cast<TNode<Uint32T>>(t1135);
        }
        Goto(label_if_done_label_802_1632);
      }
      if (label__False_371->is_used())
      {
        BIND(label__False_371);
        // ../../src/builtins/data-view.tq:378:12
        {
          // ../../src/builtins/data-view.tq:379:7
          int31_t t1136 = 24;
          TNode<Uint32T> t1137 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1136)));
          TNode<Uint32T> t1138 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_207).value()), implicit_cast<TNode<Uint32T>>(t1137)));
          USE(implicit_cast<TNode<Uint32T>>(t1138));
          int31_t t1139 = 16;
          TNode<Uint32T> t1140 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1139)));
          TNode<Uint32T> t1141 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_208).value()), implicit_cast<TNode<Uint32T>>(t1140)));
          USE(implicit_cast<TNode<Uint32T>>(t1141));
          TNode<Uint32T> t1142 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1138), implicit_cast<TNode<Uint32T>>(t1141)));
          USE(implicit_cast<TNode<Uint32T>>(t1142));
          int31_t t1143 = 8;
          TNode<Uint32T> t1144 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1143)));
          TNode<Uint32T> t1145 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_209).value()), implicit_cast<TNode<Uint32T>>(t1144)));
          USE(implicit_cast<TNode<Uint32T>>(t1145));
          TNode<Uint32T> t1146 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1142), implicit_cast<TNode<Uint32T>>(t1145)));
          USE(implicit_cast<TNode<Uint32T>>(t1146));
          TNode<Uint32T> t1147 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1146), implicit_cast<TNode<Uint32T>>((*b3_210).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1147));
          *highWord_216 = implicit_cast<TNode<Uint32T>>(t1147);
          // ../../src/builtins/data-view.tq:380:7
          int31_t t1148 = 24;
          TNode<Uint32T> t1149 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1148)));
          TNode<Uint32T> t1150 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_211).value()), implicit_cast<TNode<Uint32T>>(t1149)));
          USE(implicit_cast<TNode<Uint32T>>(t1150));
          int31_t t1151 = 16;
          TNode<Uint32T> t1152 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1151)));
          TNode<Uint32T> t1153 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_212).value()), implicit_cast<TNode<Uint32T>>(t1152)));
          USE(implicit_cast<TNode<Uint32T>>(t1153));
          TNode<Uint32T> t1154 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1150), implicit_cast<TNode<Uint32T>>(t1153)));
          USE(implicit_cast<TNode<Uint32T>>(t1154));
          int31_t t1155 = 8;
          TNode<Uint32T> t1156 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1155)));
          TNode<Uint32T> t1157 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_213).value()), implicit_cast<TNode<Uint32T>>(t1156)));
          USE(implicit_cast<TNode<Uint32T>>(t1157));
          TNode<Uint32T> t1158 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1154), implicit_cast<TNode<Uint32T>>(t1157)));
          USE(implicit_cast<TNode<Uint32T>>(t1158));
          TNode<Uint32T> t1159 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1158), implicit_cast<TNode<Uint32T>>((*b7_214).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1159));
          *lowWord_215 = implicit_cast<TNode<Uint32T>>(t1159);
        }
        Goto(label_if_done_label_802_1632);
      }
      BIND(label_if_done_label_802_1632);
    }
    // ../../src/builtins/data-view.tq:383:5
    TNode<BigInt> t1160 = UncheckedCast<BigInt>(MakeBigInt(implicit_cast<TNode<Uint32T>>((*lowWord_215).value()), implicit_cast<TNode<Uint32T>>((*highWord_216).value()), implicit_cast<bool>(p_signed)));
    USE(implicit_cast<TNode<BigInt>>(t1160));
    *_return_205 = implicit_cast<TNode<BigInt>>(t1160);
    Goto(label_macro_end_1631);
  }
  BIND(label_macro_end_1631);
  return implicit_cast<TNode<BigInt>>((*_return_205).value());
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_217_impl);
  auto _return_217 = &_return_217_impl;
  USE(_return_217);
  Label label_macro_end_1633_impl(this, {_return_217}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1633 = &label_macro_end_1633_impl;
  USE(label_macro_end_1633);
  // ../../src/builtins/data-view.tq:392:77
  {
    // ../../src/builtins/data-view.tq:393:5
    TNode<String> t1161 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1161));
    TNode<JSDataView> t1162 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1161)));
    USE(implicit_cast<TNode<JSDataView>>(t1162));
    TVARIABLE(JSDataView, dataView_218_impl);
    auto dataView_218 = &dataView_218_impl;
    USE(dataView_218);
    *dataView_218 = implicit_cast<TNode<JSDataView>>(t1162);
    // ../../src/builtins/data-view.tq:396:5
    TVARIABLE(Number, getIndex_219_impl);
    auto getIndex_219 = &getIndex_219_impl;
    USE(getIndex_219);
    // ../../src/builtins/data-view.tq:397:5
    {
      Label label_try_done_803_1634_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_803_1634 = &label_try_done_803_1634_impl;
      USE(label_try_done_803_1634);
      Label label_RangeError_372_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_RangeError_372 = &label_RangeError_372_impl;
      USE(label_RangeError_372);
      Label label_try_begin_804_1635_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_804_1635 = &label_try_begin_804_1635_impl;
      USE(label_try_begin_804_1635);
      Goto(label_try_begin_804_1635);
      if (label_try_begin_804_1635->is_used())
      {
        BIND(label_try_begin_804_1635);
        // ../../src/builtins/data-view.tq:397:9
        {
          // ../../src/builtins/data-view.tq:398:7
          TNode<Number> t1163 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_372));
          USE(implicit_cast<TNode<Number>>(t1163));
          *getIndex_219 = implicit_cast<TNode<Number>>(t1163);
        }
        Goto(label_try_done_803_1634);
      }
      if (label_RangeError_372->is_used())
      {
        BIND(label_RangeError_372);
        // ../../src/builtins/data-view.tq:400:22
        {
          // ../../src/builtins/data-view.tq:401:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_803_1634);
    }
    // ../../src/builtins/data-view.tq:404:5
    TNode<BoolT> t1164 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requestedLittleEndian)));
    USE(implicit_cast<TNode<BoolT>>(t1164));
    TVARIABLE(BoolT, littleEndian_220_impl);
    auto littleEndian_220 = &littleEndian_220_impl;
    USE(littleEndian_220);
    *littleEndian_220 = implicit_cast<TNode<BoolT>>(t1164);
    // ../../src/builtins/data-view.tq:405:5
    TNode<JSArrayBuffer> t1165 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*dataView_218).value())));
    TVARIABLE(JSArrayBuffer, buffer_221_impl);
    auto buffer_221 = &buffer_221_impl;
    USE(buffer_221);
    *buffer_221 = implicit_cast<TNode<JSArrayBuffer>>(t1165);
    // ../../src/builtins/data-view.tq:407:5
    {
      Label label__True_373_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_373 = &label__True_373_impl;
      USE(label__True_373);
      Label label__False_374_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_374 = &label__False_374_impl;
      USE(label__False_374);
      TNode<BoolT> t1166 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value())));
      USE(implicit_cast<TNode<BoolT>>(t1166));
      Branch(implicit_cast<TNode<BoolT>>(t1166), label__True_373, label__False_374);
      if (label__True_373->is_used())
      {
        BIND(label__True_373);
        // ../../src/builtins/data-view.tq:407:35
        {
          // ../../src/builtins/data-view.tq:408:7
          TNode<String> t1167 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1167));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1167));
        }
      }
      BIND(label__False_374);
    }
    // ../../src/builtins/data-view.tq:412:5
    TNode<Float64T> t1168 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_219).value())));
    USE(implicit_cast<TNode<Float64T>>(t1168));
    TVARIABLE(Float64T, getIndexFloat_222_impl);
    auto getIndexFloat_222 = &getIndexFloat_222_impl;
    USE(getIndexFloat_222);
    *getIndexFloat_222 = implicit_cast<TNode<Float64T>>(t1168);
    // ../../src/builtins/data-view.tq:413:5
    TNode<UintPtrT> t1169 = UncheckedCast<UintPtrT>(Convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_222).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1169));
    TVARIABLE(UintPtrT, getIndexWord_223_impl);
    auto getIndexWord_223 = &getIndexWord_223_impl;
    USE(getIndexWord_223);
    *getIndexWord_223 = implicit_cast<TNode<UintPtrT>>(t1169);
    // ../../src/builtins/data-view.tq:415:5
    TNode<UintPtrT> t1170 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(implicit_cast<TNode<JSArrayBufferView>>((*dataView_218).value())));
    TVARIABLE(UintPtrT, viewOffsetWord_224_impl);
    auto viewOffsetWord_224 = &viewOffsetWord_224_impl;
    USE(viewOffsetWord_224);
    *viewOffsetWord_224 = implicit_cast<TNode<UintPtrT>>(t1170);
    // ../../src/builtins/data-view.tq:416:5
    TNode<UintPtrT> t1171 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(implicit_cast<TNode<JSArrayBufferView>>((*dataView_218).value())));
    TNode<Float64T> t1172 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<UintPtrT>>(t1171)));
    USE(implicit_cast<TNode<Float64T>>(t1172));
    TVARIABLE(Float64T, viewSizeFloat_225_impl);
    auto viewSizeFloat_225 = &viewSizeFloat_225_impl;
    USE(viewSizeFloat_225);
    *viewSizeFloat_225 = implicit_cast<TNode<Float64T>>(t1172);
    // ../../src/builtins/data-view.tq:417:5
    int31_t t1173 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1173));
    TNode<Float64T> t1174 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<int31_t>(t1173)));
    USE(implicit_cast<TNode<Float64T>>(t1174));
    TVARIABLE(Float64T, elementSizeFloat_226_impl);
    auto elementSizeFloat_226 = &elementSizeFloat_226_impl;
    USE(elementSizeFloat_226);
    *elementSizeFloat_226 = implicit_cast<TNode<Float64T>>(t1174);
    // ../../src/builtins/data-view.tq:419:5
    {
      Label label__True_375_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_375 = &label__True_375_impl;
      USE(label__True_375);
      Label label__False_376_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_376 = &label__False_376_impl;
      USE(label__False_376);
      TNode<Float64T> t1175 = UncheckedCast<Float64T>(Float64Add(implicit_cast<TNode<Float64T>>((*getIndexFloat_222).value()), implicit_cast<TNode<Float64T>>((*elementSizeFloat_226).value())));
      USE(implicit_cast<TNode<Float64T>>(t1175));
      TNode<BoolT> t1176 = UncheckedCast<BoolT>(Float64GreaterThan(implicit_cast<TNode<Float64T>>(t1175), implicit_cast<TNode<Float64T>>((*viewSizeFloat_225).value())));
      USE(implicit_cast<TNode<BoolT>>(t1176));
      Branch(implicit_cast<TNode<BoolT>>(t1176), label__True_375, label__False_376);
      if (label__True_375->is_used())
      {
        BIND(label__True_375);
        // ../../src/builtins/data-view.tq:419:59
        {
          // ../../src/builtins/data-view.tq:420:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_376);
    }
    // ../../src/builtins/data-view.tq:423:5
    TNode<UintPtrT> t1177 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>((*getIndexWord_223).value()), implicit_cast<TNode<UintPtrT>>((*viewOffsetWord_224).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1177));
    TVARIABLE(UintPtrT, bufferIndex_227_impl);
    auto bufferIndex_227 = &bufferIndex_227_impl;
    USE(bufferIndex_227);
    *bufferIndex_227 = implicit_cast<TNode<UintPtrT>>(t1177);
    // ../../src/builtins/data-view.tq:425:5
    {
      bool t1178 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1178));
      if ((implicit_cast<bool>(t1178))) {
        // ../../src/builtins/data-view.tq:425:43
        {
          // ../../src/builtins/data-view.tq:426:7
          TNode<Smi> t1179 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<bool>(false)));
          USE(implicit_cast<TNode<Smi>>(t1179));
          *_return_217 = implicit_cast<TNode<Numeric>>(t1179);
          Goto(label_macro_end_1633);
        }
      } else {
        // ../../src/builtins/data-view.tq:427:12
        {
          bool t1180 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t1180));
          if ((implicit_cast<bool>(t1180))) {
            // ../../src/builtins/data-view.tq:427:49
            {
              // ../../src/builtins/data-view.tq:428:7
              TNode<Smi> t1181 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<bool>(true)));
              USE(implicit_cast<TNode<Smi>>(t1181));
              *_return_217 = implicit_cast<TNode<Numeric>>(t1181);
              Goto(label_macro_end_1633);
            }
          } else {
            // ../../src/builtins/data-view.tq:429:12
            {
              bool t1182 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t1182));
              if ((implicit_cast<bool>(t1182))) {
                // ../../src/builtins/data-view.tq:429:51
                {
                  // ../../src/builtins/data-view.tq:430:7
                  TNode<Number> t1183 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<bool>(false)));
                  USE(implicit_cast<TNode<Number>>(t1183));
                  *_return_217 = implicit_cast<TNode<Numeric>>(t1183);
                  Goto(label_macro_end_1633);
                }
              } else {
                // ../../src/builtins/data-view.tq:431:12
                {
                  bool t1184 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t1184));
                  if ((implicit_cast<bool>(t1184))) {
                    // ../../src/builtins/data-view.tq:431:50
                    {
                      // ../../src/builtins/data-view.tq:432:7
                      TNode<Number> t1185 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<bool>(true)));
                      USE(implicit_cast<TNode<Number>>(t1185));
                      *_return_217 = implicit_cast<TNode<Numeric>>(t1185);
                      Goto(label_macro_end_1633);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:433:12
                    {
                      bool t1186 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t1186));
                      if ((implicit_cast<bool>(t1186))) {
                        // ../../src/builtins/data-view.tq:433:51
                        {
                          // ../../src/builtins/data-view.tq:434:7
                          TNode<Number> t1187 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<ElementsKind>(p_kind)));
                          USE(implicit_cast<TNode<Number>>(t1187));
                          *_return_217 = implicit_cast<TNode<Numeric>>(t1187);
                          Goto(label_macro_end_1633);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:435:12
                        {
                          bool t1188 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t1188));
                          if ((implicit_cast<bool>(t1188))) {
                            // ../../src/builtins/data-view.tq:435:50
                            {
                              // ../../src/builtins/data-view.tq:436:7
                              TNode<Number> t1189 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<ElementsKind>(p_kind)));
                              USE(implicit_cast<TNode<Number>>(t1189));
                              *_return_217 = implicit_cast<TNode<Numeric>>(t1189);
                              Goto(label_macro_end_1633);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:437:12
                            {
                              bool t1190 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t1190));
                              if ((implicit_cast<bool>(t1190))) {
                                // ../../src/builtins/data-view.tq:437:52
                                {
                                  // ../../src/builtins/data-view.tq:438:7
                                  TNode<Number> t1191 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<ElementsKind>(p_kind)));
                                  USE(implicit_cast<TNode<Number>>(t1191));
                                  *_return_217 = implicit_cast<TNode<Numeric>>(t1191);
                                  Goto(label_macro_end_1633);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:439:12
                                {
                                  bool t1192 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t1192));
                                  if ((implicit_cast<bool>(t1192))) {
                                    // ../../src/builtins/data-view.tq:439:52
                                    {
                                      // ../../src/builtins/data-view.tq:440:7
                                      TNode<Number> t1193 = UncheckedCast<Number>(LoadDataViewFloat64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value())));
                                      USE(implicit_cast<TNode<Number>>(t1193));
                                      *_return_217 = implicit_cast<TNode<Numeric>>(t1193);
                                      Goto(label_macro_end_1633);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:441:12
                                    {
                                      bool t1194 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t1194));
                                      if ((implicit_cast<bool>(t1194))) {
                                        // ../../src/builtins/data-view.tq:441:54
                                        {
                                          // ../../src/builtins/data-view.tq:442:7
                                          TNode<BigInt> t1195 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<bool>(false)));
                                          USE(implicit_cast<TNode<BigInt>>(t1195));
                                          *_return_217 = implicit_cast<TNode<Numeric>>(t1195);
                                          Goto(label_macro_end_1633);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:443:12
                                        {
                                          bool t1196 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t1196));
                                          if ((implicit_cast<bool>(t1196))) {
                                            // ../../src/builtins/data-view.tq:443:53
                                            {
                                              // ../../src/builtins/data-view.tq:444:7
                                              TNode<BigInt> t1197 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_221).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_227).value()), implicit_cast<TNode<BoolT>>((*littleEndian_220).value()), implicit_cast<bool>(true)));
                                              USE(implicit_cast<TNode<BigInt>>(t1197));
                                              *_return_217 = implicit_cast<TNode<Numeric>>(t1197);
                                              Goto(label_macro_end_1633);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:445:12
                                            {
                                              // ../../src/builtins/data-view.tq:446:7
                                              Print("halting because of 'unreachable' at ../../src/builtins/data-view.tq:446:7");
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
  BIND(label_macro_end_1633);
  return implicit_cast<TNode<Numeric>>((*_return_217).value());
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
  // ../../src/builtins/data-view.tq:451:65
  {
    // ../../src/builtins/data-view.tq:452:5
    auto t1198 = [=]() {
      int31_t t1200 = 0;
      TNode<IntPtrT> t1201 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1200)));
      TNode<Object> t1202 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1201)));
      return implicit_cast<TNode<Object>>(t1202);
    };
    auto t1199 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1203_805_impl);
    auto t1203_805 = &t1203_805_impl;
    USE(t1203_805);
    {
      Label label__True_397_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_397 = &label__True_397_impl;
      USE(label__True_397);
      Label label__False_398_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_398 = &label__False_398_impl;
      USE(label__False_398);
      Label label__done_806_1636_impl(this, {t1203_805}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_806_1636 = &label__done_806_1636_impl;
      USE(label__done_806_1636);
      TNode<IntPtrT> t1204 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1205 = 0;
      TNode<IntPtrT> t1206 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1205)));
      TNode<BoolT> t1207 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1204), implicit_cast<TNode<IntPtrT>>(t1206)));
      USE(implicit_cast<TNode<BoolT>>(t1207));
      Branch(implicit_cast<TNode<BoolT>>(t1207), label__True_397, label__False_398);
      BIND(label__True_397);
            *t1203_805 = implicit_cast<TNode<Object>>(t1198());
      Goto(label__done_806_1636);
      BIND(label__False_398);
            *t1203_805 = implicit_cast<TNode<Object>>(t1199());
      Goto(label__done_806_1636);
      BIND(label__done_806_1636);
    }
    TVARIABLE(Object, offset_228_impl);
    auto offset_228 = &offset_228_impl;
    USE(offset_228);
    *offset_228 = implicit_cast<TNode<Object>>((*t1203_805).value());
    // ../../src/builtins/data-view.tq:453:5
    TNode<Numeric> t1208 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_228).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1208));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1208));
  }
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
  // ../../src/builtins/data-view.tq:457:65
  {
    // ../../src/builtins/data-view.tq:458:5
    auto t1209 = [=]() {
      int31_t t1211 = 0;
      TNode<IntPtrT> t1212 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1211)));
      TNode<Object> t1213 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1212)));
      return implicit_cast<TNode<Object>>(t1213);
    };
    auto t1210 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1214_807_impl);
    auto t1214_807 = &t1214_807_impl;
    USE(t1214_807);
    {
      Label label__True_399_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_399 = &label__True_399_impl;
      USE(label__True_399);
      Label label__False_400_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_400 = &label__False_400_impl;
      USE(label__False_400);
      Label label__done_808_1637_impl(this, {t1214_807}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_808_1637 = &label__done_808_1637_impl;
      USE(label__done_808_1637);
      TNode<IntPtrT> t1215 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1216 = 0;
      TNode<IntPtrT> t1217 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1216)));
      TNode<BoolT> t1218 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1215), implicit_cast<TNode<IntPtrT>>(t1217)));
      USE(implicit_cast<TNode<BoolT>>(t1218));
      Branch(implicit_cast<TNode<BoolT>>(t1218), label__True_399, label__False_400);
      BIND(label__True_399);
            *t1214_807 = implicit_cast<TNode<Object>>(t1209());
      Goto(label__done_808_1637);
      BIND(label__False_400);
            *t1214_807 = implicit_cast<TNode<Object>>(t1210());
      Goto(label__done_808_1637);
      BIND(label__done_808_1637);
    }
    TVARIABLE(Object, offset_229_impl);
    auto offset_229 = &offset_229_impl;
    USE(offset_229);
    *offset_229 = implicit_cast<TNode<Object>>((*t1214_807).value());
    // ../../src/builtins/data-view.tq:459:5
    TNode<Numeric> t1219 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_229).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1219));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1219));
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
  // ../../src/builtins/data-view.tq:463:65
  {
    // ../../src/builtins/data-view.tq:464:5
    auto t1220 = [=]() {
      int31_t t1222 = 0;
      TNode<IntPtrT> t1223 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1222)));
      TNode<Object> t1224 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1223)));
      return implicit_cast<TNode<Object>>(t1224);
    };
    auto t1221 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1225_809_impl);
    auto t1225_809 = &t1225_809_impl;
    USE(t1225_809);
    {
      Label label__True_401_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_401 = &label__True_401_impl;
      USE(label__True_401);
      Label label__False_402_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_402 = &label__False_402_impl;
      USE(label__False_402);
      Label label__done_810_1638_impl(this, {t1225_809}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_810_1638 = &label__done_810_1638_impl;
      USE(label__done_810_1638);
      TNode<IntPtrT> t1226 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1227 = 0;
      TNode<IntPtrT> t1228 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1227)));
      TNode<BoolT> t1229 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1226), implicit_cast<TNode<IntPtrT>>(t1228)));
      USE(implicit_cast<TNode<BoolT>>(t1229));
      Branch(implicit_cast<TNode<BoolT>>(t1229), label__True_401, label__False_402);
      BIND(label__True_401);
            *t1225_809 = implicit_cast<TNode<Object>>(t1220());
      Goto(label__done_810_1638);
      BIND(label__False_402);
            *t1225_809 = implicit_cast<TNode<Object>>(t1221());
      Goto(label__done_810_1638);
      BIND(label__done_810_1638);
    }
    TVARIABLE(Object, offset_230_impl);
    auto offset_230 = &offset_230_impl;
    USE(offset_230);
    *offset_230 = implicit_cast<TNode<Object>>((*t1225_809).value());
    // ../../src/builtins/data-view.tq:465:5
    auto t1230 = [=]() {
      int31_t t1232 = 1;
      TNode<IntPtrT> t1233 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1232)));
      TNode<Object> t1234 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1233)));
      return implicit_cast<TNode<Object>>(t1234);
    };
    auto t1231 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1235_811_impl);
    auto t1235_811 = &t1235_811_impl;
    USE(t1235_811);
    {
      Label label__True_403_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_403 = &label__True_403_impl;
      USE(label__True_403);
      Label label__False_404_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_404 = &label__False_404_impl;
      USE(label__False_404);
      Label label__done_812_1639_impl(this, {t1235_811}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_812_1639 = &label__done_812_1639_impl;
      USE(label__done_812_1639);
      TNode<IntPtrT> t1236 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1237 = 1;
      TNode<IntPtrT> t1238 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1237)));
      TNode<BoolT> t1239 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1236), implicit_cast<TNode<IntPtrT>>(t1238)));
      USE(implicit_cast<TNode<BoolT>>(t1239));
      Branch(implicit_cast<TNode<BoolT>>(t1239), label__True_403, label__False_404);
      BIND(label__True_403);
            *t1235_811 = implicit_cast<TNode<Object>>(t1230());
      Goto(label__done_812_1639);
      BIND(label__False_404);
            *t1235_811 = implicit_cast<TNode<Object>>(t1231());
      Goto(label__done_812_1639);
      BIND(label__done_812_1639);
    }
    TVARIABLE(Object, isLittleEndian_231_impl);
    auto isLittleEndian_231 = &isLittleEndian_231_impl;
    USE(isLittleEndian_231);
    *isLittleEndian_231 = implicit_cast<TNode<Object>>((*t1235_811).value());
    // ../../src/builtins/data-view.tq:467:5
    TNode<Numeric> t1240 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_230).value()), implicit_cast<TNode<Object>>((*isLittleEndian_231).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1240));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1240));
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
  // ../../src/builtins/data-view.tq:472:65
  {
    // ../../src/builtins/data-view.tq:473:5
    auto t1241 = [=]() {
      int31_t t1243 = 0;
      TNode<IntPtrT> t1244 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1243)));
      TNode<Object> t1245 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1244)));
      return implicit_cast<TNode<Object>>(t1245);
    };
    auto t1242 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1246_813_impl);
    auto t1246_813 = &t1246_813_impl;
    USE(t1246_813);
    {
      Label label__True_405_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_405 = &label__True_405_impl;
      USE(label__True_405);
      Label label__False_406_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_406 = &label__False_406_impl;
      USE(label__False_406);
      Label label__done_814_1640_impl(this, {t1246_813}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_814_1640 = &label__done_814_1640_impl;
      USE(label__done_814_1640);
      TNode<IntPtrT> t1247 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1248 = 0;
      TNode<IntPtrT> t1249 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1248)));
      TNode<BoolT> t1250 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1247), implicit_cast<TNode<IntPtrT>>(t1249)));
      USE(implicit_cast<TNode<BoolT>>(t1250));
      Branch(implicit_cast<TNode<BoolT>>(t1250), label__True_405, label__False_406);
      BIND(label__True_405);
            *t1246_813 = implicit_cast<TNode<Object>>(t1241());
      Goto(label__done_814_1640);
      BIND(label__False_406);
            *t1246_813 = implicit_cast<TNode<Object>>(t1242());
      Goto(label__done_814_1640);
      BIND(label__done_814_1640);
    }
    TVARIABLE(Object, offset_232_impl);
    auto offset_232 = &offset_232_impl;
    USE(offset_232);
    *offset_232 = implicit_cast<TNode<Object>>((*t1246_813).value());
    // ../../src/builtins/data-view.tq:474:5
    auto t1251 = [=]() {
      int31_t t1253 = 1;
      TNode<IntPtrT> t1254 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1253)));
      TNode<Object> t1255 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1254)));
      return implicit_cast<TNode<Object>>(t1255);
    };
    auto t1252 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1256_815_impl);
    auto t1256_815 = &t1256_815_impl;
    USE(t1256_815);
    {
      Label label__True_407_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_407 = &label__True_407_impl;
      USE(label__True_407);
      Label label__False_408_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_408 = &label__False_408_impl;
      USE(label__False_408);
      Label label__done_816_1641_impl(this, {t1256_815}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_816_1641 = &label__done_816_1641_impl;
      USE(label__done_816_1641);
      TNode<IntPtrT> t1257 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1258 = 1;
      TNode<IntPtrT> t1259 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1258)));
      TNode<BoolT> t1260 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1257), implicit_cast<TNode<IntPtrT>>(t1259)));
      USE(implicit_cast<TNode<BoolT>>(t1260));
      Branch(implicit_cast<TNode<BoolT>>(t1260), label__True_407, label__False_408);
      BIND(label__True_407);
            *t1256_815 = implicit_cast<TNode<Object>>(t1251());
      Goto(label__done_816_1641);
      BIND(label__False_408);
            *t1256_815 = implicit_cast<TNode<Object>>(t1252());
      Goto(label__done_816_1641);
      BIND(label__done_816_1641);
    }
    TVARIABLE(Object, isLittleEndian_233_impl);
    auto isLittleEndian_233 = &isLittleEndian_233_impl;
    USE(isLittleEndian_233);
    *isLittleEndian_233 = implicit_cast<TNode<Object>>((*t1256_815).value());
    // ../../src/builtins/data-view.tq:476:5
    TNode<Numeric> t1261 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_232).value()), implicit_cast<TNode<Object>>((*isLittleEndian_233).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1261));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1261));
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
  // ../../src/builtins/data-view.tq:481:65
  {
    // ../../src/builtins/data-view.tq:482:5
    auto t1262 = [=]() {
      int31_t t1264 = 0;
      TNode<IntPtrT> t1265 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1264)));
      TNode<Object> t1266 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1265)));
      return implicit_cast<TNode<Object>>(t1266);
    };
    auto t1263 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1267_817_impl);
    auto t1267_817 = &t1267_817_impl;
    USE(t1267_817);
    {
      Label label__True_409_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_409 = &label__True_409_impl;
      USE(label__True_409);
      Label label__False_410_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_410 = &label__False_410_impl;
      USE(label__False_410);
      Label label__done_818_1642_impl(this, {t1267_817}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_818_1642 = &label__done_818_1642_impl;
      USE(label__done_818_1642);
      TNode<IntPtrT> t1268 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1269 = 0;
      TNode<IntPtrT> t1270 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1269)));
      TNode<BoolT> t1271 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1268), implicit_cast<TNode<IntPtrT>>(t1270)));
      USE(implicit_cast<TNode<BoolT>>(t1271));
      Branch(implicit_cast<TNode<BoolT>>(t1271), label__True_409, label__False_410);
      BIND(label__True_409);
            *t1267_817 = implicit_cast<TNode<Object>>(t1262());
      Goto(label__done_818_1642);
      BIND(label__False_410);
            *t1267_817 = implicit_cast<TNode<Object>>(t1263());
      Goto(label__done_818_1642);
      BIND(label__done_818_1642);
    }
    TVARIABLE(Object, offset_234_impl);
    auto offset_234 = &offset_234_impl;
    USE(offset_234);
    *offset_234 = implicit_cast<TNode<Object>>((*t1267_817).value());
    // ../../src/builtins/data-view.tq:483:5
    auto t1272 = [=]() {
      int31_t t1274 = 1;
      TNode<IntPtrT> t1275 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1274)));
      TNode<Object> t1276 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1275)));
      return implicit_cast<TNode<Object>>(t1276);
    };
    auto t1273 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1277_819_impl);
    auto t1277_819 = &t1277_819_impl;
    USE(t1277_819);
    {
      Label label__True_411_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_411 = &label__True_411_impl;
      USE(label__True_411);
      Label label__False_412_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_412 = &label__False_412_impl;
      USE(label__False_412);
      Label label__done_820_1643_impl(this, {t1277_819}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_820_1643 = &label__done_820_1643_impl;
      USE(label__done_820_1643);
      TNode<IntPtrT> t1278 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1279 = 1;
      TNode<IntPtrT> t1280 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1279)));
      TNode<BoolT> t1281 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1278), implicit_cast<TNode<IntPtrT>>(t1280)));
      USE(implicit_cast<TNode<BoolT>>(t1281));
      Branch(implicit_cast<TNode<BoolT>>(t1281), label__True_411, label__False_412);
      BIND(label__True_411);
            *t1277_819 = implicit_cast<TNode<Object>>(t1272());
      Goto(label__done_820_1643);
      BIND(label__False_412);
            *t1277_819 = implicit_cast<TNode<Object>>(t1273());
      Goto(label__done_820_1643);
      BIND(label__done_820_1643);
    }
    TVARIABLE(Object, isLittleEndian_235_impl);
    auto isLittleEndian_235 = &isLittleEndian_235_impl;
    USE(isLittleEndian_235);
    *isLittleEndian_235 = implicit_cast<TNode<Object>>((*t1277_819).value());
    // ../../src/builtins/data-view.tq:485:5
    TNode<Numeric> t1282 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_234).value()), implicit_cast<TNode<Object>>((*isLittleEndian_235).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1282));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1282));
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
  // ../../src/builtins/data-view.tq:490:65
  {
    // ../../src/builtins/data-view.tq:491:5
    auto t1283 = [=]() {
      int31_t t1285 = 0;
      TNode<IntPtrT> t1286 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1285)));
      TNode<Object> t1287 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1286)));
      return implicit_cast<TNode<Object>>(t1287);
    };
    auto t1284 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1288_821_impl);
    auto t1288_821 = &t1288_821_impl;
    USE(t1288_821);
    {
      Label label__True_413_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_413 = &label__True_413_impl;
      USE(label__True_413);
      Label label__False_414_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_414 = &label__False_414_impl;
      USE(label__False_414);
      Label label__done_822_1644_impl(this, {t1288_821}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_822_1644 = &label__done_822_1644_impl;
      USE(label__done_822_1644);
      TNode<IntPtrT> t1289 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1290 = 0;
      TNode<IntPtrT> t1291 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1290)));
      TNode<BoolT> t1292 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1289), implicit_cast<TNode<IntPtrT>>(t1291)));
      USE(implicit_cast<TNode<BoolT>>(t1292));
      Branch(implicit_cast<TNode<BoolT>>(t1292), label__True_413, label__False_414);
      BIND(label__True_413);
            *t1288_821 = implicit_cast<TNode<Object>>(t1283());
      Goto(label__done_822_1644);
      BIND(label__False_414);
            *t1288_821 = implicit_cast<TNode<Object>>(t1284());
      Goto(label__done_822_1644);
      BIND(label__done_822_1644);
    }
    TVARIABLE(Object, offset_236_impl);
    auto offset_236 = &offset_236_impl;
    USE(offset_236);
    *offset_236 = implicit_cast<TNode<Object>>((*t1288_821).value());
    // ../../src/builtins/data-view.tq:492:5
    auto t1293 = [=]() {
      int31_t t1295 = 1;
      TNode<IntPtrT> t1296 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1295)));
      TNode<Object> t1297 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1296)));
      return implicit_cast<TNode<Object>>(t1297);
    };
    auto t1294 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1298_823_impl);
    auto t1298_823 = &t1298_823_impl;
    USE(t1298_823);
    {
      Label label__True_415_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_415 = &label__True_415_impl;
      USE(label__True_415);
      Label label__False_416_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_416 = &label__False_416_impl;
      USE(label__False_416);
      Label label__done_824_1645_impl(this, {t1298_823}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_824_1645 = &label__done_824_1645_impl;
      USE(label__done_824_1645);
      TNode<IntPtrT> t1299 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1300 = 1;
      TNode<IntPtrT> t1301 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1300)));
      TNode<BoolT> t1302 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1299), implicit_cast<TNode<IntPtrT>>(t1301)));
      USE(implicit_cast<TNode<BoolT>>(t1302));
      Branch(implicit_cast<TNode<BoolT>>(t1302), label__True_415, label__False_416);
      BIND(label__True_415);
            *t1298_823 = implicit_cast<TNode<Object>>(t1293());
      Goto(label__done_824_1645);
      BIND(label__False_416);
            *t1298_823 = implicit_cast<TNode<Object>>(t1294());
      Goto(label__done_824_1645);
      BIND(label__done_824_1645);
    }
    TVARIABLE(Object, isLittleEndian_237_impl);
    auto isLittleEndian_237 = &isLittleEndian_237_impl;
    USE(isLittleEndian_237);
    *isLittleEndian_237 = implicit_cast<TNode<Object>>((*t1298_823).value());
    // ../../src/builtins/data-view.tq:494:5
    TNode<Numeric> t1303 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_236).value()), implicit_cast<TNode<Object>>((*isLittleEndian_237).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1303));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1303));
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
  // ../../src/builtins/data-view.tq:499:65
  {
    // ../../src/builtins/data-view.tq:500:5
    auto t1304 = [=]() {
      int31_t t1306 = 0;
      TNode<IntPtrT> t1307 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1306)));
      TNode<Object> t1308 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1307)));
      return implicit_cast<TNode<Object>>(t1308);
    };
    auto t1305 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1309_825_impl);
    auto t1309_825 = &t1309_825_impl;
    USE(t1309_825);
    {
      Label label__True_417_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_417 = &label__True_417_impl;
      USE(label__True_417);
      Label label__False_418_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_418 = &label__False_418_impl;
      USE(label__False_418);
      Label label__done_826_1646_impl(this, {t1309_825}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_826_1646 = &label__done_826_1646_impl;
      USE(label__done_826_1646);
      TNode<IntPtrT> t1310 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1311 = 0;
      TNode<IntPtrT> t1312 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1311)));
      TNode<BoolT> t1313 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1310), implicit_cast<TNode<IntPtrT>>(t1312)));
      USE(implicit_cast<TNode<BoolT>>(t1313));
      Branch(implicit_cast<TNode<BoolT>>(t1313), label__True_417, label__False_418);
      BIND(label__True_417);
            *t1309_825 = implicit_cast<TNode<Object>>(t1304());
      Goto(label__done_826_1646);
      BIND(label__False_418);
            *t1309_825 = implicit_cast<TNode<Object>>(t1305());
      Goto(label__done_826_1646);
      BIND(label__done_826_1646);
    }
    TVARIABLE(Object, offset_238_impl);
    auto offset_238 = &offset_238_impl;
    USE(offset_238);
    *offset_238 = implicit_cast<TNode<Object>>((*t1309_825).value());
    // ../../src/builtins/data-view.tq:501:5
    auto t1314 = [=]() {
      int31_t t1316 = 1;
      TNode<IntPtrT> t1317 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1316)));
      TNode<Object> t1318 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1317)));
      return implicit_cast<TNode<Object>>(t1318);
    };
    auto t1315 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1319_827_impl);
    auto t1319_827 = &t1319_827_impl;
    USE(t1319_827);
    {
      Label label__True_419_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_419 = &label__True_419_impl;
      USE(label__True_419);
      Label label__False_420_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_420 = &label__False_420_impl;
      USE(label__False_420);
      Label label__done_828_1647_impl(this, {t1319_827}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_828_1647 = &label__done_828_1647_impl;
      USE(label__done_828_1647);
      TNode<IntPtrT> t1320 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1321 = 1;
      TNode<IntPtrT> t1322 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1321)));
      TNode<BoolT> t1323 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1320), implicit_cast<TNode<IntPtrT>>(t1322)));
      USE(implicit_cast<TNode<BoolT>>(t1323));
      Branch(implicit_cast<TNode<BoolT>>(t1323), label__True_419, label__False_420);
      BIND(label__True_419);
            *t1319_827 = implicit_cast<TNode<Object>>(t1314());
      Goto(label__done_828_1647);
      BIND(label__False_420);
            *t1319_827 = implicit_cast<TNode<Object>>(t1315());
      Goto(label__done_828_1647);
      BIND(label__done_828_1647);
    }
    TVARIABLE(Object, isLittleEndian_239_impl);
    auto isLittleEndian_239 = &isLittleEndian_239_impl;
    USE(isLittleEndian_239);
    *isLittleEndian_239 = implicit_cast<TNode<Object>>((*t1319_827).value());
    // ../../src/builtins/data-view.tq:503:5
    TNode<Numeric> t1324 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_238).value()), implicit_cast<TNode<Object>>((*isLittleEndian_239).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1324));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1324));
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
  // ../../src/builtins/data-view.tq:508:65
  {
    // ../../src/builtins/data-view.tq:509:5
    auto t1325 = [=]() {
      int31_t t1327 = 0;
      TNode<IntPtrT> t1328 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1327)));
      TNode<Object> t1329 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1328)));
      return implicit_cast<TNode<Object>>(t1329);
    };
    auto t1326 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1330_829_impl);
    auto t1330_829 = &t1330_829_impl;
    USE(t1330_829);
    {
      Label label__True_421_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_421 = &label__True_421_impl;
      USE(label__True_421);
      Label label__False_422_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_422 = &label__False_422_impl;
      USE(label__False_422);
      Label label__done_830_1648_impl(this, {t1330_829}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_830_1648 = &label__done_830_1648_impl;
      USE(label__done_830_1648);
      TNode<IntPtrT> t1331 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1332 = 0;
      TNode<IntPtrT> t1333 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1332)));
      TNode<BoolT> t1334 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1331), implicit_cast<TNode<IntPtrT>>(t1333)));
      USE(implicit_cast<TNode<BoolT>>(t1334));
      Branch(implicit_cast<TNode<BoolT>>(t1334), label__True_421, label__False_422);
      BIND(label__True_421);
            *t1330_829 = implicit_cast<TNode<Object>>(t1325());
      Goto(label__done_830_1648);
      BIND(label__False_422);
            *t1330_829 = implicit_cast<TNode<Object>>(t1326());
      Goto(label__done_830_1648);
      BIND(label__done_830_1648);
    }
    TVARIABLE(Object, offset_240_impl);
    auto offset_240 = &offset_240_impl;
    USE(offset_240);
    *offset_240 = implicit_cast<TNode<Object>>((*t1330_829).value());
    // ../../src/builtins/data-view.tq:510:5
    auto t1335 = [=]() {
      int31_t t1337 = 1;
      TNode<IntPtrT> t1338 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1337)));
      TNode<Object> t1339 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1338)));
      return implicit_cast<TNode<Object>>(t1339);
    };
    auto t1336 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1340_831_impl);
    auto t1340_831 = &t1340_831_impl;
    USE(t1340_831);
    {
      Label label__True_423_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_423 = &label__True_423_impl;
      USE(label__True_423);
      Label label__False_424_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_424 = &label__False_424_impl;
      USE(label__False_424);
      Label label__done_832_1649_impl(this, {t1340_831}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_832_1649 = &label__done_832_1649_impl;
      USE(label__done_832_1649);
      TNode<IntPtrT> t1341 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1342 = 1;
      TNode<IntPtrT> t1343 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1342)));
      TNode<BoolT> t1344 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1341), implicit_cast<TNode<IntPtrT>>(t1343)));
      USE(implicit_cast<TNode<BoolT>>(t1344));
      Branch(implicit_cast<TNode<BoolT>>(t1344), label__True_423, label__False_424);
      BIND(label__True_423);
            *t1340_831 = implicit_cast<TNode<Object>>(t1335());
      Goto(label__done_832_1649);
      BIND(label__False_424);
            *t1340_831 = implicit_cast<TNode<Object>>(t1336());
      Goto(label__done_832_1649);
      BIND(label__done_832_1649);
    }
    TVARIABLE(Object, isLittleEndian_241_impl);
    auto isLittleEndian_241 = &isLittleEndian_241_impl;
    USE(isLittleEndian_241);
    *isLittleEndian_241 = implicit_cast<TNode<Object>>((*t1340_831).value());
    // ../../src/builtins/data-view.tq:512:5
    TNode<Numeric> t1345 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_240).value()), implicit_cast<TNode<Object>>((*isLittleEndian_241).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1345));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1345));
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
  // ../../src/builtins/data-view.tq:517:65
  {
    // ../../src/builtins/data-view.tq:518:5
    auto t1346 = [=]() {
      int31_t t1348 = 0;
      TNode<IntPtrT> t1349 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1348)));
      TNode<Object> t1350 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1349)));
      return implicit_cast<TNode<Object>>(t1350);
    };
    auto t1347 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1351_833_impl);
    auto t1351_833 = &t1351_833_impl;
    USE(t1351_833);
    {
      Label label__True_425_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_425 = &label__True_425_impl;
      USE(label__True_425);
      Label label__False_426_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_426 = &label__False_426_impl;
      USE(label__False_426);
      Label label__done_834_1650_impl(this, {t1351_833}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_834_1650 = &label__done_834_1650_impl;
      USE(label__done_834_1650);
      TNode<IntPtrT> t1352 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1353 = 0;
      TNode<IntPtrT> t1354 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1353)));
      TNode<BoolT> t1355 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1352), implicit_cast<TNode<IntPtrT>>(t1354)));
      USE(implicit_cast<TNode<BoolT>>(t1355));
      Branch(implicit_cast<TNode<BoolT>>(t1355), label__True_425, label__False_426);
      BIND(label__True_425);
            *t1351_833 = implicit_cast<TNode<Object>>(t1346());
      Goto(label__done_834_1650);
      BIND(label__False_426);
            *t1351_833 = implicit_cast<TNode<Object>>(t1347());
      Goto(label__done_834_1650);
      BIND(label__done_834_1650);
    }
    TVARIABLE(Object, offset_242_impl);
    auto offset_242 = &offset_242_impl;
    USE(offset_242);
    *offset_242 = implicit_cast<TNode<Object>>((*t1351_833).value());
    // ../../src/builtins/data-view.tq:519:5
    auto t1356 = [=]() {
      int31_t t1358 = 1;
      TNode<IntPtrT> t1359 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1358)));
      TNode<Object> t1360 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1359)));
      return implicit_cast<TNode<Object>>(t1360);
    };
    auto t1357 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1361_835_impl);
    auto t1361_835 = &t1361_835_impl;
    USE(t1361_835);
    {
      Label label__True_427_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_427 = &label__True_427_impl;
      USE(label__True_427);
      Label label__False_428_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_428 = &label__False_428_impl;
      USE(label__False_428);
      Label label__done_836_1651_impl(this, {t1361_835}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_836_1651 = &label__done_836_1651_impl;
      USE(label__done_836_1651);
      TNode<IntPtrT> t1362 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1363 = 1;
      TNode<IntPtrT> t1364 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1363)));
      TNode<BoolT> t1365 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1362), implicit_cast<TNode<IntPtrT>>(t1364)));
      USE(implicit_cast<TNode<BoolT>>(t1365));
      Branch(implicit_cast<TNode<BoolT>>(t1365), label__True_427, label__False_428);
      BIND(label__True_427);
            *t1361_835 = implicit_cast<TNode<Object>>(t1356());
      Goto(label__done_836_1651);
      BIND(label__False_428);
            *t1361_835 = implicit_cast<TNode<Object>>(t1357());
      Goto(label__done_836_1651);
      BIND(label__done_836_1651);
    }
    TVARIABLE(Object, isLittleEndian_243_impl);
    auto isLittleEndian_243 = &isLittleEndian_243_impl;
    USE(isLittleEndian_243);
    *isLittleEndian_243 = implicit_cast<TNode<Object>>((*t1361_835).value());
    // ../../src/builtins/data-view.tq:521:5
    TNode<Numeric> t1366 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_242).value()), implicit_cast<TNode<Object>>((*isLittleEndian_243).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1366));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1366));
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
  // ../../src/builtins/data-view.tq:526:65
  {
    // ../../src/builtins/data-view.tq:527:5
    auto t1367 = [=]() {
      int31_t t1369 = 0;
      TNode<IntPtrT> t1370 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1369)));
      TNode<Object> t1371 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1370)));
      return implicit_cast<TNode<Object>>(t1371);
    };
    auto t1368 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1372_837_impl);
    auto t1372_837 = &t1372_837_impl;
    USE(t1372_837);
    {
      Label label__True_429_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_429 = &label__True_429_impl;
      USE(label__True_429);
      Label label__False_430_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_430 = &label__False_430_impl;
      USE(label__False_430);
      Label label__done_838_1652_impl(this, {t1372_837}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_838_1652 = &label__done_838_1652_impl;
      USE(label__done_838_1652);
      TNode<IntPtrT> t1373 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1374 = 0;
      TNode<IntPtrT> t1375 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1374)));
      TNode<BoolT> t1376 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1373), implicit_cast<TNode<IntPtrT>>(t1375)));
      USE(implicit_cast<TNode<BoolT>>(t1376));
      Branch(implicit_cast<TNode<BoolT>>(t1376), label__True_429, label__False_430);
      BIND(label__True_429);
            *t1372_837 = implicit_cast<TNode<Object>>(t1367());
      Goto(label__done_838_1652);
      BIND(label__False_430);
            *t1372_837 = implicit_cast<TNode<Object>>(t1368());
      Goto(label__done_838_1652);
      BIND(label__done_838_1652);
    }
    TVARIABLE(Object, offset_244_impl);
    auto offset_244 = &offset_244_impl;
    USE(offset_244);
    *offset_244 = implicit_cast<TNode<Object>>((*t1372_837).value());
    // ../../src/builtins/data-view.tq:528:5
    auto t1377 = [=]() {
      int31_t t1379 = 1;
      TNode<IntPtrT> t1380 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1379)));
      TNode<Object> t1381 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1380)));
      return implicit_cast<TNode<Object>>(t1381);
    };
    auto t1378 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1382_839_impl);
    auto t1382_839 = &t1382_839_impl;
    USE(t1382_839);
    {
      Label label__True_431_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_431 = &label__True_431_impl;
      USE(label__True_431);
      Label label__False_432_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_432 = &label__False_432_impl;
      USE(label__False_432);
      Label label__done_840_1653_impl(this, {t1382_839}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_840_1653 = &label__done_840_1653_impl;
      USE(label__done_840_1653);
      TNode<IntPtrT> t1383 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1384 = 1;
      TNode<IntPtrT> t1385 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1384)));
      TNode<BoolT> t1386 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1383), implicit_cast<TNode<IntPtrT>>(t1385)));
      USE(implicit_cast<TNode<BoolT>>(t1386));
      Branch(implicit_cast<TNode<BoolT>>(t1386), label__True_431, label__False_432);
      BIND(label__True_431);
            *t1382_839 = implicit_cast<TNode<Object>>(t1377());
      Goto(label__done_840_1653);
      BIND(label__False_432);
            *t1382_839 = implicit_cast<TNode<Object>>(t1378());
      Goto(label__done_840_1653);
      BIND(label__done_840_1653);
    }
    TVARIABLE(Object, isLittleEndian_245_impl);
    auto isLittleEndian_245 = &isLittleEndian_245_impl;
    USE(isLittleEndian_245);
    *isLittleEndian_245 = implicit_cast<TNode<Object>>((*t1382_839).value());
    // ../../src/builtins/data-view.tq:530:5
    TNode<Numeric> t1387 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_244).value()), implicit_cast<TNode<Object>>((*isLittleEndian_245).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1387));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1387));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_1654_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1654 = &label_macro_end_1654_impl;
  USE(label_macro_end_1654);
  // ../../src/builtins/data-view.tq:541:79
  {
    // ../../src/builtins/data-view.tq:542:5
    TNode<RawPtrT> t1388 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    int31_t t1389 = 0xFF;
    TNode<Uint32T> t1390 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1389)));
    TNode<Uint32T> t1391 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1390)));
    USE(implicit_cast<TNode<Uint32T>>(t1391));
    StoreWord8(implicit_cast<TNode<RawPtrT>>(t1388), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>(t1391));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  Label label_macro_end_1655_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1655 = &label_macro_end_1655_impl;
  USE(label_macro_end_1655);
  // ../../src/builtins/data-view.tq:547:36
  {
    // ../../src/builtins/data-view.tq:548:5
    TNode<RawPtrT> t1392 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_246_impl);
    auto dataPointer_246 = &dataPointer_246_impl;
    USE(dataPointer_246);
    *dataPointer_246 = implicit_cast<TNode<RawPtrT>>(t1392);
    // ../../src/builtins/data-view.tq:550:5
    int31_t t1393 = 0xFF;
    TNode<Uint32T> t1394 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1393)));
    TNode<Uint32T> t1395 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1394)));
    USE(implicit_cast<TNode<Uint32T>>(t1395));
    TVARIABLE(Uint32T, b0_247_impl);
    auto b0_247 = &b0_247_impl;
    USE(b0_247);
    *b0_247 = implicit_cast<TNode<Uint32T>>(t1395);
    // ../../src/builtins/data-view.tq:551:5
    int31_t t1396 = 8;
    TNode<Uint32T> t1397 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1396)));
    TNode<Uint32T> t1398 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1397)));
    USE(implicit_cast<TNode<Uint32T>>(t1398));
    int31_t t1399 = 0xFF;
    TNode<Uint32T> t1400 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1399)));
    TNode<Uint32T> t1401 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1398), implicit_cast<TNode<Uint32T>>(t1400)));
    USE(implicit_cast<TNode<Uint32T>>(t1401));
    TVARIABLE(Uint32T, b1_248_impl);
    auto b1_248 = &b1_248_impl;
    USE(b1_248);
    *b1_248 = implicit_cast<TNode<Uint32T>>(t1401);
    // ../../src/builtins/data-view.tq:553:5
    {
      Label label__True_433_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_433 = &label__True_433_impl;
      USE(label__True_433);
      Label label__False_434_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_434 = &label__False_434_impl;
      USE(label__False_434);
      Label label_if_done_label_841_1656_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_841_1656 = &label_if_done_label_841_1656_impl;
      USE(label_if_done_label_841_1656);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_433, label__False_434);
      if (label__True_433->is_used())
      {
        BIND(label__True_433);
        // ../../src/builtins/data-view.tq:553:32
        {
          // ../../src/builtins/data-view.tq:554:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_246).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_247).value()));
          // ../../src/builtins/data-view.tq:555:7
          int31_t t1402 = 1;
          TNode<UintPtrT> t1403 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1402)));
          TNode<UintPtrT> t1404 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1403)));
          USE(implicit_cast<TNode<UintPtrT>>(t1404));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_246).value()), implicit_cast<TNode<UintPtrT>>(t1404), implicit_cast<TNode<Uint32T>>((*b1_248).value()));
        }
        Goto(label_if_done_label_841_1656);
      }
      if (label__False_434->is_used())
      {
        BIND(label__False_434);
        // ../../src/builtins/data-view.tq:556:12
        {
          // ../../src/builtins/data-view.tq:557:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_246).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b1_248).value()));
          // ../../src/builtins/data-view.tq:558:7
          int31_t t1405 = 1;
          TNode<UintPtrT> t1406 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1405)));
          TNode<UintPtrT> t1407 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1406)));
          USE(implicit_cast<TNode<UintPtrT>>(t1407));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_246).value()), implicit_cast<TNode<UintPtrT>>(t1407), implicit_cast<TNode<Uint32T>>((*b0_247).value()));
        }
        Goto(label_if_done_label_841_1656);
      }
      BIND(label_if_done_label_841_1656);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  Label label_macro_end_1657_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1657 = &label_macro_end_1657_impl;
  USE(label_macro_end_1657);
  // ../../src/builtins/data-view.tq:564:36
  {
    // ../../src/builtins/data-view.tq:565:5
    TNode<RawPtrT> t1408 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_249_impl);
    auto dataPointer_249 = &dataPointer_249_impl;
    USE(dataPointer_249);
    *dataPointer_249 = implicit_cast<TNode<RawPtrT>>(t1408);
    // ../../src/builtins/data-view.tq:567:5
    int31_t t1409 = 0xFF;
    TNode<Uint32T> t1410 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1409)));
    TNode<Uint32T> t1411 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1410)));
    USE(implicit_cast<TNode<Uint32T>>(t1411));
    TVARIABLE(Uint32T, b0_250_impl);
    auto b0_250 = &b0_250_impl;
    USE(b0_250);
    *b0_250 = implicit_cast<TNode<Uint32T>>(t1411);
    // ../../src/builtins/data-view.tq:568:5
    int31_t t1412 = 8;
    TNode<Uint32T> t1413 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1412)));
    TNode<Uint32T> t1414 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1413)));
    USE(implicit_cast<TNode<Uint32T>>(t1414));
    int31_t t1415 = 0xFF;
    TNode<Uint32T> t1416 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1415)));
    TNode<Uint32T> t1417 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1414), implicit_cast<TNode<Uint32T>>(t1416)));
    USE(implicit_cast<TNode<Uint32T>>(t1417));
    TVARIABLE(Uint32T, b1_251_impl);
    auto b1_251 = &b1_251_impl;
    USE(b1_251);
    *b1_251 = implicit_cast<TNode<Uint32T>>(t1417);
    // ../../src/builtins/data-view.tq:569:5
    int31_t t1418 = 16;
    TNode<Uint32T> t1419 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1418)));
    TNode<Uint32T> t1420 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1419)));
    USE(implicit_cast<TNode<Uint32T>>(t1420));
    int31_t t1421 = 0xFF;
    TNode<Uint32T> t1422 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1421)));
    TNode<Uint32T> t1423 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1420), implicit_cast<TNode<Uint32T>>(t1422)));
    USE(implicit_cast<TNode<Uint32T>>(t1423));
    TVARIABLE(Uint32T, b2_252_impl);
    auto b2_252 = &b2_252_impl;
    USE(b2_252);
    *b2_252 = implicit_cast<TNode<Uint32T>>(t1423);
    // ../../src/builtins/data-view.tq:570:5
    int31_t t1424 = 24;
    TNode<Uint32T> t1425 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1424)));
    TNode<Uint32T> t1426 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1425)));
    USE(implicit_cast<TNode<Uint32T>>(t1426));
    TVARIABLE(Uint32T, b3_253_impl);
    auto b3_253 = &b3_253_impl;
    USE(b3_253);
    *b3_253 = implicit_cast<TNode<Uint32T>>(t1426);
    // ../../src/builtins/data-view.tq:572:5
    {
      Label label__True_435_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_435 = &label__True_435_impl;
      USE(label__True_435);
      Label label__False_436_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_436 = &label__False_436_impl;
      USE(label__False_436);
      Label label_if_done_label_842_1658_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_842_1658 = &label_if_done_label_842_1658_impl;
      USE(label_if_done_label_842_1658);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_435, label__False_436);
      if (label__True_435->is_used())
      {
        BIND(label__True_435);
        // ../../src/builtins/data-view.tq:572:32
        {
          // ../../src/builtins/data-view.tq:573:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_250).value()));
          // ../../src/builtins/data-view.tq:574:7
          int31_t t1427 = 1;
          TNode<UintPtrT> t1428 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1427)));
          TNode<UintPtrT> t1429 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1428)));
          USE(implicit_cast<TNode<UintPtrT>>(t1429));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1429), implicit_cast<TNode<Uint32T>>((*b1_251).value()));
          // ../../src/builtins/data-view.tq:575:7
          int31_t t1430 = 2;
          TNode<UintPtrT> t1431 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1430)));
          TNode<UintPtrT> t1432 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1431)));
          USE(implicit_cast<TNode<UintPtrT>>(t1432));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1432), implicit_cast<TNode<Uint32T>>((*b2_252).value()));
          // ../../src/builtins/data-view.tq:576:7
          int31_t t1433 = 3;
          TNode<UintPtrT> t1434 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1433)));
          TNode<UintPtrT> t1435 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1434)));
          USE(implicit_cast<TNode<UintPtrT>>(t1435));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1435), implicit_cast<TNode<Uint32T>>((*b3_253).value()));
        }
        Goto(label_if_done_label_842_1658);
      }
      if (label__False_436->is_used())
      {
        BIND(label__False_436);
        // ../../src/builtins/data-view.tq:577:12
        {
          // ../../src/builtins/data-view.tq:578:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b3_253).value()));
          // ../../src/builtins/data-view.tq:579:7
          int31_t t1436 = 1;
          TNode<UintPtrT> t1437 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1436)));
          TNode<UintPtrT> t1438 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1437)));
          USE(implicit_cast<TNode<UintPtrT>>(t1438));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1438), implicit_cast<TNode<Uint32T>>((*b2_252).value()));
          // ../../src/builtins/data-view.tq:580:7
          int31_t t1439 = 2;
          TNode<UintPtrT> t1440 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1439)));
          TNode<UintPtrT> t1441 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1440)));
          USE(implicit_cast<TNode<UintPtrT>>(t1441));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1441), implicit_cast<TNode<Uint32T>>((*b1_251).value()));
          // ../../src/builtins/data-view.tq:581:7
          int31_t t1442 = 3;
          TNode<UintPtrT> t1443 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1442)));
          TNode<UintPtrT> t1444 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1443)));
          USE(implicit_cast<TNode<UintPtrT>>(t1444));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_249).value()), implicit_cast<TNode<UintPtrT>>(t1444), implicit_cast<TNode<Uint32T>>((*b0_250).value()));
        }
        Goto(label_if_done_label_842_1658);
      }
      BIND(label_if_done_label_842_1658);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian) {
  Label label_macro_end_1659_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1659 = &label_macro_end_1659_impl;
  USE(label_macro_end_1659);
  // ../../src/builtins/data-view.tq:587:36
  {
    // ../../src/builtins/data-view.tq:588:5
    TNode<RawPtrT> t1445 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, dataPointer_254_impl);
    auto dataPointer_254 = &dataPointer_254_impl;
    USE(dataPointer_254);
    *dataPointer_254 = implicit_cast<TNode<RawPtrT>>(t1445);
    // ../../src/builtins/data-view.tq:590:5
    int31_t t1446 = 0xFF;
    TNode<Uint32T> t1447 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1446)));
    TNode<Uint32T> t1448 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1447)));
    USE(implicit_cast<TNode<Uint32T>>(t1448));
    TVARIABLE(Uint32T, b0_255_impl);
    auto b0_255 = &b0_255_impl;
    USE(b0_255);
    *b0_255 = implicit_cast<TNode<Uint32T>>(t1448);
    // ../../src/builtins/data-view.tq:591:5
    int31_t t1449 = 8;
    TNode<Uint32T> t1450 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1449)));
    TNode<Uint32T> t1451 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1450)));
    USE(implicit_cast<TNode<Uint32T>>(t1451));
    int31_t t1452 = 0xFF;
    TNode<Uint32T> t1453 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1452)));
    TNode<Uint32T> t1454 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1451), implicit_cast<TNode<Uint32T>>(t1453)));
    USE(implicit_cast<TNode<Uint32T>>(t1454));
    TVARIABLE(Uint32T, b1_256_impl);
    auto b1_256 = &b1_256_impl;
    USE(b1_256);
    *b1_256 = implicit_cast<TNode<Uint32T>>(t1454);
    // ../../src/builtins/data-view.tq:592:5
    int31_t t1455 = 16;
    TNode<Uint32T> t1456 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1455)));
    TNode<Uint32T> t1457 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1456)));
    USE(implicit_cast<TNode<Uint32T>>(t1457));
    int31_t t1458 = 0xFF;
    TNode<Uint32T> t1459 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1458)));
    TNode<Uint32T> t1460 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1457), implicit_cast<TNode<Uint32T>>(t1459)));
    USE(implicit_cast<TNode<Uint32T>>(t1460));
    TVARIABLE(Uint32T, b2_257_impl);
    auto b2_257 = &b2_257_impl;
    USE(b2_257);
    *b2_257 = implicit_cast<TNode<Uint32T>>(t1460);
    // ../../src/builtins/data-view.tq:593:5
    int31_t t1461 = 24;
    TNode<Uint32T> t1462 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1461)));
    TNode<Uint32T> t1463 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_lowWord), implicit_cast<TNode<Uint32T>>(t1462)));
    USE(implicit_cast<TNode<Uint32T>>(t1463));
    TVARIABLE(Uint32T, b3_258_impl);
    auto b3_258 = &b3_258_impl;
    USE(b3_258);
    *b3_258 = implicit_cast<TNode<Uint32T>>(t1463);
    // ../../src/builtins/data-view.tq:595:5
    int31_t t1464 = 0xFF;
    TNode<Uint32T> t1465 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1464)));
    TNode<Uint32T> t1466 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1465)));
    USE(implicit_cast<TNode<Uint32T>>(t1466));
    TVARIABLE(Uint32T, b4_259_impl);
    auto b4_259 = &b4_259_impl;
    USE(b4_259);
    *b4_259 = implicit_cast<TNode<Uint32T>>(t1466);
    // ../../src/builtins/data-view.tq:596:5
    int31_t t1467 = 8;
    TNode<Uint32T> t1468 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1467)));
    TNode<Uint32T> t1469 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1468)));
    USE(implicit_cast<TNode<Uint32T>>(t1469));
    int31_t t1470 = 0xFF;
    TNode<Uint32T> t1471 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1470)));
    TNode<Uint32T> t1472 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1469), implicit_cast<TNode<Uint32T>>(t1471)));
    USE(implicit_cast<TNode<Uint32T>>(t1472));
    TVARIABLE(Uint32T, b5_260_impl);
    auto b5_260 = &b5_260_impl;
    USE(b5_260);
    *b5_260 = implicit_cast<TNode<Uint32T>>(t1472);
    // ../../src/builtins/data-view.tq:597:5
    int31_t t1473 = 16;
    TNode<Uint32T> t1474 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1473)));
    TNode<Uint32T> t1475 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1474)));
    USE(implicit_cast<TNode<Uint32T>>(t1475));
    int31_t t1476 = 0xFF;
    TNode<Uint32T> t1477 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1476)));
    TNode<Uint32T> t1478 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1475), implicit_cast<TNode<Uint32T>>(t1477)));
    USE(implicit_cast<TNode<Uint32T>>(t1478));
    TVARIABLE(Uint32T, b6_261_impl);
    auto b6_261 = &b6_261_impl;
    USE(b6_261);
    *b6_261 = implicit_cast<TNode<Uint32T>>(t1478);
    // ../../src/builtins/data-view.tq:598:5
    int31_t t1479 = 24;
    TNode<Uint32T> t1480 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1479)));
    TNode<Uint32T> t1481 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_highWord), implicit_cast<TNode<Uint32T>>(t1480)));
    USE(implicit_cast<TNode<Uint32T>>(t1481));
    TVARIABLE(Uint32T, b7_262_impl);
    auto b7_262 = &b7_262_impl;
    USE(b7_262);
    *b7_262 = implicit_cast<TNode<Uint32T>>(t1481);
    // ../../src/builtins/data-view.tq:600:5
    {
      Label label__True_437_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_437 = &label__True_437_impl;
      USE(label__True_437);
      Label label__False_438_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_438 = &label__False_438_impl;
      USE(label__False_438);
      Label label_if_done_label_843_1660_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_if_done_label_843_1660 = &label_if_done_label_843_1660_impl;
      USE(label_if_done_label_843_1660);
      Branch(implicit_cast<TNode<BoolT>>(p_requestedLittleEndian), label__True_437, label__False_438);
      if (label__True_437->is_used())
      {
        BIND(label__True_437);
        // ../../src/builtins/data-view.tq:600:32
        {
          // ../../src/builtins/data-view.tq:601:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_255).value()));
          // ../../src/builtins/data-view.tq:602:7
          int31_t t1482 = 1;
          TNode<UintPtrT> t1483 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1482)));
          TNode<UintPtrT> t1484 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1483)));
          USE(implicit_cast<TNode<UintPtrT>>(t1484));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1484), implicit_cast<TNode<Uint32T>>((*b1_256).value()));
          // ../../src/builtins/data-view.tq:603:7
          int31_t t1485 = 2;
          TNode<UintPtrT> t1486 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1485)));
          TNode<UintPtrT> t1487 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1486)));
          USE(implicit_cast<TNode<UintPtrT>>(t1487));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1487), implicit_cast<TNode<Uint32T>>((*b2_257).value()));
          // ../../src/builtins/data-view.tq:604:7
          int31_t t1488 = 3;
          TNode<UintPtrT> t1489 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1488)));
          TNode<UintPtrT> t1490 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1489)));
          USE(implicit_cast<TNode<UintPtrT>>(t1490));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1490), implicit_cast<TNode<Uint32T>>((*b3_258).value()));
          // ../../src/builtins/data-view.tq:605:7
          int31_t t1491 = 4;
          TNode<UintPtrT> t1492 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1491)));
          TNode<UintPtrT> t1493 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1492)));
          USE(implicit_cast<TNode<UintPtrT>>(t1493));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1493), implicit_cast<TNode<Uint32T>>((*b4_259).value()));
          // ../../src/builtins/data-view.tq:606:7
          int31_t t1494 = 5;
          TNode<UintPtrT> t1495 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1494)));
          TNode<UintPtrT> t1496 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1495)));
          USE(implicit_cast<TNode<UintPtrT>>(t1496));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1496), implicit_cast<TNode<Uint32T>>((*b5_260).value()));
          // ../../src/builtins/data-view.tq:607:7
          int31_t t1497 = 6;
          TNode<UintPtrT> t1498 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1497)));
          TNode<UintPtrT> t1499 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1498)));
          USE(implicit_cast<TNode<UintPtrT>>(t1499));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1499), implicit_cast<TNode<Uint32T>>((*b6_261).value()));
          // ../../src/builtins/data-view.tq:608:7
          int31_t t1500 = 7;
          TNode<UintPtrT> t1501 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1500)));
          TNode<UintPtrT> t1502 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1501)));
          USE(implicit_cast<TNode<UintPtrT>>(t1502));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1502), implicit_cast<TNode<Uint32T>>((*b7_262).value()));
        }
        Goto(label_if_done_label_843_1660);
      }
      if (label__False_438->is_used())
      {
        BIND(label__False_438);
        // ../../src/builtins/data-view.tq:609:12
        {
          // ../../src/builtins/data-view.tq:610:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b7_262).value()));
          // ../../src/builtins/data-view.tq:611:7
          int31_t t1503 = 1;
          TNode<UintPtrT> t1504 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1503)));
          TNode<UintPtrT> t1505 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1504)));
          USE(implicit_cast<TNode<UintPtrT>>(t1505));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1505), implicit_cast<TNode<Uint32T>>((*b6_261).value()));
          // ../../src/builtins/data-view.tq:612:7
          int31_t t1506 = 2;
          TNode<UintPtrT> t1507 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1506)));
          TNode<UintPtrT> t1508 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1507)));
          USE(implicit_cast<TNode<UintPtrT>>(t1508));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1508), implicit_cast<TNode<Uint32T>>((*b5_260).value()));
          // ../../src/builtins/data-view.tq:613:7
          int31_t t1509 = 3;
          TNode<UintPtrT> t1510 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1509)));
          TNode<UintPtrT> t1511 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1510)));
          USE(implicit_cast<TNode<UintPtrT>>(t1511));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1511), implicit_cast<TNode<Uint32T>>((*b4_259).value()));
          // ../../src/builtins/data-view.tq:614:7
          int31_t t1512 = 4;
          TNode<UintPtrT> t1513 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1512)));
          TNode<UintPtrT> t1514 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1513)));
          USE(implicit_cast<TNode<UintPtrT>>(t1514));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1514), implicit_cast<TNode<Uint32T>>((*b3_258).value()));
          // ../../src/builtins/data-view.tq:615:7
          int31_t t1515 = 5;
          TNode<UintPtrT> t1516 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1515)));
          TNode<UintPtrT> t1517 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1516)));
          USE(implicit_cast<TNode<UintPtrT>>(t1517));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1517), implicit_cast<TNode<Uint32T>>((*b2_257).value()));
          // ../../src/builtins/data-view.tq:616:7
          int31_t t1518 = 6;
          TNode<UintPtrT> t1519 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1518)));
          TNode<UintPtrT> t1520 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1519)));
          USE(implicit_cast<TNode<UintPtrT>>(t1520));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1520), implicit_cast<TNode<Uint32T>>((*b1_256).value()));
          // ../../src/builtins/data-view.tq:617:7
          int31_t t1521 = 7;
          TNode<UintPtrT> t1522 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1521)));
          TNode<UintPtrT> t1523 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<UintPtrT>>(t1522)));
          USE(implicit_cast<TNode<UintPtrT>>(t1523));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*dataPointer_254).value()), implicit_cast<TNode<UintPtrT>>(t1523), implicit_cast<TNode<Uint32T>>((*b0_255).value()));
        }
        Goto(label_if_done_label_843_1660);
      }
      BIND(label_if_done_label_843_1660);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian) {
  Label label_macro_end_1661_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1661 = &label_macro_end_1661_impl;
  USE(label_macro_end_1661);
  // ../../src/builtins/data-view.tq:630:36
  {
    // ../../src/builtins/data-view.tq:631:5
    TNode<UintPtrT> t1524 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(implicit_cast<TNode<BigInt>>(p_bigIntValue)));
    USE(implicit_cast<TNode<UintPtrT>>(t1524));
    TVARIABLE(UintPtrT, length_263_impl);
    auto length_263 = &length_263_impl;
    USE(length_263);
    *length_263 = implicit_cast<TNode<UintPtrT>>(t1524);
    // ../../src/builtins/data-view.tq:632:5
    TNode<UintPtrT> t1525 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(implicit_cast<TNode<BigInt>>(p_bigIntValue)));
    USE(implicit_cast<TNode<UintPtrT>>(t1525));
    TVARIABLE(UintPtrT, sign_264_impl);
    auto sign_264 = &sign_264_impl;
    USE(sign_264);
    *sign_264 = implicit_cast<TNode<UintPtrT>>(t1525);
    // ../../src/builtins/data-view.tq:636:5
    int31_t t1526 = 0;
    TVARIABLE(Uint32T, lowWord_265_impl);
    auto lowWord_265 = &lowWord_265_impl;
    USE(lowWord_265);
    TNode<Uint32T> t1527 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1526)));
    *lowWord_265 = implicit_cast<TNode<Uint32T>>(t1527);
    // ../../src/builtins/data-view.tq:637:5
    int31_t t1528 = 0;
    TVARIABLE(Uint32T, highWord_266_impl);
    auto highWord_266 = &highWord_266_impl;
    USE(highWord_266);
    TNode<Uint32T> t1529 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1528)));
    *highWord_266 = implicit_cast<TNode<Uint32T>>(t1529);
    // ../../src/builtins/data-view.tq:640:5
    {
      Label label__True_439_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_439 = &label__True_439_impl;
      USE(label__True_439);
      Label label__False_440_impl(this, {highWord_266, lowWord_265}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_440 = &label__False_440_impl;
      USE(label__False_440);
      int31_t t1530 = 0;
      TNode<UintPtrT> t1531 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1530)));
      TNode<BoolT> t1532 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*length_263).value()), implicit_cast<TNode<UintPtrT>>(t1531)));
      USE(implicit_cast<TNode<BoolT>>(t1532));
      Branch(implicit_cast<TNode<BoolT>>(t1532), label__True_439, label__False_440);
      if (label__True_439->is_used())
      {
        BIND(label__True_439);
        // ../../src/builtins/data-view.tq:640:22
        {
          // ../../src/builtins/data-view.tq:641:7
          {
            bool t1533 = Is64();
            USE(implicit_cast<bool>(t1533));
            if ((implicit_cast<bool>(t1533))) {
              // ../../src/builtins/data-view.tq:641:29
              {
                // ../../src/builtins/data-view.tq:643:9
                int31_t t1534 = 0;
                TNode<UintPtrT> t1535 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigIntValue), implicit_cast<int31_t>(t1534)));
                USE(implicit_cast<TNode<UintPtrT>>(t1535));
                TVARIABLE(UintPtrT, value_267_impl);
                auto value_267 = &value_267_impl;
                USE(value_267);
                *value_267 = implicit_cast<TNode<UintPtrT>>(t1535);
                // ../../src/builtins/data-view.tq:644:9
                TNode<Uint32T> t1536 = UncheckedCast<Uint32T>(Convert8ATuint32(implicit_cast<TNode<UintPtrT>>((*value_267).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1536));
                *lowWord_265 = implicit_cast<TNode<Uint32T>>(t1536);
                // ../../src/builtins/data-view.tq:645:9
                int31_t t1537 = 32;
                TNode<UintPtrT> t1538 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1537)));
                TNode<UintPtrT> t1539 = UncheckedCast<UintPtrT>(WordShr(implicit_cast<TNode<UintPtrT>>((*value_267).value()), implicit_cast<TNode<UintPtrT>>(t1538)));
                USE(implicit_cast<TNode<UintPtrT>>(t1539));
                TNode<Uint32T> t1540 = UncheckedCast<Uint32T>(Convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1539)));
                USE(implicit_cast<TNode<Uint32T>>(t1540));
                *highWord_266 = implicit_cast<TNode<Uint32T>>(t1540);
              }
            } else {
              // ../../src/builtins/data-view.tq:646:14
              {
                // ../../src/builtins/data-view.tq:647:9
                int31_t t1541 = 0;
                TNode<UintPtrT> t1542 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigIntValue), implicit_cast<int31_t>(t1541)));
                USE(implicit_cast<TNode<UintPtrT>>(t1542));
                TNode<Uint32T> t1543 = UncheckedCast<Uint32T>(Convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1542)));
                USE(implicit_cast<TNode<Uint32T>>(t1543));
                *lowWord_265 = implicit_cast<TNode<Uint32T>>(t1543);
                // ../../src/builtins/data-view.tq:648:9
                {
                  Label label__True_443_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__True_443 = &label__True_443_impl;
                  USE(label__True_443);
                  Label label__False_444_impl(this, {highWord_266}, compiler::CodeAssemblerLabel::kNonDeferred);
                  Label* label__False_444 = &label__False_444_impl;
                  USE(label__False_444);
                  int31_t t1544 = 2;
                  TNode<UintPtrT> t1545 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1544)));
                  TNode<BoolT> t1546 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual(implicit_cast<TNode<UintPtrT>>((*length_263).value()), implicit_cast<TNode<UintPtrT>>(t1545)));
                  USE(implicit_cast<TNode<BoolT>>(t1546));
                  Branch(implicit_cast<TNode<BoolT>>(t1546), label__True_443, label__False_444);
                  if (label__True_443->is_used())
                  {
                    BIND(label__True_443);
                    // ../../src/builtins/data-view.tq:648:26
                    {
                      // ../../src/builtins/data-view.tq:649:11
                      int31_t t1547 = 1;
                      TNode<UintPtrT> t1548 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigIntValue), implicit_cast<int31_t>(t1547)));
                      USE(implicit_cast<TNode<UintPtrT>>(t1548));
                      TNode<Uint32T> t1549 = UncheckedCast<Uint32T>(Convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1548)));
                      USE(implicit_cast<TNode<Uint32T>>(t1549));
                      *highWord_266 = implicit_cast<TNode<Uint32T>>(t1549);
                    }
                    Goto(label__False_444);
                  }
                  BIND(label__False_444);
                }
              }
            }
          }
        }
        Goto(label__False_440);
      }
      BIND(label__False_440);
    }
    // ../../src/builtins/data-view.tq:654:5
    {
      Label label__True_445_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_445 = &label__True_445_impl;
      USE(label__True_445);
      Label label__False_446_impl(this, {highWord_266, lowWord_265}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_446 = &label__False_446_impl;
      USE(label__False_446);
      int31_t t1550 = 0;
      TNode<UintPtrT> t1551 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(implicit_cast<int31_t>(t1550)));
      TNode<BoolT> t1552 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*sign_264).value()), implicit_cast<TNode<UintPtrT>>(t1551)));
      USE(implicit_cast<TNode<BoolT>>(t1552));
      Branch(implicit_cast<TNode<BoolT>>(t1552), label__True_445, label__False_446);
      if (label__True_445->is_used())
      {
        BIND(label__True_445);
        // ../../src/builtins/data-view.tq:654:20
        {
          // ../../src/builtins/data-view.tq:655:7
          int31_t t1553 = 0;
          TNode<Int32T> t1554 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*highWord_266).value())));
          USE(implicit_cast<TNode<Int32T>>(t1554));
          TNode<Int32T> t1555 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1553)));
          TNode<Int32T> t1556 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1555), implicit_cast<TNode<Int32T>>(t1554)));
          USE(implicit_cast<TNode<Int32T>>(t1556));
          TNode<Uint32T> t1557 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1556)));
          USE(implicit_cast<TNode<Uint32T>>(t1557));
          *highWord_266 = implicit_cast<TNode<Uint32T>>(t1557);
          // ../../src/builtins/data-view.tq:656:7
          {
            Label label__True_447_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__True_447 = &label__True_447_impl;
            USE(label__True_447);
            Label label__False_448_impl(this, {highWord_266}, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_448 = &label__False_448_impl;
            USE(label__False_448);
            int31_t t1558 = 0;
            TNode<Uint32T> t1559 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(implicit_cast<int31_t>(t1558)));
            TNode<BoolT> t1560 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>((*lowWord_265).value()), implicit_cast<TNode<Uint32T>>(t1559)));
            USE(implicit_cast<TNode<BoolT>>(t1560));
            Branch(implicit_cast<TNode<BoolT>>(t1560), label__True_447, label__False_448);
            if (label__True_447->is_used())
            {
              BIND(label__True_447);
              // ../../src/builtins/data-view.tq:656:25
              {
                // ../../src/builtins/data-view.tq:657:9
                TNode<Int32T> t1561 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*highWord_266).value())));
                USE(implicit_cast<TNode<Int32T>>(t1561));
                int31_t t1562 = 1;
                TNode<Int32T> t1563 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1562)));
                TNode<Int32T> t1564 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1561), implicit_cast<TNode<Int32T>>(t1563)));
                USE(implicit_cast<TNode<Int32T>>(t1564));
                TNode<Uint32T> t1565 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1564)));
                USE(implicit_cast<TNode<Uint32T>>(t1565));
                *highWord_266 = implicit_cast<TNode<Uint32T>>(t1565);
              }
              Goto(label__False_448);
            }
            BIND(label__False_448);
          }
          // ../../src/builtins/data-view.tq:659:7
          int31_t t1566 = 0;
          TNode<Int32T> t1567 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*lowWord_265).value())));
          USE(implicit_cast<TNode<Int32T>>(t1567));
          TNode<Int32T> t1568 = UncheckedCast<Int32T>(FromConstexpr7ATint32(implicit_cast<int31_t>(t1566)));
          TNode<Int32T> t1569 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1568), implicit_cast<TNode<Int32T>>(t1567)));
          USE(implicit_cast<TNode<Int32T>>(t1569));
          TNode<Uint32T> t1570 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1569)));
          USE(implicit_cast<TNode<Uint32T>>(t1570));
          *lowWord_265 = implicit_cast<TNode<Uint32T>>(t1570);
        }
        Goto(label__False_446);
      }
      BIND(label__False_446);
    }
    // ../../src/builtins/data-view.tq:662:5
    StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>(p_buffer), implicit_cast<TNode<UintPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*lowWord_265).value()), implicit_cast<TNode<Uint32T>>((*highWord_266).value()), implicit_cast<TNode<BoolT>>(p_requestedLittleEndian));
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_268_impl);
  auto _return_268 = &_return_268_impl;
  USE(_return_268);
  Label label_macro_end_1662_impl(this, {_return_268}, compiler::CodeAssemblerLabel::kNonDeferred);
  Label* label_macro_end_1662 = &label_macro_end_1662_impl;
  USE(label_macro_end_1662);
  // ../../src/builtins/data-view.tq:667:76
  {
    // ../../src/builtins/data-view.tq:668:5
    TNode<String> t1571 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1571));
    TNode<JSDataView> t1572 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1571)));
    USE(implicit_cast<TNode<JSDataView>>(t1572));
    TVARIABLE(JSDataView, dataView_269_impl);
    auto dataView_269 = &dataView_269_impl;
    USE(dataView_269);
    *dataView_269 = implicit_cast<TNode<JSDataView>>(t1572);
    // ../../src/builtins/data-view.tq:671:5
    TVARIABLE(Number, getIndex_270_impl);
    auto getIndex_270 = &getIndex_270_impl;
    USE(getIndex_270);
    // ../../src/builtins/data-view.tq:672:5
    {
      Label label_try_done_844_1663_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_done_844_1663 = &label_try_done_844_1663_impl;
      USE(label_try_done_844_1663);
      Label label_RangeError_449_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_RangeError_449 = &label_RangeError_449_impl;
      USE(label_RangeError_449);
      Label label_try_begin_845_1664_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label_try_begin_845_1664 = &label_try_begin_845_1664_impl;
      USE(label_try_begin_845_1664);
      Goto(label_try_begin_845_1664);
      if (label_try_begin_845_1664->is_used())
      {
        BIND(label_try_begin_845_1664);
        // ../../src/builtins/data-view.tq:672:9
        {
          // ../../src/builtins/data-view.tq:673:7
          TNode<Number> t1573 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_449));
          USE(implicit_cast<TNode<Number>>(t1573));
          *getIndex_270 = implicit_cast<TNode<Number>>(t1573);
        }
        Goto(label_try_done_844_1663);
      }
      if (label_RangeError_449->is_used())
      {
        BIND(label_RangeError_449);
        // ../../src/builtins/data-view.tq:675:22
        {
          // ../../src/builtins/data-view.tq:676:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_844_1663);
    }
    // ../../src/builtins/data-view.tq:679:5
    TNode<BoolT> t1574 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requestedLittleEndian)));
    USE(implicit_cast<TNode<BoolT>>(t1574));
    TVARIABLE(BoolT, littleEndian_271_impl);
    auto littleEndian_271 = &littleEndian_271_impl;
    USE(littleEndian_271);
    *littleEndian_271 = implicit_cast<TNode<BoolT>>(t1574);
    // ../../src/builtins/data-view.tq:680:5
    TNode<JSArrayBuffer> t1575 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*dataView_269).value())));
    TVARIABLE(JSArrayBuffer, buffer_272_impl);
    auto buffer_272 = &buffer_272_impl;
    USE(buffer_272);
    *buffer_272 = implicit_cast<TNode<JSArrayBuffer>>(t1575);
    // ../../src/builtins/data-view.tq:682:5
    TVARIABLE(BigInt, bigIntValue_273_impl);
    auto bigIntValue_273 = &bigIntValue_273_impl;
    USE(bigIntValue_273);
    // ../../src/builtins/data-view.tq:683:5
    TVARIABLE(Number, numValue_274_impl);
    auto numValue_274 = &numValue_274_impl;
    USE(numValue_274);
    // ../../src/builtins/data-view.tq:686:5
    {
      Label label__False_452_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_452 = &label__False_452_impl;
      USE(label__False_452);
      bool t1576 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1576));
      bool t1577 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1577));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1576) || implicit_cast<bool>(t1577))))) {
        // ../../src/builtins/data-view.tq:686:76
        {
          // ../../src/builtins/data-view.tq:687:7
          TNode<BigInt> t1578 = UncheckedCast<BigInt>(ToBigInt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<BigInt>>(t1578));
          *bigIntValue_273 = implicit_cast<TNode<BigInt>>(t1578);
        }
      } else {
        // ../../src/builtins/data-view.tq:688:12
        {
          // ../../src/builtins/data-view.tq:689:7
          TNode<Number> t1579 = UncheckedCast<Number>(ToNumber(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<Number>>(t1579));
          *numValue_274 = implicit_cast<TNode<Number>>(t1579);
        }
      }
    }
    // ../../src/builtins/data-view.tq:692:5
    {
      Label label__True_453_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_453 = &label__True_453_impl;
      USE(label__True_453);
      Label label__False_454_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_454 = &label__False_454_impl;
      USE(label__False_454);
      TNode<BoolT> t1580 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value())));
      USE(implicit_cast<TNode<BoolT>>(t1580));
      Branch(implicit_cast<TNode<BoolT>>(t1580), label__True_453, label__False_454);
      if (label__True_453->is_used())
      {
        BIND(label__True_453);
        // ../../src/builtins/data-view.tq:692:35
        {
          // ../../src/builtins/data-view.tq:693:7
          TNode<String> t1581 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1581));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1581));
        }
      }
      BIND(label__False_454);
    }
    // ../../src/builtins/data-view.tq:697:5
    TNode<Float64T> t1582 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_270).value())));
    USE(implicit_cast<TNode<Float64T>>(t1582));
    TVARIABLE(Float64T, getIndexFloat_275_impl);
    auto getIndexFloat_275 = &getIndexFloat_275_impl;
    USE(getIndexFloat_275);
    *getIndexFloat_275 = implicit_cast<TNode<Float64T>>(t1582);
    // ../../src/builtins/data-view.tq:698:5
    TNode<UintPtrT> t1583 = UncheckedCast<UintPtrT>(Convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_275).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1583));
    TVARIABLE(UintPtrT, getIndexWord_276_impl);
    auto getIndexWord_276 = &getIndexWord_276_impl;
    USE(getIndexWord_276);
    *getIndexWord_276 = implicit_cast<TNode<UintPtrT>>(t1583);
    // ../../src/builtins/data-view.tq:700:5
    TNode<UintPtrT> t1584 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(implicit_cast<TNode<JSArrayBufferView>>((*dataView_269).value())));
    TVARIABLE(UintPtrT, viewOffsetWord_277_impl);
    auto viewOffsetWord_277 = &viewOffsetWord_277_impl;
    USE(viewOffsetWord_277);
    *viewOffsetWord_277 = implicit_cast<TNode<UintPtrT>>(t1584);
    // ../../src/builtins/data-view.tq:701:5
    TNode<UintPtrT> t1585 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(implicit_cast<TNode<JSArrayBufferView>>((*dataView_269).value())));
    TNode<Float64T> t1586 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<TNode<UintPtrT>>(t1585)));
    USE(implicit_cast<TNode<Float64T>>(t1586));
    TVARIABLE(Float64T, viewSizeFloat_278_impl);
    auto viewSizeFloat_278 = &viewSizeFloat_278_impl;
    USE(viewSizeFloat_278);
    *viewSizeFloat_278 = implicit_cast<TNode<Float64T>>(t1586);
    // ../../src/builtins/data-view.tq:702:5
    int31_t t1587 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1587));
    TNode<Float64T> t1588 = UncheckedCast<Float64T>(Convert9ATfloat64(implicit_cast<int31_t>(t1587)));
    USE(implicit_cast<TNode<Float64T>>(t1588));
    TVARIABLE(Float64T, elementSizeFloat_279_impl);
    auto elementSizeFloat_279 = &elementSizeFloat_279_impl;
    USE(elementSizeFloat_279);
    *elementSizeFloat_279 = implicit_cast<TNode<Float64T>>(t1588);
    // ../../src/builtins/data-view.tq:704:5
    {
      Label label__True_455_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_455 = &label__True_455_impl;
      USE(label__True_455);
      Label label__False_456_impl(this, {}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_456 = &label__False_456_impl;
      USE(label__False_456);
      TNode<Float64T> t1589 = UncheckedCast<Float64T>(Float64Add(implicit_cast<TNode<Float64T>>((*getIndexFloat_275).value()), implicit_cast<TNode<Float64T>>((*elementSizeFloat_279).value())));
      USE(implicit_cast<TNode<Float64T>>(t1589));
      TNode<BoolT> t1590 = UncheckedCast<BoolT>(Float64GreaterThan(implicit_cast<TNode<Float64T>>(t1589), implicit_cast<TNode<Float64T>>((*viewSizeFloat_278).value())));
      USE(implicit_cast<TNode<BoolT>>(t1590));
      Branch(implicit_cast<TNode<BoolT>>(t1590), label__True_455, label__False_456);
      if (label__True_455->is_used())
      {
        BIND(label__True_455);
        // ../../src/builtins/data-view.tq:704:59
        {
          // ../../src/builtins/data-view.tq:705:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_456);
    }
    // ../../src/builtins/data-view.tq:708:5
    TNode<UintPtrT> t1591 = UncheckedCast<UintPtrT>(UintPtrAdd(implicit_cast<TNode<UintPtrT>>((*getIndexWord_276).value()), implicit_cast<TNode<UintPtrT>>((*viewOffsetWord_277).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1591));
    TVARIABLE(UintPtrT, bufferIndex_280_impl);
    auto bufferIndex_280 = &bufferIndex_280_impl;
    USE(bufferIndex_280);
    *bufferIndex_280 = implicit_cast<TNode<UintPtrT>>(t1591);
    // ../../src/builtins/data-view.tq:710:5
    {
      Label label__False_459_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_459 = &label__False_459_impl;
      USE(label__False_459);
      bool t1592 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1592));
      bool t1593 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1593));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1592) || implicit_cast<bool>(t1593))))) {
        // ../../src/builtins/data-view.tq:710:76
        {
          // ../../src/builtins/data-view.tq:711:7
          StoreDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<BigInt>>((*bigIntValue_273).value()), implicit_cast<TNode<BoolT>>((*littleEndian_271).value()));
        }
      } else {
        // ../../src/builtins/data-view.tq:712:12
        {
          // ../../src/builtins/data-view.tq:713:7
          TNode<Float64T> t1594 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>((*numValue_274).value())));
          USE(implicit_cast<TNode<Float64T>>(t1594));
          TVARIABLE(Float64T, doubleValue_281_impl);
          auto doubleValue_281 = &doubleValue_281_impl;
          USE(doubleValue_281);
          *doubleValue_281 = implicit_cast<TNode<Float64T>>(t1594);
          // ../../src/builtins/data-view.tq:715:7
          {
            Label label__False_462_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
            Label* label__False_462 = &label__False_462_impl;
            USE(label__False_462);
            bool t1595 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
            USE(implicit_cast<bool>(t1595));
            bool t1596 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
            USE(implicit_cast<bool>(t1596));
            if ((implicit_cast<bool>((implicit_cast<bool>(t1595) || implicit_cast<bool>(t1596))))) {
              // ../../src/builtins/data-view.tq:715:70
              {
                // ../../src/builtins/data-view.tq:716:9
                TNode<Uint32T> t1597 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1597));
                StoreDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<Uint32T>>(t1597));
              }
            } else {
              // ../../src/builtins/data-view.tq:718:14
              {
                Label label__False_465_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                Label* label__False_465 = &label__False_465_impl;
                USE(label__False_465);
                bool t1598 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
                USE(implicit_cast<bool>(t1598));
                bool t1599 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                USE(implicit_cast<bool>(t1599));
                if ((implicit_cast<bool>((implicit_cast<bool>(t1598) || implicit_cast<bool>(t1599))))) {
                  // ../../src/builtins/data-view.tq:718:79
                  {
                    // ../../src/builtins/data-view.tq:719:9
                    TNode<Uint32T> t1600 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                    USE(implicit_cast<TNode<Uint32T>>(t1600));
                    StoreDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<Uint32T>>(t1600), implicit_cast<TNode<BoolT>>((*littleEndian_271).value()));
                  }
                } else {
                  // ../../src/builtins/data-view.tq:722:14
                  {
                    Label label__False_468_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
                    Label* label__False_468 = &label__False_468_impl;
                    USE(label__False_468);
                    bool t1601 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1601));
                    bool t1602 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1602));
                    if ((implicit_cast<bool>((implicit_cast<bool>(t1601) || implicit_cast<bool>(t1602))))) {
                      // ../../src/builtins/data-view.tq:722:79
                      {
                        // ../../src/builtins/data-view.tq:723:9
                        TNode<Uint32T> t1603 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                        USE(implicit_cast<TNode<Uint32T>>(t1603));
                        StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<Uint32T>>(t1603), implicit_cast<TNode<BoolT>>((*littleEndian_271).value()));
                      }
                    } else {
                      // ../../src/builtins/data-view.tq:726:14
                      {
                        bool t1604 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                        USE(implicit_cast<bool>(t1604));
                        if ((implicit_cast<bool>(t1604))) {
                          // ../../src/builtins/data-view.tq:726:54
                          {
                            // ../../src/builtins/data-view.tq:727:9
                            TNode<Float32T> t1605 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                            USE(implicit_cast<TNode<Float32T>>(t1605));
                            TVARIABLE(Float32T, floatValue_282_impl);
                            auto floatValue_282 = &floatValue_282_impl;
                            USE(floatValue_282);
                            *floatValue_282 = implicit_cast<TNode<Float32T>>(t1605);
                            // ../../src/builtins/data-view.tq:728:9
                            TNode<Uint32T> t1606 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32(implicit_cast<TNode<Float32T>>((*floatValue_282).value())));
                            USE(implicit_cast<TNode<Uint32T>>(t1606));
                            StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<Uint32T>>(t1606), implicit_cast<TNode<BoolT>>((*littleEndian_271).value()));
                          }
                        } else {
                          // ../../src/builtins/data-view.tq:731:14
                          {
                            bool t1607 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                            USE(implicit_cast<bool>(t1607));
                            if ((implicit_cast<bool>(t1607))) {
                              // ../../src/builtins/data-view.tq:731:54
                              {
                                // ../../src/builtins/data-view.tq:732:9
                                TNode<Uint32T> t1608 = UncheckedCast<Uint32T>(Float64ExtractLowWord32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1608));
                                TVARIABLE(Uint32T, lowWord_283_impl);
                                auto lowWord_283 = &lowWord_283_impl;
                                USE(lowWord_283);
                                *lowWord_283 = implicit_cast<TNode<Uint32T>>(t1608);
                                // ../../src/builtins/data-view.tq:733:9
                                TNode<Uint32T> t1609 = UncheckedCast<Uint32T>(Float64ExtractHighWord32(implicit_cast<TNode<Float64T>>((*doubleValue_281).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1609));
                                TVARIABLE(Uint32T, highWord_284_impl);
                                auto highWord_284 = &highWord_284_impl;
                                USE(highWord_284);
                                *highWord_284 = implicit_cast<TNode<Uint32T>>(t1609);
                                // ../../src/builtins/data-view.tq:734:9
                                StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_272).value()), implicit_cast<TNode<UintPtrT>>((*bufferIndex_280).value()), implicit_cast<TNode<Uint32T>>((*lowWord_283).value()), implicit_cast<TNode<Uint32T>>((*highWord_284).value()), implicit_cast<TNode<BoolT>>((*littleEndian_271).value()));
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
    // ../../src/builtins/data-view.tq:737:5
    *_return_268 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1662);
  }
  BIND(label_macro_end_1662);
  return implicit_cast<TNode<Object>>((*_return_268).value());
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
  // ../../src/builtins/data-view.tq:741:65
  {
    // ../../src/builtins/data-view.tq:742:5
    auto t1610 = [=]() {
      int31_t t1612 = 0;
      TNode<IntPtrT> t1613 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1612)));
      TNode<Object> t1614 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1613)));
      return implicit_cast<TNode<Object>>(t1614);
    };
    auto t1611 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1615_846_impl);
    auto t1615_846 = &t1615_846_impl;
    USE(t1615_846);
    {
      Label label__True_473_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_473 = &label__True_473_impl;
      USE(label__True_473);
      Label label__False_474_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_474 = &label__False_474_impl;
      USE(label__False_474);
      Label label__done_847_1665_impl(this, {t1615_846}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_847_1665 = &label__done_847_1665_impl;
      USE(label__done_847_1665);
      TNode<IntPtrT> t1616 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1617 = 0;
      TNode<IntPtrT> t1618 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1617)));
      TNode<BoolT> t1619 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1616), implicit_cast<TNode<IntPtrT>>(t1618)));
      USE(implicit_cast<TNode<BoolT>>(t1619));
      Branch(implicit_cast<TNode<BoolT>>(t1619), label__True_473, label__False_474);
      BIND(label__True_473);
            *t1615_846 = implicit_cast<TNode<Object>>(t1610());
      Goto(label__done_847_1665);
      BIND(label__False_474);
            *t1615_846 = implicit_cast<TNode<Object>>(t1611());
      Goto(label__done_847_1665);
      BIND(label__done_847_1665);
    }
    TVARIABLE(Object, offset_285_impl);
    auto offset_285 = &offset_285_impl;
    USE(offset_285);
    *offset_285 = implicit_cast<TNode<Object>>((*t1615_846).value());
    // ../../src/builtins/data-view.tq:743:5
    auto t1620 = [=]() {
      int31_t t1622 = 1;
      TNode<IntPtrT> t1623 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1622)));
      TNode<Object> t1624 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1623)));
      return implicit_cast<TNode<Object>>(t1624);
    };
    auto t1621 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1625_848_impl);
    auto t1625_848 = &t1625_848_impl;
    USE(t1625_848);
    {
      Label label__True_475_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_475 = &label__True_475_impl;
      USE(label__True_475);
      Label label__False_476_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_476 = &label__False_476_impl;
      USE(label__False_476);
      Label label__done_849_1666_impl(this, {t1625_848}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_849_1666 = &label__done_849_1666_impl;
      USE(label__done_849_1666);
      TNode<IntPtrT> t1626 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1627 = 1;
      TNode<IntPtrT> t1628 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1627)));
      TNode<BoolT> t1629 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1626), implicit_cast<TNode<IntPtrT>>(t1628)));
      USE(implicit_cast<TNode<BoolT>>(t1629));
      Branch(implicit_cast<TNode<BoolT>>(t1629), label__True_475, label__False_476);
      BIND(label__True_475);
            *t1625_848 = implicit_cast<TNode<Object>>(t1620());
      Goto(label__done_849_1666);
      BIND(label__False_476);
            *t1625_848 = implicit_cast<TNode<Object>>(t1621());
      Goto(label__done_849_1666);
      BIND(label__done_849_1666);
    }
    TVARIABLE(Object, value_286_impl);
    auto value_286 = &value_286_impl;
    USE(value_286);
    *value_286 = implicit_cast<TNode<Object>>((*t1625_848).value());
    // ../../src/builtins/data-view.tq:744:5
    TNode<Object> t1630 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_285).value()), implicit_cast<TNode<Object>>((*value_286).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1630));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1630));
  }
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
  // ../../src/builtins/data-view.tq:749:65
  {
    // ../../src/builtins/data-view.tq:750:5
    auto t1631 = [=]() {
      int31_t t1633 = 0;
      TNode<IntPtrT> t1634 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1633)));
      TNode<Object> t1635 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1634)));
      return implicit_cast<TNode<Object>>(t1635);
    };
    auto t1632 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1636_850_impl);
    auto t1636_850 = &t1636_850_impl;
    USE(t1636_850);
    {
      Label label__True_477_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_477 = &label__True_477_impl;
      USE(label__True_477);
      Label label__False_478_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_478 = &label__False_478_impl;
      USE(label__False_478);
      Label label__done_851_1667_impl(this, {t1636_850}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_851_1667 = &label__done_851_1667_impl;
      USE(label__done_851_1667);
      TNode<IntPtrT> t1637 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1638 = 0;
      TNode<IntPtrT> t1639 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1638)));
      TNode<BoolT> t1640 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1637), implicit_cast<TNode<IntPtrT>>(t1639)));
      USE(implicit_cast<TNode<BoolT>>(t1640));
      Branch(implicit_cast<TNode<BoolT>>(t1640), label__True_477, label__False_478);
      BIND(label__True_477);
            *t1636_850 = implicit_cast<TNode<Object>>(t1631());
      Goto(label__done_851_1667);
      BIND(label__False_478);
            *t1636_850 = implicit_cast<TNode<Object>>(t1632());
      Goto(label__done_851_1667);
      BIND(label__done_851_1667);
    }
    TVARIABLE(Object, offset_287_impl);
    auto offset_287 = &offset_287_impl;
    USE(offset_287);
    *offset_287 = implicit_cast<TNode<Object>>((*t1636_850).value());
    // ../../src/builtins/data-view.tq:751:5
    auto t1641 = [=]() {
      int31_t t1643 = 1;
      TNode<IntPtrT> t1644 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1643)));
      TNode<Object> t1645 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1644)));
      return implicit_cast<TNode<Object>>(t1645);
    };
    auto t1642 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1646_852_impl);
    auto t1646_852 = &t1646_852_impl;
    USE(t1646_852);
    {
      Label label__True_479_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_479 = &label__True_479_impl;
      USE(label__True_479);
      Label label__False_480_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_480 = &label__False_480_impl;
      USE(label__False_480);
      Label label__done_853_1668_impl(this, {t1646_852}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_853_1668 = &label__done_853_1668_impl;
      USE(label__done_853_1668);
      TNode<IntPtrT> t1647 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1648 = 1;
      TNode<IntPtrT> t1649 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1648)));
      TNode<BoolT> t1650 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1647), implicit_cast<TNode<IntPtrT>>(t1649)));
      USE(implicit_cast<TNode<BoolT>>(t1650));
      Branch(implicit_cast<TNode<BoolT>>(t1650), label__True_479, label__False_480);
      BIND(label__True_479);
            *t1646_852 = implicit_cast<TNode<Object>>(t1641());
      Goto(label__done_853_1668);
      BIND(label__False_480);
            *t1646_852 = implicit_cast<TNode<Object>>(t1642());
      Goto(label__done_853_1668);
      BIND(label__done_853_1668);
    }
    TVARIABLE(Object, value_288_impl);
    auto value_288 = &value_288_impl;
    USE(value_288);
    *value_288 = implicit_cast<TNode<Object>>((*t1646_852).value());
    // ../../src/builtins/data-view.tq:752:5
    TNode<Object> t1651 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_287).value()), implicit_cast<TNode<Object>>((*value_288).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1651));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1651));
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
  // ../../src/builtins/data-view.tq:757:65
  {
    // ../../src/builtins/data-view.tq:758:5
    auto t1652 = [=]() {
      int31_t t1654 = 0;
      TNode<IntPtrT> t1655 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1654)));
      TNode<Object> t1656 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1655)));
      return implicit_cast<TNode<Object>>(t1656);
    };
    auto t1653 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1657_854_impl);
    auto t1657_854 = &t1657_854_impl;
    USE(t1657_854);
    {
      Label label__True_481_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_481 = &label__True_481_impl;
      USE(label__True_481);
      Label label__False_482_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_482 = &label__False_482_impl;
      USE(label__False_482);
      Label label__done_855_1669_impl(this, {t1657_854}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_855_1669 = &label__done_855_1669_impl;
      USE(label__done_855_1669);
      TNode<IntPtrT> t1658 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1659 = 0;
      TNode<IntPtrT> t1660 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1659)));
      TNode<BoolT> t1661 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1658), implicit_cast<TNode<IntPtrT>>(t1660)));
      USE(implicit_cast<TNode<BoolT>>(t1661));
      Branch(implicit_cast<TNode<BoolT>>(t1661), label__True_481, label__False_482);
      BIND(label__True_481);
            *t1657_854 = implicit_cast<TNode<Object>>(t1652());
      Goto(label__done_855_1669);
      BIND(label__False_482);
            *t1657_854 = implicit_cast<TNode<Object>>(t1653());
      Goto(label__done_855_1669);
      BIND(label__done_855_1669);
    }
    TVARIABLE(Object, offset_289_impl);
    auto offset_289 = &offset_289_impl;
    USE(offset_289);
    *offset_289 = implicit_cast<TNode<Object>>((*t1657_854).value());
    // ../../src/builtins/data-view.tq:759:5
    auto t1662 = [=]() {
      int31_t t1664 = 1;
      TNode<IntPtrT> t1665 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1664)));
      TNode<Object> t1666 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1665)));
      return implicit_cast<TNode<Object>>(t1666);
    };
    auto t1663 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1667_856_impl);
    auto t1667_856 = &t1667_856_impl;
    USE(t1667_856);
    {
      Label label__True_483_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_483 = &label__True_483_impl;
      USE(label__True_483);
      Label label__False_484_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_484 = &label__False_484_impl;
      USE(label__False_484);
      Label label__done_857_1670_impl(this, {t1667_856}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_857_1670 = &label__done_857_1670_impl;
      USE(label__done_857_1670);
      TNode<IntPtrT> t1668 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1669 = 1;
      TNode<IntPtrT> t1670 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1669)));
      TNode<BoolT> t1671 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1668), implicit_cast<TNode<IntPtrT>>(t1670)));
      USE(implicit_cast<TNode<BoolT>>(t1671));
      Branch(implicit_cast<TNode<BoolT>>(t1671), label__True_483, label__False_484);
      BIND(label__True_483);
            *t1667_856 = implicit_cast<TNode<Object>>(t1662());
      Goto(label__done_857_1670);
      BIND(label__False_484);
            *t1667_856 = implicit_cast<TNode<Object>>(t1663());
      Goto(label__done_857_1670);
      BIND(label__done_857_1670);
    }
    TVARIABLE(Object, value_290_impl);
    auto value_290 = &value_290_impl;
    USE(value_290);
    *value_290 = implicit_cast<TNode<Object>>((*t1667_856).value());
    // ../../src/builtins/data-view.tq:760:5
    auto t1672 = [=]() {
      int31_t t1674 = 2;
      TNode<IntPtrT> t1675 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1674)));
      TNode<Object> t1676 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1675)));
      return implicit_cast<TNode<Object>>(t1676);
    };
    auto t1673 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1677_858_impl);
    auto t1677_858 = &t1677_858_impl;
    USE(t1677_858);
    {
      Label label__True_485_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_485 = &label__True_485_impl;
      USE(label__True_485);
      Label label__False_486_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_486 = &label__False_486_impl;
      USE(label__False_486);
      Label label__done_859_1671_impl(this, {t1677_858}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_859_1671 = &label__done_859_1671_impl;
      USE(label__done_859_1671);
      TNode<IntPtrT> t1678 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1679 = 2;
      TNode<IntPtrT> t1680 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1679)));
      TNode<BoolT> t1681 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1678), implicit_cast<TNode<IntPtrT>>(t1680)));
      USE(implicit_cast<TNode<BoolT>>(t1681));
      Branch(implicit_cast<TNode<BoolT>>(t1681), label__True_485, label__False_486);
      BIND(label__True_485);
            *t1677_858 = implicit_cast<TNode<Object>>(t1672());
      Goto(label__done_859_1671);
      BIND(label__False_486);
            *t1677_858 = implicit_cast<TNode<Object>>(t1673());
      Goto(label__done_859_1671);
      BIND(label__done_859_1671);
    }
    TVARIABLE(Object, isLittleEndian_291_impl);
    auto isLittleEndian_291 = &isLittleEndian_291_impl;
    USE(isLittleEndian_291);
    *isLittleEndian_291 = implicit_cast<TNode<Object>>((*t1677_858).value());
    // ../../src/builtins/data-view.tq:762:5
    TNode<Object> t1682 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_289).value()), implicit_cast<TNode<Object>>((*value_290).value()), implicit_cast<TNode<Object>>((*isLittleEndian_291).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1682));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1682));
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
  // ../../src/builtins/data-view.tq:767:65
  {
    // ../../src/builtins/data-view.tq:768:5
    auto t1683 = [=]() {
      int31_t t1685 = 0;
      TNode<IntPtrT> t1686 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1685)));
      TNode<Object> t1687 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1686)));
      return implicit_cast<TNode<Object>>(t1687);
    };
    auto t1684 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1688_860_impl);
    auto t1688_860 = &t1688_860_impl;
    USE(t1688_860);
    {
      Label label__True_487_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_487 = &label__True_487_impl;
      USE(label__True_487);
      Label label__False_488_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_488 = &label__False_488_impl;
      USE(label__False_488);
      Label label__done_861_1672_impl(this, {t1688_860}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_861_1672 = &label__done_861_1672_impl;
      USE(label__done_861_1672);
      TNode<IntPtrT> t1689 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1690 = 0;
      TNode<IntPtrT> t1691 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1690)));
      TNode<BoolT> t1692 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1689), implicit_cast<TNode<IntPtrT>>(t1691)));
      USE(implicit_cast<TNode<BoolT>>(t1692));
      Branch(implicit_cast<TNode<BoolT>>(t1692), label__True_487, label__False_488);
      BIND(label__True_487);
            *t1688_860 = implicit_cast<TNode<Object>>(t1683());
      Goto(label__done_861_1672);
      BIND(label__False_488);
            *t1688_860 = implicit_cast<TNode<Object>>(t1684());
      Goto(label__done_861_1672);
      BIND(label__done_861_1672);
    }
    TVARIABLE(Object, offset_292_impl);
    auto offset_292 = &offset_292_impl;
    USE(offset_292);
    *offset_292 = implicit_cast<TNode<Object>>((*t1688_860).value());
    // ../../src/builtins/data-view.tq:769:5
    auto t1693 = [=]() {
      int31_t t1695 = 1;
      TNode<IntPtrT> t1696 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1695)));
      TNode<Object> t1697 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1696)));
      return implicit_cast<TNode<Object>>(t1697);
    };
    auto t1694 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1698_862_impl);
    auto t1698_862 = &t1698_862_impl;
    USE(t1698_862);
    {
      Label label__True_489_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_489 = &label__True_489_impl;
      USE(label__True_489);
      Label label__False_490_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_490 = &label__False_490_impl;
      USE(label__False_490);
      Label label__done_863_1673_impl(this, {t1698_862}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_863_1673 = &label__done_863_1673_impl;
      USE(label__done_863_1673);
      TNode<IntPtrT> t1699 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1700 = 1;
      TNode<IntPtrT> t1701 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1700)));
      TNode<BoolT> t1702 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1699), implicit_cast<TNode<IntPtrT>>(t1701)));
      USE(implicit_cast<TNode<BoolT>>(t1702));
      Branch(implicit_cast<TNode<BoolT>>(t1702), label__True_489, label__False_490);
      BIND(label__True_489);
            *t1698_862 = implicit_cast<TNode<Object>>(t1693());
      Goto(label__done_863_1673);
      BIND(label__False_490);
            *t1698_862 = implicit_cast<TNode<Object>>(t1694());
      Goto(label__done_863_1673);
      BIND(label__done_863_1673);
    }
    TVARIABLE(Object, value_293_impl);
    auto value_293 = &value_293_impl;
    USE(value_293);
    *value_293 = implicit_cast<TNode<Object>>((*t1698_862).value());
    // ../../src/builtins/data-view.tq:770:5
    auto t1703 = [=]() {
      int31_t t1705 = 2;
      TNode<IntPtrT> t1706 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1705)));
      TNode<Object> t1707 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1706)));
      return implicit_cast<TNode<Object>>(t1707);
    };
    auto t1704 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1708_864_impl);
    auto t1708_864 = &t1708_864_impl;
    USE(t1708_864);
    {
      Label label__True_491_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_491 = &label__True_491_impl;
      USE(label__True_491);
      Label label__False_492_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_492 = &label__False_492_impl;
      USE(label__False_492);
      Label label__done_865_1674_impl(this, {t1708_864}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_865_1674 = &label__done_865_1674_impl;
      USE(label__done_865_1674);
      TNode<IntPtrT> t1709 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1710 = 2;
      TNode<IntPtrT> t1711 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1710)));
      TNode<BoolT> t1712 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1709), implicit_cast<TNode<IntPtrT>>(t1711)));
      USE(implicit_cast<TNode<BoolT>>(t1712));
      Branch(implicit_cast<TNode<BoolT>>(t1712), label__True_491, label__False_492);
      BIND(label__True_491);
            *t1708_864 = implicit_cast<TNode<Object>>(t1703());
      Goto(label__done_865_1674);
      BIND(label__False_492);
            *t1708_864 = implicit_cast<TNode<Object>>(t1704());
      Goto(label__done_865_1674);
      BIND(label__done_865_1674);
    }
    TVARIABLE(Object, isLittleEndian_294_impl);
    auto isLittleEndian_294 = &isLittleEndian_294_impl;
    USE(isLittleEndian_294);
    *isLittleEndian_294 = implicit_cast<TNode<Object>>((*t1708_864).value());
    // ../../src/builtins/data-view.tq:772:5
    TNode<Object> t1713 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_292).value()), implicit_cast<TNode<Object>>((*value_293).value()), implicit_cast<TNode<Object>>((*isLittleEndian_294).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1713));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1713));
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
  // ../../src/builtins/data-view.tq:777:65
  {
    // ../../src/builtins/data-view.tq:778:5
    auto t1714 = [=]() {
      int31_t t1716 = 0;
      TNode<IntPtrT> t1717 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1716)));
      TNode<Object> t1718 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1717)));
      return implicit_cast<TNode<Object>>(t1718);
    };
    auto t1715 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1719_866_impl);
    auto t1719_866 = &t1719_866_impl;
    USE(t1719_866);
    {
      Label label__True_493_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_493 = &label__True_493_impl;
      USE(label__True_493);
      Label label__False_494_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_494 = &label__False_494_impl;
      USE(label__False_494);
      Label label__done_867_1675_impl(this, {t1719_866}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_867_1675 = &label__done_867_1675_impl;
      USE(label__done_867_1675);
      TNode<IntPtrT> t1720 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1721 = 0;
      TNode<IntPtrT> t1722 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1721)));
      TNode<BoolT> t1723 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1720), implicit_cast<TNode<IntPtrT>>(t1722)));
      USE(implicit_cast<TNode<BoolT>>(t1723));
      Branch(implicit_cast<TNode<BoolT>>(t1723), label__True_493, label__False_494);
      BIND(label__True_493);
            *t1719_866 = implicit_cast<TNode<Object>>(t1714());
      Goto(label__done_867_1675);
      BIND(label__False_494);
            *t1719_866 = implicit_cast<TNode<Object>>(t1715());
      Goto(label__done_867_1675);
      BIND(label__done_867_1675);
    }
    TVARIABLE(Object, offset_295_impl);
    auto offset_295 = &offset_295_impl;
    USE(offset_295);
    *offset_295 = implicit_cast<TNode<Object>>((*t1719_866).value());
    // ../../src/builtins/data-view.tq:779:5
    auto t1724 = [=]() {
      int31_t t1726 = 1;
      TNode<IntPtrT> t1727 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1726)));
      TNode<Object> t1728 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1727)));
      return implicit_cast<TNode<Object>>(t1728);
    };
    auto t1725 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1729_868_impl);
    auto t1729_868 = &t1729_868_impl;
    USE(t1729_868);
    {
      Label label__True_495_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_495 = &label__True_495_impl;
      USE(label__True_495);
      Label label__False_496_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_496 = &label__False_496_impl;
      USE(label__False_496);
      Label label__done_869_1676_impl(this, {t1729_868}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_869_1676 = &label__done_869_1676_impl;
      USE(label__done_869_1676);
      TNode<IntPtrT> t1730 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1731 = 1;
      TNode<IntPtrT> t1732 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1731)));
      TNode<BoolT> t1733 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1730), implicit_cast<TNode<IntPtrT>>(t1732)));
      USE(implicit_cast<TNode<BoolT>>(t1733));
      Branch(implicit_cast<TNode<BoolT>>(t1733), label__True_495, label__False_496);
      BIND(label__True_495);
            *t1729_868 = implicit_cast<TNode<Object>>(t1724());
      Goto(label__done_869_1676);
      BIND(label__False_496);
            *t1729_868 = implicit_cast<TNode<Object>>(t1725());
      Goto(label__done_869_1676);
      BIND(label__done_869_1676);
    }
    TVARIABLE(Object, value_296_impl);
    auto value_296 = &value_296_impl;
    USE(value_296);
    *value_296 = implicit_cast<TNode<Object>>((*t1729_868).value());
    // ../../src/builtins/data-view.tq:780:5
    auto t1734 = [=]() {
      int31_t t1736 = 2;
      TNode<IntPtrT> t1737 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1736)));
      TNode<Object> t1738 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1737)));
      return implicit_cast<TNode<Object>>(t1738);
    };
    auto t1735 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1739_870_impl);
    auto t1739_870 = &t1739_870_impl;
    USE(t1739_870);
    {
      Label label__True_497_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_497 = &label__True_497_impl;
      USE(label__True_497);
      Label label__False_498_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_498 = &label__False_498_impl;
      USE(label__False_498);
      Label label__done_871_1677_impl(this, {t1739_870}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_871_1677 = &label__done_871_1677_impl;
      USE(label__done_871_1677);
      TNode<IntPtrT> t1740 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1741 = 2;
      TNode<IntPtrT> t1742 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1741)));
      TNode<BoolT> t1743 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1740), implicit_cast<TNode<IntPtrT>>(t1742)));
      USE(implicit_cast<TNode<BoolT>>(t1743));
      Branch(implicit_cast<TNode<BoolT>>(t1743), label__True_497, label__False_498);
      BIND(label__True_497);
            *t1739_870 = implicit_cast<TNode<Object>>(t1734());
      Goto(label__done_871_1677);
      BIND(label__False_498);
            *t1739_870 = implicit_cast<TNode<Object>>(t1735());
      Goto(label__done_871_1677);
      BIND(label__done_871_1677);
    }
    TVARIABLE(Object, isLittleEndian_297_impl);
    auto isLittleEndian_297 = &isLittleEndian_297_impl;
    USE(isLittleEndian_297);
    *isLittleEndian_297 = implicit_cast<TNode<Object>>((*t1739_870).value());
    // ../../src/builtins/data-view.tq:782:5
    TNode<Object> t1744 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_295).value()), implicit_cast<TNode<Object>>((*value_296).value()), implicit_cast<TNode<Object>>((*isLittleEndian_297).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1744));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1744));
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
  // ../../src/builtins/data-view.tq:787:65
  {
    // ../../src/builtins/data-view.tq:788:5
    auto t1745 = [=]() {
      int31_t t1747 = 0;
      TNode<IntPtrT> t1748 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1747)));
      TNode<Object> t1749 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1748)));
      return implicit_cast<TNode<Object>>(t1749);
    };
    auto t1746 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1750_872_impl);
    auto t1750_872 = &t1750_872_impl;
    USE(t1750_872);
    {
      Label label__True_499_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_499 = &label__True_499_impl;
      USE(label__True_499);
      Label label__False_500_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_500 = &label__False_500_impl;
      USE(label__False_500);
      Label label__done_873_1678_impl(this, {t1750_872}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_873_1678 = &label__done_873_1678_impl;
      USE(label__done_873_1678);
      TNode<IntPtrT> t1751 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1752 = 0;
      TNode<IntPtrT> t1753 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1752)));
      TNode<BoolT> t1754 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1751), implicit_cast<TNode<IntPtrT>>(t1753)));
      USE(implicit_cast<TNode<BoolT>>(t1754));
      Branch(implicit_cast<TNode<BoolT>>(t1754), label__True_499, label__False_500);
      BIND(label__True_499);
            *t1750_872 = implicit_cast<TNode<Object>>(t1745());
      Goto(label__done_873_1678);
      BIND(label__False_500);
            *t1750_872 = implicit_cast<TNode<Object>>(t1746());
      Goto(label__done_873_1678);
      BIND(label__done_873_1678);
    }
    TVARIABLE(Object, offset_298_impl);
    auto offset_298 = &offset_298_impl;
    USE(offset_298);
    *offset_298 = implicit_cast<TNode<Object>>((*t1750_872).value());
    // ../../src/builtins/data-view.tq:789:5
    auto t1755 = [=]() {
      int31_t t1757 = 1;
      TNode<IntPtrT> t1758 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1757)));
      TNode<Object> t1759 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1758)));
      return implicit_cast<TNode<Object>>(t1759);
    };
    auto t1756 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1760_874_impl);
    auto t1760_874 = &t1760_874_impl;
    USE(t1760_874);
    {
      Label label__True_501_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_501 = &label__True_501_impl;
      USE(label__True_501);
      Label label__False_502_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_502 = &label__False_502_impl;
      USE(label__False_502);
      Label label__done_875_1679_impl(this, {t1760_874}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_875_1679 = &label__done_875_1679_impl;
      USE(label__done_875_1679);
      TNode<IntPtrT> t1761 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1762 = 1;
      TNode<IntPtrT> t1763 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1762)));
      TNode<BoolT> t1764 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1761), implicit_cast<TNode<IntPtrT>>(t1763)));
      USE(implicit_cast<TNode<BoolT>>(t1764));
      Branch(implicit_cast<TNode<BoolT>>(t1764), label__True_501, label__False_502);
      BIND(label__True_501);
            *t1760_874 = implicit_cast<TNode<Object>>(t1755());
      Goto(label__done_875_1679);
      BIND(label__False_502);
            *t1760_874 = implicit_cast<TNode<Object>>(t1756());
      Goto(label__done_875_1679);
      BIND(label__done_875_1679);
    }
    TVARIABLE(Object, value_299_impl);
    auto value_299 = &value_299_impl;
    USE(value_299);
    *value_299 = implicit_cast<TNode<Object>>((*t1760_874).value());
    // ../../src/builtins/data-view.tq:790:5
    auto t1765 = [=]() {
      int31_t t1767 = 2;
      TNode<IntPtrT> t1768 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1767)));
      TNode<Object> t1769 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1768)));
      return implicit_cast<TNode<Object>>(t1769);
    };
    auto t1766 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1770_876_impl);
    auto t1770_876 = &t1770_876_impl;
    USE(t1770_876);
    {
      Label label__True_503_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_503 = &label__True_503_impl;
      USE(label__True_503);
      Label label__False_504_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_504 = &label__False_504_impl;
      USE(label__False_504);
      Label label__done_877_1680_impl(this, {t1770_876}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_877_1680 = &label__done_877_1680_impl;
      USE(label__done_877_1680);
      TNode<IntPtrT> t1771 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1772 = 2;
      TNode<IntPtrT> t1773 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1772)));
      TNode<BoolT> t1774 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1771), implicit_cast<TNode<IntPtrT>>(t1773)));
      USE(implicit_cast<TNode<BoolT>>(t1774));
      Branch(implicit_cast<TNode<BoolT>>(t1774), label__True_503, label__False_504);
      BIND(label__True_503);
            *t1770_876 = implicit_cast<TNode<Object>>(t1765());
      Goto(label__done_877_1680);
      BIND(label__False_504);
            *t1770_876 = implicit_cast<TNode<Object>>(t1766());
      Goto(label__done_877_1680);
      BIND(label__done_877_1680);
    }
    TVARIABLE(Object, isLittleEndian_300_impl);
    auto isLittleEndian_300 = &isLittleEndian_300_impl;
    USE(isLittleEndian_300);
    *isLittleEndian_300 = implicit_cast<TNode<Object>>((*t1770_876).value());
    // ../../src/builtins/data-view.tq:792:5
    TNode<Object> t1775 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_298).value()), implicit_cast<TNode<Object>>((*value_299).value()), implicit_cast<TNode<Object>>((*isLittleEndian_300).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1775));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1775));
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
  // ../../src/builtins/data-view.tq:797:65
  {
    // ../../src/builtins/data-view.tq:798:5
    auto t1776 = [=]() {
      int31_t t1778 = 0;
      TNode<IntPtrT> t1779 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1778)));
      TNode<Object> t1780 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1779)));
      return implicit_cast<TNode<Object>>(t1780);
    };
    auto t1777 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1781_878_impl);
    auto t1781_878 = &t1781_878_impl;
    USE(t1781_878);
    {
      Label label__True_505_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_505 = &label__True_505_impl;
      USE(label__True_505);
      Label label__False_506_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_506 = &label__False_506_impl;
      USE(label__False_506);
      Label label__done_879_1681_impl(this, {t1781_878}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_879_1681 = &label__done_879_1681_impl;
      USE(label__done_879_1681);
      TNode<IntPtrT> t1782 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1783 = 0;
      TNode<IntPtrT> t1784 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1783)));
      TNode<BoolT> t1785 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1782), implicit_cast<TNode<IntPtrT>>(t1784)));
      USE(implicit_cast<TNode<BoolT>>(t1785));
      Branch(implicit_cast<TNode<BoolT>>(t1785), label__True_505, label__False_506);
      BIND(label__True_505);
            *t1781_878 = implicit_cast<TNode<Object>>(t1776());
      Goto(label__done_879_1681);
      BIND(label__False_506);
            *t1781_878 = implicit_cast<TNode<Object>>(t1777());
      Goto(label__done_879_1681);
      BIND(label__done_879_1681);
    }
    TVARIABLE(Object, offset_301_impl);
    auto offset_301 = &offset_301_impl;
    USE(offset_301);
    *offset_301 = implicit_cast<TNode<Object>>((*t1781_878).value());
    // ../../src/builtins/data-view.tq:799:5
    auto t1786 = [=]() {
      int31_t t1788 = 1;
      TNode<IntPtrT> t1789 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1788)));
      TNode<Object> t1790 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1789)));
      return implicit_cast<TNode<Object>>(t1790);
    };
    auto t1787 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1791_880_impl);
    auto t1791_880 = &t1791_880_impl;
    USE(t1791_880);
    {
      Label label__True_507_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_507 = &label__True_507_impl;
      USE(label__True_507);
      Label label__False_508_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_508 = &label__False_508_impl;
      USE(label__False_508);
      Label label__done_881_1682_impl(this, {t1791_880}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_881_1682 = &label__done_881_1682_impl;
      USE(label__done_881_1682);
      TNode<IntPtrT> t1792 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1793 = 1;
      TNode<IntPtrT> t1794 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1793)));
      TNode<BoolT> t1795 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1792), implicit_cast<TNode<IntPtrT>>(t1794)));
      USE(implicit_cast<TNode<BoolT>>(t1795));
      Branch(implicit_cast<TNode<BoolT>>(t1795), label__True_507, label__False_508);
      BIND(label__True_507);
            *t1791_880 = implicit_cast<TNode<Object>>(t1786());
      Goto(label__done_881_1682);
      BIND(label__False_508);
            *t1791_880 = implicit_cast<TNode<Object>>(t1787());
      Goto(label__done_881_1682);
      BIND(label__done_881_1682);
    }
    TVARIABLE(Object, value_302_impl);
    auto value_302 = &value_302_impl;
    USE(value_302);
    *value_302 = implicit_cast<TNode<Object>>((*t1791_880).value());
    // ../../src/builtins/data-view.tq:800:5
    auto t1796 = [=]() {
      int31_t t1798 = 2;
      TNode<IntPtrT> t1799 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1798)));
      TNode<Object> t1800 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1799)));
      return implicit_cast<TNode<Object>>(t1800);
    };
    auto t1797 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1801_882_impl);
    auto t1801_882 = &t1801_882_impl;
    USE(t1801_882);
    {
      Label label__True_509_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_509 = &label__True_509_impl;
      USE(label__True_509);
      Label label__False_510_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_510 = &label__False_510_impl;
      USE(label__False_510);
      Label label__done_883_1683_impl(this, {t1801_882}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_883_1683 = &label__done_883_1683_impl;
      USE(label__done_883_1683);
      TNode<IntPtrT> t1802 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1803 = 2;
      TNode<IntPtrT> t1804 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1803)));
      TNode<BoolT> t1805 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1802), implicit_cast<TNode<IntPtrT>>(t1804)));
      USE(implicit_cast<TNode<BoolT>>(t1805));
      Branch(implicit_cast<TNode<BoolT>>(t1805), label__True_509, label__False_510);
      BIND(label__True_509);
            *t1801_882 = implicit_cast<TNode<Object>>(t1796());
      Goto(label__done_883_1683);
      BIND(label__False_510);
            *t1801_882 = implicit_cast<TNode<Object>>(t1797());
      Goto(label__done_883_1683);
      BIND(label__done_883_1683);
    }
    TVARIABLE(Object, isLittleEndian_303_impl);
    auto isLittleEndian_303 = &isLittleEndian_303_impl;
    USE(isLittleEndian_303);
    *isLittleEndian_303 = implicit_cast<TNode<Object>>((*t1801_882).value());
    // ../../src/builtins/data-view.tq:802:5
    TNode<Object> t1806 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_301).value()), implicit_cast<TNode<Object>>((*value_302).value()), implicit_cast<TNode<Object>>((*isLittleEndian_303).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1806));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1806));
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
  // ../../src/builtins/data-view.tq:807:65
  {
    // ../../src/builtins/data-view.tq:808:5
    auto t1807 = [=]() {
      int31_t t1809 = 0;
      TNode<IntPtrT> t1810 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1809)));
      TNode<Object> t1811 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1810)));
      return implicit_cast<TNode<Object>>(t1811);
    };
    auto t1808 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1812_884_impl);
    auto t1812_884 = &t1812_884_impl;
    USE(t1812_884);
    {
      Label label__True_511_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_511 = &label__True_511_impl;
      USE(label__True_511);
      Label label__False_512_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_512 = &label__False_512_impl;
      USE(label__False_512);
      Label label__done_885_1684_impl(this, {t1812_884}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_885_1684 = &label__done_885_1684_impl;
      USE(label__done_885_1684);
      TNode<IntPtrT> t1813 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1814 = 0;
      TNode<IntPtrT> t1815 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1814)));
      TNode<BoolT> t1816 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1813), implicit_cast<TNode<IntPtrT>>(t1815)));
      USE(implicit_cast<TNode<BoolT>>(t1816));
      Branch(implicit_cast<TNode<BoolT>>(t1816), label__True_511, label__False_512);
      BIND(label__True_511);
            *t1812_884 = implicit_cast<TNode<Object>>(t1807());
      Goto(label__done_885_1684);
      BIND(label__False_512);
            *t1812_884 = implicit_cast<TNode<Object>>(t1808());
      Goto(label__done_885_1684);
      BIND(label__done_885_1684);
    }
    TVARIABLE(Object, offset_304_impl);
    auto offset_304 = &offset_304_impl;
    USE(offset_304);
    *offset_304 = implicit_cast<TNode<Object>>((*t1812_884).value());
    // ../../src/builtins/data-view.tq:809:5
    auto t1817 = [=]() {
      int31_t t1819 = 1;
      TNode<IntPtrT> t1820 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1819)));
      TNode<Object> t1821 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1820)));
      return implicit_cast<TNode<Object>>(t1821);
    };
    auto t1818 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1822_886_impl);
    auto t1822_886 = &t1822_886_impl;
    USE(t1822_886);
    {
      Label label__True_513_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_513 = &label__True_513_impl;
      USE(label__True_513);
      Label label__False_514_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_514 = &label__False_514_impl;
      USE(label__False_514);
      Label label__done_887_1685_impl(this, {t1822_886}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_887_1685 = &label__done_887_1685_impl;
      USE(label__done_887_1685);
      TNode<IntPtrT> t1823 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1824 = 1;
      TNode<IntPtrT> t1825 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1824)));
      TNode<BoolT> t1826 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1823), implicit_cast<TNode<IntPtrT>>(t1825)));
      USE(implicit_cast<TNode<BoolT>>(t1826));
      Branch(implicit_cast<TNode<BoolT>>(t1826), label__True_513, label__False_514);
      BIND(label__True_513);
            *t1822_886 = implicit_cast<TNode<Object>>(t1817());
      Goto(label__done_887_1685);
      BIND(label__False_514);
            *t1822_886 = implicit_cast<TNode<Object>>(t1818());
      Goto(label__done_887_1685);
      BIND(label__done_887_1685);
    }
    TVARIABLE(Object, value_305_impl);
    auto value_305 = &value_305_impl;
    USE(value_305);
    *value_305 = implicit_cast<TNode<Object>>((*t1822_886).value());
    // ../../src/builtins/data-view.tq:810:5
    auto t1827 = [=]() {
      int31_t t1829 = 2;
      TNode<IntPtrT> t1830 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1829)));
      TNode<Object> t1831 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1830)));
      return implicit_cast<TNode<Object>>(t1831);
    };
    auto t1828 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1832_888_impl);
    auto t1832_888 = &t1832_888_impl;
    USE(t1832_888);
    {
      Label label__True_515_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_515 = &label__True_515_impl;
      USE(label__True_515);
      Label label__False_516_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_516 = &label__False_516_impl;
      USE(label__False_516);
      Label label__done_889_1686_impl(this, {t1832_888}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_889_1686 = &label__done_889_1686_impl;
      USE(label__done_889_1686);
      TNode<IntPtrT> t1833 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1834 = 2;
      TNode<IntPtrT> t1835 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1834)));
      TNode<BoolT> t1836 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1833), implicit_cast<TNode<IntPtrT>>(t1835)));
      USE(implicit_cast<TNode<BoolT>>(t1836));
      Branch(implicit_cast<TNode<BoolT>>(t1836), label__True_515, label__False_516);
      BIND(label__True_515);
            *t1832_888 = implicit_cast<TNode<Object>>(t1827());
      Goto(label__done_889_1686);
      BIND(label__False_516);
            *t1832_888 = implicit_cast<TNode<Object>>(t1828());
      Goto(label__done_889_1686);
      BIND(label__done_889_1686);
    }
    TVARIABLE(Object, isLittleEndian_306_impl);
    auto isLittleEndian_306 = &isLittleEndian_306_impl;
    USE(isLittleEndian_306);
    *isLittleEndian_306 = implicit_cast<TNode<Object>>((*t1832_888).value());
    // ../../src/builtins/data-view.tq:812:5
    TNode<Object> t1837 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_304).value()), implicit_cast<TNode<Object>>((*value_305).value()), implicit_cast<TNode<Object>>((*isLittleEndian_306).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1837));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1837));
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
  // ../../src/builtins/data-view.tq:817:65
  {
    // ../../src/builtins/data-view.tq:818:5
    auto t1838 = [=]() {
      int31_t t1840 = 0;
      TNode<IntPtrT> t1841 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1840)));
      TNode<Object> t1842 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1841)));
      return implicit_cast<TNode<Object>>(t1842);
    };
    auto t1839 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1843_890_impl);
    auto t1843_890 = &t1843_890_impl;
    USE(t1843_890);
    {
      Label label__True_517_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_517 = &label__True_517_impl;
      USE(label__True_517);
      Label label__False_518_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_518 = &label__False_518_impl;
      USE(label__False_518);
      Label label__done_891_1687_impl(this, {t1843_890}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_891_1687 = &label__done_891_1687_impl;
      USE(label__done_891_1687);
      TNode<IntPtrT> t1844 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1845 = 0;
      TNode<IntPtrT> t1846 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1845)));
      TNode<BoolT> t1847 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1844), implicit_cast<TNode<IntPtrT>>(t1846)));
      USE(implicit_cast<TNode<BoolT>>(t1847));
      Branch(implicit_cast<TNode<BoolT>>(t1847), label__True_517, label__False_518);
      BIND(label__True_517);
            *t1843_890 = implicit_cast<TNode<Object>>(t1838());
      Goto(label__done_891_1687);
      BIND(label__False_518);
            *t1843_890 = implicit_cast<TNode<Object>>(t1839());
      Goto(label__done_891_1687);
      BIND(label__done_891_1687);
    }
    TVARIABLE(Object, offset_307_impl);
    auto offset_307 = &offset_307_impl;
    USE(offset_307);
    *offset_307 = implicit_cast<TNode<Object>>((*t1843_890).value());
    // ../../src/builtins/data-view.tq:819:5
    auto t1848 = [=]() {
      int31_t t1850 = 1;
      TNode<IntPtrT> t1851 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1850)));
      TNode<Object> t1852 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1851)));
      return implicit_cast<TNode<Object>>(t1852);
    };
    auto t1849 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1853_892_impl);
    auto t1853_892 = &t1853_892_impl;
    USE(t1853_892);
    {
      Label label__True_519_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_519 = &label__True_519_impl;
      USE(label__True_519);
      Label label__False_520_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_520 = &label__False_520_impl;
      USE(label__False_520);
      Label label__done_893_1688_impl(this, {t1853_892}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_893_1688 = &label__done_893_1688_impl;
      USE(label__done_893_1688);
      TNode<IntPtrT> t1854 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1855 = 1;
      TNode<IntPtrT> t1856 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1855)));
      TNode<BoolT> t1857 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1854), implicit_cast<TNode<IntPtrT>>(t1856)));
      USE(implicit_cast<TNode<BoolT>>(t1857));
      Branch(implicit_cast<TNode<BoolT>>(t1857), label__True_519, label__False_520);
      BIND(label__True_519);
            *t1853_892 = implicit_cast<TNode<Object>>(t1848());
      Goto(label__done_893_1688);
      BIND(label__False_520);
            *t1853_892 = implicit_cast<TNode<Object>>(t1849());
      Goto(label__done_893_1688);
      BIND(label__done_893_1688);
    }
    TVARIABLE(Object, value_308_impl);
    auto value_308 = &value_308_impl;
    USE(value_308);
    *value_308 = implicit_cast<TNode<Object>>((*t1853_892).value());
    // ../../src/builtins/data-view.tq:820:5
    auto t1858 = [=]() {
      int31_t t1860 = 2;
      TNode<IntPtrT> t1861 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1860)));
      TNode<Object> t1862 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1861)));
      return implicit_cast<TNode<Object>>(t1862);
    };
    auto t1859 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1863_894_impl);
    auto t1863_894 = &t1863_894_impl;
    USE(t1863_894);
    {
      Label label__True_521_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_521 = &label__True_521_impl;
      USE(label__True_521);
      Label label__False_522_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_522 = &label__False_522_impl;
      USE(label__False_522);
      Label label__done_895_1689_impl(this, {t1863_894}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_895_1689 = &label__done_895_1689_impl;
      USE(label__done_895_1689);
      TNode<IntPtrT> t1864 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1865 = 2;
      TNode<IntPtrT> t1866 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1865)));
      TNode<BoolT> t1867 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1864), implicit_cast<TNode<IntPtrT>>(t1866)));
      USE(implicit_cast<TNode<BoolT>>(t1867));
      Branch(implicit_cast<TNode<BoolT>>(t1867), label__True_521, label__False_522);
      BIND(label__True_521);
            *t1863_894 = implicit_cast<TNode<Object>>(t1858());
      Goto(label__done_895_1689);
      BIND(label__False_522);
            *t1863_894 = implicit_cast<TNode<Object>>(t1859());
      Goto(label__done_895_1689);
      BIND(label__done_895_1689);
    }
    TVARIABLE(Object, isLittleEndian_309_impl);
    auto isLittleEndian_309 = &isLittleEndian_309_impl;
    USE(isLittleEndian_309);
    *isLittleEndian_309 = implicit_cast<TNode<Object>>((*t1863_894).value());
    // ../../src/builtins/data-view.tq:822:5
    TNode<Object> t1868 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_307).value()), implicit_cast<TNode<Object>>((*value_308).value()), implicit_cast<TNode<Object>>((*isLittleEndian_309).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1868));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1868));
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
  // ../../src/builtins/data-view.tq:827:65
  {
    // ../../src/builtins/data-view.tq:828:5
    auto t1869 = [=]() {
      int31_t t1871 = 0;
      TNode<IntPtrT> t1872 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1871)));
      TNode<Object> t1873 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1872)));
      return implicit_cast<TNode<Object>>(t1873);
    };
    auto t1870 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1874_896_impl);
    auto t1874_896 = &t1874_896_impl;
    USE(t1874_896);
    {
      Label label__True_523_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_523 = &label__True_523_impl;
      USE(label__True_523);
      Label label__False_524_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_524 = &label__False_524_impl;
      USE(label__False_524);
      Label label__done_897_1690_impl(this, {t1874_896}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_897_1690 = &label__done_897_1690_impl;
      USE(label__done_897_1690);
      TNode<IntPtrT> t1875 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1876 = 0;
      TNode<IntPtrT> t1877 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1876)));
      TNode<BoolT> t1878 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1875), implicit_cast<TNode<IntPtrT>>(t1877)));
      USE(implicit_cast<TNode<BoolT>>(t1878));
      Branch(implicit_cast<TNode<BoolT>>(t1878), label__True_523, label__False_524);
      BIND(label__True_523);
            *t1874_896 = implicit_cast<TNode<Object>>(t1869());
      Goto(label__done_897_1690);
      BIND(label__False_524);
            *t1874_896 = implicit_cast<TNode<Object>>(t1870());
      Goto(label__done_897_1690);
      BIND(label__done_897_1690);
    }
    TVARIABLE(Object, offset_310_impl);
    auto offset_310 = &offset_310_impl;
    USE(offset_310);
    *offset_310 = implicit_cast<TNode<Object>>((*t1874_896).value());
    // ../../src/builtins/data-view.tq:829:5
    auto t1879 = [=]() {
      int31_t t1881 = 1;
      TNode<IntPtrT> t1882 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1881)));
      TNode<Object> t1883 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1882)));
      return implicit_cast<TNode<Object>>(t1883);
    };
    auto t1880 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1884_898_impl);
    auto t1884_898 = &t1884_898_impl;
    USE(t1884_898);
    {
      Label label__True_525_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_525 = &label__True_525_impl;
      USE(label__True_525);
      Label label__False_526_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_526 = &label__False_526_impl;
      USE(label__False_526);
      Label label__done_899_1691_impl(this, {t1884_898}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_899_1691 = &label__done_899_1691_impl;
      USE(label__done_899_1691);
      TNode<IntPtrT> t1885 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1886 = 1;
      TNode<IntPtrT> t1887 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1886)));
      TNode<BoolT> t1888 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1885), implicit_cast<TNode<IntPtrT>>(t1887)));
      USE(implicit_cast<TNode<BoolT>>(t1888));
      Branch(implicit_cast<TNode<BoolT>>(t1888), label__True_525, label__False_526);
      BIND(label__True_525);
            *t1884_898 = implicit_cast<TNode<Object>>(t1879());
      Goto(label__done_899_1691);
      BIND(label__False_526);
            *t1884_898 = implicit_cast<TNode<Object>>(t1880());
      Goto(label__done_899_1691);
      BIND(label__done_899_1691);
    }
    TVARIABLE(Object, value_311_impl);
    auto value_311 = &value_311_impl;
    USE(value_311);
    *value_311 = implicit_cast<TNode<Object>>((*t1884_898).value());
    // ../../src/builtins/data-view.tq:830:5
    auto t1889 = [=]() {
      int31_t t1891 = 2;
      TNode<IntPtrT> t1892 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1891)));
      TNode<Object> t1893 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1892)));
      return implicit_cast<TNode<Object>>(t1893);
    };
    auto t1890 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1894_900_impl);
    auto t1894_900 = &t1894_900_impl;
    USE(t1894_900);
    {
      Label label__True_527_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__True_527 = &label__True_527_impl;
      USE(label__True_527);
      Label label__False_528_impl(this, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__False_528 = &label__False_528_impl;
      USE(label__False_528);
      Label label__done_901_1692_impl(this, {t1894_900}, compiler::CodeAssemblerLabel::kNonDeferred);
      Label* label__done_901_1692 = &label__done_901_1692_impl;
      USE(label__done_901_1692);
      TNode<IntPtrT> t1895 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1896 = 2;
      TNode<IntPtrT> t1897 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(implicit_cast<int31_t>(t1896)));
      TNode<BoolT> t1898 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1895), implicit_cast<TNode<IntPtrT>>(t1897)));
      USE(implicit_cast<TNode<BoolT>>(t1898));
      Branch(implicit_cast<TNode<BoolT>>(t1898), label__True_527, label__False_528);
      BIND(label__True_527);
            *t1894_900 = implicit_cast<TNode<Object>>(t1889());
      Goto(label__done_901_1692);
      BIND(label__False_528);
            *t1894_900 = implicit_cast<TNode<Object>>(t1890());
      Goto(label__done_901_1692);
      BIND(label__done_901_1692);
    }
    TVARIABLE(Object, isLittleEndian_312_impl);
    auto isLittleEndian_312 = &isLittleEndian_312_impl;
    USE(isLittleEndian_312);
    *isLittleEndian_312 = implicit_cast<TNode<Object>>((*t1894_900).value());
    // ../../src/builtins/data-view.tq:832:5
    TNode<Object> t1899 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_310).value()), implicit_cast<TNode<Object>>((*value_311).value()), implicit_cast<TNode<Object>>((*isLittleEndian_312).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1899));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1899));
  }
}

}  // namespace internal
}  // namespace v8

