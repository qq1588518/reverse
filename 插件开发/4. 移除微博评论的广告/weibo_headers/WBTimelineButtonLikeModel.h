//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonButtonModel.h"

@interface WBTimelineButtonLikeModel : WBCommonButtonModel
{
    _Bool _isNeedCustomLikeImage;
    long long _likeCount;
}

+ (id)buttonIdWithButtonDict:(id)arg1;
+ (id)modelTypeStrs;
@property(nonatomic) _Bool isNeedCustomLikeImage; // @synthesize isNeedCustomLikeImage=_isNeedCustomLikeImage;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)defaultLocalID;

@end

