//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UIImage;

@interface TSDiOSToolbar : UIToolbar
{
    UIImage *mBackgroundImage;
    BOOL mDrawsBackground;
    double mShadowOpacity;
    struct CGSize mShadowOffset;
    double mShadowRadius;
    double mShadowX;
}

@property(nonatomic) double shadowX; // @synthesize shadowX=mShadowX;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=mShadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=mShadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=mShadowOpacity;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=mDrawsBackground;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=mBackgroundImage;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setupShadowPath;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)p_updateLayerFlags;
- (void)dealloc;

@end

