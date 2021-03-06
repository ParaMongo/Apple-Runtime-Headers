//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, CKMovieMediaObject;
@protocol CKMovieBalloonViewDelegate;

@interface CKMovieBalloonView : CKImageBalloonView
{
    CKMovieMediaObject *_mediaObject;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)cleanupPlayerIfNeeded;
- (void)videoDidReachEnd:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)description;
- (void)dealloc;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;

// Remaining properties
@property(nonatomic) __weak id <CKMovieBalloonViewDelegate> delegate; // @dynamic delegate;

@end

