//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIViewController;

@interface XMLiveCameraActionHandler : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _allowPickingGif;
    _Bool _allowPickingVideo;
    _Bool _allowTakePicture;
    _Bool _allowPickingImage;
    _Bool _allowCrop;
    UIViewController *_viewController;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool allowCrop; // @synthesize allowCrop=_allowCrop;
@property(nonatomic) _Bool allowPickingImage; // @synthesize allowPickingImage=_allowPickingImage;
@property(nonatomic) _Bool allowTakePicture; // @synthesize allowTakePicture=_allowTakePicture;
@property(nonatomic) _Bool allowPickingVideo; // @synthesize allowPickingVideo=_allowPickingVideo;
@property(nonatomic) _Bool allowPickingGif; // @synthesize allowPickingGif=_allowPickingGif;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)handlePhotoFromImagePicker:(id)arg1;
- (void)presendImagePicker;
- (void)showImagePicker;
- (void)showCamera;
- (void)showCameraActionSheetWithTitle:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

