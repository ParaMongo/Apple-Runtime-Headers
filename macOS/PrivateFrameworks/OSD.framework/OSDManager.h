//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSD/OSDUIHelperProtocol-Protocol.h>

@class NSXPCConnection;
@protocol OSDUIHelperProtocol;

@interface OSDManager : NSObject <OSDUIHelperProtocol>
{
    id <OSDUIHelperProtocol> _proxyObject;
    NSXPCConnection *connection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection;
- (void)showFullScreenImage:(long long)arg1 onDisplayID:(unsigned int)arg2 priority:(unsigned int)arg3 msecToAnimate:(unsigned int)arg4;
- (void)fadeClassicImageOnDisplay:(unsigned int)arg1;
- (void)showImageAtPath:(id)arg1 onDisplayID:(unsigned int)arg2 priority:(unsigned int)arg3 msecUntilFade:(unsigned int)arg4 withText:(id)arg5;
- (void)showImage:(long long)arg1 onDisplayID:(unsigned int)arg2 priority:(unsigned int)arg3 msecUntilFade:(unsigned int)arg4 filledChiclets:(unsigned int)arg5 totalChiclets:(unsigned int)arg6 locked:(BOOL)arg7;
- (void)showImage:(long long)arg1 onDisplayID:(unsigned int)arg2 priority:(unsigned int)arg3 msecUntilFade:(unsigned int)arg4 withText:(id)arg5;
- (void)showImage:(long long)arg1 onDisplayID:(unsigned int)arg2 priority:(unsigned int)arg3 msecUntilFade:(unsigned int)arg4;
@property(readonly) id <OSDUIHelperProtocol> remoteObjectProxy; // @dynamic remoteObjectProxy;

@end

