/*
* COPYRIGHT © 2024 RIBBON COMMUNICATIONS OPERATING COMPANY, INC. ALL RIGHTS RESERVED.
* This publication and the information contained herein is the property of Ribbon
* and may not be copied, reproduced or distributed in any form or by any means without
* the prior written permission of Ribbon.
*
* THIS PUBLICATION IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
* PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
* FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
* OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE PUBLICATION OR ITS USE.
*
* SMServiceProvider.h
*
* @version: 6.35.0
*
*/


#import <Foundation/Foundation.h>

@protocol SMCallServiceDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief This class is needed for calling the services.
 * @since 3.0.0
 */
@interface SMServiceProvider : NSObject


@property (strong, nonatomic) id<SMCallServiceDelegate> restCallService;

/**
 * This method returns an instance of ServiceProvider using Singleton Pattern
 * @return ServiceProvider
 * @since 3.0.0
 */
+ (SMServiceProvider *) getInstance;


/**
 * This method returns (creates if necessary) an instance of CallService using Singleton Pattern
 * @return CallServiceDelegate
 * @since 3.0.0
 */
- (id<SMCallServiceDelegate>) getCallService;


/**
 * This method returns the version information about the SDK 
 * @return NSString
 * @since 3.0.0
 */
- (NSString *) getVersion;

@end

NS_ASSUME_NONNULL_END
