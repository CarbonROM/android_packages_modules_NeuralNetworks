// Generated from pow.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::pow {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("pow", get_test_model());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("pow_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed = TestModelManager::get().add("pow_relaxed", get_test_model_relaxed());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed_all_inputs_as_internal = TestModelManager::get().add("pow_relaxed_all_inputs_as_internal", get_test_model_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16 = TestModelManager::get().add("pow_float16", get_test_model_float16());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({4.0f, 9.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16_all_inputs_as_internal = TestModelManager::get().add("pow_float16_all_inputs_as_internal", get_test_model_float16_all_inputs_as_internal());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_2 = TestModelManager::get().add("pow_2", get_test_model_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_2 = TestModelManager::get().add("pow_all_inputs_as_internal_2", get_test_model_all_inputs_as_internal_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed_2 = TestModelManager::get().add("pow_relaxed_2", get_test_model_relaxed_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed_all_inputs_as_internal_2 = TestModelManager::get().add("pow_relaxed_all_inputs_as_internal_2", get_test_model_relaxed_all_inputs_as_internal_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16_2 = TestModelManager::get().add("pow_float16_2", get_test_model_float16_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({4.0f, 8.0f, 9.0f, 27.0f}),
                .dimensions = {2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16_all_inputs_as_internal_2 = TestModelManager::get().add("pow_float16_all_inputs_as_internal_2", get_test_model_float16_all_inputs_as_internal_2());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 1.4142135623730951f, 1.0f, 1.7320508075688772f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_3 = TestModelManager::get().add("pow_3", get_test_model_3());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 1.4142135623730951f, 1.0f, 1.7320508075688772f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_3 = TestModelManager::get().add("pow_all_inputs_as_internal_3", get_test_model_all_inputs_as_internal_3());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 1.4142135623730951f, 1.0f, 1.7320508075688772f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed_3 = TestModelManager::get().add("pow_relaxed_3", get_test_model_relaxed_3());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_relaxed_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({1.0f, 1.4142135623730951f, 1.0f, 1.7320508075688772f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_relaxed_all_inputs_as_internal_3 = TestModelManager::get().add("pow_relaxed_all_inputs_as_internal_3", get_test_model_relaxed_all_inputs_as_internal_3());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({1.0f, 1.4142135381698608f, 1.0f, 1.7320507764816284f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16_3 = TestModelManager::get().add("pow_float16_3", get_test_model_float16_3());

}  // namespace generated_tests::pow

namespace generated_tests::pow {

const TestModel& get_test_model_float16_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({1.0f, 1.4142135381698608f, 1.0f, 1.7320507764816284f, 2.0f, 4.0f, 3.0f, 9.0f, 8.0f, 16.0f, 27.0f, 81.0f}),
                .dimensions = {3, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({2.0f, 3.0f}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.5f, 1.0f, 2.0f, 3.0f, 4.0f}),
                .dimensions = {3, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::POW
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_float16_all_inputs_as_internal_3 = TestModelManager::get().add("pow_float16_all_inputs_as_internal_3", get_test_model_float16_all_inputs_as_internal_3());

}  // namespace generated_tests::pow
