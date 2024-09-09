#ifndef clox_compiler_h
#define clox_compiler_h

#import "object.h"
#import "vm.h"
#import "chunk.h"

bool compile(const char* source, Chunk* chunk);

#endif
