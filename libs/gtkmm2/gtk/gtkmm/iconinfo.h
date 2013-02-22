// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ICONINFO_H
#define _GTKMM_ICONINFO_H

#include <glibmm.h>

/* Copyright (C) 2003 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gdkmm/rectangle.h>
#include <gdkmm/pixbuf.h>
#include <gdkmm/types.h>

//#include <gtk/gtkicontheme.h>
 

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkIconInfo GtkIconInfo; }
#endif

namespace Gtk
{

class IconInfo
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef IconInfo CppObjectType;
  typedef GtkIconInfo BaseObjectType;

  static GType get_type() G_GNUC_CONST;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  IconInfo();

  explicit IconInfo(GtkIconInfo* gobject, bool make_a_copy = true);

  IconInfo(const IconInfo& other);
  IconInfo& operator=(const IconInfo& other);

  ~IconInfo();

  void swap(IconInfo& other);

  ///Provides access to the underlying C instance.
  GtkIconInfo*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GtkIconInfo* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GtkIconInfo* gobj_copy() const;

protected:
  GtkIconInfo* gobject_;

private:

  
public:

  ///Tests whether the IconInfo is valid.
  operator bool();

  
  /** Gets the base size for the icon. The base size
   * is a size for the icon that was specified by
   * the icon theme creator. This may be different
   * than the actual size of image; an example of
   * this is small emblem icons that can be attached
   * to a larger icon. These icons will be given
   * the same base size as the larger icons to which
   * they are attached.
   * @return The base size, or 0, if no base
   * size is known for the icon.
   * 
   * Since: 2.4.
   */
  int get_base_size() const;
  
  /** Gets the filename for the icon. If the
   * Gtk::ICON_LOOKUP_USE_BUILTIN flag was passed
   * to Gtk::IconTheme::lookup_icon(), there may be
   * no filename if a builtin icon is returned; in this
   * case, you should use gtk_icon_info_get_builtin_pixbuf().
   * @return The filename for the icon, or <tt>0</tt>
   * if gtk_icon_info_get_builtin_pixbuf() should
   * be used instead.
   */
  Glib::ustring get_filename() const;
  
  /** Gets the built-in image for this icon, if any. To allow
   * GTK+ to use built in icon images, you must pass the
   * Gtk::ICON_LOOKUP_USE_BUILTIN to
   * Gtk::IconTheme::lookup_icon().
   * @return The built-in image pixbuf, or <tt>0</tt>.
   * The returned image must not be modified.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_builtin_pixbuf();
  
  /** Gets the built-in image for this icon, if any. To allow
   * GTK+ to use built in icon images, you must pass the
   * Gtk::ICON_LOOKUP_USE_BUILTIN to
   * Gtk::IconTheme::lookup_icon().
   * @return The built-in image pixbuf, or <tt>0</tt>.
   * The returned image must not be modified.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_builtin_pixbuf() const;
  
  /** Renders an icon previously looked up in an icon theme using
   * Gtk::IconTheme::lookup_icon(); the size will be based on the size
   * passed to Gtk::IconTheme::lookup_icon(). Note that the resulting
   * pixbuf may not be exactly this size; an icon theme may have icons
   * that differ slightly from their nominal sizes, and in addition GTK+
   * will avoid scaling icons that it considers sufficiently close to the
   * requested size or for which the source image would have to be scaled
   * up too far. (This maintains sharpness.)
   * @return The rendered icon; this may be a newly created icon
   * or a new reference to an internal icon, so you must not modify
   * the icon. Use Glib::object_unref() to release your reference to the
   * icon.
   * 
   * Since: 2.4.
   */
  Glib::RefPtr<Gdk::Pixbuf> load_icon() const;
  
  /** Sets whether the coordinates returned by gtk_icon_info_get_embedded_rect()
   * and gtk_icon_info_get_attach_points() should be returned in their
   * original form as specified in the icon theme, instead of scaled
   * appropriately for the pixbuf returned by gtk_icon_info_load_icon().
   * 
   * Raw coordinates are somewhat strange; they are specified to be with
   * respect to the unscaled pixmap for PNG and XPM icons, but for SVG
   * icons, they are in a 1000x1000 coordinate space that is scaled
   * to the final size of the icon.  You can determine if the icon is an SVG
   * icon by using gtk_icon_info_get_filename(), and seeing if it is non-<tt>0</tt>
   * and ends in '.svg'.
   * 
   * This function is provided primarily to allow compatibility wrappers
   * for older API's, and is not expected to be useful for applications.
   * 
   * Since: 2.4
   * @param raw_coordinates Whether the coordinates of embedded rectangles
   * and attached points should be returned in their original
   * (unscaled) form.
   */
  void set_raw_coordinates(bool raw_coordinates = true);
  
  /** Gets the coordinates of a rectangle within the icon
   * that can be used for display of information such
   * as a preview of the contents of a text file.
   * See gtk_icon_info_set_raw_coordinates() for further
   * information about the coordinate system.
   * @param rectangle Gdk::Rectangle in which to store embedded
   * rectangle coordinates; coordinates are only stored
   * when this function returns <tt>true</tt>.
   * @return <tt>true</tt> if the icon has an embedded rectangle
   * 
   * Since: 2.4.
   */
  bool get_embedded_rect(Gdk::Rectangle& rectangle) const;
  bool get_attach_points(Glib::ArrayHandle<Gdk::Point>& points) const;
  
  /** Gets the display name for an icon. A display name is a
   * string to be used in place of the icon name in a user
   * visible context like a list of icons.
   * @return The display name for the icon or <tt>0</tt>, if
   * the icon doesn't have a specified display name. This value
   * is owned @a icon_info  and must not be modified or free.
   * 
   * Since: 2.4.
   */
  Glib::ustring get_display_name() const;


};

} // namespace Gtk


namespace Gtk
{

/** @relates Gtk::IconInfo
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(IconInfo& lhs, IconInfo& rhs)
  { lhs.swap(rhs); }

} // namespace Gtk

namespace Glib
{

/** @relates Gtk::IconInfo
 * @param object The C instance
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 */
Gtk::IconInfo wrap(GtkIconInfo* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gtk::IconInfo> : public Glib::Value_Boxed<Gtk::IconInfo>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib

#endif /* _GTKMM_ICONINFO_H */
