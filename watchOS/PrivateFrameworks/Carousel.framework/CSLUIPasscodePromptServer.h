//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLUIPasscodePromptConnectionHandlerDelegate-Protocol.h>
#import <Carousel/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSLUIPasscodePromptServer : NSObject <NSXPCListenerDelegate, CSLUIPasscodePromptConnectionHandlerDelegate>
{
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_modifyingConnectionsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *modifyingConnectionsQueue; // @synthesize modifyingConnectionsQueue=_modifyingConnectionsQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
- (void)passcodePromptConnectionHandlerLostConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

