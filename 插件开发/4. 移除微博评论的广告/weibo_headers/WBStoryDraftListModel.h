//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBStoryDraftListModel : WBModelObject
{
    NSString *_draftId;
    NSString *_draftThumbImgPath;
    double _time;
    double _duration;
    NSString *_desc;
    NSString *_userID;
}

@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *draftThumbImgPath; // @synthesize draftThumbImgPath=_draftThumbImgPath;
@property(copy, nonatomic) NSString *draftId; // @synthesize draftId=_draftId;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

