//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSIndexPath, NSString, NSURL, XMDubShowFeedItem;

@interface XMDubShowProgramItem : XMModel
{
    _Bool _playDubShow;
    _Bool _isLike;
    _Bool _finishedPlay;
    _Bool _volumeOpen;
    _Bool _isFollowed;
    _Bool _isMultDubShow;
    NSURL *_coverLarge;
    NSURL *_coverMiddle;
    NSURL *_coverPath;
    NSURL *_coverSmall;
    double _createAt;
    unsigned long long _duration;
    NSString *_intro;
    NSURL *_logoPic;
    NSString *_nickname;
    NSString *_playPathAacv164;
    NSString *_playPathAacv224;
    NSString *_title;
    unsigned long long _trackId;
    NSString *_mediaType;
    NSString *_recordId;
    unsigned long long _commentCount;
    unsigned long long _favorites;
    unsigned long long _playTimes;
    double _updateAt;
    XMDubShowFeedItem *_feedItem;
    long long _status;
    unsigned long long _topicId;
    NSString *_topicTitle;
    NSURL *_topicUrl;
    double _uploadPercent;
    NSIndexPath *_cellIndexPath;
    unsigned long long _uid;
    long long _topicType;
    long long _nexusTopicId;
    unsigned long long _trackTotalCount;
    NSArray *_dialectInfo;
    long long _shareType;
    long long _dubFeedCollectionTagId;
    long long _workType;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(nonatomic) long long workType; // @synthesize workType=_workType;
@property(nonatomic) long long dubFeedCollectionTagId; // @synthesize dubFeedCollectionTagId=_dubFeedCollectionTagId;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSArray *dialectInfo; // @synthesize dialectInfo=_dialectInfo;
@property(nonatomic) _Bool isMultDubShow; // @synthesize isMultDubShow=_isMultDubShow;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) unsigned long long trackTotalCount; // @synthesize trackTotalCount=_trackTotalCount;
@property(nonatomic) long long nexusTopicId; // @synthesize nexusTopicId=_nexusTopicId;
@property(nonatomic) long long topicType; // @synthesize topicType=_topicType;
@property(nonatomic) _Bool volumeOpen; // @synthesize volumeOpen=_volumeOpen;
@property(nonatomic) _Bool finishedPlay; // @synthesize finishedPlay=_finishedPlay;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(nonatomic) _Bool playDubShow; // @synthesize playDubShow=_playDubShow;
@property(nonatomic) double uploadPercent; // @synthesize uploadPercent=_uploadPercent;
@property(retain, nonatomic) NSURL *topicUrl; // @synthesize topicUrl=_topicUrl;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) XMDubShowFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) double updateAt; // @synthesize updateAt=_updateAt;
@property(nonatomic) unsigned long long playTimes; // @synthesize playTimes=_playTimes;
@property(nonatomic) unsigned long long favorites; // @synthesize favorites=_favorites;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *playPathAacv224; // @synthesize playPathAacv224=_playPathAacv224;
@property(retain, nonatomic) NSString *playPathAacv164; // @synthesize playPathAacv164=_playPathAacv164;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSURL *logoPic; // @synthesize logoPic=_logoPic;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) double createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSURL *coverSmall; // @synthesize coverSmall=_coverSmall;
@property(retain, nonatomic) NSURL *coverPath; // @synthesize coverPath=_coverPath;
@property(retain, nonatomic) NSURL *coverMiddle; // @synthesize coverMiddle=_coverMiddle;
@property(retain, nonatomic) NSURL *coverLarge; // @synthesize coverLarge=_coverLarge;
- (void).cxx_destruct;

@end

