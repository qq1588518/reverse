//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;
@protocol WBMediaProcessSettings, WBMediaUploadProcessInfo, WBMediaUploadSettings;

@interface WBMediaItemUploadFlowSessionSettingsState : NSObject <NSCoding>
{
    _Bool _didReceiveProcessSettings;
    _Bool _didReceiveProcessInfo;
    _Bool _didReceiveUploadSettings;
    id <WBMediaUploadProcessInfo> _processInfo;
    id <WBMediaProcessSettings> _processSettings;
    id <WBMediaUploadSettings> _uploadSettings;
    NSString *_protocol;
}

@property(nonatomic) _Bool didReceiveUploadSettings; // @synthesize didReceiveUploadSettings=_didReceiveUploadSettings;
@property(nonatomic) _Bool didReceiveProcessInfo; // @synthesize didReceiveProcessInfo=_didReceiveProcessInfo;
@property(nonatomic) _Bool didReceiveProcessSettings; // @synthesize didReceiveProcessSettings=_didReceiveProcessSettings;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) id <WBMediaUploadSettings> uploadSettings; // @synthesize uploadSettings=_uploadSettings;
@property(readonly, nonatomic) id <WBMediaProcessSettings> processSettings; // @synthesize processSettings=_processSettings;
@property(readonly, nonatomic) id <WBMediaUploadProcessInfo> processInfo; // @synthesize processInfo=_processInfo;
- (void).cxx_destruct;
- (void)receiveProtocol:(id)arg1;
- (void)receiveUploadSettings:(id)arg1;
- (void)receiveProcessSettings:(id)arg1;
- (void)receiveProcessInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

