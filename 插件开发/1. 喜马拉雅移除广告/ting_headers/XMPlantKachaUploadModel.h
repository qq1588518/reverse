//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMPlantKachaUploadModel : XMModel
{
    NSString *_videoCoverUrl;
    NSString *_videoOriginPlayPath;
    unsigned long long _videoDuration;
    long long _videoUploadId;
    unsigned long long _videoHeight;
    unsigned long long _videoWidth;
}

@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoUploadId; // @synthesize videoUploadId=_videoUploadId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoOriginPlayPath; // @synthesize videoOriginPlayPath=_videoOriginPlayPath;
@property(copy, nonatomic) NSString *videoCoverUrl; // @synthesize videoCoverUrl=_videoCoverUrl;
- (void).cxx_destruct;

@end

