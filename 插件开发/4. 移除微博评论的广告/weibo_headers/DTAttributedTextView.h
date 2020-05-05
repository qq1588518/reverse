//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class DTAttributedTextContentView, NSAttributedString, UIView;
@protocol DTAttributedTextContentViewDelegate;

@interface DTAttributedTextView : UIScrollView
{
    DTAttributedTextContentView *_attributedTextContentView;
    UIView *_backgroundView;
    id textDelegate;
    NSAttributedString *_attributedString;
    _Bool _shouldDrawLinks;
    _Bool _shouldDrawImages;
    id <DTAttributedTextContentViewDelegate> _textDelegate;
    CDUnknownBlockType _boundsChangedBlock;
    struct CGRect _visableRect;
}

@property struct CGRect visableRect; // @synthesize visableRect=_visableRect;
@property(copy, nonatomic) CDUnknownBlockType boundsChangedBlock; // @synthesize boundsChangedBlock=_boundsChangedBlock;
@property(nonatomic) _Bool shouldDrawImages; // @synthesize shouldDrawImages=_shouldDrawImages;
@property(nonatomic) _Bool shouldDrawLinks; // @synthesize shouldDrawLinks=_shouldDrawLinks;
- (void).cxx_destruct;
- (void)asyncCreateLayoutFrameComplitionHandle:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <DTAttributedTextContentViewDelegate> textDelegate; // @synthesize textDelegate=_textDelegate;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) UIView *backgroundView;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) DTAttributedTextContentView *attributedTextContentView; // @synthesize attributedTextContentView=_attributedTextContentView;
- (void)contentViewDidLayout:(id)arg1;
- (double)offsetOfAttachmentToPoint:(struct CGPoint)arg1;
- (struct CGRect)cursorRectAtIndex:(long long)arg1;
- (long long)closestCursorIndexToPoint:(struct CGPoint)arg1;
- (void)relayoutText:(id)arg1;
- (void)relayoutText;
- (void)scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (void)scrollToAnchorNamed:(id)arg1 animated:(_Bool)arg2;
- (Class)classForContentView;
- (void)_setup;
- (void)awakeFromNib;
- (struct CGRect)boundsOfAttributeView;
- (void)layoutSubviewsInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

