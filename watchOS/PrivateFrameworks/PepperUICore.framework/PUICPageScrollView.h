//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <PepperUICore/UIScrollViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface PUICPageScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _horizontal;
    _Bool _activated;
    NSMutableDictionary *_tiledPages;
    NSMutableDictionary *_fetchedPages;
    NSMutableSet *_visiblePages;
    struct CGSize _boundsSizeOnLastLayout;
    _Bool _animatingScroll;
    _Bool _suppressScrollCallbacks;
    _Bool _scrollingStarted;
    _Bool _tilingSuspended;
    _Bool _alwaysSettlesOnPages;
    unsigned int _prefetchBuffer;
    unsigned int _tiledPageRange;
    unsigned int _numberOfPages;
    unsigned int _currentPageIndex;
    CDUnknownBlockType _numberOfPagesGetter;
    CDUnknownBlockType _pageGetter;
    CDUnknownBlockType _pageWillAppearHandler;
    CDUnknownBlockType _pageDidAppearHandler;
    CDUnknownBlockType _pageWillDisappearHandler;
    CDUnknownBlockType _pageDidDisappearHandler;
    CDUnknownBlockType _willAddPageToViewHandler;
    CDUnknownBlockType _didAddPageToViewHandler;
    CDUnknownBlockType _willRemovePageFromViewHandler;
    CDUnknownBlockType _didRemovePageFromViewHandler;
    CDUnknownBlockType _pagePurgeHandler;
    CDUnknownBlockType _indexMigrationHandler;
    CDUnknownBlockType _didScrollToIndexHandler;
    CDUnknownBlockType _willDecelerateToIndexHandler;
    CDUnknownBlockType _didScrollHandler;
    CDUnknownBlockType _didStopScrollingHandler;
    CDUnknownBlockType _didStartScrollingHandler;
    CDUnknownBlockType _pageDeletionHandler;
    CDUnknownBlockType _pageDeletionScrollDirectionHandler;
    CDUnknownBlockType _willAnimatePageDeletionHandler;
    CDUnknownBlockType _isAnimatingPageDeletionHandler;
    CDUnknownBlockType _didAnimatePageDeletionHandler;
    struct UIEdgeInsets _visualInsets;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didAnimatePageDeletionHandler; // @synthesize didAnimatePageDeletionHandler=_didAnimatePageDeletionHandler;
@property(copy, nonatomic) CDUnknownBlockType isAnimatingPageDeletionHandler; // @synthesize isAnimatingPageDeletionHandler=_isAnimatingPageDeletionHandler;
@property(copy, nonatomic) CDUnknownBlockType willAnimatePageDeletionHandler; // @synthesize willAnimatePageDeletionHandler=_willAnimatePageDeletionHandler;
@property(copy, nonatomic) CDUnknownBlockType pageDeletionScrollDirectionHandler; // @synthesize pageDeletionScrollDirectionHandler=_pageDeletionScrollDirectionHandler;
@property(copy, nonatomic) CDUnknownBlockType pageDeletionHandler; // @synthesize pageDeletionHandler=_pageDeletionHandler;
@property(copy, nonatomic) CDUnknownBlockType didStartScrollingHandler; // @synthesize didStartScrollingHandler=_didStartScrollingHandler;
@property(copy, nonatomic) CDUnknownBlockType didStopScrollingHandler; // @synthesize didStopScrollingHandler=_didStopScrollingHandler;
@property(copy, nonatomic) CDUnknownBlockType didScrollHandler; // @synthesize didScrollHandler=_didScrollHandler;
@property(copy, nonatomic) CDUnknownBlockType willDecelerateToIndexHandler; // @synthesize willDecelerateToIndexHandler=_willDecelerateToIndexHandler;
@property(copy, nonatomic) CDUnknownBlockType didScrollToIndexHandler; // @synthesize didScrollToIndexHandler=_didScrollToIndexHandler;
@property(copy, nonatomic) CDUnknownBlockType indexMigrationHandler; // @synthesize indexMigrationHandler=_indexMigrationHandler;
@property(copy, nonatomic) CDUnknownBlockType pagePurgeHandler; // @synthesize pagePurgeHandler=_pagePurgeHandler;
@property(copy, nonatomic) CDUnknownBlockType didRemovePageFromViewHandler; // @synthesize didRemovePageFromViewHandler=_didRemovePageFromViewHandler;
@property(copy, nonatomic) CDUnknownBlockType willRemovePageFromViewHandler; // @synthesize willRemovePageFromViewHandler=_willRemovePageFromViewHandler;
@property(copy, nonatomic) CDUnknownBlockType didAddPageToViewHandler; // @synthesize didAddPageToViewHandler=_didAddPageToViewHandler;
@property(copy, nonatomic) CDUnknownBlockType willAddPageToViewHandler; // @synthesize willAddPageToViewHandler=_willAddPageToViewHandler;
@property(copy, nonatomic) CDUnknownBlockType pageDidDisappearHandler; // @synthesize pageDidDisappearHandler=_pageDidDisappearHandler;
@property(copy, nonatomic) CDUnknownBlockType pageWillDisappearHandler; // @synthesize pageWillDisappearHandler=_pageWillDisappearHandler;
@property(copy, nonatomic) CDUnknownBlockType pageDidAppearHandler; // @synthesize pageDidAppearHandler=_pageDidAppearHandler;
@property(copy, nonatomic) CDUnknownBlockType pageWillAppearHandler; // @synthesize pageWillAppearHandler=_pageWillAppearHandler;
@property(copy, nonatomic) CDUnknownBlockType pageGetter; // @synthesize pageGetter=_pageGetter;
@property(copy, nonatomic) CDUnknownBlockType numberOfPagesGetter; // @synthesize numberOfPagesGetter=_numberOfPagesGetter;
@property(readonly, nonatomic) unsigned int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic) unsigned int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) _Bool alwaysSettlesOnPages; // @synthesize alwaysSettlesOnPages=_alwaysSettlesOnPages;
@property(nonatomic) _Bool tilingSuspended; // @synthesize tilingSuspended=_tilingSuspended;
@property(nonatomic) unsigned int tiledPageRange; // @synthesize tiledPageRange=_tiledPageRange;
@property(nonatomic) unsigned int prefetchBuffer; // @synthesize prefetchBuffer=_prefetchBuffer;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) struct UIEdgeInsets visualInsets; // @synthesize visualInsets=_visualInsets;
- (void)_sendAppearanceEventsForScrollStop;
- (void)_sendAppearanceEventsForScrollStart;
- (struct CGRect)_touchInsetBounds;
- (struct CGRect)_visualInsetBounds;
- (struct CGPoint)_contentOffsetToCenterPageAtIndex:(unsigned int)arg1;
- (int)_unclippedPageIndexAtPoint:(struct CGPoint)arg1;
- (unsigned int)_pageIndexAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)_centerForPageAtIndex:(int)arg1;
- (void)_updateContentSize;
- (void)_layoutPage:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_layoutPages;
- (void)_purgePageAtIndex:(unsigned int)arg1;
- (id)_fetchPageForIndex:(unsigned int)arg1;
- (void)_tilePageForIndex:(unsigned int)arg1;
- (void)_untilePageAtIndex:(unsigned int)arg1;
- (void)_tilePagesEagerly:(_Bool)arg1;
- (void)_purgePages;
- (void)_performSuppressingScrollCallbacks:(CDUnknownBlockType)arg1;
- (void)_scrollViewDidStop;
- (void)_scrollViewDidStart;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (struct CGPoint)centerForPageAtIndex:(unsigned int)arg1;
- (void)clearHandlers;
- (void)reloadPageAtIndex:(unsigned int)arg1;
- (void)reloadPages;
- (void)deactivate;
- (void)activate;
- (void)enumeratePagesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisiblePagesWithBlock:(CDUnknownBlockType)arg1;
- (id)pageAtIndex:(unsigned int)arg1;
- (void)getCurrentScrollFraction:(float *)arg1 lowPageIndex:(int *)arg2 highPageIndex:(int *)arg3;
- (void)scrollToPageAtIndex:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)insertPageAtIndex:(unsigned int)arg1;
- (void)deletePageAtIndex:(unsigned int)arg1 animated:(_Bool)arg2;
- (id)initWithScrollOrientation:(int)arg1;
- (id)initWithScrollDirection:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

