//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@protocol DEWriter;

@interface DECompressWriter : NSObject <DEWriter>
{
    BOOL _compressed;
    BOOL _streamInitialized;
    BOOL _streamEnded;
    NSObject<DEWriter> *_writer;
    struct z_stream_s _stream;
}

+ (BOOL)isCompressed:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL streamEnded; // @synthesize streamEnded=_streamEnded;
@property(nonatomic) BOOL streamInitialized; // @synthesize streamInitialized=_streamInitialized;
@property(nonatomic) struct z_stream_s stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSObject<DEWriter> *writer; // @synthesize writer=_writer;
@property(nonatomic) BOOL compressed; // @synthesize compressed=_compressed;
- (void)writeData:(id)arg1;
- (void)close;
- (id)compress:(id)arg1 finalize:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;

@end

