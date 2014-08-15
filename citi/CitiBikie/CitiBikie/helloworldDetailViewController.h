//
//  helloworldDetailViewController.h
//  CitiBikie
//
//  Created by Vivek M George on 8/14/14.
//
//

#import <UIKit/UIKit.h>

@interface helloworldDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
