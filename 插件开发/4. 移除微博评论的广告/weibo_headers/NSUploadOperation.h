//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSString, WBMultimediaUploader;
@protocol NSUploadOperationDelegate;

@interface NSUploadOperation : NSOperation
{
    _Bool finished;
    _Bool executing;
    NSDictionary *userInfo;
    long long _flag;
    id <NSUploadOperationDelegate> _delegate;
    NSString *_delegateSafeIdentifier;
    WBMultimediaUploader *_uploader;
}

@property(retain, nonatomic) WBMultimediaUploader *uploader; // @synthesize uploader=_uploader;
@property(copy, nonatomic) NSString *delegateSafeIdentifier; // @synthesize delegateSafeIdentifier=_delegateSafeIdentifier;
@property(nonatomic) id <NSUploadOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)didFinished;
- (void)start;
- (void)didReceiveOperationUploadFail:(id)arg1;
- (void)didReceiveProgressChange:(unsigned long long)arg1;
- (void)didReceiveOperationUploadSuccess;
- (void)dealloc;
- (id)initWithUserInfo:(id)arg1;

@end

