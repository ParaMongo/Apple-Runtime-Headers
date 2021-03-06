//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDLabelButton, MCDTitleView, NSString, UILabel, UIStackView;

@interface MCDSongDetailsView : UIView
{
    _Bool _isCompactHeight;
    unsigned long long _fontStyle;
    MCDTitleView *_titleView;
    UILabel *_artistLabel;
    MCDLabelButton *_albumArtistLabelButton;
    NSString *_trackTitle;
    NSString *_albumTitle;
    NSString *_artistName;
    UIStackView *_stackView;
    struct CGRect _infoRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCompactHeight; // @synthesize isCompactHeight=_isCompactHeight;
@property(nonatomic) struct CGRect infoRect; // @synthesize infoRect=_infoRect;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(readonly, nonatomic) MCDLabelButton *albumArtistLabelButton; // @synthesize albumArtistLabelButton=_albumArtistLabelButton;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(readonly, nonatomic) MCDTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) unsigned long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (void)_updateFont;
- (double)_preferredHeight;
- (void)_updateNumberOfLines;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

