class LockedClass:
    def __setattr__(self, name, value):
        if name != "first_name":
            raise AttributeError("Cannot create new attribute")
        super().__setattr__(name, value)
