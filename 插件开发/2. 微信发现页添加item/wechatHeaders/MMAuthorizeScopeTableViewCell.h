//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface MMAuthorizeScopeTableViewCell : UITableViewCell
{
    UIImageView *_selectImage;
    UILabel *_scopeLabel;
    _Bool _isMustSelect;
    _Bool _isSelect;
    NSString *_scopeDescription;
}

+ (double)viewHeightWithScopeText:(id)arg1 cellWidth:(double)arg2;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool isMustSelect; // @synthesize isMustSelect=_isMustSelect;
@property(retain, nonatomic) NSString *scopeDescription; // @synthesize scopeDescription=_scopeDescription;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateScopeLabel;
- (void)upadteSelectImage;
- (void)updateView;

@end

