//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusListOperation.h"

@interface WBStatusListInsertDivideItemAfterResponseOperation : WBStatusListOperation
{
    _Bool _isShowNewYearLine;
    _Bool _isShowLastRead;
}

+ (id)getOperationWithListType:(long long)arg1;
@property(nonatomic) _Bool isShowLastRead; // @synthesize isShowLastRead=_isShowLastRead;
@property(nonatomic) _Bool isShowNewYearLine; // @synthesize isShowNewYearLine=_isShowNewYearLine;
- (void)run:(id)arg1;

@end

