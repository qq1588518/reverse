//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString, WBNLShowCaseBubbleModel;

@interface WBNLShowCaseProductModel : WBNLBaseModel
{
    NSString *_url;
    NSString *_icon;
    WBNLShowCaseBubbleModel *_bubble;
}

@property(retain, nonatomic) WBNLShowCaseBubbleModel *bubble; // @synthesize bubble=_bubble;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

