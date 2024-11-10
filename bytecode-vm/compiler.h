#ifndef clox_compiler_h
#define clox_compiler_h

#import "object.h"
#import "vm.h"
#import "chunk.h"

ObjFunction* compile(const char* source);

#endif
