//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTranslucentViewController.h"

@class WBComposeImagesElement, WBComposerImagesView;

@interface WBComposeImagesShowAllViewController : WBTranslucentViewController
{
    WBComposerImagesView *imagesView;
    WBComposeImagesElement *_element;
}

@property(nonatomic) __weak WBComposeImagesElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)enableClickClose;
- (id)panInView;
- (id)scrollView;
- (_Bool)isScrollOnTop;
- (void)_handleDismissFinished;
- (id)_attachments;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_showTipsFooter;
- (void)updateViewWithElement:(id)arg1;
- (void)viewDidLoad;
- (id)initWithElement:(id)arg1;

@end

