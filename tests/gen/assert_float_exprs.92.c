
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_float_exprs.92.h"

void test() {
    floatexprs92Instance instance;
    floatexprs92Instantiate(&instance, resolveTestImports);
    printStart("float_exprs.92.wasm");
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 0.0),
        1.0,
        "f32.silver_means(0.0)"
    );
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 1.0),
        1.6180340051651,
        "f32.silver_means(1.0)"
    );
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 2.0),
        2.4142136573791504,
        "f32.silver_means(2.0)"
    );
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 3.0),
        3.3027756214141846,
        "f32.silver_means(3.0)"
    );
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 4.0),
        4.236067771911621,
        "f32.silver_means(4.0)"
    );
    assertEqualF32(
        floatexprs92_f32X2EsilverX5Fmeans(&instance, 5.0),
        5.192582130432129,
        "f32.silver_means(5.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 0.0),
        1.0,
        "f64.silver_means(0.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 1.0),
        1.618033988749895,
        "f64.silver_means(1.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 2.0),
        2.414213562373095,
        "f64.silver_means(2.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 3.0),
        3.302775637731995,
        "f64.silver_means(3.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 4.0),
        4.23606797749979,
        "f64.silver_means(4.0)"
    );
    assertEqualF64(
        floatexprs92_f64X2EsilverX5Fmeans(&instance, 5.0),
        5.192582403567252,
        "f64.silver_means(5.0)"
    );
}
