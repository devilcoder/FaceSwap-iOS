//
//  FSImageUtils.h
//  FaceSwap
//
//  Created by Alexander Karlsson on 2016-12-31.
//  Copyright © 2016 Alexander Karlsson. All rights reserved.
//

#ifndef FacialLandmarksUtils_h
#define FacialLandmarksUtils_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <dlib/opencv.h>
#include <dlib/image_processing.h>


@interface FSImageUtils : NSObject
{
    cv::Mat mat1, mat2;
}

typedef enum FSSwapStatus_t
{
    FS_STATUS_OK,
    FS_STATUS_NO_FACE_FOUND,
    FS_STATUS_SINGLE_FACE_ERROR,
    FS_STATUS_IMAGE_TOO_SMALL
} FSSwapStatus_t;


-(UIImage*)swapFaces :(FSSwapStatus_t&)FSStatus;
-(UIImage*)swapFacesMulti :(FSSwapStatus_t&)FSStatus;
-(UIImage*)swapFacesOneToMany :(FSSwapStatus_t&)FSStatus;

-(void)setImg1:(UIImage*) img;
-(void)setImg2:(UIImage*) img;
-(void)rotateImg1;
-(void)rotateImg2;

@end


#endif /* FSImageUtils_h */
