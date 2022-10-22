from transformers import prune_layer


n = 19
api = ['820CoZmz5QNhcLlSZjaioQ', 'ZMxbHkKq39d9TSWNDw0yGA', 'UiRrTUCMo2OQSQvkrypLUA']
ids = [ i for i in range(1, 501)]

count = 0
index = 0
for id in ids:
    print(api[index], id, sep =" : ")

    count = count + 1
    if count == 100:
        count = 0
        # switch  idnex of API
        index = (index + 1 )%3
        print("__Done__")

""" 


kelvin orbita
18:37 (25 minutes ago)
to me

Thanks for your swift response.
  I need you to design my website with the following requirement ;

    1. PAGES
 HOME, ABOUT US, MENU, BANQUET FACILITY, GALLERY, CATERING and CONTACT
US VISITING HOURS,ONLINE BOOKING AND MENU KIT pages


 WORDPRESS

  2.And should include hosting price , no shopping cart is needed .
 
  3.  Go through the
 example link site:
https://gurupalacerestaurant.com/

Please i want it to be perfect than this SAMPLE LINK, if theres any
other functionality to be added kindly do that for me

 4,Are you the manager ?


Get back to me with the total estimate and days to spend on the
project for delivery ....

Thanks

Budget 750$- 1500$

https://abhijitrawool.com/how-much-does-a-restaurant-website-cost/
https://www.jasper.ai/free-trial?fpr=abhijitnr
https://abhijitrawool.com/wordpress-website-for-restaurant/
https://wordpress.org/plugins/menu-ordering-reservations/#developers
 """