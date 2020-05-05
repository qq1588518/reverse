//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveTemplate.h"

@class NSString;

@interface XMMp4EffectTemplate : XMLiveTemplate
{
    unsigned long long _animWidth;
    unsigned long long _animHeight;
    NSString *_animationType;
    double _enterTime;
    double _outTime;
    double _stayTime;
    NSString *_md5;
    NSString *_path;
    NSString *_mp4LocalPath;
    double _screenRate;
    NSString *_enterDesc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *enterDesc; // @synthesize enterDesc=_enterDesc;
@property(nonatomic) double screenRate; // @synthesize screenRate=_screenRate;
@property(copy, nonatomic) NSString *mp4LocalPath; // @synthesize mp4LocalPath=_mp4LocalPath;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) double stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) double outTime; // @synthesize outTime=_outTime;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(copy, nonatomic) NSString *animationType; // @synthesize animationType=_animationType;
@property(nonatomic) unsigned long long animHeight; // @synthesize animHeight=_animHeight;
@property(nonatomic) unsigned long long animWidth; // @synthesize animWidth=_animWidth;

@end

