//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface XMMusicInfoModel : NSObject
{
    _Bool _isBGM;
    _Bool _isFade;
    float _volume;
    NSString *_musicPath;
    long long _trimIn;
    long long _trimOut;
    long long _duration;
    NSString *_musicName;
    NSString *_musicAuthorName;
    UIImage *_musicCoverImage;
    long long _inPoint;
    long long _outPoint;
}

@property(nonatomic) _Bool isFade; // @synthesize isFade=_isFade;
@property(nonatomic) long long outPoint; // @synthesize outPoint=_outPoint;
@property(nonatomic) long long inPoint; // @synthesize inPoint=_inPoint;
@property(nonatomic) _Bool isBGM; // @synthesize isBGM=_isBGM;
@property(retain, nonatomic) UIImage *musicCoverImage; // @synthesize musicCoverImage=_musicCoverImage;
@property(retain, nonatomic) NSString *musicAuthorName; // @synthesize musicAuthorName=_musicAuthorName;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long trimOut; // @synthesize trimOut=_trimOut;
@property(nonatomic) long long trimIn; // @synthesize trimIn=_trimIn;
@property(retain, nonatomic) NSString *musicPath; // @synthesize musicPath=_musicPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

