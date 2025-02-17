
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_float_exprs.45.h"

void test() {
    floatexprs45Instance instance;
    floatexprs45Instantiate(&instance, resolveTestImports);
    printStart("float_exprs.45.wasm");
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FltX5FselectX5FtoX5Fabs(&instance, 0.0),
        0.0,
        "f32.no_fold_lt_select_to_abs(0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FltX5FselectX5FtoX5Fabs(&instance, -0.0),
        -0.0,
        "f32.no_fold_lt_select_to_abs(-0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FleX5FselectX5FtoX5Fabs(&instance, 0.0),
        -0.0,
        "f32.no_fold_le_select_to_abs(0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FleX5FselectX5FtoX5Fabs(&instance, -0.0),
        0.0,
        "f32.no_fold_le_select_to_abs(-0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FgtX5FselectX5FtoX5Fabs(&instance, 0.0),
        -0.0,
        "f32.no_fold_gt_select_to_abs(0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FgtX5FselectX5FtoX5Fabs(&instance, -0.0),
        0.0,
        "f32.no_fold_gt_select_to_abs(-0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FgeX5FselectX5FtoX5Fabs(&instance, 0.0),
        0.0,
        "f32.no_fold_ge_select_to_abs(0.0)"
    );
    assertEqualF32(
        floatexprs45_f32X2EnoX5FfoldX5FgeX5FselectX5FtoX5Fabs(&instance, -0.0),
        -0.0,
        "f32.no_fold_ge_select_to_abs(-0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FltX5FselectX5FtoX5Fabs(&instance, 0.0),
        0.0,
        "f64.no_fold_lt_select_to_abs(0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FltX5FselectX5FtoX5Fabs(&instance, -0.0),
        -0.0,
        "f64.no_fold_lt_select_to_abs(-0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FleX5FselectX5FtoX5Fabs(&instance, 0.0),
        -0.0,
        "f64.no_fold_le_select_to_abs(0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FleX5FselectX5FtoX5Fabs(&instance, -0.0),
        0.0,
        "f64.no_fold_le_select_to_abs(-0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FgtX5FselectX5FtoX5Fabs(&instance, 0.0),
        -0.0,
        "f64.no_fold_gt_select_to_abs(0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FgtX5FselectX5FtoX5Fabs(&instance, -0.0),
        0.0,
        "f64.no_fold_gt_select_to_abs(-0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FgeX5FselectX5FtoX5Fabs(&instance, 0.0),
        0.0,
        "f64.no_fold_ge_select_to_abs(0.0)"
    );
    assertEqualF64(
        floatexprs45_f64X2EnoX5FfoldX5FgeX5FselectX5FtoX5Fabs(&instance, -0.0),
        -0.0,
        "f64.no_fold_ge_select_to_abs(-0.0)"
    );
}
