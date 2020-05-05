//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WBNodeDemoTableviewDataSourceDelegate;

@interface WBNodeDemoTableviewDataSource : NSObject
{
    double currentSimplePercentage;
    unsigned long long currentCardsNumber;
    NSMutableArray *_cards;
    id <WBNodeDemoTableviewDataSourceDelegate> _delegate;
}

@property(nonatomic) id <WBNodeDemoTableviewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (void)reloadCardsDataSource;
- (unsigned long long)pageCardNumberOfRowsInSection:(unsigned long long)arg1;
- (unsigned long long)pageCardNumberOfSection;
- (id)pageCardForRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)reloadCardsDataSourceWithCapcity:(unsigned long long)arg1 simpleCardsPercentage:(double)arg2;
- (id)init;

@end

