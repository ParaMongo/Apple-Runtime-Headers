//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XQuery/XQueryPrologItemBehavior-Protocol.h>

@class NSArray, NSString, XQueryTypeDeclaration;

__attribute__((visibility("hidden")))
@interface XQueryPrologItemFunctionDeclaration : NSObject <XQueryPrologItemBehavior>
{
    NSString *name;
    NSArray *paramList;
    XQueryTypeDeclaration *type;
    id expr;
    BOOL external;
    long long line;
}

+ (id)function:(id)arg1 withParams:(id)arg2 ofType:(id)arg3 forExpr:(id)arg4 isExternal:(BOOL)arg5 atLine:(long long)arg6;
- (void)finalize;
- (void)dealloc;
- (void)XQueryUpdateProlog:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

