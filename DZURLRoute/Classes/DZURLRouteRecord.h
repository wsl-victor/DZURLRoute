//
//  DZURLRouteRecord.h
//  Pods
//
//  Created by yishuiliunian on 2016/11/2.
//
//

#import <Foundation/Foundation.h>

@class DZURLRouteRequest;
typedef BOOL (^DZURLRoutePatternHandler)(DZURLRouteRequest* request);


/**
 it is a record of URL pattern that is stored at DZURLRoute. This class is not public , just is used in DZURLRoute lib.
 */
@interface DZURLRouteRecord : NSObject
@property (nonatomic, strong, readonly) NSString* partern;
@property (nonatomic, strong, readonly) DZURLRoutePatternHandler handler;
- (instancetype) initWithPartern:(NSString*)partern handler:(DZURLRoutePatternHandler)handler;
- (BOOL) canHandlerRequestURL:(NSString *)url;
@end
