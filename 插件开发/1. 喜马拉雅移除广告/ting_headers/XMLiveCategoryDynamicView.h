//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;
@protocol XMLiveCategoryDynamicViewDelegate;

@interface XMLiveCategoryDynamicView : UIView
{
    _Bool _isOpened;
    UIButton *_openAndCloseBtn;
    id <XMLiveCategoryDynamicViewDelegate> _delegate;
    NSArray *_categoryItems;
}

@property(retain, nonatomic) NSArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(nonatomic) __weak id <XMLiveCategoryDynamicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (double)dynamicHeight;
- (void)reloadCategoryData;
- (void)onCategoryItemClicked:(id)arg1;
- (void)openOrClose;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

