//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBLikeListTagManager : NSObject
{
}

+ (id)shareManger;
- (void)checkTagWithTag:(id)arg1 params:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)updateTagsWithTagsArray:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getThinkWordWithkeyWords:(id)arg1 params:(id)arg2 fetchThinkWordsFinishBlock:(CDUnknownBlockType)arg3;
- (void)getTagsWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

