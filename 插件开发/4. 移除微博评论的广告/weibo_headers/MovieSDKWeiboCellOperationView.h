//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MovieSDKWeiboCellSubViewProtcol-Protocol.h"

@class MovieSDKBaseTableViewCell, MovieSDKOperationBtn, MovieSDKWeiboInfo, NSArray, NSString;
@protocol MovieSDKTableViewCellDelegate;

@interface MovieSDKWeiboCellOperationView : UIView <MovieSDKWeiboCellSubViewProtcol>
{
    MovieSDKOperationBtn *_repostBtn;
    MovieSDKOperationBtn *_commentBtn;
    MovieSDKOperationBtn *_attitudeBtn;
    UIView *_line;
    MovieSDKWeiboInfo *_data;
    NSArray *_lineArray;
    id <MovieSDKTableViewCellDelegate> _delegate;
    MovieSDKBaseTableViewCell *_cell;
}

+ (double)preferredHeightForData:(id)arg1 fitWidth:(double)arg2;
@property(nonatomic) __weak MovieSDKBaseTableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) __weak id <MovieSDKTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *lineArray; // @synthesize lineArray=_lineArray;
@property(retain, nonatomic) MovieSDKWeiboInfo *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) MovieSDKOperationBtn *attitudeBtn; // @synthesize attitudeBtn=_attitudeBtn;
@property(retain, nonatomic) MovieSDKOperationBtn *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) MovieSDKOperationBtn *repostBtn; // @synthesize repostBtn=_repostBtn;
- (void).cxx_destruct;
- (void)tapAttitude;
- (void)tapComment;
- (void)tapRepost;
- (void)sizeToFitWidth:(double)arg1;
- (void)updateWithData:(id)arg1;
- (void)setRespondDelegate:(id)arg1 contentCell:(id)arg2;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

