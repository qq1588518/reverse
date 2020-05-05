//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, WBImageLoadRequest;

@interface WBNewStoryImageURLButton : UIButton
{
    NSString *_imageUrl;
    WBImageLoadRequest *_loadRequest;
}

@property(retain, nonatomic) WBImageLoadRequest *loadRequest; // @synthesize loadRequest=_loadRequest;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setImageWithUrlString:(id)arg1 placeholderImage:(id)arg2;

@end

