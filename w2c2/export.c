#include "export.h"

const char*
wasmExportKindDescription(
    WasmExportKind exportKind
) {
    switch (exportKind) {
        case wasmExportKindFunction:
            return "function";
        case wasmExportKindTable:
            return "table";
        case wasmExportKindMemory:
            return "memory";
        case wasmExportKindGlobal:
            return "global";
        default:
            return NULL;
    }
}
