//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDBackupRecoveryErrorProvider-Protocol.h>

@class CDPContext, NSString;
@protocol CDPStateUIProviderInternal;

@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider>
{
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    unsigned int _prevailingSecret;
}

- (void).cxx_destruct;
- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (id)verficationFailedErrorwithUnderlyingError:(id)arg1;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (id)globalHardLimitError;
- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (void)setPrevailingSecret:(unsigned int)arg1;
- (_Bool)supportsErrorPresentation;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

