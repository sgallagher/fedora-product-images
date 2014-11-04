PIXMAP_ROOT_DIR = usr/share/anaconda/pixmaps

pixmap_tree:
	mkdir -p $(PIXMAP_ROOT_DIR)/cloud \
             $(PIXMAP_ROOT_DIR)/server \
             $(PIXMAP_ROOT_DIR)/workstation

archive:
	find usr -depth |cpio -o -H ustar > product.img

clean:
	rm -Rf usr
