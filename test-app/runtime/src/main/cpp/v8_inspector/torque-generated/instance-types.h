#ifndef V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_
#define V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_

// Instance types for all classes except for those that use InstanceType as flags.
#define TORQUE_ASSIGNED_INSTANCE_TYPES(V) \
  V(FIRST_HEAP_OBJECT_TYPE, 0) \
    V(FIRST_PRIMITIVE_HEAP_OBJECT_TYPE, 0) \
      V(FIRST_NAME_TYPE, 0) \
        V(FIRST_STRING_TYPE, 0) \
        V(SYMBOL_TYPE, 64) \
      V(LAST_NAME_TYPE, 64) \
      V(BIG_INT_BASE_TYPE, 65) \
      V(HEAP_NUMBER_TYPE, 66) \
      V(ODDBALL_TYPE, 67) \
    V(LAST_PRIMITIVE_HEAP_OBJECT_TYPE, 67) \
    V(FIRST_ABSTRACT_INTERNAL_CLASS_TYPE, 68) \
      V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE, 68) \
      V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE, 69) \
    V(LAST_ABSTRACT_INTERNAL_CLASS_TYPE, 69) \
    V(FOREIGN_TYPE, 70) \
    V(FIRST_STRUCT_TYPE, 71) \
      V(FIRST_MICROTASK_TYPE, 71) \
        V(FIRST_PROMISE_REACTION_JOB_TASK_TYPE, 71) \
          V(PROMISE_FULFILL_REACTION_JOB_TASK_TYPE, 71) \
          V(PROMISE_REJECT_REACTION_JOB_TASK_TYPE, 72) \
        V(LAST_PROMISE_REACTION_JOB_TASK_TYPE, 72) \
        V(CALLABLE_TASK_TYPE, 73) \
        V(CALLBACK_TASK_TYPE, 74) \
        V(PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE, 75) \
      V(LAST_MICROTASK_TYPE, 75) \
      V(FIRST_DATA_HANDLER_TYPE, 76) \
        V(LOAD_HANDLER_TYPE, 76) \
        V(STORE_HANDLER_TYPE, 77) \
      V(LAST_DATA_HANDLER_TYPE, 77) \
      V(FIRST_TEMPLATE_INFO_TYPE, 78) \
        V(FUNCTION_TEMPLATE_INFO_TYPE, 78) \
        V(OBJECT_TEMPLATE_INFO_TYPE, 79) \
      V(LAST_TEMPLATE_INFO_TYPE, 79) \
      V(ACCESS_CHECK_INFO_TYPE, 80) \
      V(ACCESSOR_INFO_TYPE, 81) \
      V(ACCESSOR_PAIR_TYPE, 82) \
      V(ALIASED_ARGUMENTS_ENTRY_TYPE, 83) \
      V(ALLOCATION_MEMENTO_TYPE, 84) \
      V(ALLOCATION_SITE_TYPE, 85) \
      V(ARRAY_BOILERPLATE_DESCRIPTION_TYPE, 86) \
      V(ASYNC_GENERATOR_REQUEST_TYPE, 87) \
      V(BASELINE_DATA_TYPE, 88) \
      V(BREAK_POINT_TYPE, 89) \
      V(BREAK_POINT_INFO_TYPE, 90) \
      V(CACHED_TEMPLATE_OBJECT_TYPE, 91) \
      V(CALL_HANDLER_INFO_TYPE, 92) \
      V(CLASS_POSITIONS_TYPE, 93) \
      V(DEBUG_INFO_TYPE, 94) \
      V(ENUM_CACHE_TYPE, 95) \
      V(FEEDBACK_CELL_TYPE, 96) \
      V(FUNCTION_TEMPLATE_RARE_DATA_TYPE, 97) \
      V(INTERCEPTOR_INFO_TYPE, 98) \
      V(INTERPRETER_DATA_TYPE, 99) \
      V(MODULE_REQUEST_TYPE, 100) \
      V(PROMISE_CAPABILITY_TYPE, 101) \
      V(PROMISE_REACTION_TYPE, 102) \
      V(PROPERTY_DESCRIPTOR_OBJECT_TYPE, 103) \
      V(PROTOTYPE_INFO_TYPE, 104) \
      V(REG_EXP_BOILERPLATE_DESCRIPTION_TYPE, 105) \
      V(SCRIPT_TYPE, 106) \
      V(SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE, 107) \
      V(STACK_FRAME_INFO_TYPE, 108) \
      V(TEMPLATE_OBJECT_DESCRIPTION_TYPE, 109) \
      V(TUPLE2_TYPE, 110) \
    V(LAST_STRUCT_TYPE, 110) \
    V(FIRST_FIXED_ARRAY_BASE_TYPE, 111) \
      V(FIRST_FIXED_ARRAY_TYPE, 111) \
        V(FIXED_ARRAY_TYPE, 111) \
        V(FIRST_HASH_TABLE_TYPE, 112) \
          V(HASH_TABLE_TYPE, 112) \
          V(EPHEMERON_HASH_TABLE_TYPE, 113) \
          V(GLOBAL_DICTIONARY_TYPE, 114) \
          V(NAME_DICTIONARY_TYPE, 115) \
          V(NUMBER_DICTIONARY_TYPE, 116) \
          V(ORDERED_HASH_MAP_TYPE, 117) \
          V(ORDERED_HASH_SET_TYPE, 118) \
          V(ORDERED_NAME_DICTIONARY_TYPE, 119) \
          V(SIMPLE_NUMBER_DICTIONARY_TYPE, 120) \
        V(LAST_HASH_TABLE_TYPE, 120) \
        V(CLOSURE_FEEDBACK_CELL_ARRAY_TYPE, 121) \
        V(OBJECT_BOILERPLATE_DESCRIPTION_TYPE, 122) \
        V(SCRIPT_CONTEXT_TABLE_TYPE, 123) \
      V(LAST_FIXED_ARRAY_TYPE, 123) \
      V(BYTE_ARRAY_TYPE, 124) \
      V(BYTECODE_ARRAY_TYPE, 125) \
      V(FIXED_DOUBLE_ARRAY_TYPE, 126) \
      V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE, 127) \
      V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE, 128) \
    V(LAST_FIXED_ARRAY_BASE_TYPE, 128) \
    V(FIRST_CONTEXT_TYPE, 129) \
      V(AWAIT_CONTEXT_TYPE, 129) \
      V(BLOCK_CONTEXT_TYPE, 130) \
      V(CATCH_CONTEXT_TYPE, 131) \
      V(DEBUG_EVALUATE_CONTEXT_TYPE, 132) \
      V(EVAL_CONTEXT_TYPE, 133) \
      V(FUNCTION_CONTEXT_TYPE, 134) \
      V(MODULE_CONTEXT_TYPE, 135) \
      V(NATIVE_CONTEXT_TYPE, 136) \
      V(SCRIPT_CONTEXT_TYPE, 137) \
      V(WITH_CONTEXT_TYPE, 138) \
    V(LAST_CONTEXT_TYPE, 138) \
    V(FIRST_EXPORTED_SUB_CLASS_BASE_TYPE, 139) \
      V(EXPORTED_SUB_CLASS_BASE_TYPE, 139) \
      V(EXPORTED_SUB_CLASS_TYPE, 140) \
      V(EXPORTED_SUB_CLASS2_TYPE, 141) \
    V(LAST_EXPORTED_SUB_CLASS_BASE_TYPE, 141) \
    V(FIRST_SMALL_ORDERED_HASH_TABLE_TYPE, 142) \
      V(SMALL_ORDERED_HASH_MAP_TYPE, 142) \
      V(SMALL_ORDERED_HASH_SET_TYPE, 143) \
      V(SMALL_ORDERED_NAME_DICTIONARY_TYPE, 144) \
    V(LAST_SMALL_ORDERED_HASH_TABLE_TYPE, 144) \
    V(FIRST_DESCRIPTOR_ARRAY_TYPE, 145) \
      V(DESCRIPTOR_ARRAY_TYPE, 145) \
      V(STRONG_DESCRIPTOR_ARRAY_TYPE, 146) \
    V(LAST_DESCRIPTOR_ARRAY_TYPE, 146) \
    V(FIRST_MODULE_TYPE, 147) \
      V(SOURCE_TEXT_MODULE_TYPE, 147) \
      V(SYNTHETIC_MODULE_TYPE, 148) \
    V(LAST_MODULE_TYPE, 148) \
    V(FIRST_UNCOMPILED_DATA_TYPE, 149) \
      V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, 149) \
      V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, 150) \
    V(LAST_UNCOMPILED_DATA_TYPE, 150) \
    V(FIRST_WEAK_FIXED_ARRAY_TYPE, 151) \
      V(WEAK_FIXED_ARRAY_TYPE, 151) \
      V(TRANSITION_ARRAY_TYPE, 152) \
    V(LAST_WEAK_FIXED_ARRAY_TYPE, 152) \
    V(CELL_TYPE, 153) \
    V(CODE_TYPE, 154) \
    V(CODE_DATA_CONTAINER_TYPE, 155) \
    V(COVERAGE_INFO_TYPE, 156) \
    V(EMBEDDER_DATA_ARRAY_TYPE, 157) \
    V(FEEDBACK_METADATA_TYPE, 158) \
    V(FEEDBACK_VECTOR_TYPE, 159) \
    V(FILLER_TYPE, 160) \
    V(FREE_SPACE_TYPE, 161) \
    V(INTERNAL_CLASS_TYPE, 162) \
    V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE, 163) \
    V(MAP_TYPE, 164) \
    V(MEGA_DOM_HANDLER_TYPE, 165) \
    V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE, 166) \
    V(PREPARSE_DATA_TYPE, 167) \
    V(PROPERTY_ARRAY_TYPE, 168) \
    V(PROPERTY_CELL_TYPE, 169) \
    V(SCOPE_INFO_TYPE, 170) \
    V(SHARED_FUNCTION_INFO_TYPE, 171) \
    V(SMI_BOX_TYPE, 172) \
    V(SMI_PAIR_TYPE, 173) \
    V(SORT_STATE_TYPE, 174) \
    V(SWISS_NAME_DICTIONARY_TYPE, 175) \
    V(WEAK_ARRAY_LIST_TYPE, 176) \
    V(WEAK_CELL_TYPE, 177) \
    V(FIRST_JS_RECEIVER_TYPE, 178) \
      V(JS_PROXY_TYPE, 178) \
      V(FIRST_JS_OBJECT_TYPE, 179) \
        V(JS_OBJECT_TYPE, 1057) \
        V(FIRST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, 179) \
          V(FIRST_JS_SPECIAL_OBJECT_TYPE, 179) \
            V(JS_GLOBAL_OBJECT_TYPE, 179) \
            V(JS_GLOBAL_PROXY_TYPE, 180) \
            V(JS_MODULE_NAMESPACE_TYPE, 181) \
            V(JS_SPECIAL_API_OBJECT_TYPE, 1040) \
          V(LAST_JS_SPECIAL_OBJECT_TYPE, 1040) \
          V(JS_PRIMITIVE_WRAPPER_TYPE, 1041) \
        V(LAST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, 1041) \
        V(FIRST_JS_PROTOTYPE_TYPE, 1042) \
          V(JS_ARRAY_ITERATOR_PROTOTYPE_TYPE, 1042) \
          V(JS_ITERATOR_PROTOTYPE_TYPE, 1043) \
          V(JS_MAP_ITERATOR_PROTOTYPE_TYPE, 1044) \
          V(JS_OBJECT_PROTOTYPE_TYPE, 1045) \
          V(JS_PROMISE_PROTOTYPE_TYPE, 1046) \
          V(JS_REG_EXP_PROTOTYPE_TYPE, 1047) \
          V(JS_SET_ITERATOR_PROTOTYPE_TYPE, 1048) \
          V(JS_SET_PROTOTYPE_TYPE, 1049) \
          V(JS_STRING_ITERATOR_PROTOTYPE_TYPE, 1050) \
          V(JS_TYPED_ARRAY_PROTOTYPE_TYPE, 1051) \
        V(LAST_JS_PROTOTYPE_TYPE, 1051) \
        V(FIRST_JS_GENERATOR_OBJECT_TYPE, 1052) \
          V(JS_GENERATOR_OBJECT_TYPE, 1052) \
          V(JS_ASYNC_FUNCTION_OBJECT_TYPE, 1053) \
          V(JS_ASYNC_GENERATOR_OBJECT_TYPE, 1054) \
        V(LAST_JS_GENERATOR_OBJECT_TYPE, 1054) \
        V(JS_ARGUMENTS_OBJECT_TYPE, 1055) \
        V(JS_API_OBJECT_TYPE, 1056) \
        V(FIRST_JS_FUNCTION_OR_BOUND_FUNCTION_TYPE, 1058) \
          V(JS_BOUND_FUNCTION_TYPE, 1058) \
          V(FIRST_JS_FUNCTION_TYPE, 1059) \
            V(JS_FUNCTION_TYPE, 1059) \
            V(FIRST_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1060) \
              V(BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1060) \
              V(BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1061) \
              V(FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1062) \
              V(FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1063) \
              V(INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1064) \
              V(INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1065) \
              V(INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1066) \
              V(UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1067) \
              V(UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1068) \
              V(UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1069) \
              V(UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1070) \
            V(LAST_TYPED_ARRAY_CONSTRUCTOR_TYPE, 1070) \
            V(JS_ARRAY_CONSTRUCTOR_TYPE, 1071) \
            V(JS_PROMISE_CONSTRUCTOR_TYPE, 1072) \
            V(JS_REG_EXP_CONSTRUCTOR_TYPE, 1073) \
          V(LAST_JS_FUNCTION_TYPE, 1073) \
        V(LAST_JS_FUNCTION_OR_BOUND_FUNCTION_TYPE, 1073) \
        V(FIRST_JS_COLLECTION_ITERATOR_TYPE, 1074) \
          V(FIRST_JS_MAP_ITERATOR_TYPE, 1074) \
            V(JS_MAP_KEY_ITERATOR_TYPE, 1074) \
            V(JS_MAP_KEY_VALUE_ITERATOR_TYPE, 1075) \
            V(JS_MAP_VALUE_ITERATOR_TYPE, 1076) \
          V(LAST_JS_MAP_ITERATOR_TYPE, 1076) \
          V(FIRST_JS_SET_ITERATOR_TYPE, 1077) \
            V(JS_SET_KEY_VALUE_ITERATOR_TYPE, 1077) \
            V(JS_SET_VALUE_ITERATOR_TYPE, 1078) \
          V(LAST_JS_SET_ITERATOR_TYPE, 1078) \
        V(LAST_JS_COLLECTION_ITERATOR_TYPE, 1078) \
        V(FIRST_JS_ARRAY_BUFFER_VIEW_TYPE, 1079) \
          V(JS_DATA_VIEW_TYPE, 1079) \
          V(JS_TYPED_ARRAY_TYPE, 1080) \
        V(LAST_JS_ARRAY_BUFFER_VIEW_TYPE, 1080) \
        V(FIRST_JS_COLLECTION_TYPE, 1081) \
          V(JS_MAP_TYPE, 1081) \
          V(JS_SET_TYPE, 1082) \
        V(LAST_JS_COLLECTION_TYPE, 1082) \
        V(FIRST_JS_WEAK_COLLECTION_TYPE, 1083) \
          V(JS_WEAK_MAP_TYPE, 1083) \
          V(JS_WEAK_SET_TYPE, 1084) \
        V(LAST_JS_WEAK_COLLECTION_TYPE, 1084) \
        V(JS_ARRAY_TYPE, 1085) \
        V(JS_ARRAY_BUFFER_TYPE, 1086) \
        V(JS_ARRAY_ITERATOR_TYPE, 1087) \
        V(JS_ASYNC_FROM_SYNC_ITERATOR_TYPE, 1088) \
        V(JS_CONTEXT_EXTENSION_OBJECT_TYPE, 1089) \
        V(JS_DATE_TYPE, 1090) \
        V(JS_ERROR_TYPE, 1091) \
        V(JS_FINALIZATION_REGISTRY_TYPE, 1092) \
        V(JS_MESSAGE_OBJECT_TYPE, 1093) \
        V(JS_PROMISE_TYPE, 1094) \
        V(JS_REG_EXP_TYPE, 1095) \
        V(JS_REG_EXP_STRING_ITERATOR_TYPE, 1096) \
        V(JS_STRING_ITERATOR_TYPE, 1097) \
        V(JS_WEAK_REF_TYPE, 1098) \
      V(LAST_JS_OBJECT_TYPE, 1098) \
    V(LAST_JS_RECEIVER_TYPE, 1098) \
  V(LAST_HEAP_OBJECT_TYPE, 1098) \

// Instance types for all classes except for those that use
// InstanceType as flags.
#define TORQUE_ASSIGNED_INSTANCE_TYPE_LIST(V) \
  V(SYMBOL_TYPE) \
  V(BIG_INT_BASE_TYPE) \
  V(HEAP_NUMBER_TYPE) \
  V(ODDBALL_TYPE) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE) \
  V(FOREIGN_TYPE) \
  V(PROMISE_FULFILL_REACTION_JOB_TASK_TYPE) \
  V(PROMISE_REJECT_REACTION_JOB_TASK_TYPE) \
  V(CALLABLE_TASK_TYPE) \
  V(CALLBACK_TASK_TYPE) \
  V(PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE) \
  V(LOAD_HANDLER_TYPE) \
  V(STORE_HANDLER_TYPE) \
  V(FUNCTION_TEMPLATE_INFO_TYPE) \
  V(OBJECT_TEMPLATE_INFO_TYPE) \
  V(ACCESS_CHECK_INFO_TYPE) \
  V(ACCESSOR_INFO_TYPE) \
  V(ACCESSOR_PAIR_TYPE) \
  V(ALIASED_ARGUMENTS_ENTRY_TYPE) \
  V(ALLOCATION_MEMENTO_TYPE) \
  V(ALLOCATION_SITE_TYPE) \
  V(ARRAY_BOILERPLATE_DESCRIPTION_TYPE) \
  V(ASYNC_GENERATOR_REQUEST_TYPE) \
  V(BASELINE_DATA_TYPE) \
  V(BREAK_POINT_TYPE) \
  V(BREAK_POINT_INFO_TYPE) \
  V(CACHED_TEMPLATE_OBJECT_TYPE) \
  V(CALL_HANDLER_INFO_TYPE) \
  V(CLASS_POSITIONS_TYPE) \
  V(DEBUG_INFO_TYPE) \
  V(ENUM_CACHE_TYPE) \
  V(FEEDBACK_CELL_TYPE) \
  V(FUNCTION_TEMPLATE_RARE_DATA_TYPE) \
  V(INTERCEPTOR_INFO_TYPE) \
  V(INTERPRETER_DATA_TYPE) \
  V(MODULE_REQUEST_TYPE) \
  V(PROMISE_CAPABILITY_TYPE) \
  V(PROMISE_REACTION_TYPE) \
  V(PROPERTY_DESCRIPTOR_OBJECT_TYPE) \
  V(PROTOTYPE_INFO_TYPE) \
  V(REG_EXP_BOILERPLATE_DESCRIPTION_TYPE) \
  V(SCRIPT_TYPE) \
  V(SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE) \
  V(STACK_FRAME_INFO_TYPE) \
  V(TEMPLATE_OBJECT_DESCRIPTION_TYPE) \
  V(TUPLE2_TYPE) \
  V(FIXED_ARRAY_TYPE) \
  V(HASH_TABLE_TYPE) \
  V(EPHEMERON_HASH_TABLE_TYPE) \
  V(GLOBAL_DICTIONARY_TYPE) \
  V(NAME_DICTIONARY_TYPE) \
  V(NUMBER_DICTIONARY_TYPE) \
  V(ORDERED_HASH_MAP_TYPE) \
  V(ORDERED_HASH_SET_TYPE) \
  V(ORDERED_NAME_DICTIONARY_TYPE) \
  V(SIMPLE_NUMBER_DICTIONARY_TYPE) \
  V(CLOSURE_FEEDBACK_CELL_ARRAY_TYPE) \
  V(OBJECT_BOILERPLATE_DESCRIPTION_TYPE) \
  V(SCRIPT_CONTEXT_TABLE_TYPE) \
  V(BYTE_ARRAY_TYPE) \
  V(BYTECODE_ARRAY_TYPE) \
  V(FIXED_DOUBLE_ARRAY_TYPE) \
  V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE) \
  V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE) \
  V(AWAIT_CONTEXT_TYPE) \
  V(BLOCK_CONTEXT_TYPE) \
  V(CATCH_CONTEXT_TYPE) \
  V(DEBUG_EVALUATE_CONTEXT_TYPE) \
  V(EVAL_CONTEXT_TYPE) \
  V(FUNCTION_CONTEXT_TYPE) \
  V(MODULE_CONTEXT_TYPE) \
  V(NATIVE_CONTEXT_TYPE) \
  V(SCRIPT_CONTEXT_TYPE) \
  V(WITH_CONTEXT_TYPE) \
  V(EXPORTED_SUB_CLASS_BASE_TYPE) \
  V(EXPORTED_SUB_CLASS_TYPE) \
  V(EXPORTED_SUB_CLASS2_TYPE) \
  V(SMALL_ORDERED_HASH_MAP_TYPE) \
  V(SMALL_ORDERED_HASH_SET_TYPE) \
  V(SMALL_ORDERED_NAME_DICTIONARY_TYPE) \
  V(DESCRIPTOR_ARRAY_TYPE) \
  V(STRONG_DESCRIPTOR_ARRAY_TYPE) \
  V(SOURCE_TEXT_MODULE_TYPE) \
  V(SYNTHETIC_MODULE_TYPE) \
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE) \
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE) \
  V(WEAK_FIXED_ARRAY_TYPE) \
  V(TRANSITION_ARRAY_TYPE) \
  V(CELL_TYPE) \
  V(CODE_TYPE) \
  V(CODE_DATA_CONTAINER_TYPE) \
  V(COVERAGE_INFO_TYPE) \
  V(EMBEDDER_DATA_ARRAY_TYPE) \
  V(FEEDBACK_METADATA_TYPE) \
  V(FEEDBACK_VECTOR_TYPE) \
  V(FILLER_TYPE) \
  V(FREE_SPACE_TYPE) \
  V(INTERNAL_CLASS_TYPE) \
  V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE) \
  V(MAP_TYPE) \
  V(MEGA_DOM_HANDLER_TYPE) \
  V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE) \
  V(PREPARSE_DATA_TYPE) \
  V(PROPERTY_ARRAY_TYPE) \
  V(PROPERTY_CELL_TYPE) \
  V(SCOPE_INFO_TYPE) \
  V(SHARED_FUNCTION_INFO_TYPE) \
  V(SMI_BOX_TYPE) \
  V(SMI_PAIR_TYPE) \
  V(SORT_STATE_TYPE) \
  V(SWISS_NAME_DICTIONARY_TYPE) \
  V(WEAK_ARRAY_LIST_TYPE) \
  V(WEAK_CELL_TYPE) \
  V(JS_PROXY_TYPE) \
  V(JS_OBJECT_TYPE) \
  V(JS_GLOBAL_OBJECT_TYPE) \
  V(JS_GLOBAL_PROXY_TYPE) \
  V(JS_MODULE_NAMESPACE_TYPE) \
  V(JS_SPECIAL_API_OBJECT_TYPE) \
  V(JS_PRIMITIVE_WRAPPER_TYPE) \
  V(JS_ARRAY_ITERATOR_PROTOTYPE_TYPE) \
  V(JS_ITERATOR_PROTOTYPE_TYPE) \
  V(JS_MAP_ITERATOR_PROTOTYPE_TYPE) \
  V(JS_OBJECT_PROTOTYPE_TYPE) \
  V(JS_PROMISE_PROTOTYPE_TYPE) \
  V(JS_REG_EXP_PROTOTYPE_TYPE) \
  V(JS_SET_ITERATOR_PROTOTYPE_TYPE) \
  V(JS_SET_PROTOTYPE_TYPE) \
  V(JS_STRING_ITERATOR_PROTOTYPE_TYPE) \
  V(JS_TYPED_ARRAY_PROTOTYPE_TYPE) \
  V(JS_GENERATOR_OBJECT_TYPE) \
  V(JS_ASYNC_FUNCTION_OBJECT_TYPE) \
  V(JS_ASYNC_GENERATOR_OBJECT_TYPE) \
  V(JS_ARGUMENTS_OBJECT_TYPE) \
  V(JS_API_OBJECT_TYPE) \
  V(JS_BOUND_FUNCTION_TYPE) \
  V(JS_FUNCTION_TYPE) \
  V(BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(JS_ARRAY_CONSTRUCTOR_TYPE) \
  V(JS_PROMISE_CONSTRUCTOR_TYPE) \
  V(JS_REG_EXP_CONSTRUCTOR_TYPE) \
  V(JS_MAP_KEY_ITERATOR_TYPE) \
  V(JS_MAP_KEY_VALUE_ITERATOR_TYPE) \
  V(JS_MAP_VALUE_ITERATOR_TYPE) \
  V(JS_SET_KEY_VALUE_ITERATOR_TYPE) \
  V(JS_SET_VALUE_ITERATOR_TYPE) \
  V(JS_DATA_VIEW_TYPE) \
  V(JS_TYPED_ARRAY_TYPE) \
  V(JS_MAP_TYPE) \
  V(JS_SET_TYPE) \
  V(JS_WEAK_MAP_TYPE) \
  V(JS_WEAK_SET_TYPE) \
  V(JS_ARRAY_TYPE) \
  V(JS_ARRAY_BUFFER_TYPE) \
  V(JS_ARRAY_ITERATOR_TYPE) \
  V(JS_ASYNC_FROM_SYNC_ITERATOR_TYPE) \
  V(JS_CONTEXT_EXTENSION_OBJECT_TYPE) \
  V(JS_DATE_TYPE) \
  V(JS_ERROR_TYPE) \
  V(JS_FINALIZATION_REGISTRY_TYPE) \
  V(JS_MESSAGE_OBJECT_TYPE) \
  V(JS_PROMISE_TYPE) \
  V(JS_REG_EXP_TYPE) \
  V(JS_REG_EXP_STRING_ITERATOR_TYPE) \
  V(JS_STRING_ITERATOR_TYPE) \
  V(JS_WEAK_REF_TYPE) \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that have
// full Torque definitions.
#define TORQUE_INSTANCE_CHECKERS_SINGLE_FULLY_DEFINED(V) \
  V(Symbol, SYMBOL_TYPE) \
  V(BigIntBase, BIG_INT_BASE_TYPE) \
  V(HeapNumber, HEAP_NUMBER_TYPE) \
  V(Oddball, ODDBALL_TYPE) \
  V(AbstractInternalClassSubclass1, ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE) \
  V(AbstractInternalClassSubclass2, ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE) \
  V(Foreign, FOREIGN_TYPE) \
  V(PromiseFulfillReactionJobTask, PROMISE_FULFILL_REACTION_JOB_TASK_TYPE) \
  V(PromiseRejectReactionJobTask, PROMISE_REJECT_REACTION_JOB_TASK_TYPE) \
  V(CallableTask, CALLABLE_TASK_TYPE) \
  V(CallbackTask, CALLBACK_TASK_TYPE) \
  V(PromiseResolveThenableJobTask, PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE) \
  V(FunctionTemplateInfo, FUNCTION_TEMPLATE_INFO_TYPE) \
  V(ObjectTemplateInfo, OBJECT_TEMPLATE_INFO_TYPE) \
  V(AccessCheckInfo, ACCESS_CHECK_INFO_TYPE) \
  V(AccessorInfo, ACCESSOR_INFO_TYPE) \
  V(AccessorPair, ACCESSOR_PAIR_TYPE) \
  V(AliasedArgumentsEntry, ALIASED_ARGUMENTS_ENTRY_TYPE) \
  V(AllocationMemento, ALLOCATION_MEMENTO_TYPE) \
  V(ArrayBoilerplateDescription, ARRAY_BOILERPLATE_DESCRIPTION_TYPE) \
  V(AsyncGeneratorRequest, ASYNC_GENERATOR_REQUEST_TYPE) \
  V(BaselineData, BASELINE_DATA_TYPE) \
  V(BreakPoint, BREAK_POINT_TYPE) \
  V(BreakPointInfo, BREAK_POINT_INFO_TYPE) \
  V(CachedTemplateObject, CACHED_TEMPLATE_OBJECT_TYPE) \
  V(CallHandlerInfo, CALL_HANDLER_INFO_TYPE) \
  V(ClassPositions, CLASS_POSITIONS_TYPE) \
  V(DebugInfo, DEBUG_INFO_TYPE) \
  V(EnumCache, ENUM_CACHE_TYPE) \
  V(FeedbackCell, FEEDBACK_CELL_TYPE) \
  V(FunctionTemplateRareData, FUNCTION_TEMPLATE_RARE_DATA_TYPE) \
  V(InterceptorInfo, INTERCEPTOR_INFO_TYPE) \
  V(InterpreterData, INTERPRETER_DATA_TYPE) \
  V(ModuleRequest, MODULE_REQUEST_TYPE) \
  V(PromiseCapability, PROMISE_CAPABILITY_TYPE) \
  V(PromiseReaction, PROMISE_REACTION_TYPE) \
  V(PropertyDescriptorObject, PROPERTY_DESCRIPTOR_OBJECT_TYPE) \
  V(PrototypeInfo, PROTOTYPE_INFO_TYPE) \
  V(RegExpBoilerplateDescription, REG_EXP_BOILERPLATE_DESCRIPTION_TYPE) \
  V(Script, SCRIPT_TYPE) \
  V(SourceTextModuleInfoEntry, SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE) \
  V(StackFrameInfo, STACK_FRAME_INFO_TYPE) \
  V(TemplateObjectDescription, TEMPLATE_OBJECT_DESCRIPTION_TYPE) \
  V(Tuple2, TUPLE2_TYPE) \
  V(ByteArray, BYTE_ARRAY_TYPE) \
  V(BytecodeArray, BYTECODE_ARRAY_TYPE) \
  V(FixedDoubleArray, FIXED_DOUBLE_ARRAY_TYPE) \
  V(InternalClassWithSmiElements, INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE) \
  V(SloppyArgumentsElements, SLOPPY_ARGUMENTS_ELEMENTS_TYPE) \
  V(ExportedSubClass, EXPORTED_SUB_CLASS_TYPE) \
  V(ExportedSubClass2, EXPORTED_SUB_CLASS2_TYPE) \
  V(SmallOrderedHashMap, SMALL_ORDERED_HASH_MAP_TYPE) \
  V(SmallOrderedHashSet, SMALL_ORDERED_HASH_SET_TYPE) \
  V(SmallOrderedNameDictionary, SMALL_ORDERED_NAME_DICTIONARY_TYPE) \
  V(StrongDescriptorArray, STRONG_DESCRIPTOR_ARRAY_TYPE) \
  V(SourceTextModule, SOURCE_TEXT_MODULE_TYPE) \
  V(SyntheticModule, SYNTHETIC_MODULE_TYPE) \
  V(UncompiledDataWithPreparseData, UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE) \
  V(UncompiledDataWithoutPreparseData, UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE) \
  V(Cell, CELL_TYPE) \
  V(CoverageInfo, COVERAGE_INFO_TYPE) \
  V(EmbedderDataArray, EMBEDDER_DATA_ARRAY_TYPE) \
  V(FeedbackVector, FEEDBACK_VECTOR_TYPE) \
  V(FreeSpace, FREE_SPACE_TYPE) \
  V(InternalClass, INTERNAL_CLASS_TYPE) \
  V(InternalClassWithStructElements, INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE) \
  V(Map, MAP_TYPE) \
  V(MegaDomHandler, MEGA_DOM_HANDLER_TYPE) \
  V(OnHeapBasicBlockProfilerData, ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE) \
  V(PreparseData, PREPARSE_DATA_TYPE) \
  V(PropertyArray, PROPERTY_ARRAY_TYPE) \
  V(PropertyCell, PROPERTY_CELL_TYPE) \
  V(ScopeInfo, SCOPE_INFO_TYPE) \
  V(SharedFunctionInfo, SHARED_FUNCTION_INFO_TYPE) \
  V(SmiBox, SMI_BOX_TYPE) \
  V(SmiPair, SMI_PAIR_TYPE) \
  V(SortState, SORT_STATE_TYPE) \
  V(SwissNameDictionary, SWISS_NAME_DICTIONARY_TYPE) \
  V(WeakArrayList, WEAK_ARRAY_LIST_TYPE) \
  V(WeakCell, WEAK_CELL_TYPE) \
  V(JSProxy, JS_PROXY_TYPE) \
  V(JSGlobalObject, JS_GLOBAL_OBJECT_TYPE) \
  V(JSGlobalProxy, JS_GLOBAL_PROXY_TYPE) \
  V(JSModuleNamespace, JS_MODULE_NAMESPACE_TYPE) \
  V(JSPrimitiveWrapper, JS_PRIMITIVE_WRAPPER_TYPE) \
  V(JSAsyncFunctionObject, JS_ASYNC_FUNCTION_OBJECT_TYPE) \
  V(JSAsyncGeneratorObject, JS_ASYNC_GENERATOR_OBJECT_TYPE) \
  V(JSArgumentsObject, JS_ARGUMENTS_OBJECT_TYPE) \
  V(JSBoundFunction, JS_BOUND_FUNCTION_TYPE) \
  V(JSDataView, JS_DATA_VIEW_TYPE) \
  V(JSTypedArray, JS_TYPED_ARRAY_TYPE) \
  V(JSMap, JS_MAP_TYPE) \
  V(JSSet, JS_SET_TYPE) \
  V(JSWeakMap, JS_WEAK_MAP_TYPE) \
  V(JSWeakSet, JS_WEAK_SET_TYPE) \
  V(JSArray, JS_ARRAY_TYPE) \
  V(JSArrayBuffer, JS_ARRAY_BUFFER_TYPE) \
  V(JSArrayIterator, JS_ARRAY_ITERATOR_TYPE) \
  V(JSAsyncFromSyncIterator, JS_ASYNC_FROM_SYNC_ITERATOR_TYPE) \
  V(JSDate, JS_DATE_TYPE) \
  V(JSFinalizationRegistry, JS_FINALIZATION_REGISTRY_TYPE) \
  V(JSMessageObject, JS_MESSAGE_OBJECT_TYPE) \
  V(JSPromise, JS_PROMISE_TYPE) \
  V(JSRegExp, JS_REG_EXP_TYPE) \
  V(JSRegExpStringIterator, JS_REG_EXP_STRING_ITERATOR_TYPE) \
  V(JSStringIterator, JS_STRING_ITERATOR_TYPE) \
  V(JSWeakRef, JS_WEAK_REF_TYPE) \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that have
// full Torque definitions and subclasses.
#define TORQUE_INSTANCE_CHECKERS_MULTIPLE_FULLY_DEFINED(V) \
  V(FixedArray, FIXED_ARRAY_TYPE) \
  V(ExportedSubClassBase, EXPORTED_SUB_CLASS_BASE_TYPE) \
  V(DescriptorArray, DESCRIPTOR_ARRAY_TYPE) \
  V(WeakFixedArray, WEAK_FIXED_ARRAY_TYPE) \
  V(JSObject, JS_OBJECT_TYPE) \
  V(JSGeneratorObject, JS_GENERATOR_OBJECT_TYPE) \
  V(JSFunction, JS_FUNCTION_TYPE) \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that are
// declared but not defined in Torque. These classes may
// correspond with actual C++ classes, but they are not
// guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_SINGLE_ONLY_DECLARED(V) \
  V(LoadHandler, LOAD_HANDLER_TYPE) \
  V(StoreHandler, STORE_HANDLER_TYPE) \
  V(AllocationSite, ALLOCATION_SITE_TYPE) \
  V(EphemeronHashTable, EPHEMERON_HASH_TABLE_TYPE) \
  V(GlobalDictionary, GLOBAL_DICTIONARY_TYPE) \
  V(NameDictionary, NAME_DICTIONARY_TYPE) \
  V(NumberDictionary, NUMBER_DICTIONARY_TYPE) \
  V(OrderedHashMap, ORDERED_HASH_MAP_TYPE) \
  V(OrderedHashSet, ORDERED_HASH_SET_TYPE) \
  V(OrderedNameDictionary, ORDERED_NAME_DICTIONARY_TYPE) \
  V(SimpleNumberDictionary, SIMPLE_NUMBER_DICTIONARY_TYPE) \
  V(ClosureFeedbackCellArray, CLOSURE_FEEDBACK_CELL_ARRAY_TYPE) \
  V(ObjectBoilerplateDescription, OBJECT_BOILERPLATE_DESCRIPTION_TYPE) \
  V(ScriptContextTable, SCRIPT_CONTEXT_TABLE_TYPE) \
  V(AwaitContext, AWAIT_CONTEXT_TYPE) \
  V(BlockContext, BLOCK_CONTEXT_TYPE) \
  V(CatchContext, CATCH_CONTEXT_TYPE) \
  V(DebugEvaluateContext, DEBUG_EVALUATE_CONTEXT_TYPE) \
  V(EvalContext, EVAL_CONTEXT_TYPE) \
  V(FunctionContext, FUNCTION_CONTEXT_TYPE) \
  V(ModuleContext, MODULE_CONTEXT_TYPE) \
  V(NativeContext, NATIVE_CONTEXT_TYPE) \
  V(ScriptContext, SCRIPT_CONTEXT_TYPE) \
  V(WithContext, WITH_CONTEXT_TYPE) \
  V(TransitionArray, TRANSITION_ARRAY_TYPE) \
  V(Code, CODE_TYPE) \
  V(CodeDataContainer, CODE_DATA_CONTAINER_TYPE) \
  V(FeedbackMetadata, FEEDBACK_METADATA_TYPE) \
  V(Filler, FILLER_TYPE) \
  V(JSSpecialApiObject, JS_SPECIAL_API_OBJECT_TYPE) \
  V(JSArrayIteratorPrototype, JS_ARRAY_ITERATOR_PROTOTYPE_TYPE) \
  V(JSIteratorPrototype, JS_ITERATOR_PROTOTYPE_TYPE) \
  V(JSMapIteratorPrototype, JS_MAP_ITERATOR_PROTOTYPE_TYPE) \
  V(JSObjectPrototype, JS_OBJECT_PROTOTYPE_TYPE) \
  V(JSPromisePrototype, JS_PROMISE_PROTOTYPE_TYPE) \
  V(JSRegExpPrototype, JS_REG_EXP_PROTOTYPE_TYPE) \
  V(JSSetIteratorPrototype, JS_SET_ITERATOR_PROTOTYPE_TYPE) \
  V(JSSetPrototype, JS_SET_PROTOTYPE_TYPE) \
  V(JSStringIteratorPrototype, JS_STRING_ITERATOR_PROTOTYPE_TYPE) \
  V(JSTypedArrayPrototype, JS_TYPED_ARRAY_PROTOTYPE_TYPE) \
  V(JSApiObject, JS_API_OBJECT_TYPE) \
  V(Bigint64TypedArrayConstructor, BIGINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Biguint64TypedArrayConstructor, BIGUINT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Float32TypedArrayConstructor, FLOAT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Float64TypedArrayConstructor, FLOAT64_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Int16TypedArrayConstructor, INT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Int32TypedArrayConstructor, INT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Int8TypedArrayConstructor, INT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Uint16TypedArrayConstructor, UINT16_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Uint32TypedArrayConstructor, UINT32_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Uint8ClampedTypedArrayConstructor, UINT8_CLAMPED_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(Uint8TypedArrayConstructor, UINT8_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(JSArrayConstructor, JS_ARRAY_CONSTRUCTOR_TYPE) \
  V(JSPromiseConstructor, JS_PROMISE_CONSTRUCTOR_TYPE) \
  V(JSRegExpConstructor, JS_REG_EXP_CONSTRUCTOR_TYPE) \
  V(JSMapKeyIterator, JS_MAP_KEY_ITERATOR_TYPE) \
  V(JSMapKeyValueIterator, JS_MAP_KEY_VALUE_ITERATOR_TYPE) \
  V(JSMapValueIterator, JS_MAP_VALUE_ITERATOR_TYPE) \
  V(JSSetKeyValueIterator, JS_SET_KEY_VALUE_ITERATOR_TYPE) \
  V(JSSetValueIterator, JS_SET_VALUE_ITERATOR_TYPE) \
  V(JSContextExtensionObject, JS_CONTEXT_EXTENSION_OBJECT_TYPE) \
  V(JSError, JS_ERROR_TYPE) \

// Pairs of (ClassName, INSTANCE_TYPE) for classes that are
// declared but not defined in Torque, and have subclasses.
// These classes may correspond with actual C++ classes, but
// they are not guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_MULTIPLE_ONLY_DECLARED(V) \
  V(HashTable, HASH_TABLE_TYPE) \

// Triples of (ClassName, FIRST_TYPE, LAST_TYPE) for classes
// that have full Torque definitions.
#define TORQUE_INSTANCE_CHECKERS_RANGE_FULLY_DEFINED(V) \
  V(String, FIRST_STRING_TYPE, LAST_STRING_TYPE) \
  V(Name, FIRST_NAME_TYPE, LAST_NAME_TYPE) \
  V(PrimitiveHeapObject, FIRST_PRIMITIVE_HEAP_OBJECT_TYPE, LAST_PRIMITIVE_HEAP_OBJECT_TYPE) \
  V(AbstractInternalClass, FIRST_ABSTRACT_INTERNAL_CLASS_TYPE, LAST_ABSTRACT_INTERNAL_CLASS_TYPE) \
  V(PromiseReactionJobTask, FIRST_PROMISE_REACTION_JOB_TASK_TYPE, LAST_PROMISE_REACTION_JOB_TASK_TYPE) \
  V(Microtask, FIRST_MICROTASK_TYPE, LAST_MICROTASK_TYPE) \
  V(DataHandler, FIRST_DATA_HANDLER_TYPE, LAST_DATA_HANDLER_TYPE) \
  V(TemplateInfo, FIRST_TEMPLATE_INFO_TYPE, LAST_TEMPLATE_INFO_TYPE) \
  V(Struct, FIRST_STRUCT_TYPE, LAST_STRUCT_TYPE) \
  V(FixedArray, FIRST_FIXED_ARRAY_TYPE, LAST_FIXED_ARRAY_TYPE) \
  V(FixedArrayBase, FIRST_FIXED_ARRAY_BASE_TYPE, LAST_FIXED_ARRAY_BASE_TYPE) \
  V(Context, FIRST_CONTEXT_TYPE, LAST_CONTEXT_TYPE) \
  V(ExportedSubClassBase, FIRST_EXPORTED_SUB_CLASS_BASE_TYPE, LAST_EXPORTED_SUB_CLASS_BASE_TYPE) \
  V(SmallOrderedHashTable, FIRST_SMALL_ORDERED_HASH_TABLE_TYPE, LAST_SMALL_ORDERED_HASH_TABLE_TYPE) \
  V(DescriptorArray, FIRST_DESCRIPTOR_ARRAY_TYPE, LAST_DESCRIPTOR_ARRAY_TYPE) \
  V(Module, FIRST_MODULE_TYPE, LAST_MODULE_TYPE) \
  V(UncompiledData, FIRST_UNCOMPILED_DATA_TYPE, LAST_UNCOMPILED_DATA_TYPE) \
  V(WeakFixedArray, FIRST_WEAK_FIXED_ARRAY_TYPE, LAST_WEAK_FIXED_ARRAY_TYPE) \
  V(JSSpecialObject, FIRST_JS_SPECIAL_OBJECT_TYPE, LAST_JS_SPECIAL_OBJECT_TYPE) \
  V(JSCustomElementsObject, FIRST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE, LAST_JS_CUSTOM_ELEMENTS_OBJECT_TYPE) \
  V(JSGeneratorObject, FIRST_JS_GENERATOR_OBJECT_TYPE, LAST_JS_GENERATOR_OBJECT_TYPE) \
  V(JSFunction, FIRST_JS_FUNCTION_TYPE, LAST_JS_FUNCTION_TYPE) \
  V(JSFunctionOrBoundFunction, FIRST_JS_FUNCTION_OR_BOUND_FUNCTION_TYPE, LAST_JS_FUNCTION_OR_BOUND_FUNCTION_TYPE) \
  V(JSCollectionIterator, FIRST_JS_COLLECTION_ITERATOR_TYPE, LAST_JS_COLLECTION_ITERATOR_TYPE) \
  V(JSArrayBufferView, FIRST_JS_ARRAY_BUFFER_VIEW_TYPE, LAST_JS_ARRAY_BUFFER_VIEW_TYPE) \
  V(JSCollection, FIRST_JS_COLLECTION_TYPE, LAST_JS_COLLECTION_TYPE) \
  V(JSWeakCollection, FIRST_JS_WEAK_COLLECTION_TYPE, LAST_JS_WEAK_COLLECTION_TYPE) \
  V(JSObject, FIRST_JS_OBJECT_TYPE, LAST_JS_OBJECT_TYPE) \
  V(JSReceiver, FIRST_JS_RECEIVER_TYPE, LAST_JS_RECEIVER_TYPE) \

// Triples of (ClassName, FIRST_TYPE, LAST_TYPE) for classes
// that are declared but not defined in Torque. These classes
// may correspond with actual C++ classes, but they are not
// guaranteed to.
#define TORQUE_INSTANCE_CHECKERS_RANGE_ONLY_DECLARED(V) \
  V(HashTable, FIRST_HASH_TABLE_TYPE, LAST_HASH_TABLE_TYPE) \
  V(JSPrototype, FIRST_JS_PROTOTYPE_TYPE, LAST_JS_PROTOTYPE_TYPE) \
  V(TypedArrayConstructor, FIRST_TYPED_ARRAY_CONSTRUCTOR_TYPE, LAST_TYPED_ARRAY_CONSTRUCTOR_TYPE) \
  V(JSMapIterator, FIRST_JS_MAP_ITERATOR_TYPE, LAST_JS_MAP_ITERATOR_TYPE) \
  V(JSSetIterator, FIRST_JS_SET_ITERATOR_TYPE, LAST_JS_SET_ITERATOR_TYPE) \

// Fully Torque-defined classes (both internal and exported).
#define TORQUE_DEFINED_CLASS_LIST(V) \
  V(Context) \
  V(Oddball) \
  V(SloppyArgumentsElements) \
  V(DescriptorArray) \
  V(StrongDescriptorArray) \
  V(SharedFunctionInfo) \
  V(UncompiledData) \
  V(UncompiledDataWithoutPreparseData) \
  V(UncompiledDataWithPreparseData) \
  V(OnHeapBasicBlockProfilerData) \
  V(InternalClass) \
  V(SmiPair) \
  V(SmiBox) \
  V(ExportedSubClassBase) \
  V(ExportedSubClass) \
  V(AbstractInternalClass) \
  V(AbstractInternalClassSubclass1) \
  V(AbstractInternalClassSubclass2) \
  V(InternalClassWithSmiElements) \
  V(InternalClassWithStructElements) \
  V(ExportedSubClass2) \
  V(SortState) \

#define TORQUE_DEFINED_VARSIZE_INSTANCE_TYPE_LIST(V) \
  V(SLOPPY_ARGUMENTS_ELEMENTS_TYPE, SloppyArgumentsElements, sloppy_arguments_elements) \
  V(DESCRIPTOR_ARRAY_TYPE, DescriptorArray, descriptor_array) \
  V(STRONG_DESCRIPTOR_ARRAY_TYPE, StrongDescriptorArray, strong_descriptor_array) \
  V(INTERNAL_CLASS_WITH_SMI_ELEMENTS_TYPE, InternalClassWithSmiElements, internal_class_with_smi_elements) \
  V(INTERNAL_CLASS_WITH_STRUCT_ELEMENTS_TYPE, InternalClassWithStructElements, internal_class_with_struct_elements) \

#define TORQUE_DEFINED_FIXED_INSTANCE_TYPE_LIST(V) \
  V(UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE, UncompiledDataWithoutPreparseData, uncompiled_data_without_preparse_data) \
  V(UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE, UncompiledDataWithPreparseData, uncompiled_data_with_preparse_data) \
  V(ON_HEAP_BASIC_BLOCK_PROFILER_DATA_TYPE, OnHeapBasicBlockProfilerData, on_heap_basic_block_profiler_data) \
  V(INTERNAL_CLASS_TYPE, InternalClass, internal_class) \
  V(SMI_PAIR_TYPE, SmiPair, smi_pair) \
  V(SMI_BOX_TYPE, SmiBox, smi_box) \
  V(EXPORTED_SUB_CLASS_BASE_TYPE, ExportedSubClassBase, exported_sub_class_base) \
  V(EXPORTED_SUB_CLASS_TYPE, ExportedSubClass, exported_sub_class) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS1_TYPE, AbstractInternalClassSubclass1, abstract_internal_class_subclass1) \
  V(ABSTRACT_INTERNAL_CLASS_SUBCLASS2_TYPE, AbstractInternalClassSubclass2, abstract_internal_class_subclass2) \
  V(EXPORTED_SUB_CLASS2_TYPE, ExportedSubClass2, exported_sub_class2) \
  V(SORT_STATE_TYPE, SortState, sort_state) \

#define TORQUE_DEFINED_INSTANCE_TYPE_LIST(V) \
  TORQUE_DEFINED_VARSIZE_INSTANCE_TYPE_LIST(V) \
  TORQUE_DEFINED_FIXED_INSTANCE_TYPE_LIST(V) \

#define TORQUE_DEFINED_MAP_CSA_LIST_GENERATOR(V, _) \
  V(_, SloppyArgumentsElementsMap, sloppy_arguments_elements_map, SloppyArgumentsElements) \
  V(_, DescriptorArrayMap, descriptor_array_map, DescriptorArray) \
  V(_, StrongDescriptorArrayMap, strong_descriptor_array_map, StrongDescriptorArray) \
  V(_, UncompiledDataWithoutPreparseDataMap, uncompiled_data_without_preparse_data_map, UncompiledDataWithoutPreparseData) \
  V(_, UncompiledDataWithPreparseDataMap, uncompiled_data_with_preparse_data_map, UncompiledDataWithPreparseData) \
  V(_, OnHeapBasicBlockProfilerDataMap, on_heap_basic_block_profiler_data_map, OnHeapBasicBlockProfilerData) \
  V(_, InternalClassMap, internal_class_map, InternalClass) \
  V(_, SmiPairMap, smi_pair_map, SmiPair) \
  V(_, SmiBoxMap, smi_box_map, SmiBox) \
  V(_, ExportedSubClassBaseMap, exported_sub_class_base_map, ExportedSubClassBase) \
  V(_, ExportedSubClassMap, exported_sub_class_map, ExportedSubClass) \
  V(_, AbstractInternalClassSubclass1Map, abstract_internal_class_subclass1_map, AbstractInternalClassSubclass1) \
  V(_, AbstractInternalClassSubclass2Map, abstract_internal_class_subclass2_map, AbstractInternalClassSubclass2) \
  V(_, InternalClassWithSmiElementsMap, internal_class_with_smi_elements_map, InternalClassWithSmiElements) \
  V(_, InternalClassWithStructElementsMap, internal_class_with_struct_elements_map, InternalClassWithStructElements) \
  V(_, ExportedSubClass2Map, exported_sub_class2_map, ExportedSubClass2) \
  V(_, SortStateMap, sort_state_map, SortState) \

#define TORQUE_DEFINED_MAP_ROOT_LIST(V) \
  V(Map, sloppy_arguments_elements_map, SloppyArgumentsElementsMap) \
  V(Map, descriptor_array_map, DescriptorArrayMap) \
  V(Map, strong_descriptor_array_map, StrongDescriptorArrayMap) \
  V(Map, uncompiled_data_without_preparse_data_map, UncompiledDataWithoutPreparseDataMap) \
  V(Map, uncompiled_data_with_preparse_data_map, UncompiledDataWithPreparseDataMap) \
  V(Map, on_heap_basic_block_profiler_data_map, OnHeapBasicBlockProfilerDataMap) \
  V(Map, internal_class_map, InternalClassMap) \
  V(Map, smi_pair_map, SmiPairMap) \
  V(Map, smi_box_map, SmiBoxMap) \
  V(Map, exported_sub_class_base_map, ExportedSubClassBaseMap) \
  V(Map, exported_sub_class_map, ExportedSubClassMap) \
  V(Map, abstract_internal_class_subclass1_map, AbstractInternalClassSubclass1Map) \
  V(Map, abstract_internal_class_subclass2_map, AbstractInternalClassSubclass2Map) \
  V(Map, internal_class_with_smi_elements_map, InternalClassWithSmiElementsMap) \
  V(Map, internal_class_with_struct_elements_map, InternalClassWithStructElementsMap) \
  V(Map, exported_sub_class2_map, ExportedSubClass2Map) \
  V(Map, sort_state_map, SortStateMap) \

#endif  // V8_GEN_TORQUE_GENERATED_INSTANCE_TYPES_H_
