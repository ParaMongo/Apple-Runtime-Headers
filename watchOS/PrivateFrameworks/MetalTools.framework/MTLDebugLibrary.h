//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary : MTLToolsLibrary
{
    unsigned int _type;
    id _code;
    MTLCompileOptions *_compileOptions;
    NSArray *_imageFilterFunctions;
    CDStruct_2ff3bdf0 *_imageFilterFunctionInfo;
}

@property(readonly, nonatomic) CDStruct_2ff3bdf0 *imageFilterFunctionInfo; // @synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo;
@property(readonly, nonatomic) NSArray *imageFilterFunctions; // @synthesize imageFilterFunctions=_imageFilterFunctions;
@property(copy, nonatomic) MTLCompileOptions *compileOptions; // @synthesize compileOptions=_compileOptions;
@property(copy, nonatomic) id code; // @synthesize code=_code;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_2ff3bdf0 *)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newFunctionWithName:(id)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned int)arg3 code:(id)arg4 options:(id)arg5;

@end

